/* Public domain. Non functional. Needs all my other stuff to work. Good luck. */

#ifndef KR0_MM_KSN_H
#define KR0_MM_KSN_H

/*********
 * Types *
 *********/

types(
	ksn_rgn,
	ksn_sys
);

/*
 * Predeclared types.
 */
types(
	rm_rgn
);

/**************
 * Structures *
 **************/

/*
 * A kasan region tracks the boudaries of a memory region
 * and its attributes in order to check its access.
 */
struct ksn_rgn {

	/* Regions of the same system. */
	dlist rgns;

	/* Data start. */
	paddr data_start;

	/* Data size. */
	uaddr data_size;

	/* Data end. (== data_start + data_size). */
	paddr data_end;

	/* Attributes start. */
	void *attrs_start;
	
	/* Attributes size. */
	uaddr attrs_size;

	/* Attributes end. (== attrs_start + attrs_size). */
	void *attrs_end;

	/* Set <=> region is active. */
	u8 active;

};

/*
 * The kasan system tracks memory regions.
 */
struct ksn_sys {

	/* Km system. Used to interface kasan. */
	km_sys *km;

	/* Regions. */
	dlist rgns;

};

/**************
 * Attributes *
 **************/

/*
 * Every kasan-managed block has 4 bits of attributes.
 */

/*
 * Bit 0 and 1 : memory type.
 */

/* Non-accessible memory. */
#define KSN_ATTR_TYP_NO 0

/* Accessible by allocator only. */
#define KSN_ATTR_TYP_ALL 1

/* Accessible by user only. */
#define KSN_ATTR_TYP_USR 2

/* Accessible by allocators and users. */
#define KSN_ATTR_TYP_ANY 3

/* Accessibility mask. */
#define KSN_ATTR_TYP 3

/*
 * Bit 2 : writability.
 */

/* Block is read-only. */
#define KSN_ATTR_WRT_NO 0

/* Block is writeable. */
#define KSN_ATTR_WRT_YES 4

/* Writable mask. */
#define KSN_ATTR_WRT 4

/*
 * Bit 3 : initialization state.
 */

/* Block is not initialized. */
#define KSN_ATTR_INI_NO 0

/* Block is initialized. */
#define KSN_ATTR_INI_YES 8

/* Initialization mask. */
#define KSN_ATTR_INI 8

/**********
 * States *
 **********/

/*
 * Any state.
 * mask : 0.
 * value : 0.
 */
#define KSN_STT_ANY 0
#define KSN_STT_ANY_MSK 0
#define KSN_STT_ANY_VAL 0

/*
 * Inaccessible.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_NO | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO
 */
#define KSN_STT_NOACC 1
#define KSN_STT_NOACC_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_NOACC_VAL (KSN_ATTR_TYP_NO | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO)


/*
 * Allocator any.
 * mask : KSN_ATTR_TYP.
 * value : KSN_ATTR_TYP_ALL.
 */
#define KSN_STT_ALL_ANY 2
#define KSN_STT_ALL_ANY_MSK (KSN_ATTR_TYP)
#define KSN_STT_ALL_ANY_VAL (KSN_ATTR_TYP_ALL)

/*
 * Allocator-read-write-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT.
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES.
 */
#define KSN_STT_ALL_RW 3
#define KSN_STT_ALL_RW_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_ALL_RW_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES)

/*
 * Allocator-read-write_uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ALL_RWU 4
#define KSN_STT_ALL_RWU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ALL_RWU_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES | KSN_ATTR_INI_NO)

/*
 * Allocator-read-write-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ALL_RWI 5
#define KSN_STT_ALL_RWI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ALL_RWI_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES)

/*
 * Allocator-read-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ALL_RO 6
#define KSN_STT_ALL_RO_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_ALL_RO_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO)

/*
 * Allocator-read-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ALL_ROI 7
#define KSN_STT_ALL_ROI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ALL_ROI_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES)

/*
 * Allocator-read-uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO.
 */
#define KSN_STT_ALL_ROU 8
#define KSN_STT_ALL_ROU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ALL_ROU_VAL (KSN_ATTR_TYP_ALL | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO)


/*
 * User any.
 * mask : KSN_ATTR_TYP.
 * value : KSN_ATTR_TYP_USR.
 */
#define KSN_STT_USR_ANY 9
#define KSN_STT_USR_ANY_MSK (KSN_ATTR_TYP)
#define KSN_STT_USR_ANY_VAL (KSN_ATTR_TYP_USR)

/*
 * User-read-write-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT.
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES.
 */
#define KSN_STT_USR_RW 10
#define KSN_STT_USR_RW_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_USR_RW_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES)

/*
 * User-read-write_uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_USR_RWU 11
#define KSN_STT_USR_RWU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_USR_RWU_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES | KSN_ATTR_INI_NO)

/*
 * User-read-write-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_USR_RWI 12
#define KSN_STT_USR_RWI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_USR_RWI_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES)

/*
 * User-read-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_USR_RO 13
#define KSN_STT_USR_RO_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_USR_RO_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO)

/*
 * User-read-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_USR_ROI 14
#define KSN_STT_USR_ROI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_USR_ROI_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES)

/*
 * User-read-uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO.
 */
#define KSN_STT_USR_ROU 15
#define KSN_STT_USR_ROU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_USR_ROU_VAL (KSN_ATTR_TYP_USR | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO)


/*
 * Allocator-user any.
 * mask : KSN_ATTR_TYP.
 * value : KSN_ATTR_TYP_ANY.
 */
#define KSN_STT_ANY_ANY 16
#define KSN_STT_ANY_ANY_MSK (KSN_ATTR_TYP)
#define KSN_STT_ANY_ANY_VAL (KSN_ATTR_TYP_ANY)

/*
 * Allocator-user-read-write-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT.
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES.
 */
#define KSN_STT_ANY_RW 17
#define KSN_STT_ANY_RW_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_ANY_RW_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES)

/*
 * Allocator-user-read-write_uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ANY_RWU 18
#define KSN_STT_ANY_RWU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ANY_RWU_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES | KSN_ATTR_INI_NO)

/*
 * Allocator-user-read-write-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI.
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ANY_RWI 19
#define KSN_STT_ANY_RWI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ANY_RWI_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_YES | KSN_ATTR_INI_YES)

/*
 * Allocator-user-read-any.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ANY_RO 20
#define KSN_STT_ANY_RO_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT)
#define KSN_STT_ANY_RO_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO)

/*
 * Allocator-user-read-initialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES.
 */
#define KSN_STT_ANY_ROI 21
#define KSN_STT_ANY_ROI_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ANY_ROI_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO | KSN_ATTR_INI_YES)

/*
 * Allocator-user-read-uninitialized.
 * mask : KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI
 * value : KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO.
 */
#define KSN_STT_ANY_ROU 22
#define KSN_STT_ANY_ROU_MSK (KSN_ATTR_TYP | KSN_ATTR_WRT | KSN_ATTR_INI)
#define KSN_STT_ANY_ROU_VAL (KSN_ATTR_TYP_ANY | KSN_ATTR_WRT_NO | KSN_ATTR_INI_NO)


/*
 * Any-non-writable state.
 */
#define KSN_STT_NOWRT 23
#define KSN_STT_NOWRT_MSK (KSN_ATTR_WRT)
#define KSN_STT_NOWRT_VAL (KSN_ATTR_WRT_NO)

/*
 * Any-writable state.
 */
#define KSN_STT_WRT 24
#define KSN_STT_WRT_MSK (KSN_ATTR_WRT)
#define KSN_STT_WRT_VAL (KSN_ATTR_WRT_YES)

/*
 * Any-non-initialized state.
 */
#define KSN_STT_NOINI 25
#define KSN_STT_NOINI_MSK (KSN_ATTR_INI)
#define KSN_STT_NOINI_VAL (KSN_ATTR_INI_NO)

/*
 * Any-initialized state.
 */
#define KSN_STT_INI 26
#define KSN_STT_INI_MSK (KSN_ATTR_INI)
#define KSN_STT_INI_VAL (KSN_ATTR_INI_YES)


/* Number of states. */
#define KSN_STT_NB 27

/*********
 * Guard *
 *********/

/* 
 * Everything until the end of file is only compiled
 * if we build for KASAN.
 */
#ifdef NS_CF_KSN

/******************
 * Size utilities *
 ******************/

/*
 * Return the size of the attributes region for a data region of 
 * @data_size bytes with blocks of size 2 ^ @blk_order.
 */
static inline uaddr ksn_attrs_size(
	uaddr data_size,
	u8 blk_order
)
{
	return (data_size >> ((blk_order) + 1));
}

/*
 * Split a given PA of size @rgn_size region in :
 * - a data region with blocks of size 2 ^ @blk_order bytes.
 * - an attributes region with one attribute block per block of data.
 * and return the size of the attributes region.
 *
 * Given :
 * - D the size of a data region.
 * - B the size of a block (= 2 ^ b).
 *
 * Attributes region size :
 *   A = D / (2 * B); (half a byte per block).
 *
 * Region size :
 *   R = D + A;
 *   R = D + D / (2 * B);
 *
 * Which gives R = D * (1 + 1 / (2 * B)) = D * (2 * B + 1) / (2 * B)
 *
 * Which gives D = (2 * B * R) / (2 * B + 1)
 *
 * D must be rounded down so that there is at least one attribute block
 * per data block.
 *
 */
static inline void ksn_attrs_alloc(
	uaddr rgn_size,
	u8 blk_order,
	uaddr *data_sizep,
	uaddr *attrs_sizep
)
{
	const uaddr blk_size = (uaddr) 1 << blk_order;
	const uaddr blk_size_2 = (uaddr) 2 * blk_size;
	const uaddr data_size = (blk_size_2 * rgn_size) / (blk_size_2 + 1);
	const uaddr attrs_size = rgn_size - data_size;
	const uaddr attrs_size_actual = ksn_attrs_size(data_size, blk_order);
	assert(attrs_size_actual <= attrs_size);
	assert((attrs_size - attrs_size_actual) <= blk_size_2);
	*data_sizep = data_size;
	*attrs_sizep = attrs_size;
}


/**************
 * System API *
 **************/

/*
 * Construct @sys.
 */
void ksn_sys_ctor(
	ksn_sys *sys
);

/*
 * Delete @sys.
 * It must have no more memory regions.
 */
void ksn_sys_dtor(
	ksn_sys *sys
);

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
);

/*
 * Set initial kasan attributes of region @rrgn.
 * @krgn is a fake inactive region.
 */
void ksn_sys_rgn_init_attrs(
	ksn_sys *sys,
	ksn_rgn *krgn,
	rm_rgn *rrgn,
	km_ke *ke
);

/*
 * Replace @rgn_fake by @rgn, and activate kasan on the required
 * region.
 */
void ksn_sys_rgn_ctor(
	ksn_sys *sys,
	ksn_rgn *rgn_fake,
	ksn_rgn *rgn
);

/*
 * Remove region from @sys.
 * No check is done on the state of the removed region.
 */
void ksn_sys_rgn_dtor(
	ksn_sys *sys,
	ksn_rgn *rgn
);

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
);

#endif /* NS_CF_KSN */

#endif /* KR0_MM_KSN_H */

