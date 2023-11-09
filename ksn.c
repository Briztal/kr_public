/* Public domain. Non functional. Needs all my other stuff to work. Good luck. */

#include <kr0/kr0.all.h>

#ifdef NS_CF_KSN

/***********
 * Globals *
 ***********/

/*
 * Number of regions.
 */
#define KSN_NB_RGNS 8
/*
 * Kasan regions.
 */
static ksn_rgn *_ksn_rgns[KSN_NB_RGNS];

/******************
 * Debugger hooks *
 ******************/

/*
 * Debugger hook when kasan detects an invalid access.
 */
ns_dbg_hook(ksn_invalid_access, volatile paddr addr)

/*
 * Debugger hook when kasan detects invalid attributes.
 */
ns_dbg_hook(ksn_invalid_attrs, volatile paddr addr)

/****************************
 * Kasan implementation API *
 ****************************/

/*
 * State names.
 */
#define INIT(X) [KSN_STT_##X] = #X
static const char *_stt_names[KSN_STT_NB] = {
	INIT(ANY),
	INIT(NOACC),
	INIT(ALL_ANY),
	INIT(ALL_RW),
	INIT(ALL_RWU),
	INIT(ALL_RWI),
	INIT(ALL_RO),
	INIT(ALL_ROI),
	INIT(ALL_ROU),
	INIT(USR_ANY),
	INIT(USR_RW),
	INIT(USR_RWU),
	INIT(USR_RWI),
	INIT(USR_RO),
	INIT(USR_ROI),
	INIT(USR_ROU),
	INIT(ANY_ANY),
	INIT(ANY_RW),
	INIT(ANY_RWU),
	INIT(ANY_RWI),
	INIT(ANY_RO),
	INIT(ANY_ROI),
	INIT(ANY_ROU),
	INIT(NOWRT),
	INIT(WRT),
	INIT(NOINI),
	INIT(INI),
};
#undef INIT

/*
 * State masks table.
 */
#define INIT(X) [KSN_STT_##X] = KSN_STT_##X##_MSK
static u8 _stt_masks[KSN_STT_NB] = {
	INIT(ANY),
	INIT(NOACC),
	INIT(ALL_ANY),
	INIT(ALL_RW),
	INIT(ALL_RWU),
	INIT(ALL_RWI),
	INIT(ALL_RO),
	INIT(ALL_ROI),
	INIT(ALL_ROU),
	INIT(USR_ANY),
	INIT(USR_RW),
	INIT(USR_RWU),
	INIT(USR_RWI),
	INIT(USR_RO),
	INIT(USR_ROI),
	INIT(USR_ROU),
	INIT(ANY_ANY),
	INIT(ANY_RW),
	INIT(ANY_RWU),
	INIT(ANY_RWI),
	INIT(ANY_RO),
	INIT(ANY_ROI),
	INIT(ANY_ROU),
	INIT(NOWRT),
	INIT(WRT),
	INIT(NOINI),
	INIT(INI),
};
#undef INIT

/*
 * State values table.
 */
#define INIT(X) [KSN_STT_##X] = KSN_STT_##X##_VAL
static u8 _stt_vals[KSN_STT_NB] = {
	INIT(ANY),
	INIT(NOACC),
	INIT(ALL_ANY),
	INIT(ALL_RW),
	INIT(ALL_RWU),
	INIT(ALL_RWI),
	INIT(ALL_RO),
	INIT(ALL_ROI),
	INIT(ALL_ROU),
	INIT(USR_ANY),
	INIT(USR_RW),
	INIT(USR_RWU),
	INIT(USR_RWI),
	INIT(USR_RO),
	INIT(USR_ROI),
	INIT(USR_ROU),
	INIT(ANY_ANY),
	INIT(ANY_RW),
	INIT(ANY_RWU),
	INIT(ANY_RWI),
	INIT(ANY_RO),
	INIT(ANY_ROI),
	INIT(ANY_ROU),
	INIT(NOWRT),
	INIT(WRT),
	INIT(NOINI),
	INIT(INI),
};
#undef INIT

/*******
 * Log *
 *******/

/*
 * Determine the type that matches best @attrs and @mask.
 */
static u8 _infer_type(
	u8 attrs,
	u8 mask,
	u8 *typep,
	u8 *exactp
)
{

	/* Iterate over all types. */
	u8 best_type = 0;
	u8 best_mask = 0;
	for (u8 type = 0; type < KSN_STT_NB; type++) {
		const u8 stt_mask = _stt_masks[type];
		const u8 stt_val = _stt_vals[type];

		/* If exact match, complete. */
		if ((stt_mask == mask) && ((stt_val & mask) == (attrs & mask))) {
			*typep = type;
			*exactp = 1;
			return 1;
		}

		/* If non-exact but better match, save. */ 
		if (
			((stt_mask & stt_val) == (stt_mask & attrs)) &&
			(stt_mask != best_mask) && 
			((stt_mask | best_mask) == stt_mask)
		) {
			best_type = type;
			best_mask = stt_mask;
		}

	}

	/* If no match, fail.
	 * If non-exact match, complete. */
	*typep = best_type;
	*exactp = 0;
	return (best_mask != 0);

}

/*
 * Log an attribute type.
 */
static void _log_type(
	const char *cat,
	u8 known,
	u8 type_id,
	u8 type_exact
)
{
	if (!known) {
		debug("%s type unknown (no match).\n", cat);
		return;
	}
	if (type_exact) {
		debug("%s type : %s (exact match).\n", cat, _stt_names[type_id]);
		return;
	} else {
		debug("%s type : %s (partial match).\n", cat, _stt_names[type_id]);
		return;
	}
}

/*
 * Log attributes.
 */
static void _log_attrs(
	u8 attrs,
	u8 mask
)
{
	debug("  ");
	u8 did_log = 0;

	/* Log the allocator accessibility. */
	if (mask & KSN_ATTR_TYP_ALL) {
		const u8 all = !!(attrs & KSN_ATTR_TYP_ALL);
		static const char *all_names[2] = {"NO ACCESS_ALLOCATOR", "ACCESS_ALLOCATOR"};
		if (did_log) {debug(" | ");}
		debug("%s", all_names[all]);
		did_log = 1;
	}

	/* Log the user accessibility. */
	if (mask & KSN_ATTR_TYP_USR) {
		const u8 usr = !!(attrs & KSN_ATTR_TYP_USR);
		static const char *usr_names[2] = {"NO ACCESS_USER", "ACCESS_USER"};
		if (did_log) {debug(" | ");}
		debug("%s", usr_names[usr]);
		did_log = 1;
	}

	/* Log the writability. */
	if (mask & KSN_ATTR_WRT) {
		const u8 wrt = !!(attrs & KSN_ATTR_WRT);
		static const char *wrt_names[2] = {"READ_ONLY", "READ_WRITE"};
		if (did_log) {debug(" | ");}
		debug("%s", wrt_names[wrt]);
		did_log = 1;
	}

	/* Log the initialization state. */
	if (mask & KSN_ATTR_INI) {
		const u8 ini = !!(attrs & KSN_ATTR_INI);
		static const char *ini_names[2] = {"UNINITIALIZED", "INITIALIZED"};
		if (did_log) {debug(" | ");}
		debug("%s", ini_names[ini]);
		did_log = 1;
	}
	debug("\n");

}

/************
 * Handlers *
 ************/

/*
 * If a region slot is available in the regions array, add it.
 * Otherwise, abort.
 */
static void _hdl_add_rgn_fake(
	ksn_rgn *rgn_fake
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 
	assert(!rgn_fake->active);
	for (u32 i = 0; i < nb; i++) {
		if (!rgns[i]) {
			rgns[i] = rgn_fake;
			return;
		}
	}
	assert(0, "No more available kasan region slots.\n");
}

/*
 * Replace @rgn_fake by @rgn in the regions array.
 */
static void _hdl_add_rgn(
	ksn_rgn *rgn_fake,
	ksn_rgn *rgn
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 
	assert(!rgn_fake->active);
	assert(rgn->active);
	for (u32 i = 0; i < nb; i++) {
		if (rgns[i] == rgn_fake) {
			rgns[i] = rgn;
			return;
		}
	}
	assert(0, "Fake region not registered.\n");
}

/*
 * If @rgn is part of the region array, remove it and report the related
 * slot available.
 * Otherwise, abort.
 */
static void _hdl_rem_rgn(
	ksn_rgn *rgn
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 
	for (u32 i = 0; i < nb; i++) {
		if (rgns[i] == rgn) {
			rgns[i] = 0;
			return;
		}
	}
	assert(0, "Region not registered.\n");
}

/*
 * If a region of @rgns contains the block (@start, @size), return it.
 * Otherwise, abort.
 */
static ksn_rgn *_rgn_find(
	ksn_rgn **rgns,
	u32 nb,
	paddr start,
	uaddr size
)
{
	assert(size);
	const paddr end = start + size;
	assert(start < end);
	for (u32 rgn_id = 0; rgn_id < nb; rgn_id++) { 

		/* If outside the region, continue. */
		ksn_rgn *rgn = rgns[rgn_id];
		if (!rgn) continue;
		if ((end <= rgn->data_start) || (rgn->data_end <= start)) continue;

		/* If paritially inside, abort. */ 
		assert(
			(rgn->data_start <= start) && (end <= rgn->data_end),
			"Access partially outside a registered region.\n"
		);

		/* If inside, complete. */
		return rgn;

	}

	/* If in no region, abort. */
	assert(0, "Access outside any registered region.\n");
	return 0;

}

/*
 * Given the data address range (@start, @size) in @rgn, determine
 * the related attributes block, then : 
 * - store the index of its first block at @blk_id_startp.
 * - store the index of the block after its last block at @blk_id_endp.
 */
static void _blk_iter_init(
	ksn_rgn *rgn,
	paddr start,
	uaddr size,
	uaddr *blk_id_startp,
	uaddr *blk_id_endp
)
{

	check(rgn->data_start <= start, start + size <= rgn->data_end);
	const uaddr blk_id_start = start - rgn->data_start;
	const uaddr blk_id_end = blk_id_start + size;
	*blk_id_startp = blk_id_start;
	*blk_id_endp = blk_id_end;
}

/*
 * Iterate over all blocks of (@start, @size) of @rgn.
 */
#define _attrs_iter_() \
	uaddr blk_id_start = 0; \
	uaddr blk_id_end = 0; \
	_blk_iter_init(rgn, start, size, &blk_id_start, &blk_id_end); \
	check(blk_id_start < blk_id_end, blk_id_start + size == blk_id_end); \
	u8 *const attrs_start = rgn->attrs_start; \
	check(psum(attrs_start, ((blk_id_end) >> 1)) <= rgn->attrs_end); \
	for (uaddr blk_id = blk_id_start; blk_id < blk_id_end; blk_id++)

#define _attrs_iter_always(exit) \
	ksn_rgn *rgn = _rgn_find(rgns, nb, start, size); \
	_attrs_iter_()


#define _attrs_iter_active(exit) \
	ksn_rgn *rgn = _rgn_find(rgns, nb, start, size); \
	if (!rgn->active) {exit;} \
	_attrs_iter_()

/*
 * Read the attributes for the current block.
 */
#define _attrs_read() \
({ \
	u8 __read_attrs = attrs_start[blk_id >> 1]; \
	if (blk_id & 1) __read_attrs >>= 4; \
	__read_attrs &= 0xf; \
	__read_attrs; \
})

/*
 * Write the attributes for the current block.
 */
#define _attrs_write(_val) \
({ \
 	u8 __write_val = (u8) (_val) & 0xf; \
 	u8 __write_mask = (u8) 0xf; \
	u8 __write_attrs = attrs_start[blk_id >> 1]; \
	if (blk_id & 1) { \
		__write_val = (u8) (__write_val << 4); \
		__write_mask = (u8) (__write_mask << 4); \
	} \
	attrs_start[blk_id >> 1] = (u8) ((__write_attrs & ~__write_mask) | __write_val); \
	(void) 0; \
})

/*
 * Verify that @attrs are valid.
 */
static void _check_attrs_valid(
	u8 attrs,
	uaddr addr
)
{
	if (!((attrs & (KSN_ATTR_TYP_ANY)) || (!attrs))) {
		debug("internal kasan error : attribute %h don't allow access but allow write or report initialization.\n", attrs);
		_log_attrs(attrs, 0xf);
		dbg_hook_ksn_invalid_attrs(addr);
	}
}

/*
 * If the current faulty access is a classic one, log about it.
 */
static inline void _ksn_err_log_access(
	u8 read_attrs,
	u8 exp_attrs,
	u8 mask
)
{

	/* Access should expect accessible data. */
	assert(exp_attrs & KSN_ATTR_TYP);

	/* Access to inaccessible data. */
	if (!(read_attrs & KSN_ATTR_TYP)) {
		debug("Access to inaccessible memory.\n");
		return;
	}	

	/* Get differences. */
	const u8 diff = (read_attrs ^ exp_attrs) & mask;

	/* User access to allocator data. */
	if ((exp_attrs & KSN_ATTR_TYP_USR) && (diff & KSN_ATTR_TYP_USR)) {
		debug("User use after free.\n");
		return;
	}

	/* Allocator access to user data. */
	if ((exp_attrs & KSN_ATTR_TYP_ALL) && (diff & KSN_ATTR_TYP_ALL)) {
		debug("Allocator use after alloc.\n");
		return;
	}

	/* Access to uninitialized data. */
	if ((exp_attrs & KSN_ATTR_INI) && (diff & KSN_ATTR_INI)) {
		debug("Access to uninitialized memory.\n");
		return;
	}

	/* Write to read-only data. */
	if ((exp_attrs & KSN_ATTR_INI) && (diff & KSN_ATTR_INI)) {
		debug("Write to read-only memory.\n");
		return;
	}

}

/*
 * If the current faulty state change is a classic one, log about it.
 */
static inline void _ksn_err_log_state(
	u8 read_attrs,
	u8 exp_attrs,
	u8 mask
)
{

	/* Get differences. */
	const u8 diff = (read_attrs ^ exp_attrs) & mask;

	/* Expected not user, got user. */
	if ((!(exp_attrs & KSN_ATTR_TYP_USR)) && (diff & KSN_ATTR_TYP_USR)) {
		debug("Double alloc.\n");
		return;
	}

	/* Expected not allocator, got allocator. */
	if ((!(exp_attrs & KSN_ATTR_TYP_ALL)) && (diff & KSN_ATTR_TYP_ALL)) {
		debug("Double free.\n");
		return;
	}

}

/*
 * Log about an kasan error.
 */
static inline void _ksn_err_log(
	u8 read_attrs,
	u8 exp_attrs,
	u8 mask,
	u8 op,
	paddr addr,
	u8 log_access,
	u8 log_state
)
{

	debug("\n");

	/* If memory was accessed, do a specific logging for the typical cases. */
	if (log_access)
		_ksn_err_log_access(read_attrs, exp_attrs, mask);

	/* If memory changed state, do a specific logging for the typical cases. */
	if (log_state)
		_ksn_err_log_state(read_attrs, exp_attrs, mask);

	/* Log the error. */
	static const char *op_names[4] = {"read", "write", "attrs set", "attrs check"};
	const char *op_name = op_names[op];
	debug("Unexpected kasan attrs found during %s at address %p.\n", op_name, addr);

	/* Infer the attribute types. */
	u8 exp_type = 0;
	u8 exp_type_exact = 0;
	u8 exp_type_known = _infer_type(exp_attrs, mask, &exp_type, &exp_type_exact);
	u8 read_type = 0;
	u8 read_type_exact = 0;
	u8 read_type_known = _infer_type(read_attrs, 0xf, &read_type, &read_type_exact);

	/* Log. */
	_log_type("Expected", exp_type_known, exp_type, exp_type_exact);
	_log_attrs(exp_attrs, mask);
	_log_type("Read", read_type_known, read_type, read_type_exact);
	_log_attrs(read_attrs, 0xf);
	debug("Incompatible attributes are :\n");
	_log_attrs(read_attrs, mask & (read_attrs ^ exp_attrs));
	debug("\n");

}

/*
 * Verify that @attrs are the expected ones.
 */
static void _verify_attrs(
	u8 read_attrs,
	u8 exp_attrs,
	u8 mask,
	u8 op,
	paddr addr,
	u8 log_access,
	u8 log_state
)
{
	assert(op < 4);

	/* If attributes are correct, complete. */
	if ((mask & read_attrs) == (mask & exp_attrs))
		return;

	/* If attributes are incorrect : */

	/* Log. */
	_ksn_err_log(read_attrs, exp_attrs, mask, op, addr, log_access, log_state);

	/* Report failure. */
	dbg_hook_ksn_invalid_access(addr);
	ns_abort();

}

volatile u8 stop = 0;

/*
 * For each block :
 * - check that the block's attributes are @src_attrs.
 * - set the block's attributes to @dst_attrs.
 */
static void _set_attrs(
	ksn_rgn **rgns,
	u32 nb, 
	paddr start,
	uaddr size,
	u8 src_mask,
	u8 src_attrs,
	u8 dst_attrs,
	u8 dst_mask
)
{
	_check_attrs_valid(dst_attrs, start);
	_check_attrs_valid(src_attrs, start);
	_attrs_iter_always() {
		const paddr addr = start + (blk_id - blk_id_start);
		const u8 read_attrs = _attrs_read();
		_verify_attrs(read_attrs, src_attrs, src_mask, 2, addr, 0, 1);
		const u8 write_attrs = (u8) ((read_attrs & ~dst_mask) | (dst_attrs & dst_mask));
		_attrs_write(write_attrs);
	}
}

/*
 * Transition from one state to another.
 */
static void _hdl_set_state(
	paddr start,
	uaddr size,
	u8 state_src,
	u8 state_dst
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 
	assert(state_src < KSN_STT_NB);
	assert(state_dst < KSN_STT_NB);

	/* Determine the source state mask and value. */
	const u8 src_mask = _stt_masks[state_src];
	const u8 src_attrs = _stt_vals[state_src];

	/* Determine the target state mask and value.
	 * Only non-masked bits are written. */
	const u8 dst_attrs = _stt_vals[state_dst];
	const u8 dst_mask = _stt_masks[state_dst];

	/* Transition. */
	_set_attrs(rgns, nb, start, size, src_mask, src_attrs, dst_attrs, dst_mask);

}

/*
 * Check the attributes of a region.
 * All flags set in @expected_mask are checked, and must have the value
 * in @expected_attrs.
 */ 
static void _hdl_check_attrs(
	paddr start,
	uaddr size,
	u8 expected_mask,
	u8 expected_attrs
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 
	_check_attrs_valid(expected_attrs, start);
	_attrs_iter_always() {
		const paddr addr = start + (blk_id - blk_id_start);
		const u8 read_attrs = _attrs_read();
		_check_attrs_valid(read_attrs, addr);
		_verify_attrs(read_attrs, expected_attrs, expected_mask, 3, addr, 0, 0);
	}
}

/*
 * Verify the memory access of @size bytes starting at @size relatively
 * to the @nb regions in @rgns.
 * If @write is set, the access is a write. In this case, all accessed
 * blocks are initialized after the write.
 * Otherwise, it is a read, and any uninitialized access is reported.
 * If @all is set, the access is made in allocator context.
 * Otherwise, the access is made in user context.
 * Otherwise, it's not.
 */
static void _hdl_check_readwrite(
	paddr start,
	u8 size,
	u8 all,
	u8 write
)
{
	ksn_rgn **rgns = _ksn_rgns;
	u32 nb = KSN_NB_RGNS; 

	/* If write, check each block is accessible and writeable in this
	 * context, and report it initialized. */
	const u8 base_mask = ((all) ? KSN_ATTR_TYP_ALL : KSN_ATTR_TYP_USR);
	const u8 base_attrs = ((all) ? KSN_ATTR_TYP_ALL : KSN_ATTR_TYP_USR);
	if (write) {
		const u8 src_mask = base_mask | KSN_ATTR_WRT;
		const u8 src_attrs = base_attrs | KSN_ATTR_WRT_YES; 
		_attrs_iter_active(return) {
			const paddr addr = start + (blk_id - blk_id_start);
			const u8 read_attrs = _attrs_read();
			_check_attrs_valid(read_attrs, addr);
			_verify_attrs(read_attrs, src_attrs, src_mask, 1, addr, 1, 0);
			_attrs_write(read_attrs | KSN_ATTR_INI);
		}
	}

	/* If read, check each block is accessible and initialized in this
	 * context. */	
	else {
		const u8 src_mask = base_mask | KSN_ATTR_INI;
		const u8 src_attrs = base_attrs | KSN_ATTR_INI_YES;
		_attrs_iter_active(return) {
			const paddr addr = start + (blk_id - blk_id_start);
			const u8 read_attrs = _attrs_read();
			_check_attrs_valid(read_attrs, addr);
			_verify_attrs(read_attrs, src_attrs, src_mask, 0, addr, 1, 0);
		}
	}

}

/***************
 * Kasan calls *
 ***************/

#define ENTER_KASAN(fnc, arg0, arg1, arg2, arg3) \
kr0_tgt_ksn_enter( \
	(void (*)(uaddr, uaddr, uaddr, uaddr)) (uaddr) &fnc, \
	(uaddr) arg0, (uaddr) arg1, (uaddr) arg2, (uaddr) arg3 \
)

/*
 * Register @rgn_fake in the kasan implementation.
 * Kasan is not enabled on it.
 */
static void _ksn_add_rgn_fake(
	ksn_rgn *rgn_fake
)
{
	ENTER_KASAN(_hdl_add_rgn_fake, rgn_fake, 0, 0, 0);
}

/*
 * Replace @rgn_fake by @rgn.
 */
static void _ksn_add_rgn(
	ksn_rgn *rgn_fake,
	ksn_rgn *rgn
)
{
	ENTER_KASAN(_hdl_add_rgn, rgn_fake, rgn, 0, 0);
}

/*
 * Unregister @rgn in the kasan implementation.
 */
static void _ksn_rem_rgn(
	ksn_rgn *rgn
)
{
	ENTER_KASAN(_hdl_rem_rgn, rgn, 0, 0, 0);
}

/*
 * Transition from one state to another.
 */
static void _ksn_set_state(
	paddr start,
	uaddr size,
	u8 state_src,
	u8 state_dst
)
{
	ENTER_KASAN(_hdl_set_state, start, size, state_src, state_dst);
}

/*
 * Check the attributes of a region.
 * All flags set in @expected_mask are checked, and must have the value
 * in @expected_vals.
 */ 
static void _ksn_check_attrs(
	paddr start,
	uaddr size,
	u8 expected_mask,
	u8 expected_vals
)
{
	ENTER_KASAN(_hdl_check_attrs, start, size, expected_mask, expected_vals);
}

#if 0
/*
 * Verify the memory access of @size bytes starting at @size relatively
 * to the @nb regions in @rgns.
 * If @write is set, the access is a write. In this case, all accessed
 * blocks are initialized after the write.
 * Otherwise, it is a read, and any uninitialized access is reported.
 * If @all is set, the access is made in allocator context.
 * Otherwise, the access is made in user context.
 * Otherwise, it's not.
 */
static void _ksn_check_readwrite(
	paddr start,
	u8 size,
	u8 all,
	u8 write
)
{
	ENTER_KASAN(_hdl_check_readwrite, start, size, all, write);
}
#endif

/**************
 * System API *
 **************/

/*
 * Construct @sys.
 */
void ksn_sys_ctor(
	ksn_sys *sys
)
{
	dlist_init(&sys->rgns);
}

/*
 * Delete @sys.
 * It must have no more memory regions.
 */
void ksn_sys_dtor(
	ksn_sys *sys
)
{
	assert(dlist_empty(&sys->rgns));
}

/*
 * Construct a new inactive kasan region, from a stack-allocated
 * kasan struct @rgn_fake, and add it in @sys.
 */
void ksn_sys_rgn_ctor_fake(
	ksn_sys *sys,
	ksn_rgn *rgn_fake,
	paddr data_start,
	uaddr data_size,
	void *attrs_start,
	uaddr attrs_size
)
{
	const paddr data_end = data_start + data_size;
	void *const attrs_end = psum(attrs_start, attrs_size);
	check(data_start, data_size, data_start < data_end);
	check(attrs_start, attrs_size, attrs_start < attrs_end);
	check(ksn_attrs_size(data_size, 1) <= attrs_size);
	rgn_fake->data_start = data_start;
	rgn_fake->data_size = data_size;
	rgn_fake->data_end = data_end;
	rgn_fake->attrs_start = attrs_start;
	rgn_fake->attrs_size = attrs_size;
	rgn_fake->attrs_end = attrs_end;
	rgn_fake->active = 0;
	dlist_ib(&sys->rgns, &rgn_fake->rgns);
	_ksn_add_rgn_fake(rgn_fake);
}

/*
 * Set initial kasan attributes of region @rrgn.
 * @krgn is a fake inactive region.
 */
void ksn_sys_rgn_init_attrs(
	ksn_sys *sys,
	ksn_rgn *krgn,
	rm_rgn *rrgn,
	km_ke *ke
)
{


	/* Everything inaccessible by default. */
	const paddr rgn_start = rrgn->mem_start_pa;
	const paddr rgn_end = rrgn->ksn_start_pa;
	const uaddr rgn_size = rgn_end - rgn_start;
	_ksn_set_state(rgn_start, rgn_size, KSN_STT_ANY, KSN_STT_NOACC); 

	/* Raw pages are inaccessible. */	

	/* Bitmap is accessible bt the allocator and initialized, as kasan
	 * is enabled _after_ the init memory regions have been added
	 * to their respective buddies. */
	_ksn_set_state(rrgn->bmp_start_pa, rrgn->bmp_size, KSN_STT_ANY, KSN_STT_ALL_RWI); 

	/* Descriptors are accessible by the allocator and initialized */ 
	_ksn_set_state(rrgn->dscs_start_pa, rrgn->dscs_size, KSN_STT_ANY, KSN_STT_ALL_RWI); 

	/* Translation pages are not accessible by SW. */

	/* Kasan metadata are not accessible. */

	/* Region is accessible by the allocator and initialized */
	_ksn_set_state(rrgn->rgn_start_pa, rrgn->rgn_size, KSN_STT_ANY, KSN_STT_ALL_RWI); 

	/* Iterate over kernel executable regions and report any kernel executable
	 * block as read-write-able by anyone and initialized memory. */
	for (u32 rgn_id = 0; rgn_id < ke->nb_rgns; rgn_id++) {
		km_ke_rgn rgn = ke->rgns[rgn_id];
		if ((rgn_start <= (paddr) rgn.start0) && ((paddr) psum(rgn.start0, rgn.size0) <= rgn_end)) {
			_ksn_set_state((paddr) rgn.start0, rgn.size0, KSN_STT_ANY, KSN_STT_ANY_RWI); 
		} else {
			assert((rgn_end <= (paddr) rgn.start0) || (((paddr) psum(rgn.start0, rgn.size0)) <= rgn_start));
		}
		if ((rgn_start <= (paddr) rgn.start1) && ((paddr) psum(rgn.start1, rgn.size1) <= rgn_end)) {
			_ksn_set_state((paddr) rgn.start1, rgn.size1, KSN_STT_ANY, KSN_STT_ANY_RWI); 
		} else {
			assert((rgn_end <= (paddr) rgn.start1) || (((paddr) psum(rgn.start1, rgn.size1)) <= rgn_start));
		}
	}

}

/*
 * Replace @rgn_fake by @rgn, and activate kasan on the required
 * region.
 */
void ksn_sys_rgn_ctor(
	ksn_sys *sys,
	ksn_rgn *rgn_fake,
	ksn_rgn *rgn
)
{
	*rgn = *rgn_fake;
	assert(!rgn_fake->active);
	rgn->active = 1;
	dlist_rmu(&rgn_fake->rgns);
	dlist_ib(&sys->rgns, &rgn->rgns);
	_ksn_add_rgn(rgn_fake, rgn);
}

/*
 * Set @rgn's activation state.
 */
void ksn_sys_rgn_set_active(
	ksn_rgn *rgn,
	u8 active
)
{
	rgn->active = !!active;
}

/*
 * Remove region from @sys.
 */
void ksn_sys_rgn_dtor(
	ksn_sys *sys,
	ksn_rgn *rgn
)
{
	_ksn_rem_rgn(rgn);
	dlist_rmu(&rgn->rgns);
}

/****************************
 * Kasan implementation API *
 ****************************/

/*
 * Implementation calls are made while
 * being already in KASAN execution state.
 */

/*
 * Verify the memory access of @size bytes starting at @size relatively
 * to the @nb regions in @rgns.
 * If @write is set, the access is a write. In this case, all accessed
 * blocks are initialized after the write.
 * Otherwise, it is a read, and any uninitialized access is reported.
 * If @all is set, the access is made in allocator context.
 * Otherwise, it's not.
 */
void ksn_impl_check_readwrite(
	paddr start,
	u8 size,
	u8 all,
	u8 write
) {_hdl_check_readwrite(start, size, all, write);}

/************************
 * NS kasan entrypoints *
 ************************/

/*
 * Assert that the local cpu is in user mode.
 */
static inline void _assert_in_usr(
	void
) {assert(!kr0_tgt_ksn_is_all(), "Not in user mode.\n");}

/*
 * Assert that the local cpu is in allocator mode.
 */
static inline void _assert_in_all(
	void
) {assert(kr0_tgt_ksn_is_all(), "Not in allocator mode.\n");}

/*
 * Check that nothing has access.
 */
void ns_ksn_check_noacc(
	void *addr,
	uaddr size
)
{
	_ksn_check_attrs((paddr) addr, size, KSN_STT_NOACC_MSK, KSN_STT_NOACC_VAL); 
}

/*
 * Check that allocator has access.
 */
void ns_ksn_check_all(
	void *addr,
	uaddr size
)
{
	_ksn_check_attrs((paddr) addr, size, KSN_STT_ALL_ANY_MSK, KSN_STT_ALL_ANY_VAL); 
}

/*
 * Check that user has access.
 */
void ns_ksn_check_usr(
	void *addr,
	uaddr size
)
{
	_ksn_check_attrs((paddr) addr, size, KSN_STT_USR_ANY_MSK, KSN_STT_USR_ANY_VAL); 
}

/*
 * No access -> allocator.
 */
void ns_ksn_stt_noacc_to_all(
	void *addr,
	uaddr size
)
{
	_assert_in_all();
	_ksn_set_state((paddr) addr, size, KSN_STT_NOACC, KSN_STT_ALL_RWU); 
}

/*
 * Allocator -> no access.
 */
void ns_ksn_stt_all_to_noacc(
	void *addr,
	uaddr size
)
{
	_assert_in_all();
	_ksn_set_state((paddr) addr, size, KSN_STT_ALL_ANY, KSN_STT_NOACC); 
}

/*
 * Allocator -> user.
 */
void ns_ksn_stt_all_to_usr(
	void *addr,
	uaddr size
)
{
	_assert_in_all();
	_ksn_set_state((paddr) addr, size, KSN_STT_ALL_ANY, KSN_STT_USR_RWU); 
}

/*
 * User -> allocator.
 */
void ns_ksn_stt_usr_to_all(
	void *addr,
	uaddr size
)
{
	_assert_in_all();
	_ksn_set_state((paddr) addr, size, KSN_STT_USR_ANY, KSN_STT_ALL_RWU); 
}

/*
 * User -> allocator and user.
 */
void ns_ksn_stt_usr_to_any(
	void *addr,
	uaddr size
)
{
	_assert_in_usr();
	_ksn_set_state((paddr) addr, size, KSN_STT_USR_ANY, KSN_STT_ANY_RWI); 
}

/*
 * User -> allocator and user.
 */
void ns_ksn_stt_any_to_usr(
	void *addr,
	uaddr size
)
{
	_assert_in_usr();
	_ksn_set_state((paddr) addr, size, KSN_STT_ANY_ANY, KSN_STT_USR_RWI); 
}

/*
 * (x, x, x) -> (x, nowrite, x).
 */
void ns_ksn_stt_to_nowrt(
	void *addr,
	uaddr size
)
{
	_ksn_set_state((paddr) addr, size, KSN_STT_ANY_ANY, KSN_STT_NOWRT); 
}

/*
 * (x, x, x) -> (x, write, x).
 */
void ns_ksn_stt_to_wrt(
	void *addr,
	uaddr size
)
{
	_ksn_set_state((paddr) addr, size, KSN_STT_ANY_ANY, KSN_STT_WRT); 
}

/*
 * (x, x, x) -> (x, noinit, x).
 */
void ns_ksn_stt_to_noinit(
	void *addr,
	uaddr size
)
{
	_ksn_set_state((paddr) addr, size, KSN_STT_ANY_ANY, KSN_STT_NOINI); 
}

/*
 * (x, x, x) -> (x, init, x).
 */
void ns_ksn_stt_to_init(
	void *addr,
	uaddr size
)
{
	_ksn_set_state((paddr) addr, size, KSN_STT_ANY_ANY, KSN_STT_INI); 
}

#endif /* NS_CF_KSN */

