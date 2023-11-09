
/************************
 * Instruction handlers *
 ************************/

#ifdef __dec_args_sig
static void arm_aarch32_ADC_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADC {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ADC_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADCS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADCS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ADCS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADCS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADCS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ADCS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADC_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADC {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ADC_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADC_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADC {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ADC_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADC_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADC {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ADC_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADCS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADCS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ADCS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADCS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADCS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ADCS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ADD_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ADDS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ADDS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ADD_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ADD_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ADD_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ADDS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ADDS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_SP_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} SP, #<const>\n", Rd);
	__dec_assert(0, "ADD_SP_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_SP_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} SP, #<const>\n", Rd);
	__dec_assert(0, "ADDS_SP_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_SP_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} SP, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "ADD_SP_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADD_SP_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADD {r%u,} SP, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "ADD_SP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_SP_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} SP, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "ADDS_SP_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADDS_SP_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADDS {r%u,} SP, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "ADDS_SP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADR_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADR r%u, <label>\n", Rd);
	__dec_assert(0, "ADR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ADR_A2(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ADR r%u, <label>\n", Rd);
	__dec_assert(0, "ADR_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AESD_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("AESD.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "AESD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AESE_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("AESE.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "AESE_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AESIMC_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("AESIMC.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "AESIMC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AESMC_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("AESMC.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "AESMC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AND_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("AND {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "AND_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ANDS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ANDS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ANDS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ANDS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ANDS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ANDS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AND_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("AND {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "AND_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_AND_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("AND {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "AND_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_AND_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("AND {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "AND_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ANDS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ANDS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ANDS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ANDS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ANDS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ANDS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BFC_A1(
	u8 lsb,
	u8 Rd,
	u8 msb,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BFC r%u, #%u, #<width>\n", Rd, lsb);
	__dec_assert(0, "BFC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BFI_A1(
	u8 Rn,
	u8 lsb,
	u8 Rd,
	u8 msb,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BFI r%u, r%u, #%u, #<width>\n", Rd, Rn, lsb);
	__dec_assert(0, "BFI_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BIC_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BIC {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "BIC_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BICS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BICS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "BICS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BICS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BICS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "BICS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BIC_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BIC {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "BIC_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BIC_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BIC {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "BIC_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_BIC_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BIC {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "BIC_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BICS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BICS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "BICS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_BICS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BICS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "BICS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BKPT_A1(
	u8 imm4,
	u16 imm12,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BKPT <imm>\n");
	__dec_assert(0, "BKPT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BL_i_A1(
	u32 imm24,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BL <label>\n");
	__dec_assert(0, "BL_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BL_i_A2(
	u32 imm24,
	u8 H
	__dec_args_sig
)
{
	__dec_debug("BLX <label>\n");
	__dec_assert(0, "BL_i_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BLX_r_A1(
	u8 Rm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BLX r%u\n", Rm);
	__dec_assert(0, "BLX_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BXJ_A1(
	u8 Rm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BXJ r%u\n", Rm);
	__dec_assert(0, "BXJ_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_B_A1(
	u32 imm24,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("B <label>\n");
	__dec_assert(0, "B_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_BX_A1(
	u8 Rm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("BX r%u\n", Rm);
	__dec_assert(0, "BX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CLRBHB_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CLRBHB\n");
	__dec_assert(0, "CLRBHB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CLREX_A1(
	__dec_args_sig
)
{
	__dec_debug("CLREX\n");
	__dec_assert(0, "CLREX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CLZ_A1(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CLZ r%u, r%u\n", Rd, Rm);
	__dec_assert(0, "CLZ_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMN_i_A1(
	u16 imm12,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMN r%u, #<const>\n", Rn);
	__dec_assert(0, "CMN_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMN_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMN r%u, r%u, <type> r%u\n", Rn, Rm, Rs);
	__dec_assert(0, "CMN_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMN_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMN r%u, r%u, RRX\n", Rn, Rm);
	__dec_assert(0, "CMN_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMN_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMN r%u, r%u {, <shift> #<amount>}\n", Rn, Rm);
	__dec_assert(0, "CMN_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMP_i_A1(
	u16 imm12,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMP r%u, #<const>\n", Rn);
	__dec_assert(0, "CMP_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMP_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMP r%u, r%u, <type> r%u\n", Rn, Rm, Rs);
	__dec_assert(0, "CMP_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMP_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMP r%u, r%u, RRX\n", Rn, Rm);
	__dec_assert(0, "CMP_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_CMP_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CMP r%u, r%u {, <shift> #<amount>}\n", Rn, Rm);
	__dec_assert(0, "CMP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CPS_A1_AS(
	u8 mode,
	u8 F,
	u8 I,
	u8 A
	__dec_args_sig
)
{
	__dec_debug("CPS #%u\n", mode);
	__dec_assert(0, "CPS_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_CPSID_A1_AS(
	u8 mode,
	u8 F,
	u8 I,
	u8 A
	__dec_args_sig
)
{
	__dec_debug("CPSID <iflags>\n");
	__dec_assert(0, "CPSID_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_CPSID_A1_ASM(
	u8 mode,
	u8 F,
	u8 I,
	u8 A
	__dec_args_sig
)
{
	__dec_debug("CPSID <iflags>, #%u\n", mode);
	__dec_assert(0, "CPSID_A1_ASM NOT IMPLEMENTED\n");
}

static void arm_aarch32_CPSIE_A1_AS(
	u8 mode,
	u8 F,
	u8 I,
	u8 A
	__dec_args_sig
)
{
	__dec_debug("CPSIE <iflags>\n");
	__dec_assert(0, "CPSIE_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_CPSIE_A1_ASM(
	u8 mode,
	u8 F,
	u8 I,
	u8 A
	__dec_args_sig
)
{
	__dec_debug("CPSIE <iflags>, #%u\n", mode);
	__dec_assert(0, "CPSIE_A1_ASM NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32CB_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32CB r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32CB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32CH_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32CH r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32CH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32CW_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32CW r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32CW_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32B_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32B r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32B_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32H_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32H r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32H_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CRC32W_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CRC32W r%u, r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "CRC32W_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_CSDB_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("CSDB\n");
	__dec_assert(0, "CSDB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_DBG_A1(
	u8 option,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("DBG #%u\n", option);
	__dec_assert(0, "DBG_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_DMB_A1(
	u8 option
	__dec_args_sig
)
{
	__dec_debug("DMB {%u}\n", option);
	__dec_assert(0, "DMB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_DSB_A1(
	u8 option
	__dec_args_sig
)
{
	__dec_debug("DSB {%u}\n", option);
	__dec_assert(0, "DSB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EOR_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EOR {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "EOR_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EORS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EORS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "EORS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EORS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EORS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "EORS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EOR_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EOR {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "EOR_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EOR_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EOR {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "EOR_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_EOR_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EOR {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "EOR_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_EORS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EORS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "EORS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_EORS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("EORS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "EORS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ERET_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ERET\n");
	__dec_assert(0, "ERET_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ESB_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ESB\n");
	__dec_assert(0, "ESB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_FLDMDBX_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("FLDMDBX r%u !, <dreglist>\n", Rn);
	__dec_assert(0, "FLDMDBX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_FLDMIAX_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("FLDMIAX r%u {!}, <dreglist>\n", Rn);
	__dec_assert(0, "FLDMIAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_FSTMDBX_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("FSTMDBX r%u !, <dreglist>\n", Rn);
	__dec_assert(0, "FSTMDBX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_FSTMIAX_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("FSTMIAX r%u {!}, <dreglist>\n", Rn);
	__dec_assert(0, "FSTMIAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_HLT_A1(
	u8 imm4,
	u16 imm12,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("HLT <imm>\n");
	__dec_assert(0, "HLT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_HVC_A1(
	u8 imm4,
	u16 imm12,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("HVC <imm16>\n");
	__dec_assert(0, "HVC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ISB_A1(
	u8 option
	__dec_args_sig
)
{
	__dec_debug("ISB {%u}\n", option);
	__dec_assert(0, "ISB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAB_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAB r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAEXB_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAEXB r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAEXB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAEXD_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAEXD r%u, <Rt2>, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAEXD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAEXH_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAEXH r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAEXH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAEX_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAEX r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAEX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDAH_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDAH r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDAH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDA_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDA r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDA_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDC_i_A1_off(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDC p14, c5, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "LDC_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDC_i_A1_post(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDC p14, c5, [r%u ], #{+/-} <imm>\n", Rn);
	__dec_assert(0, "LDC_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDC_i_A1_pre(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDC p14, c5, [r%u, #{+/-} <imm> ]!\n", Rn);
	__dec_assert(0, "LDC_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDC_i_A1_unind(
	u8 imm8,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDC p14, c5, [r%u ], <option>\n", Rn);
	__dec_assert(0, "LDC_i_A1_unind NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDC_l_A1(
	u8 imm8,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDC p14, c5, <label>\n");
	__dec_assert(0, "LDC_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDMDA_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDMDA r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "LDMDA_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDMDB_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDMDB r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "LDMDB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDM_e_A1_AS(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDM {<amode>} r%u {!}, <registers_with_pc> ^\n", Rn);
	__dec_assert(0, "LDM_e_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDMIB_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDMIB r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "LDMIB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDM_u_A1_AS(
	u16 register_list,
	u8 Rn,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDM {<amode>} r%u, <registers_without_pc> ^\n", Rn);
	__dec_assert(0, "LDM_u_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDM_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDM {IA} r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "LDM_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_i_A1_off(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDRB_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_i_A1_post(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDRB_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_i_A1_pre(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDRB_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_l_A1(
	u16 imm12,
	u8 Rt,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, <label>\n", Rt);
	__dec_assert(0, "LDRB_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_r_A1_off(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u, {+/-} r%u {, <shift>} ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRB_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_r_A1_post(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRB_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRB_r_A1_pre(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRB r%u, [r%u, {+/-} r%u {, <shift>} ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRB_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRBT_A1(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRBT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "LDRBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRBT_A2(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRBT r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRBT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDRD_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDRD_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDRD_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_l_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, <label>\n", Rt);
	__dec_assert(0, "LDRD_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRD_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRD_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRD_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRD r%u, <Rt2>, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRD_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDREXB_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDREXB r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDREXB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDREXD_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDREXD r%u, <Rt2>, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDREXD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDREXH_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDREXH r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "LDREXH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDREX_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDREX r%u, [r%u {, <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDREX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDRH_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDRH_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDRH_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_l_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, <label>\n", Rt);
	__dec_assert(0, "LDRH_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRH_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRH_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRH_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRH r%u, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRH_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRHT_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRHT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "LDRHT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRHT_A2(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRHT r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRHT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_i_A1_off(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDR_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_i_A1_post(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDR_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_i_A1_pre(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDR_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_l_A1(
	u16 imm12,
	u8 Rt,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, <label>\n", Rt);
	__dec_assert(0, "LDR_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_r_A1_off(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u, {+/-} r%u {, <shift>} ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDR_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_r_A1_post(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "LDR_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDR_r_A1_pre(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDR r%u, [r%u, {+/-} r%u {, <shift>} ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDR_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDRSB_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDRSB_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDRSB_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_l_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, <label>\n", Rt);
	__dec_assert(0, "LDRSB_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSB_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSB_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSB_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSB r%u, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSB_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSBT_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSBT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "LDRSBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSBT_A2(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSBT r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSBT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "LDRSH_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "LDRSH_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "LDRSH_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_l_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 W,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, <label>\n", Rt);
	__dec_assert(0, "LDRSH_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSH_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSH_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSH_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSH r%u, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSH_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSHT_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSHT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "LDRSHT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRSHT_A2(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRSHT r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRSHT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRT_A1(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "LDRT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_LDRT_A2(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("LDRT r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "LDRT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MCRR_A1(
	u8 CRm,
	u8 opc1,
	u8 coproc<0>,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MCRR <coproc>, %u, r%u, r%u, %u\n", opc1, Rt, Rt2, CRm);
	__dec_assert(0, "MCRR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MCR_A1(
	u8 CRm,
	u8 opc2,
	u8 coproc<0>,
	u8 Rt,
	u8 CRn,
	u8 opc1,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MCR <coproc>, %u, r%u, %u, %u {, %u}\n", opc1, Rt, CRn, CRm, opc2);
	__dec_assert(0, "MCR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MLAS_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MLAS r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "MLAS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MLA_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MLA r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "MLA_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MLS_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MLS r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "MLS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOV_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOV r%u, #<const>\n", Rd);
	__dec_assert(0, "MOV_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOVS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOVS r%u, #<const>\n", Rd);
	__dec_assert(0, "MOVS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOV_i_A2(
	u16 imm12,
	u8 Rd,
	u8 imm4,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOV r%u, #<imm16>\n", Rd);
	__dec_assert(0, "MOV_i_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOVS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOVS r%u, r%u, <shift> r%u\n", Rd, Rm, Rs);
	__dec_assert(0, "MOVS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOV_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOV r%u, r%u, <shift> r%u\n", Rd, Rm, Rs);
	__dec_assert(0, "MOV_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOV_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOV r%u, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "MOV_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOV_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOV r%u, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "MOV_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOVS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOVS r%u, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "MOVS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOVS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOVS r%u, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "MOVS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MOVT_A1(
	u16 imm12,
	u8 Rd,
	u8 imm4,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MOVT r%u, #<imm16>\n", Rd);
	__dec_assert(0, "MOVT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MRC_A1(
	u8 CRm,
	u8 opc2,
	u8 coproc<0>,
	u8 Rt,
	u8 CRn,
	u8 opc1,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MRC <coproc>, %u, r%u, %u, %u {, %u}\n", opc1, Rt, CRn, CRm, opc2);
	__dec_assert(0, "MRC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MRRC_A1(
	u8 CRm,
	u8 opc1,
	u8 coproc<0>,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MRRC <coproc>, %u, r%u, r%u, %u\n", opc1, Rt, Rt2, CRm);
	__dec_assert(0, "MRRC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MRS_br_A1_AS(
	u8 M,
	u8 Rd,
	u8 M1,
	u8 R,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MRS r%u, <banked_reg>\n", Rd);
	__dec_assert(0, "MRS_br_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_MRS_A1_AS(
	u8 Rd,
	u8 R,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MRS r%u, <spec_reg>\n", Rd);
	__dec_assert(0, "MRS_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_MSR_br_A1_AS(
	u8 Rn,
	u8 M,
	u8 M1,
	u8 R,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MSR <banked_reg>, r%u\n", Rn);
	__dec_assert(0, "MSR_br_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_MSR_i_A1_AS(
	u16 imm12,
	u8 mask,
	u8 R,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MSR <spec_reg>, #<imm>\n");
	__dec_assert(0, "MSR_i_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_MSR_r_A1_AS(
	u8 Rn,
	u8 mask,
	u8 R,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MSR <spec_reg>, r%u\n", Rn);
	__dec_assert(0, "MSR_r_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_MULS_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MULS r%u, r%u {, r%u}\n", Rd, Rn, Rm);
	__dec_assert(0, "MULS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MUL_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MUL r%u, r%u {, r%u}\n", Rd, Rn, Rm);
	__dec_assert(0, "MUL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVN_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVN r%u, #<const>\n", Rd);
	__dec_assert(0, "MVN_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVNS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVNS r%u, #<const>\n", Rd);
	__dec_assert(0, "MVNS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVNS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVNS r%u, r%u, <shift> r%u\n", Rd, Rm, Rs);
	__dec_assert(0, "MVNS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVN_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVN r%u, r%u, <shift> r%u\n", Rd, Rm, Rs);
	__dec_assert(0, "MVN_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVN_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVN r%u, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "MVN_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVN_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVN r%u, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "MVN_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVNS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVNS r%u, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "MVNS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_MVNS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("MVNS r%u, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "MVNS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_NOP_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("NOP\n");
	__dec_assert(0, "NOP_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORR_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORR {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ORR_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORRS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORRS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "ORRS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORRS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORRS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ORRS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORR_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORR {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "ORR_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORR_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORR {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ORR_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORR_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORR {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ORR_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORRS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORRS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "ORRS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_ORRS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("ORRS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "ORRS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PKHBT_A1(
	u8 Rm,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("PKHBT {r%u,} r%u, r%u {, LSL #<imm>}\n", Rd, Rn, Rm);
	__dec_assert(0, "PKHBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PKHTB_A1(
	u8 Rm,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("PKHTB {r%u,} r%u, r%u {, ASR #<imm>}\n", Rd, Rn, Rm);
	__dec_assert(0, "PKHTB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLD_i_A1(
	u16 imm12,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLD [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "PLD_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLDW_i_A1(
	u16 imm12,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLDW [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "PLDW_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLD_l_A1(
	u16 imm12,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLD <label>\n");
	__dec_assert(0, "PLD_l_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLD_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLD [r%u, {+/-} r%u {, <shift> #<amount>} ]\n", Rn, Rm);
	__dec_assert(0, "PLD_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLD_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLD [r%u, {+/-} r%u, RRX]\n", Rn, Rm);
	__dec_assert(0, "PLD_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLDW_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLDW [r%u, {+/-} r%u {, <shift> #<amount>} ]\n", Rn, Rm);
	__dec_assert(0, "PLDW_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLDW_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLDW [r%u, {+/-} r%u, RRX]\n", Rn, Rm);
	__dec_assert(0, "PLDW_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLI_i_A1(
	u16 imm12,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLI [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "PLI_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLI_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLI [r%u, {+/-} r%u, RRX]\n", Rn, Rm);
	__dec_assert(0, "PLI_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_PLI_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("PLI [r%u, {+/-} r%u {, <shift> #<amount>} ]\n", Rn, Rm);
	__dec_assert(0, "PLI_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_PSSBB_A1(
	__dec_args_sig
)
{
	__dec_debug("PSSBB\n");
	__dec_assert(0, "PSSBB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QADD_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QADD {r%u,} r%u, r%u\n", Rd, Rm, Rn);
	__dec_assert(0, "QADD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QDADD_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QDADD {r%u,} r%u, r%u\n", Rd, Rm, Rn);
	__dec_assert(0, "QDADD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QDSUB_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QDSUB {r%u,} r%u, r%u\n", Rd, Rm, Rn);
	__dec_assert(0, "QDSUB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QSAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QSAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QSAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QSUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QSUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QSUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QSUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QSUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "QSUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_QSUB_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("QSUB {r%u,} r%u, r%u\n", Rd, Rm, Rn);
	__dec_assert(0, "QSUB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RBIT_A1(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RBIT r%u, r%u\n", Rd, Rm);
	__dec_assert(0, "RBIT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_REV16_A1(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("REV16 r%u, r%u\n", Rd, Rm);
	__dec_assert(0, "REV16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_REVSH_A1(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("REVSH r%u, r%u\n", Rd, Rm);
	__dec_assert(0, "REVSH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_REV_A1(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("REV r%u, r%u\n", Rd, Rm);
	__dec_assert(0, "REV_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RFEDA_A1_AS(
	u8 Rn,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("RFEDA r%u {!}\n", Rn);
	__dec_assert(0, "RFEDA_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_RFEDB_A1_AS(
	u8 Rn,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("RFEDB r%u {!}\n", Rn);
	__dec_assert(0, "RFEDB_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_RFEIA_A1_AS(
	u8 Rn,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("RFE {IA} r%u {!}\n", Rn);
	__dec_assert(0, "RFEIA_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_RFEIB_A1_AS(
	u8 Rn,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("RFEIB r%u {!}\n", Rn);
	__dec_assert(0, "RFEIB_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSB_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSB {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "RSB_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSBS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSBS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "RSBS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSBS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSBS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "RSBS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSB_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSB {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "RSB_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSB_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSB {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "RSB_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSB_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSB {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "RSB_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSBS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSBS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "RSBS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSBS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSBS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "RSBS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSC_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSC {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "RSC_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSCS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSCS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "RSCS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSCS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSCS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "RSCS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSC_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSC {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "RSC_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSC_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSC {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "RSC_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSC_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSC {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "RSC_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSCS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSCS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "RSCS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_RSCS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("RSCS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "RSCS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBC_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBC {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "SBC_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBCS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBCS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "SBCS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBCS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBCS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "SBCS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBC_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBC {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "SBC_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBC_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBC {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "SBC_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBC_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBC {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SBC_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBCS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBCS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "SBCS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBCS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBCS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SBCS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SBFX_A1(
	u8 Rn,
	u8 lsb,
	u8 Rd,
	u8 widthm1,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SBFX r%u, r%u, #%u, #<width>\n", Rd, Rn, lsb);
	__dec_assert(0, "SBFX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SB_A1(
	__dec_args_sig
)
{
	__dec_debug("SB\n");
	__dec_assert(0, "SB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SDIV_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SDIV {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SDIV_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SEL_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SEL {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SEL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SETEND_A1(
	u8 E
	__dec_args_sig
)
{
	__dec_debug("SETEND <endian_specifier>\n");
	__dec_assert(0, "SETEND_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SETPAN_A1(
	u8 imm1
	__dec_args_sig
)
{
	__dec_debug("SETPAN #<imm>\n");
	__dec_assert(0, "SETPAN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SEVL_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SEVL\n");
	__dec_assert(0, "SEVL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SEV_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SEV\n");
	__dec_assert(0, "SEV_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1C_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1C.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA1C_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1H_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1H.32 <Qd>, <Qm>\n");
	__dec_assert(0, "SHA1H_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1M_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1M.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA1M_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1P_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1P.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA1P_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1SU0_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1SU0.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA1SU0_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA1SU1_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA1SU1.32 <Qd>, <Qm>\n");
	__dec_assert(0, "SHA1SU1_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA256H2_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA256H2.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA256H2_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA256H_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA256H.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA256H_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA256SU0_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA256SU0.32 <Qd>, <Qm>\n");
	__dec_assert(0, "SHA256SU0_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHA256SU1_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("SHA256SU1.32 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "SHA256SU1_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHSAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHSAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHSAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHSUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHSUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHSUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SHSUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SHSUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SHSUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMC_A1_AS(
	u8 imm4,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMC %u\n", imm4);
	__dec_assert(0, "SMC_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLABB_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLABB r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLABB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLABT_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLABT r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLABT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLATB_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLATB r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLATB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLATT_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLATT r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLATT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLAD_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLAD r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLAD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLADX_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLADX r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLADX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALBB_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALBB r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALBB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALBT_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALBT r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALTB_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALTB r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALTB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALTT_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALTT r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALTT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALD_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALD r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALDX_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALDX r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALDX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLALS_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLALS r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLALS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLAL_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLAL r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLAL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLAWB_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLAWB r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLAWB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLAWT_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLAWT r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLAWT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLSD_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLSD r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLSD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLSDX_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLSDX r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMLSDX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLSLD_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLSLD r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLSLD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMLSLDX_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMLSLDX r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMLSLDX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMLA_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMLA r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMMLA_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMLAR_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMLAR r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMMLAR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMLS_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMLS r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMMLS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMLSR_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMLSR r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "SMMLSR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMUL_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMUL {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMMUL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMMULR_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMMULR {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMMULR_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMUAD_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMUAD {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMUAD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMUADX_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMUADX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMUADX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULBB_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULBB {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULBB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULBT_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULBT {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULTB_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULTB {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULTB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULTT_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULTT {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULTT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULLS_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULLS r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMULLS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULL_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULL r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "SMULL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULWB_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULWB {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULWB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMULWT_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMULWT {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMULWT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMUSD_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMUSD {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMUSD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SMUSDX_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SMUSDX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SMUSDX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SRSDA_A1_AS(
	u8 mode,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("SRSDA SP {!}, #%u\n", mode);
	__dec_assert(0, "SRSDA_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_SRSDB_A1_AS(
	u8 mode,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("SRSDB SP {!}, #%u\n", mode);
	__dec_assert(0, "SRSDB_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_SRSIA_A1_AS(
	u8 mode,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("SRS {IA} SP {!}, #%u\n", mode);
	__dec_assert(0, "SRSIA_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_SRSIB_A1_AS(
	u8 mode,
	u8 W
	__dec_args_sig
)
{
	__dec_debug("SRSIB SP {!}, #%u\n", mode);
	__dec_assert(0, "SRSIB_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSAT16_A1(
	u8 Rn,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSAT16 r%u, #<imm>, r%u\n", Rd, Rn);
	__dec_assert(0, "SSAT16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSAT_A1_ASR(
	u8 Rn,
	u8 imm5,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSAT r%u, #<imm>, r%u, ASR #<amount>\n", Rd, Rn);
	__dec_assert(0, "SSAT_A1_ASR NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSAT_A1_LSL(
	u8 Rn,
	u8 imm5,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSAT r%u, #<imm>, r%u {, LSL #<amount>}\n", Rd, Rn);
	__dec_assert(0, "SSAT_A1_LSL NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SSAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSBB_A1(
	__dec_args_sig
)
{
	__dec_debug("SSBB\n");
	__dec_assert(0, "SSBB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SSUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SSUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SSUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "SSUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STC_A1_off(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STC p14, c5, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "STC_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STC_A1_post(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STC p14, c5, [r%u ], #{+/-} <imm>\n", Rn);
	__dec_assert(0, "STC_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STC_A1_pre(
	u8 imm8,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STC p14, c5, [r%u, #{+/-} <imm> ]!\n", Rn);
	__dec_assert(0, "STC_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STC_A1_unind(
	u8 imm8,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STC p14, c5, [r%u ], <option>\n", Rn);
	__dec_assert(0, "STC_A1_unind NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLB_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLB r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "STLB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLEXB_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLEXB r%u, r%u, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STLEXB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLEXD_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLEXD r%u, r%u, <Rt2>, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STLEXD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLEXH_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLEXH r%u, r%u, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STLEXH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLEX_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLEX r%u, r%u, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STLEX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STLH_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STLH r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "STLH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STL_A1(
	u8 Rt,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STL r%u, [r%u ]\n", Rt, Rn);
	__dec_assert(0, "STL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STMDA_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STMDA r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "STMDA_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STMDB_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STMDB r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "STMDB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STMIB_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STMIB r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "STMIB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STM_u_A1_AS(
	u16 register_list,
	u8 Rn,
	u8 U,
	u8 P,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STM {<amode>} r%u, <registers> ^\n", Rn);
	__dec_assert(0, "STM_u_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_STM_A1(
	u16 register_list,
	u8 Rn,
	u8 W,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STM {IA} r%u {!}, <registers>\n", Rn);
	__dec_assert(0, "STM_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_i_A1_off(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "STRB_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_i_A1_post(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "STRB_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_i_A1_pre(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "STRB_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_r_A1_off(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u, {+/-} r%u {, <shift>} ]\n", Rt, Rn, Rm);
	__dec_assert(0, "STRB_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_r_A1_post(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "STRB_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRB_r_A1_pre(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRB r%u, [r%u, {+/-} r%u {, <shift>} ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "STRB_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRBT_A1(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRBT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "STRBT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRBT_A2(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRBT r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "STRBT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "STRD_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "STRD_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "STRD_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "STRD_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "STRD_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRD_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRD r%u, <Rt2>, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "STRD_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STREXB_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STREXB r%u, r%u, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STREXB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STREXD_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STREXD r%u, r%u, <Rt2>, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STREXD_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STREXH_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STREXH r%u, r%u, [r%u ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STREXH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STREX_A1(
	u8 Rt,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STREX r%u, r%u, [r%u {, <imm>} ]\n", Rd, Rt, Rn);
	__dec_assert(0, "STREX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_i_A1_off(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "STRH_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_i_A1_post(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "STRH_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_i_A1_pre(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "STRH_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_r_A1_off(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u, {+/-} r%u ]\n", Rt, Rn, Rm);
	__dec_assert(0, "STRH_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_r_A1_post(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "STRH_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRH_r_A1_pre(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRH r%u, [r%u, {+/-} r%u ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "STRH_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRHT_A1(
	u8 imm4L,
	u8 imm4H,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRHT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "STRHT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRHT_A2(
	u8 Rm,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRHT r%u, [r%u ], {+/-} r%u\n", Rt, Rn, Rm);
	__dec_assert(0, "STRHT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_i_A1_off(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u {, #{+/-} <imm>} ]\n", Rt, Rn);
	__dec_assert(0, "STR_i_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_i_A1_post(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u ], #{+/-} <imm>\n", Rt, Rn);
	__dec_assert(0, "STR_i_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_i_A1_pre(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u, #{+/-} <imm> ]!\n", Rt, Rn);
	__dec_assert(0, "STR_i_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_r_A1_off(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u, {+/-} r%u {, <shift>} ]\n", Rt, Rn, Rm);
	__dec_assert(0, "STR_r_A1_off NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_r_A1_post(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "STR_r_A1_post NOT IMPLEMENTED\n");
}

static void arm_aarch32_STR_r_A1_pre(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STR r%u, [r%u, {+/-} r%u {, <shift>} ]!\n", Rt, Rn, Rm);
	__dec_assert(0, "STR_r_A1_pre NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRT_A1(
	u16 imm12,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRT r%u, [r%u ] {, #{+/-} <imm>}\n", Rt, Rn);
	__dec_assert(0, "STRT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_STRT_A2(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rt,
	u8 Rn,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("STRT r%u, [r%u ], {+/-} r%u {, <shift>}\n", Rt, Rn, Rm);
	__dec_assert(0, "STRT_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "SUB_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_i_A1(
	u16 imm12,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} r%u, #<const>\n", Rd, Rn);
	__dec_assert(0, "SUBS_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "SUBS_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} r%u, r%u, <shift> r%u\n", Rd, Rn, Rm, Rs);
	__dec_assert(0, "SUB_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "SUB_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SUB_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} r%u, r%u, RRX\n", Rd, Rn, Rm);
	__dec_assert(0, "SUBS_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} r%u, r%u {, <shift> #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SUBS_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_SP_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} SP, #<const>\n", Rd);
	__dec_assert(0, "SUB_SP_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_SP_i_A1(
	u16 imm12,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} SP, #<const>\n", Rd);
	__dec_assert(0, "SUBS_SP_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_SP_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} SP, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "SUB_SP_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUB_SP_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUB {r%u,} SP, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "SUB_SP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_SP_r_A1_RRX(
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} SP, r%u, RRX\n", Rd, Rm);
	__dec_assert(0, "SUBS_SP_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_SUBS_SP_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SUBS {r%u,} SP, r%u {, <shift> #<amount>}\n", Rd, Rm);
	__dec_assert(0, "SUBS_SP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SVC_A1(
	u32 imm24,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SVC <imm>\n");
	__dec_assert(0, "SVC_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTAB16_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTAB16 {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SXTAB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTAB_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTAB {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SXTAB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTAH_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTAH {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "SXTAH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTB16_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTB16 {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "SXTB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTB_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTB {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "SXTB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_SXTH_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("SXTH {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "SXTH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TEQ_i_A1(
	u16 imm12,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TEQ r%u, #<const>\n", Rn);
	__dec_assert(0, "TEQ_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TEQ_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TEQ r%u, r%u, <type> r%u\n", Rn, Rm, Rs);
	__dec_assert(0, "TEQ_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TEQ_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TEQ r%u, r%u, RRX\n", Rn, Rm);
	__dec_assert(0, "TEQ_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_TEQ_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TEQ r%u, r%u {, <shift> #<amount>}\n", Rn, Rm);
	__dec_assert(0, "TEQ_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TSB_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TSB CSYNC\n");
	__dec_assert(0, "TSB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TST_i_A1(
	u16 imm12,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TST r%u, #<const>\n", Rn);
	__dec_assert(0, "TST_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TST_rr_A1(
	u8 Rm,
	u8 stype,
	u8 Rs,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TST r%u, r%u, <type> r%u\n", Rn, Rm, Rs);
	__dec_assert(0, "TST_rr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_TST_r_A1_RRX(
	u8 Rm,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TST r%u, r%u, RRX\n", Rn, Rm);
	__dec_assert(0, "TST_r_A1_RRX NOT IMPLEMENTED\n");
}

static void arm_aarch32_TST_r_A1(
	u8 Rm,
	u8 stype,
	u8 imm5,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("TST r%u, r%u {, <shift> #<amount>}\n", Rn, Rm);
	__dec_assert(0, "TST_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UBFX_A1(
	u8 Rn,
	u8 lsb,
	u8 Rd,
	u8 widthm1,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UBFX r%u, r%u, #%u, #<width>\n", Rd, Rn, lsb);
	__dec_assert(0, "UBFX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UDF_A1(
	u8 imm4,
	u16 imm12
	__dec_args_sig
)
{
	__dec_debug("UDF <imm>\n");
	__dec_assert(0, "UDF_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UDIV_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UDIV {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UDIV_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHSAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHSAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHSAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHSUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHSUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHSUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UHSUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UHSUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UHSUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UMAAL_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UMAAL r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "UMAAL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UMLALS_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UMLALS r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "UMLALS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UMLAL_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UMLAL r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "UMLAL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UMULLS_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UMULLS r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "UMULLS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UMULL_A1(
	u8 Rn,
	u8 Rm,
	u8 RdLo,
	u8 RdHi,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UMULL r%u, r%u, r%u, r%u\n", RdLo, RdHi, Rn, Rm);
	__dec_assert(0, "UMULL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQADD16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQADD16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQADD16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQADD8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQADD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQADD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQASX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQASX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQASX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQSAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQSAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQSAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQSUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQSUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQSUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UQSUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UQSUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "UQSUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USAD8_A1(
	u8 Rn,
	u8 Rm,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USAD8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "USAD8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USADA8_A1(
	u8 Rn,
	u8 Rm,
	u8 Ra,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USADA8 r%u, r%u, r%u, r%u\n", Rd, Rn, Rm, Ra);
	__dec_assert(0, "USADA8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USAT16_A1(
	u8 Rn,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USAT16 r%u, #<imm>, r%u\n", Rd, Rn);
	__dec_assert(0, "USAT16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USAT_A1_ASR(
	u8 Rn,
	u8 imm5,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USAT r%u, #<imm>, r%u, ASR #<amount>\n", Rd, Rn);
	__dec_assert(0, "USAT_A1_ASR NOT IMPLEMENTED\n");
}

static void arm_aarch32_USAT_A1_LSL(
	u8 Rn,
	u8 imm5,
	u8 Rd,
	u8 sat_imm,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USAT r%u, #<imm>, r%u {, LSL #<amount>}\n", Rd, Rn);
	__dec_assert(0, "USAT_A1_LSL NOT IMPLEMENTED\n");
}

static void arm_aarch32_USAX_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USAX {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "USAX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USUB16_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USUB16 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "USUB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_USUB8_A1(
	u8 Rm,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("USUB8 {r%u,} r%u, r%u\n", Rd, Rn, Rm);
	__dec_assert(0, "USUB8_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTAB16_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTAB16 {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "UXTAB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTAB_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTAB {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "UXTAB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTAH_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 Rn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTAH {r%u,} r%u, r%u {, ROR #<amount>}\n", Rd, Rn, Rm);
	__dec_assert(0, "UXTAH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTB16_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTB16 {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "UXTB16_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTB_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTB {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "UXTB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_UXTH_A1(
	u8 Rm,
	u8 rotate,
	u8 Rd,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("UXTH {r%u,} r%u {, ROR #<amount>}\n", Rd, Rm);
	__dec_assert(0, "UXTH_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABAL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABAL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VABAL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABA_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABA.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VABA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABA.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VABA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABD_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VABD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VABD_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABD_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VABD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VABD_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABD_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VABD_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABD_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VABD_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABDL_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VABDL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VABDL_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABS_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VABS.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VABS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABS_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VABS.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VABS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABS_A2_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VABS.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VABS_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABS_A2_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VABS.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VABS_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VABS_A2_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VABS.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VABS_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VACGE_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VACGE.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VACGE_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VACGE_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VACGE.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VACGE_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VACGT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VACGT.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VACGT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VACGT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VACGT.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VACGT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VADD_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VADD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VADD_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_f_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VADD.F16 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VADD_f_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_f_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VADD.F32 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VADD_f_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_f_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VADD.F64 {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VADD_f_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADDHN_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VADDHN.<dt> <Dd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VADDHN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VADD_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADD_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VADD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VADD_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADDL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VADDL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VADDL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VADDW_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VADDW.<dt> {<Qd>,} <Qn>, <Dm>\n");
	__dec_assert(0, "VADDW_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VAND_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VAND {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VAND_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VAND_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VAND {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VAND_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_i_A1_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VBIC.I32 {<Dd>,} <Dd>, #<imm>\n");
	__dec_assert(0, "VBIC_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_i_A1_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VBIC.I32 {<Qd>,} <Qd>, #<imm>\n");
	__dec_assert(0, "VBIC_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_i_A2_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VBIC.I16 {<Dd>,} <Dd>, #<imm>\n");
	__dec_assert(0, "VBIC_i_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_i_A2_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VBIC.I16 {<Qd>,} <Qd>, #<imm>\n");
	__dec_assert(0, "VBIC_i_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIC {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VBIC_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIC_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIC {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VBIC_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIF_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIF {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VBIF_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIF_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIF {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VBIF_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIT {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VBIT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBIT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBIT {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VBIT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBSL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBSL {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VBSL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VBSL_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VBSL {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VBSL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCADD_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 S,
	u8 D,
	u8 rot
	__dec_args_sig
)
{
	__dec_debug("VCADD.<dt> <Dd>, <Dn>, <Dm>, #<rotate>\n");
	__dec_assert(0, "VCADD_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCADD_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 S,
	u8 D,
	u8 rot
	__dec_args_sig
)
{
	__dec_debug("VCADD.<dt> <Qd>, <Qn>, <Qm>, #<rotate>\n");
	__dec_assert(0, "VCADD_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_i_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Dd>,} <Dm>, #0\n");
	__dec_assert(0, "VCEQ_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Qd>,} <Qm>, #0\n");
	__dec_assert(0, "VCEQ_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCEQ_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCEQ_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_r_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCEQ_r_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCEQ_r_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCEQ.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCEQ_r_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_i_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Dd>,} <Dm>, #0\n");
	__dec_assert(0, "VCGE_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Qd>,} <Qm>, #0\n");
	__dec_assert(0, "VCGE_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCGE_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCGE_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_r_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCGE_r_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGE_r_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGE.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCGE_r_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_i_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Dd>,} <Dm>, #0\n");
	__dec_assert(0, "VCGT_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Qd>,} <Qm>, #0\n");
	__dec_assert(0, "VCGT_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCGT_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCGT_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_r_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VCGT_r_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCGT_r_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCGT.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VCGT_r_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLE_i_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLE.<dt> {<Dd>,} <Dm>, #0\n");
	__dec_assert(0, "VCLE_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLE_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLE.<dt> {<Qd>,} <Qm>, #0\n");
	__dec_assert(0, "VCLE_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLS_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLS.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VCLS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLS_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLS.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VCLS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLT_i_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLT.<dt> {<Dd>,} <Dm>, #0\n");
	__dec_assert(0, "VCLT_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLT_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLT.<dt> {<Qd>,} <Qm>, #0\n");
	__dec_assert(0, "VCLT_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLZ_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLZ.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VCLZ_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCLZ_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCLZ.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VCLZ_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_s_A1_DH(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 rot,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCMLA.F16 <Dd>, <Dn>, <Dm> [<index> ], #<rotate>\n");
	__dec_assert(0, "VCMLA_s_A1_DH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_s_A1_DS(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 rot,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCMLA.F32 <Dd>, <Dn>, <Dm> [0], #<rotate>\n");
	__dec_assert(0, "VCMLA_s_A1_DS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_s_A1_QH(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 rot,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCMLA.F16 <Qd>, <Qn>, <Dm> [<index> ], #<rotate>\n");
	__dec_assert(0, "VCMLA_s_A1_QH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_s_A1_QS(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 rot,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCMLA.F32 <Qd>, <Qn>, <Dm> [0], #<rotate>\n");
	__dec_assert(0, "VCMLA_s_A1_QS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 S,
	u8 D,
	u8 rot
	__dec_args_sig
)
{
	__dec_debug("VCMLA.<dt> <Dd>, <Dn>, <Dm>, #<rotate>\n");
	__dec_assert(0, "VCMLA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMLA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 S,
	u8 D,
	u8 rot
	__dec_args_sig
)
{
	__dec_debug("VCMLA.<dt> <Qd>, <Qn>, <Qm>, #<rotate>\n");
	__dec_assert(0, "VCMLA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCMPE_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCMPE_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VCMPE_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A2_H(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F16 <Sd>, #0.0\n");
	__dec_assert(0, "VCMPE_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A2_S(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F32 <Sd>, #0.0\n");
	__dec_assert(0, "VCMPE_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMPE_A2_D(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMPE.F64 <Dd>, #0.0\n");
	__dec_assert(0, "VCMPE_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCMP_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCMP_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VCMP_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A2_H(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F16 <Sd>, #0.0\n");
	__dec_assert(0, "VCMP_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A2_S(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F32 <Sd>, #0.0\n");
	__dec_assert(0, "VCMP_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCMP_A2_D(
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCMP.F64 <Dd>, #0.0\n");
	__dec_assert(0, "VCMP_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCNT_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCNT.8 <Dd>, <Dm>\n");
	__dec_assert(0, "VCNT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCNT_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCNT.8 <Qd>, <Qm>\n");
	__dec_assert(0, "VCNT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTA_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTA.<dt>.<dt2> <Dd>, <Dm>\n");
	__dec_assert(0, "VCVTA_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTA_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTA.<dt>.<dt2> <Qd>, <Qm>\n");
	__dec_assert(0, "VCVTA_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTA_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTA.<dt>.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTA_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTA_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTA.<dt>.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTA_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTA_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTA.<dt>.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTA_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTB_A1_bfs(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTB.BF16.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTB_A1_bfs NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_bfs_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVT.BF16.F32 <Dd>, <Qm>\n");
	__dec_assert(0, "VCVT_bfs_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTB_A1_SH(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTB.F32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTB_A1_SH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTB_A1_DH(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTB.F64.F16 <Dd>, <Sm>\n");
	__dec_assert(0, "VCVTB_A1_DH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTB_A1_HS(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTB.F16.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTB_A1_HS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTB_A1_HD(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTB.F16.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTB_A1_HD NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_ds_A1(
	u8 Vm,
	u8 M,
	u8 size,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F64.F32 <Dd>, <Sm>\n");
	__dec_assert(0, "VCVT_ds_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_sd_A1(
	u8 Vm,
	u8 M,
	u8 size,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVT_sd_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_sh_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVT.F32.F16 <Qd>, <Dm>\n");
	__dec_assert(0, "VCVT_sh_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_hs_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVT.F16.F32 <Dd>, <Qm>\n");
	__dec_assert(0, "VCVT_hs_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_is_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt1>.<dt2> <Dd>, <Dm>\n");
	__dec_assert(0, "VCVT_is_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_is_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt1>.<dt2> <Qd>, <Qm>\n");
	__dec_assert(0, "VCVT_is_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_uiv_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.U32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_uiv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_siv_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.S32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_siv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_uiv_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.U32.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_uiv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_siv_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.S32.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_siv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_uiv_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.U32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVT_uiv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_siv_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.S32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVT_siv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTM_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTM.<dt>.<dt2> <Dd>, <Dm>\n");
	__dec_assert(0, "VCVTM_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTM_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTM.<dt>.<dt2> <Qd>, <Qm>\n");
	__dec_assert(0, "VCVTM_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTM_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTM.<dt>.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTM_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTM_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTM.<dt>.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTM_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTM_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTM.<dt>.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTM_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTN_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTN.<dt>.<dt2> <Dd>, <Dm>\n");
	__dec_assert(0, "VCVTN_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTN_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTN.<dt>.<dt2> <Qd>, <Qm>\n");
	__dec_assert(0, "VCVTN_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTN_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTN.<dt>.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTN_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTN_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTN.<dt>.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTN_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTN_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTN.<dt>.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTN_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTP_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTP.<dt>.<dt2> <Dd>, <Dm>\n");
	__dec_assert(0, "VCVTP_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTP_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTP.<dt>.<dt2> <Qd>, <Qm>\n");
	__dec_assert(0, "VCVTP_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTP_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTP.<dt>.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTP_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTP_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTP.<dt>.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTP_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTP_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VCVTP.<dt>.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTP_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_uiv_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.U32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTR_uiv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_siv_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.S32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTR_siv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_uiv_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.U32.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTR_uiv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_siv_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.S32.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTR_siv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_uiv_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.U32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTR_uiv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTR_siv_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 opc2,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTR.S32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTR_siv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTT_A1_bfs(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTT.BF16.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTT_A1_bfs NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTT_A1_SH(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTT.F32.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTT_A1_SH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTT_A1_DH(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTT.F64.F16 <Dd>, <Sm>\n");
	__dec_assert(0, "VCVTT_A1_DH NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTT_A1_HS(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTT.F16.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VCVTT_A1_HS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVTT_A1_HD(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVTT.F16.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VCVTT_A1_HD NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_vi_A1_H(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F16.<dt> <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_vi_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_vi_A1_S(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F32.<dt> <Sd>, <Sm>\n");
	__dec_assert(0, "VCVT_vi_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_vi_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F64.<dt> <Dd>, <Sm>\n");
	__dec_assert(0, "VCVT_vi_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_xs_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt1>.<dt2> <Dd>, <Dm>, #<fbits>\n");
	__dec_assert(0, "VCVT_xs_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_xs_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt1>.<dt2> <Qd>, <Qm>, #<fbits>\n");
	__dec_assert(0, "VCVT_xs_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_toxv_A1_H(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F16.<dt> <Sdm>, <Sdm>, #<fbits>\n");
	__dec_assert(0, "VCVT_toxv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_xv_A1_H(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt>.F16 <Sdm>, <Sdm>, #<fbits>\n");
	__dec_assert(0, "VCVT_xv_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_toxv_A1_S(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F32.<dt> <Sdm>, <Sdm>, #<fbits>\n");
	__dec_assert(0, "VCVT_toxv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_xv_A1_S(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt>.F32 <Sdm>, <Sdm>, #<fbits>\n");
	__dec_assert(0, "VCVT_xv_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_toxv_A1_D(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.F64.<dt> <Ddm>, <Ddm>, #<fbits>\n");
	__dec_assert(0, "VCVT_toxv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VCVT_xv_A1_D(
	u8 imm4,
	u8 i,
	u8 sx,
	u8 Vd,
	u8 U,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VCVT.<dt>.F64 <Ddm>, <Ddm>, #<fbits>\n");
	__dec_assert(0, "VCVT_xv_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDIV_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VDIV.F16 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VDIV_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDIV_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VDIV.F32 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VDIV_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDIV_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VDIV.F64 {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VDIV_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDOT_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDOT.BF16 <Dd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VDOT_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDOT_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDOT.BF16 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VDOT_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDOT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDOT.BF16 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VDOT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDOT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDOT.BF16 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VDOT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDUP_r_A1(
	u8 E,
	u8 D,
	u8 Rt,
	u8 Vd,
	u8 Q,
	u8 B,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VDUP.<size> <Qd>, r%u\n", Rt);
	__dec_assert(0, "VDUP_r_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDUP_s_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm4,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDUP.<size> <Dd>, <Dm[x]>\n");
	__dec_assert(0, "VDUP_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VDUP_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm4,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VDUP.<size> <Qd>, <Dm[x]>\n");
	__dec_assert(0, "VDUP_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VEOR_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VEOR {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VEOR_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VEOR_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VEOR {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VEOR_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VEXT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 imm4,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VEXT.8 {<Dd>,} <Dn>, <Dm>, #<imm>\n");
	__dec_assert(0, "VEXT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VEXT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 imm4,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VEXT.8 {<Qd>,} <Qn>, <Qm>, #<imm>\n");
	__dec_assert(0, "VEXT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_bfs_A1_Q(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMA <bt>.BF16 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VFMA_bfs_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_bf_A1_Q(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMA <bt>.BF16 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VFMA_bf_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMAL_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMAL.F16 <Dd>, <Sn>, <Sm> [<index> ]\n");
	__dec_assert(0, "VFMAL_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMAL_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMAL.F16 <Qd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VFMAL_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMAL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMAL.F16 <Dd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMAL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMAL_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMAL.F16 <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMAL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMA.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMA.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VFMA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMA.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMA_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMA.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMA_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMA_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMA.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMA_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMSL_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMSL.F16 <Dd>, <Sn>, <Sm> [<index> ]\n");
	__dec_assert(0, "VFMSL_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMSL_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMSL.F16 <Qd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VFMSL_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMSL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMSL.F16 <Dd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMSL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMSL_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMSL.F16 <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMSL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMS.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMS_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VFMS.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VFMS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMS_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMS.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMS_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMS_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMS.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFMS_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFMS_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFMS.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFMS_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMA_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMA.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFNMA_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMA_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMA.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFNMA_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMA_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMA.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFNMA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMS_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMS.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFNMS_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMS_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMS.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VFNMS_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VFNMS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VFNMS.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VFNMS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VHADD_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VHADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VHADD_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VHADD_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VHADD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VHADD_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VHSUB_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VHSUB.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VHSUB_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VHSUB_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VHSUB.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VHSUB_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VINS_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VINS.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VINS_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VJCVT_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VJCVT.S32.F64 <Sd>, <Dm>\n");
	__dec_assert(0, "VJCVT_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD1_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD1_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD1_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD1_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD1_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD1_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD1_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD1_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD1_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_a_A1_nowb(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: <align>} ]\n", size, Rn);
	__dec_assert(0, "VLD1_a_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_a_A1_posti(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: <align>} ]!\n", size, Rn);
	__dec_assert(0, "VLD1_a_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_a_A1_postr(
	u8 Rm,
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: <align>} ], r%u\n", size, Rn, Rm);
	__dec_assert(0, "VLD1_a_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A1_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A1_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD1_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A2_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A2_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A2_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD1_m_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A3_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A3_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A3_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD1_m_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A4_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A4_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A4_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD1_m_A4_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD1_m_A4_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD1_m_A4_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD2_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD2_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD2_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD2_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD2_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD2_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD2_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD2_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD2_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_a_A1_nowb(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: <align>} ]\n", size, Rn);
	__dec_assert(0, "VLD2_a_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_a_A1_posti(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: <align>} ]!\n", size, Rn);
	__dec_assert(0, "VLD2_a_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_a_A1_postr(
	u8 Rm,
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: <align>} ], r%u\n", size, Rn, Rm);
	__dec_assert(0, "VLD2_a_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD2_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD2_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD2_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A2_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD2_m_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A2_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD2_m_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD2_m_A2_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD2.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD2_m_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VLD3_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VLD3_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD3_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VLD3_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VLD3_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD3_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VLD3_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VLD3_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD3_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_a_A1_nowb(
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u ]\n", size, Rn);
	__dec_assert(0, "VLD3_a_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_a_A1_posti(
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u ]!\n", size, Rn);
	__dec_assert(0, "VLD3_a_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_a_A1_postr(
	u8 Rm,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u ], r%u\n", size, Rn, Rm);
	__dec_assert(0, "VLD3_a_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD3_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD3_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD3_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD3.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD3_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD4_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD4_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD4_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD4_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD4_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD4_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VLD4_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VLD4_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VLD4_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_a_A1_nowb(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: <align>} ]\n", size, Rn);
	__dec_assert(0, "VLD4_a_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_a_A1_posti(
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: <align>} ]!\n", size, Rn);
	__dec_assert(0, "VLD4_a_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_a_A1_postr(
	u8 Rm,
	u8 a,
	u8 T,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: <align>} ], r%u\n", size, Rn, Rm);
	__dec_assert(0, "VLD4_a_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VLD4_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VLD4_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLD4_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VLD4.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VLD4_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDMDB_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDMDB {.<size>} r%u !, <dreglist>\n", Rn);
	__dec_assert(0, "VLDMDB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDM_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDM {.<size>} r%u {!}, <dreglist>\n", Rn);
	__dec_assert(0, "VLDM_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDMDB_A2(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDMDB {.<size>} r%u !, <sreglist>\n", Rn);
	__dec_assert(0, "VLDMDB_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDM_A2(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDM {.<size>} r%u {!}, <sreglist>\n", Rn);
	__dec_assert(0, "VLDM_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_A1_H(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR.16 <Sd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VLDR_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_A1_S(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR {.32} <Sd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VLDR_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_A1_D(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR {.64} <Dd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VLDR_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_l_A1_H(
	u8 imm8,
	u8 Vd,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR.16 <Sd>, <label>\n");
	__dec_assert(0, "VLDR_l_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_l_A1_S(
	u8 imm8,
	u8 Vd,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR {.32} <Sd>, <label>\n");
	__dec_assert(0, "VLDR_l_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VLDR_l_A1_D(
	u8 imm8,
	u8 Vd,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VLDR {.64} <Dd>, <label>\n");
	__dec_assert(0, "VLDR_l_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAX_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAX.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMAX_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAX_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAX.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMAX_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAX_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMAX.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMAX_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAX_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMAX.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMAX_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAXNM_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAXNM.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMAXNM_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAXNM_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAXNM.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMAXNM_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAXNM_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAXNM.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMAXNM_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAXNM_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAXNM.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMAXNM_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMAXNM_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMAXNM.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMAXNM_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMIN_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMIN.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMIN_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMIN_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMIN.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMIN_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMIN_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMIN.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMIN_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMIN_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMIN.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMIN_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMINNM_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMINNM.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMINNM_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMINNM_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMINNM.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMINNM_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMINNM_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMINNM.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMINNM_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMINNM_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMINNM.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMINNM_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMINNM_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMINNM.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMINNM_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLA_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMLA_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_f_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLA.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMLA_f_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_f_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLA.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMLA_f_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_f_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLA.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLA_f_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLA_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMLA_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLAL_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMLAL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLAL_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLAL_s_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMLAL.<dt> <Qd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VMLAL_s_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Dd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VMLA_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLA_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLA.<dt> <Qd>, <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VMLA_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLS_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMLS_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_f_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLS.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMLS_f_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_f_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLS.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VMLS_f_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_f_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMLS.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLS_f_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLS_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMLS_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLSL_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMLSL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMLSL_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLSL_s_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMLSL.<dt> <Qd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VMLSL_s_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Dd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VMLS_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMLS_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMLS.<dt> <Qd>, <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VMLS_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMMLA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMMLA.BF16 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VMMLA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_tod_A1(
	u8 Vm,
	u8 M,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV <Dm>, r%u, r%u\n", Rt, Rt2);
	__dec_assert(0, "VMOV_tod_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_d_A1(
	u8 Vm,
	u8 M,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV r%u, r%u, <Dm>\n", Rt, Rt2);
	__dec_assert(0, "VMOV_d_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_toh_A1(
	u8 N,
	u8 Rt,
	u8 Vn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F16 <Sn>, r%u\n", Rt);
	__dec_assert(0, "VMOV_toh_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_h_A1(
	u8 N,
	u8 Rt,
	u8 Vn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F16 r%u, <Sn>\n", Rt);
	__dec_assert(0, "VMOV_h_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A1_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I32 <Dd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A1_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I32 <Qd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A2_H(
	u8 imm4L,
	u8 Vd,
	u8 imm4H,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F16 <Sd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A2_S(
	u8 imm4L,
	u8 Vd,
	u8 imm4H,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F32 <Sd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A2_D(
	u8 imm4L,
	u8 Vd,
	u8 imm4H,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F64 <Dd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A3_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I16 <Dd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A3_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A3_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I16 <Qd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A3_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A4_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.<dt> <Dd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A4_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A4_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.<dt> <Qd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A4_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A5_D(
	u8 imm4,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I64 <Dd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A5_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_i_A5_Q(
	u8 imm4,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMOV.I64 <Qd>, #<imm>\n");
	__dec_assert(0, "VMOV_i_A5_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOVL_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm3H,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMOVL.<dt> <Qd>, <Dm>\n");
	__dec_assert(0, "VMOVL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOVN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMOVN.<dt> <Dd>, <Qm>\n");
	__dec_assert(0, "VMOVN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_rs_A1(
	u8 opc2,
	u8 D,
	u8 Rt,
	u8 Vd,
	u8 opc1,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV {.<size>} <Dd[x]>, r%u\n", Rt);
	__dec_assert(0, "VMOV_rs_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_r_A2_S(
	u8 Vm,
	u8 M,
	u8 size,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VMOV_r_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_r_A2_D(
	u8 Vm,
	u8 M,
	u8 size,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VMOV_r_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_sr_A1(
	u8 opc2,
	u8 N,
	u8 Rt,
	u8 Vn,
	u8 opc1,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV {.<dt>} r%u, <Dn[x]>\n", Rt);
	__dec_assert(0, "VMOV_sr_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_toss_A1(
	u8 Vm,
	u8 M,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV <Sm>, <Sm1>, r%u, r%u\n", Rt, Rt2);
	__dec_assert(0, "VMOV_toss_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_ss_A1(
	u8 Vm,
	u8 M,
	u8 Rt,
	u8 Rt2,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV r%u, r%u, <Sm>, <Sm1>\n", Rt, Rt2);
	__dec_assert(0, "VMOV_ss_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_tos_A1(
	u8 N,
	u8 Rt,
	u8 Vn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV <Sn>, r%u\n", Rt);
	__dec_assert(0, "VMOV_tos_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOV_s_A1(
	u8 N,
	u8 Rt,
	u8 Vn,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMOV r%u, <Sn>\n", Rt);
	__dec_assert(0, "VMOV_s_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMOVX_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMOVX.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VMOVX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMRS_A1_AS(
	u8 Rt,
	u8 reg,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMRS r%u, <spec_reg>\n", Rt);
	__dec_assert(0, "VMRS_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMSR_A1_AS(
	u8 Rt,
	u8 reg,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMSR <spec_reg>, r%u\n", Rt);
	__dec_assert(0, "VMSR_A1_AS NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMUL_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMUL_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_f_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMUL.F16 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VMUL_f_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_f_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMUL.F32 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VMUL_f_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_f_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VMUL.F64 {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMUL_f_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 op
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VMUL_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 op
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VMUL_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMULL_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 op,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMULL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VMULL_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMULL_s_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VMULL.<dt> <Qd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VMULL_s_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Dd>,} <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VMUL_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMUL_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 F,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMUL.<dt> {<Qd>,} <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VMUL_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A1_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I32 <Dd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A1_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I32 <Qd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A2_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I16 <Dd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A2_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I16 <Qd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A3_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I32 <Dd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A3_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_i_A3_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VMVN.I32 <Qd>, #<imm>\n");
	__dec_assert(0, "VMVN_i_A3_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_r_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMVN {.<dt>} <Dd>, <Dm>\n");
	__dec_assert(0, "VMVN_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VMVN_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VMVN {.<dt>} <Qd>, <Qm>\n");
	__dec_assert(0, "VMVN_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNEG_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VNEG.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VNEG_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNEG_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VNEG.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VNEG_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNEG_A2_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNEG.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VNEG_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNEG_A2_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNEG.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VNEG_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNEG_A2_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNEG.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VNEG_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLA_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLA.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VNMLA_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLA_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLA.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VNMLA_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLA_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLA.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VNMLA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLS_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLS.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VNMLS_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLS_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLS.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VNMLS_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMLS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMLS.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VNMLS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMUL_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMUL.F16 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VNMUL_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMUL_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMUL.F32 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VNMUL_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VNMUL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VNMUL.F64 {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VNMUL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORN_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VORN {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VORN_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORN_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VORN {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VORN_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_i_A1_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VORR.I32 {<Dd>,} <Dd>, #<imm>\n");
	__dec_assert(0, "VORR_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_i_A1_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VORR.I32 {<Qd>,} <Qd>, #<imm>\n");
	__dec_assert(0, "VORR_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_i_A2_D(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VORR.I16 {<Dd>,} <Dd>, #<imm>\n");
	__dec_assert(0, "VORR_i_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_i_A2_Q(
	u8 imm4,
	u8 cmode,
	u8 Vd,
	u8 imm3,
	u8 D,
	u8 i
	__dec_args_sig
)
{
	__dec_debug("VORR.I16 {<Qd>,} <Qd>, #<imm>\n");
	__dec_assert(0, "VORR_i_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VORR {.<dt>} {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VORR_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VORR_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VORR {.<dt>} {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VORR_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADAL_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADAL.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VPADAL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADAL_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADAL.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VPADAL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADD_f_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPADD_f_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADD_i_A1(
	u8 Vm,
	u8 M,
	u8 Q,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPADD_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADDL_A1_D(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADDL.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VPADDL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPADDL_A1_Q(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPADDL.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VPADDL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPMAX_f_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPMAX.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPMAX_f_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPMAX_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VPMAX.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPMAX_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPMIN_f_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VPMIN.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPMIN_f_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VPMIN_i_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VPMIN.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VPMIN_i_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQABS_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQABS.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VQABS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQABS_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQABS.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VQABS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQADD_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VQADD_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQADD_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQADD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VQADD_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMLAL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMLAL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VQDMLAL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMLAL_A2(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMLAL.<dt> <Qd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VQDMLAL_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMLSL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMLSL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VQDMLSL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMLSL_A2(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMLSL.<dt> <Qd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VQDMLSL_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULH_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULH.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VQDMULH_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULH_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULH.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VQDMULH_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULH_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULH.<dt> {<Dd>,} <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VQDMULH_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULH_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULH.<dt> {<Qd>,} <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VQDMULH_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VQDMULL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQDMULL_A2(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQDMULL.<dt> <Qd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VQDMULL_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQMOVN_A1(
	u8 Vm,
	u8 M,
	u8 op,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQMOVN.<dt> <Dd>, <Qm>\n");
	__dec_assert(0, "VQMOVN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQMOVUN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQMOVUN.<dt> <Dd>, <Qm>\n");
	__dec_assert(0, "VQMOVUN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQNEG_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQNEG.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VQNEG_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQNEG_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQNEG.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VQNEG_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLAH_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLAH.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VQRDMLAH_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLAH_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLAH.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VQRDMLAH_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLAH_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLAH.<dt> <Dd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMLAH_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLAH_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLAH.<dt> <Qd>, <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMLAH_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLSH_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLSH.<dt> <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VQRDMLSH_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLSH_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLSH.<dt> <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VQRDMLSH_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLSH_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLSH.<dt> <Dd>, <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMLSH_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMLSH_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMLSH.<dt> <Qd>, <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMLSH_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMULH_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMULH.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VQRDMULH_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMULH_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMULH.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VQRDMULH_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMULH_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMULH.<dt> {<Dd>,} <Dn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMULH_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRDMULH_A2_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRDMULH.<dt> {<Qd>,} <Qn>, <Dm[x]>\n");
	__dec_assert(0, "VQRDMULH_A2_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRSHL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQRSHL.<dt> {<Dd>,} <Dm>, <Dn>\n");
	__dec_assert(0, "VQRSHL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRSHL_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQRSHL.<dt> {<Qd>,} <Qm>, <Qn>\n");
	__dec_assert(0, "VQRSHL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRSHRN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQRSHRN.<type> <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VQRSHRN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQRSHRUN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQRSHRUN.<type> <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VQRSHRUN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHL_i_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSHL.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VQSHL_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHLU_i_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQSHLU.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VQSHLU_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHL_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSHL.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VQSHL_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHLU_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQSHLU.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VQSHLU_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHL_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSHL.<dt> {<Dd>,} <Dm>, <Dn>\n");
	__dec_assert(0, "VQSHL_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHL_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSHL.<dt> {<Qd>,} <Qm>, <Qn>\n");
	__dec_assert(0, "VQSHL_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHRN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSHRN.<type> <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VQSHRN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSHRUN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VQSHRUN.<type> <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VQSHRUN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSUB_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSUB.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VQSUB_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VQSUB_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VQSUB.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VQSUB_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRADDHN_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRADDHN.<dt> <Dd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VRADDHN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRECPE_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRECPE.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRECPE_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRECPE_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRECPE.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRECPE_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRECPS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRECPS.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VRECPS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRECPS_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRECPS.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VRECPS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV16_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV16.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VREV16_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV16_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV16.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VREV16_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV32_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV32.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VREV32_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV32_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV32.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VREV32_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV64_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV64.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VREV64_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VREV64_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VREV64.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VREV64_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRHADD_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRHADD.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VRHADD_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRHADD_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRHADD.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VRHADD_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTA_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTA.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTA_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTA_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTA.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTA_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTA_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTA.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTA_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTA_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTA.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTA_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTA_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTA.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTA_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTM_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTM.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTM_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTM_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTM.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTM_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTM_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTM.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTM_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTM_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTM.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTM_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTM_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTM.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTM_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTN_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTN.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTN_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTN_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTN.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTN_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTN_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTN.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTN_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTN_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTN.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTN_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTN_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTN.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTN_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTP_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTP.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTP_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTP_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTP.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTP_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTP_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTP.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTP_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTP_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTP.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTP_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTP_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTP.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTP_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTR_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTR.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTR_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTR_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTR.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTR_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTR_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTR.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTR_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTX_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTX.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTX_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTX_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTX.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTX_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTX_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTX.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTX_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTX_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTX.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTX_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTX_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTX.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTX_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTZ_asimd_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTZ.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTZ_asimd_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTZ_asimd_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRINTZ.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRINTZ_asimd_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTZ_vfp_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTZ.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTZ_vfp_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTZ_vfp_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTZ.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VRINTZ_vfp_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRINTZ_vfp_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VRINTZ.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VRINTZ_vfp_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSHL_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSHL.<dt> {<Dd>,} <Dm>, <Dn>\n");
	__dec_assert(0, "VRSHL_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSHL_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSHL.<dt> {<Qd>,} <Qm>, <Qn>\n");
	__dec_assert(0, "VRSHL_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSHRN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSHRN.I <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VRSHRN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSHR_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSHR.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VRSHR_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSHR_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSHR.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VRSHR_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSQRTE_A1_D(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSQRTE.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VRSQRTE_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSQRTE_A1_Q(
	u8 Vm,
	u8 M,
	u8 F,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSQRTE.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VRSQRTE_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSQRTS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSQRTS.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VRSQRTS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSQRTS_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSQRTS.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VRSQRTS_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSRA_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSRA.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VRSRA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSRA_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VRSRA.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VRSRA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VRSUBHN_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VRSUBHN.<dt> <Dd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VRSUBHN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSDOT_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSDOT.S8 <Dd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VSDOT_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSDOT_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSDOT.S8 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VSDOT_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSDOT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSDOT.S8 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSDOT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSDOT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSDOT.S8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VSDOT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELEQ_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELEQ.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELEQ_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELEQ_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELEQ.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELEQ_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELEQ_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELEQ.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSELEQ_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGE_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGE.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELGE_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGE_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGE.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELGE_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGE_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGE.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSELGE_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGT_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGT.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELGT_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGT_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGT.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELGT_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELGT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELGT.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSELGT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELVS_A1_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELVS.F16 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELVS_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELVS_A1_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELVS.F32 <Sd>, <Sn>, <Sm>\n");
	__dec_assert(0, "VSELVS_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSELVS_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSELVS.F64 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSELVS_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHL_i_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSHL.I <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VSHL_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHL_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSHL.I <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VSHL_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHLL_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSHLL.<type> <size> <Qd>, <Dm>, #<imm>\n");
	__dec_assert(0, "VSHLL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHLL_A2(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSHLL.<type> %u <Qd>, <Dm>, #<imm>\n", size);
	__dec_assert(0, "VSHLL_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHL_r_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSHL.<dt> {<Dd>,} <Dm>, <Dn>\n");
	__dec_assert(0, "VSHL_r_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHL_r_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSHL.<dt> {<Qd>,} <Qm>, <Qn>\n");
	__dec_assert(0, "VSHL_r_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHRN_A1(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSHRN.I <size> <Dd>, <Qm>, #<imm>\n");
	__dec_assert(0, "VSHRN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHR_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSHR.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VSHR_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSHR_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSHR.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VSHR_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSLI_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSLI.<size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VSLI_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSLI_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSLI.<size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VSLI_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSMMLA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSMMLA.S8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VSMMLA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSQRT_A1_H(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSQRT.F16 <Sd>, <Sm>\n");
	__dec_assert(0, "VSQRT_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSQRT_A1_S(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSQRT.F32 <Sd>, <Sm>\n");
	__dec_assert(0, "VSQRT_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSQRT_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSQRT.F64 <Dd>, <Dm>\n");
	__dec_assert(0, "VSQRT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSRA_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSRA.<type> <size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VSRA_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSRA_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSRA.<type> <size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VSRA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSRI_A1_D(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSRI.<size> {<Dd>,} <Dm>, #<imm>\n");
	__dec_assert(0, "VSRI_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSRI_A1_Q(
	u8 Vm,
	u8 M,
	u8 L,
	u8 Vd,
	u8 imm6,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSRI.<size> {<Qd>,} <Qm>, #<imm>\n");
	__dec_assert(0, "VSRI_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST1_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST1_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST1_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST1_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST1_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST1_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST1_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST1_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST1_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A1_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A1_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST1_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A2_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A2_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A2_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST1_m_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A3_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A3_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A3_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST1_m_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A4_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A4_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A4_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST1_m_A4_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST1_m_A4_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST1.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST1_m_A4_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST2_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST2_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST2_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST2_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST2_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST2_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST2_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST2_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST2_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST2_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST2_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST2_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A2_nowb(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST2_m_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A2_posti(
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST2_m_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST2_m_A2_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST2.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST2_m_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VST3_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VST3_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST3_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VST3_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VST3_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST3_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]\n", Rn);
	__dec_assert(0, "VST3_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ]!\n", Rn);
	__dec_assert(0, "VST3_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.<size> <list>, [r%u ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST3_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST3_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST3_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST3_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST3.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST3_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A1_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST4_1_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A1_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST4_1_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A1_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST4_1_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A2_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST4_1_A2_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A2_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST4_1_A2_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A2_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST4_1_A2_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A3_nowb(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]\n", Rn);
	__dec_assert(0, "VST4_1_A3_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A3_posti(
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ]!\n", Rn);
	__dec_assert(0, "VST4_1_A3_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_1_A3_postr(
	u8 Rm,
	u8 index_align,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.<size> <list>, [r%u {: <align>} ], r%u\n", Rn, Rm);
	__dec_assert(0, "VST4_1_A3_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_m_A1_nowb(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.%u <list>, [r%u {: %u} ]\n", size, Rn, align);
	__dec_assert(0, "VST4_m_A1_nowb NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_m_A1_posti(
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.%u <list>, [r%u {: %u} ]!\n", size, Rn, align);
	__dec_assert(0, "VST4_m_A1_posti NOT IMPLEMENTED\n");
}

static void arm_aarch32_VST4_m_A1_postr(
	u8 Rm,
	u8 align,
	u8 size,
	u8 itype,
	u8 Vd,
	u8 Rn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VST4.%u <list>, [r%u {: %u} ], r%u\n", size, Rn, align, Rm);
	__dec_assert(0, "VST4_m_A1_postr NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTMDB_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTMDB {.<size>} r%u !, <dreglist>\n", Rn);
	__dec_assert(0, "VSTMDB_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTM_A1(
	u8 imm8<7:1>,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTM {.<size>} r%u {!}, <dreglist>\n", Rn);
	__dec_assert(0, "VSTM_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTMDB_A2(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTMDB {.<size>} r%u !, <sreglist>\n", Rn);
	__dec_assert(0, "VSTMDB_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTM_A2(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 W,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTM {.<size>} r%u {!}, <sreglist>\n", Rn);
	__dec_assert(0, "VSTM_A2 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTR_A1_H(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTR.16 <Sd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VSTR_A1_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTR_A1_S(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTR {.32} <Sd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VSTR_A1_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSTR_A1_D(
	u8 imm8,
	u8 Vd,
	u8 Rn,
	u8 D,
	u8 U,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSTR {.64} <Dd>, [r%u {, #{+/-} <imm>} ]\n", Rn);
	__dec_assert(0, "VSTR_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_f_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUB.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VSUB_f_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_f_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 sz,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUB.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VSUB_f_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_f_A2_H(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSUB.F16 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VSUB_f_A2_H NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_f_A2_S(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSUB.F32 {<Sd>,} <Sn>, <Sm>\n");
	__dec_assert(0, "VSUB_f_A2_S NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_f_A2_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D,
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("VSUB.F64 {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VSUB_f_A2_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUBHN_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUBHN.<dt> <Dd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VSUBHN_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_i_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUB.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VSUB_i_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUB_i_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUB.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VSUB_i_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUBL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSUBL.<dt> <Qd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VSUBL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUBW_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D,
	u8 U
	__dec_args_sig
)
{
	__dec_debug("VSUBW.<dt> {<Qd>,} <Qn>, <Dm>\n");
	__dec_assert(0, "VSUBW_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUDOT_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUDOT.U8 <Dd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VSUDOT_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSUDOT_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSUDOT.U8 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VSUDOT_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSWP_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSWP {.<dt>} <Dd>, <Dm>\n");
	__dec_assert(0, "VSWP_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VSWP_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VSWP {.<dt>} <Qd>, <Qm>\n");
	__dec_assert(0, "VSWP_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTBL_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 len,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTBL.8 <Dd>, <list>, <Dm>\n");
	__dec_assert(0, "VTBL_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTBX_A1(
	u8 Vm,
	u8 M,
	u8 N,
	u8 len,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTBX.8 <Dd>, <list>, <Dm>\n");
	__dec_assert(0, "VTBX_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTRN_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTRN.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VTRN_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTRN_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTRN.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VTRN_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTST_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTST.<dt> {<Dd>,} <Dn>, <Dm>\n");
	__dec_assert(0, "VTST_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VTST_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VTST.<dt> {<Qd>,} <Qn>, <Qm>\n");
	__dec_assert(0, "VTST_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUDOT_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUDOT.U8 <Dd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VUDOT_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUDOT_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUDOT.U8 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VUDOT_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUDOT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUDOT.U8 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VUDOT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUDOT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUDOT.U8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VUDOT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUMMLA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUMMLA.U8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VUMMLA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUSDOT_s_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUSDOT.S8 <Dd>, <Dn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VUSDOT_s_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUSDOT_s_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUSDOT.S8 <Qd>, <Qn>, <Dm> [<index> ]\n");
	__dec_assert(0, "VUSDOT_s_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUSDOT_A1_D(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUSDOT.S8 <Dd>, <Dn>, <Dm>\n");
	__dec_assert(0, "VUSDOT_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUSDOT_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUSDOT.S8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VUSDOT_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUSMMLA_A1_Q(
	u8 Vm,
	u8 M,
	u8 N,
	u8 Vd,
	u8 Vn,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUSMMLA.S8 <Qd>, <Qn>, <Qm>\n");
	__dec_assert(0, "VUSMMLA_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUZP_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUZP.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VUZP_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VUZP_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VUZP.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VUZP_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_VZIP_A1_D(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VZIP.<dt> <Dd>, <Dm>\n");
	__dec_assert(0, "VZIP_A1_D NOT IMPLEMENTED\n");
}

static void arm_aarch32_VZIP_A1_Q(
	u8 Vm,
	u8 M,
	u8 Vd,
	u8 size,
	u8 D
	__dec_args_sig
)
{
	__dec_debug("VZIP.<dt> <Qd>, <Qm>\n");
	__dec_assert(0, "VZIP_A1_Q NOT IMPLEMENTED\n");
}

static void arm_aarch32_WFE_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("WFE\n");
	__dec_assert(0, "WFE_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_WFI_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("WFI\n");
	__dec_assert(0, "WFI_A1 NOT IMPLEMENTED\n");
}

static void arm_aarch32_YIELD_A1(
	u8 cond
	__dec_args_sig
)
{
	__dec_debug("YIELD\n");
	__dec_assert(0, "YIELD_A1 NOT IMPLEMENTED\n");
}

#endif /* __dec_args_sig */


/***********************
 * Instruction decoder *
 ***********************/

#ifdef __dec_args_sig
static u8 arm_aarch32_decode(
	u32 inst
	__dec_args_sig
)
{
	if (!(inst & ((u32) 1 << (26)))) {
		if (!(inst & ((u32) 1 << (25)))) {
			if (!(inst & ((u32) 1 << (20)))) {
				if (!(inst & ((u32) 1 << (27)))) {
					if (!(inst & ((u32) 1 << (21)))) {
						if (!(inst & ((u32) 1 << (24)))) {
							if (!(inst & ((u32) 1 << (22)))) {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_AND_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_AND_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
											arm_aarch32_ADD_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf00d0060)) & (0xf00f0fe0))) {
											arm_aarch32_ADD_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0060)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ADD_SP_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0000)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ADD_SP_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
												arm_aarch32_AND_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_ADD_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (23)))) {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_MUL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
														arm_aarch32_UMULL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRD_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_STRH_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_STRD_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
											arm_aarch32_SUB_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf00d0060)) & (0xf00f0fe0))) {
											arm_aarch32_SUB_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0060)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SUB_SP_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0000)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_SUB_SP_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SBC_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_SBC_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
												arm_aarch32_SUB_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_SBC_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (23)))) {
														arm_aarch32_UMAAL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
												else {
														arm_aarch32_SMULL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
											}
											else {
													arm_aarch32_LDRD_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
													arm_aarch32_STRH_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
											else {
													arm_aarch32_STRD_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
										}
									}
								}
							}
						}
						else {
							if ((!((inst ^ (0xf0010000)) & (0xf0cffdff)))) {
								arm_aarch32_SETEND_A1((u32) ((inst >> (9)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000)) & (0x8f0fff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_MRS_A1_AS((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0020000)) & (0xf0cffe20)))) {
								arm_aarch32_CPS_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf00c0000)) & (0xf0cffe20)))) {
								arm_aarch32_CPSID_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf00e0000)) & (0xf0cffe20)))) {
								arm_aarch32_CPSID_A1_ASM((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0080000)) & (0xf0cffe20)))) {
								arm_aarch32_CPSIE_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf00a0000)) & (0xf0cffe20)))) {
								arm_aarch32_CPSIE_A1_ASM((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xc0fc90)) & (0xc0fff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STLB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x80fc90)) & (0xc0fff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x200)) & (0x800eff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_MRS_br_A1_AS((u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc00060)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_BIC_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc00000)) & (0xc00010))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
								arm_aarch32_BIC_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x240)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_CRC32CB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400240)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_CRC32CW_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x40)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_CRC32B_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400040)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_CRC32W_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x800060)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_ORR_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x800000)) & (0xc00010))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
								arm_aarch32_ORR_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x50)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_QADD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400050)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_QDADD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc00e90)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STLEXB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x800e90)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STLEX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc00f90)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STREXB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x800f90)) & (0xc00ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STREX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000d0)) & (0x4000f0))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
								arm_aarch32_LDRD_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4f00d0)) & (0x4f00f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_LDRD_l_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xd0)) & (0x400ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_LDRD_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0)) & (0x400ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRD_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xb0)) & (0x400ff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRH_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x70)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_HLT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xfff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400070)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_HVC_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xfff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x80)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLABB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLABT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xa0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLATB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xe0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLATT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400080)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLALBB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000c0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLALBT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000a0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLALTB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000e0)) & (0xc000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_SMLALTT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000f0)) & (0x4000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRD_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x4000b0)) & (0x4000f0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRH_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xc00010)) & (0xc00090))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_BIC_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x800010)) & (0xc00090))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_ORR_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}						}
					}
					else {
						if (!(inst & ((u32) 1 << (4)))) {
							if (!(inst & ((u32) 1 << (23)))) {
								if (!(inst & ((u32) 1 << (24)))) {
									if (!(inst & ((u32) 1 << (22)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_EOR_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_EOR_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_RSB_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_RSB_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (7)))) {
												if (!(inst & ((u32) 1 << (9)))) {
													if ((!((inst ^ (0xf000)) & (0xfd00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_MSR_r_A1_AS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0xf000)) & (0xfc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_MSR_br_A1_AS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if (!(inst & ((u32) 1 << (22)))) {
														arm_aarch32_SMLAWB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULBB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xfff00)) & (0x4fff00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_BXJ_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (22)))) {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULWB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULTB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (7)))) {
												if (!(inst & ((u32) 1 << (9)))) {
													if ((!((inst ^ (0x0)) & (0x400d00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_CRC32H_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0x400d00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_CRC32CH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if (!(inst & ((u32) 1 << (22)))) {
														arm_aarch32_SMLAWT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULBT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0x40000e)) & (0x4fff0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_ERET_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (22)))) {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULWT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SMULTT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (22)))) {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ADC_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ADC_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_MOV_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_MOV_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_RSC_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_RSC_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_MVN_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_MVN_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (22)))) {
								if (!(inst & ((u32) 1 << (7)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_EOR_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if (!(inst & ((u32) 1 << (5)))) {
												if (!(inst & ((u32) 1 << (6)))) {
													if ((!((inst ^ (0xfff00)) & (0xfff00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_BX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_QSUB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if (!(inst & ((u32) 1 << (6)))) {
													if ((!((inst ^ (0xfff00)) & (0xfff00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_BLX_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
														arm_aarch32_BKPT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xfff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_ADC_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_MOV_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (24)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x0)) & (0x40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_MLA_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0x40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UMLAL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (8)))) {
													if ((!((inst ^ (0x800e00)) & (0x800e00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_STLEXD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x800e00)) & (0x800e00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_STREXD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRD_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (24)))) {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_STRHT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_STRH_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0x1000000)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_STRD_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (7)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_RSB_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if (!(inst & ((u32) 1 << (5)))) {
												if (!(inst & ((u32) 1 << (6)))) {
													if ((!((inst ^ (0xf0f00)) & (0xf0f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_CLZ_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_QDSUB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if ((!((inst ^ (0x40)) & (0xfff40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMC_A1_AS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_RSC_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_MVN_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (24)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x0)) & (0x40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_MLS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0x40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMLAL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (8)))) {
													if (!(inst & ((u32) 1 << (9)))) {
														if ((!((inst ^ (0x80fc00)) & (0x80fc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_STLH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
													else {
														if ((!((inst ^ (0x800c00)) & (0x800c00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_STLEXH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
												}
												else {
													if ((!((inst ^ (0x800e00)) & (0x800e00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_STREXH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
													arm_aarch32_LDRD_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (24)))) {
													arm_aarch32_STRHT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
											else {
													arm_aarch32_STRH_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}
										}
										else {
											if ((!((inst ^ (0x1000000)) & (0x1000000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_STRD_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
						}
					}
				}
				else {
					if (!(inst & ((u32) 1 << (22)))) {
						if (!(inst & ((u32) 1 << (23)))) {
							if (!(inst & ((u32) 1 << (24)))) {
									arm_aarch32_STMDA_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
							else {
									arm_aarch32_STMDB_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
						}
						else {
							if (!(inst & ((u32) 1 << (24)))) {
									arm_aarch32_STM_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
							else {
									arm_aarch32_STMIB_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
						}
					}
					else {
						if ((!((inst ^ (0xf00d0500)) & (0xf18fffe0)))) {
							arm_aarch32_SRSDA_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0xf10d0500)) & (0xf18fffe0)))) {
							arm_aarch32_SRSDB_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0xf08d0500)) & (0xf18fffe0)))) {
							arm_aarch32_SRSIA_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0xf18d0500)) & (0xf18fffe0)))) {
							arm_aarch32_SRSIB_A1_AS((u32) (inst & ((u32) 0x1f)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0x0)) & (0x200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
							arm_aarch32_STM_u_A1_AS((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}					}
				}
			}
			else {
				if (!(inst & ((u32) 1 << (22)))) {
					if (!(inst & ((u32) 1 << (24)))) {
						if (!(inst & ((u32) 1 << (27)))) {
							if (!(inst & ((u32) 1 << (21)))) {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ANDS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ANDS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
											arm_aarch32_ADDS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf00d0060)) & (0xf00f0fe0))) {
											arm_aarch32_ADDS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0060)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ADDS_SP_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0000)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ADDS_SP_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
												arm_aarch32_ANDS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_ADDS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (23)))) {
													if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_MULS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
														arm_aarch32_UMULLS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSB_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRH_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSH_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_EORS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_EORS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ADCS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ADCS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
												arm_aarch32_EORS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_ADCS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (23)))) {
														arm_aarch32_MLAS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
												else {
														arm_aarch32_UMLALS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSBT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRHT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSHT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (23)))) {
								if ((!((inst ^ (0xf0000a00)) & (0xf000ffff)))) {
									arm_aarch32_RFEDA_A1_AS((u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
								}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
									arm_aarch32_LDMDA_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}							}
							else {
								if ((!((inst ^ (0xf0000a00)) & (0xf000ffff)))) {
									arm_aarch32_RFEIA_A1_AS((u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
								}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
									arm_aarch32_LDM_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (27)))) {
							if (!(inst & ((u32) 1 << (21)))) {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0xf0000000)) & (0xf00ffdef)))) {
											arm_aarch32_SETPAN_A1((u32) ((inst >> (9)) & ((u32) 0x1)) __dec_args_vals);
										}else if ((!((inst ^ (0x60)) & (0xffe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_TST_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_TST_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_ORRS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_ORRS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_TST_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
												arm_aarch32_ORRS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (10)))) {
											if (!(inst & ((u32) 1 << (5)))) {
												if ((!((inst ^ (0x40)) & (0xb40))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSB_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (6)))) {
													if ((!((inst ^ (0x0)) & (0xb00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDRH_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x0)) & (0xb00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDRSH_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
										else {
											if (!(inst & ((u32) 1 << (8)))) {
												if (!(inst & ((u32) 1 << (9)))) {
													if ((!((inst ^ (0x80080f)) & (0x80086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDA_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x80080f)) & (0x80086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDAEX_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if ((!((inst ^ (0x800a0f)) & (0x800a6f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDREX_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x60)) & (0xffe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_TEQ_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_TEQ_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_MOVS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_MOVS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (7)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_TEQ_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_MOVS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if (!(inst & ((u32) 1 << (8)))) {
													if ((!((inst ^ (0x800e0f)) & (0x800e0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDAEXD_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x800e0f)) & (0x800e0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDREXD_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSB_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRH_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_LDRSH_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (23)))) {
								if ((!((inst ^ (0xf0000a00)) & (0xf000ffff)))) {
									arm_aarch32_RFEDB_A1_AS((u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
								}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
									arm_aarch32_LDMDB_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}							}
							else {
								if ((!((inst ^ (0xf0000a00)) & (0xf000ffff)))) {
									arm_aarch32_RFEIB_A1_AS((u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)) __dec_args_vals);
								}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
									arm_aarch32_LDMIB_A1((u32) (inst & ((u32) 0xffff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}							}
						}
					}
				}
				else {
					if (!(inst & ((u32) 1 << (27)))) {
						if (!(inst & ((u32) 1 << (4)))) {
							if (!(inst & ((u32) 1 << (21)))) {
								if (!(inst & ((u32) 1 << (23)))) {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
											arm_aarch32_SUBS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf00d0060)) & (0xf00f0fe0))) {
											arm_aarch32_SUBS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0060)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SUBS_SP_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xd0000)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_SUBS_SP_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xffe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_CMP_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_CMP_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SBCS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_SBCS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_BICS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_BICS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (23)))) {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_RSBS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_RSBS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xffe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_CMN_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_CMN_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (24)))) {
										if ((!((inst ^ (0x60)) & (0xfe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_RSCS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_RSCS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x60)) & (0xf0fe0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_MVNS_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000060)) & (0xf0000fe0))) {
											arm_aarch32_MVNS_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (7)))) {
								if (!(inst & ((u32) 1 << (21)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_SUBS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_CMP_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_SBCS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_BICS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (23)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_RSBS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_CMN_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_RSCS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
											if ((!((inst ^ (0x0)) & (0xf0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_MVNS_rr_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (24)))) {
												if ((!((inst ^ (0x800000)) & (0x800000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMULLS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (8)))) {
													if (!(inst & ((u32) 1 << (9)))) {
														if ((!((inst ^ (0x800c0f)) & (0x800c0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_LDAB_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
													else {
														if ((!((inst ^ (0x800c0f)) & (0x800c0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_LDAEXB_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
												}
												else {
													if ((!((inst ^ (0x800e0f)) & (0x800e0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDREXB_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
										else {
											if (!(inst & ((u32) 1 << (24)))) {
												if ((!((inst ^ (0x800000)) & (0x800000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMLALS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (8)))) {
													if (!(inst & ((u32) 1 << (9)))) {
														if ((!((inst ^ (0x800c0f)) & (0x800c0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_LDAH_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
													else {
														if ((!((inst ^ (0x800c0f)) & (0x800c0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
															arm_aarch32_LDAEXH_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
														} else goto undefined;
													}
												}
												else {
													if ((!((inst ^ (0x800e0f)) & (0x800e0f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_LDREXH_A1((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
									}
									else {
										if ((!((inst ^ (0x1000000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSB_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSB_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x1200000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSB_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf0000)) & (0xf0000))) && ((inst ^ (0xf0800000)) & (0xf1800000))) {
											arm_aarch32_LDRSB_l_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x200000)) & (0x1200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_LDRSBT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if ((!((inst ^ (0x1000000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRH_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRH_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x1200000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRH_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf0000)) & (0xf0000))) && ((inst ^ (0xf0800000)) & (0xf1800000))) {
											arm_aarch32_LDRH_l_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x200000)) & (0x1200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_LDRHT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x1000000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSH_i_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x0)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSH_i_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x1200000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_LDRSH_i_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf0000)) & (0xf0000))) && ((inst ^ (0xf0800000)) & (0xf1800000))) {
											arm_aarch32_LDRSH_l_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x200000)) & (0x1200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_LDRSHT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (15)))) {
							if ((!((inst ^ (0x0)) & (0x200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_LDM_u_A1_AS((u32) (inst & ((u32) 0x7fff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							} else goto undefined;
						}
						else {
								arm_aarch32_LDM_e_A1_AS((u32) (inst & ((u32) 0x7fff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}
					}
				}
			}
		}
		else {
			if (!(inst & ((u32) 1 << (27)))) {
				if (!(inst & ((u32) 1 << (23)))) {
					if ((!((inst ^ (0x120f016)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_CLRBHB_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f014)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_CSDB_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f010)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ESB_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f000)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_NOP_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f005)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SEVL_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f004)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SEV_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f012)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_TSB_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f002)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_WFE_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f003)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_WFI_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f001)) & (0x17fffff))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_YIELD_A1((u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x120f0f0)) & (0x17ffff0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_DBG_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x100f000)) & (0x100f000))) && ((inst ^ (0xf0000000)) & (0xf07c0000))) {
						arm_aarch32_MSR_i_A1_AS((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000110)) & (0xf1300f50)))) {
						arm_aarch32_VAND_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000150)) & (0xf1300f50)))) {
						arm_aarch32_VAND_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0100110)) & (0xf1300f50)))) {
						arm_aarch32_VBIC_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0100150)) & (0xf1300f50)))) {
						arm_aarch32_VBIC_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300110)) & (0xf1300f50)))) {
						arm_aarch32_VBIF_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300150)) & (0xf1300f50)))) {
						arm_aarch32_VBIF_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200110)) & (0xf1300f50)))) {
						arm_aarch32_VBIT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200150)) & (0xf1300f50)))) {
						arm_aarch32_VBIT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1100110)) & (0xf1300f50)))) {
						arm_aarch32_VBSL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1100150)) & (0xf1300f50)))) {
						arm_aarch32_VBSL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000110)) & (0xf1300f50)))) {
						arm_aarch32_VEOR_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000150)) & (0xf1300f50)))) {
						arm_aarch32_VEOR_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0300110)) & (0xf1300f50)))) {
						arm_aarch32_VORN_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0300150)) & (0xf1300f50)))) {
						arm_aarch32_VORN_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200110)) & (0xf1300f50)))) {
						arm_aarch32_VORR_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200150)) & (0xf1300f50)))) {
						arm_aarch32_VORR_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x4f0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADR_A2((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1700000)) & (0x170f000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_CMN_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1500000)) & (0x170f000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_CMP_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA1C_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA1M_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0100c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA1P_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0300c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA1SU0_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1100c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA256H2_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA256H_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200c00)) & (0xf1300f10)))) {
						arm_aarch32_SHA256SU1_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x500000)) & (0x1700000))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
						arm_aarch32_SUBS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x4d0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SUB_SP_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x5d0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SUBS_SP_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1300000)) & (0x170f000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_TEQ_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1100000)) & (0x170f000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_TST_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200d00)) & (0xf1200f50)))) {
						arm_aarch32_VABD_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200d40)) & (0xf1200f50)))) {
						arm_aarch32_VABD_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000e10)) & (0xf1200f50)))) {
						arm_aarch32_VACGE_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000e50)) & (0xf1200f50)))) {
						arm_aarch32_VACGE_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200e10)) & (0xf1200f50)))) {
						arm_aarch32_VACGT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200e50)) & (0xf1200f50)))) {
						arm_aarch32_VACGT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d00)) & (0xf1200f50)))) {
						arm_aarch32_VADD_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d40)) & (0xf1200f50)))) {
						arm_aarch32_VADD_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000e00)) & (0xf1200f50)))) {
						arm_aarch32_VCEQ_r_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000e40)) & (0xf1200f50)))) {
						arm_aarch32_VCEQ_r_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000e00)) & (0xf1200f50)))) {
						arm_aarch32_VCGE_r_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000e40)) & (0xf1200f50)))) {
						arm_aarch32_VCGE_r_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200e00)) & (0xf1200f50)))) {
						arm_aarch32_VCGT_r_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200e40)) & (0xf1200f50)))) {
						arm_aarch32_VCGT_r_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c10)) & (0xf1200f50)))) {
						arm_aarch32_VFMA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c50)) & (0xf1200f50)))) {
						arm_aarch32_VFMA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200c10)) & (0xf1200f50)))) {
						arm_aarch32_VFMS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200c50)) & (0xf1200f50)))) {
						arm_aarch32_VFMS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000f00)) & (0xf1200f50)))) {
						arm_aarch32_VMAX_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000f40)) & (0xf1200f50)))) {
						arm_aarch32_VMAX_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000f10)) & (0xf1200f50)))) {
						arm_aarch32_VMAXNM_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000f50)) & (0xf1200f50)))) {
						arm_aarch32_VMAXNM_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200f00)) & (0xf1200f50)))) {
						arm_aarch32_VMIN_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200f40)) & (0xf1200f50)))) {
						arm_aarch32_VMIN_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200f10)) & (0xf1200f50)))) {
						arm_aarch32_VMINNM_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200f50)) & (0xf1200f50)))) {
						arm_aarch32_VMINNM_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d10)) & (0xf1200f50)))) {
						arm_aarch32_VMLA_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d50)) & (0xf1200f50)))) {
						arm_aarch32_VMLA_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200d10)) & (0xf1200f50)))) {
						arm_aarch32_VMLS_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200d50)) & (0xf1200f50)))) {
						arm_aarch32_VMLS_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000d10)) & (0xf1200f50)))) {
						arm_aarch32_VMUL_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000d50)) & (0xf1200f50)))) {
						arm_aarch32_VMUL_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000f00)) & (0xf1200f50)))) {
						arm_aarch32_VPMAX_f_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1200f00)) & (0xf1200f50)))) {
						arm_aarch32_VPMIN_f_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000f10)) & (0xf1200f50)))) {
						arm_aarch32_VRECPS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000f50)) & (0xf1200f50)))) {
						arm_aarch32_VRECPS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200f10)) & (0xf1200f50)))) {
						arm_aarch32_VRSQRTS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200f50)) & (0xf1200f50)))) {
						arm_aarch32_VRSQRTS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200d00)) & (0xf1200f50)))) {
						arm_aarch32_VSUB_f_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0200d40)) & (0xf1200f50)))) {
						arm_aarch32_VSUB_f_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x400000)) & (0x1700000))) && ((inst ^ (0xf00d0000)) & (0xf00d0000))) {
						arm_aarch32_SUB_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000800)) & (0xf1000f50)))) {
						arm_aarch32_VADD_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000840)) & (0xf1000f50)))) {
						arm_aarch32_VADD_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000810)) & (0xf1000f50)))) {
						arm_aarch32_VCEQ_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000850)) & (0xf1000f50)))) {
						arm_aarch32_VCEQ_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000900)) & (0xf1000f50)))) {
						arm_aarch32_VMLA_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000940)) & (0xf1000f50)))) {
						arm_aarch32_VMLA_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000900)) & (0xf1000f50)))) {
						arm_aarch32_VMLS_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000940)) & (0xf1000f50)))) {
						arm_aarch32_VMLS_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000d00)) & (0xf1200f10)))) {
						arm_aarch32_VPADD_f_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000b00)) & (0xf1000f50)))) {
						arm_aarch32_VQDMULH_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000b40)) & (0xf1000f50)))) {
						arm_aarch32_VQDMULH_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000b10)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMLAH_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000b50)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMLAH_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000c10)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMLSH_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000c50)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMLSH_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000b00)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMULH_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000b40)) & (0xf1000f50)))) {
						arm_aarch32_VQRDMULH_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000800)) & (0xf1000f50)))) {
						arm_aarch32_VSUB_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000840)) & (0xf1000f50)))) {
						arm_aarch32_VSUB_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000810)) & (0xf1000f50)))) {
						arm_aarch32_VTST_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000850)) & (0xf1000f50)))) {
						arm_aarch32_VTST_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000710)) & (0xf0000f50)))) {
						arm_aarch32_VABA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000750)) & (0xf0000f50)))) {
						arm_aarch32_VABA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000700)) & (0xf0000f50)))) {
						arm_aarch32_VABD_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000740)) & (0xf0000f50)))) {
						arm_aarch32_VABD_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000310)) & (0xf0000f50)))) {
						arm_aarch32_VCGE_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000350)) & (0xf0000f50)))) {
						arm_aarch32_VCGE_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000300)) & (0xf0000f50)))) {
						arm_aarch32_VCGT_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000340)) & (0xf0000f50)))) {
						arm_aarch32_VCGT_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000000)) & (0xf0000f50)))) {
						arm_aarch32_VHADD_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000040)) & (0xf0000f50)))) {
						arm_aarch32_VHADD_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000200)) & (0xf0000f50)))) {
						arm_aarch32_VHSUB_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000240)) & (0xf0000f50)))) {
						arm_aarch32_VHSUB_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000600)) & (0xf0000f50)))) {
						arm_aarch32_VMAX_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000640)) & (0xf0000f50)))) {
						arm_aarch32_VMAX_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000610)) & (0xf0000f50)))) {
						arm_aarch32_VMIN_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000650)) & (0xf0000f50)))) {
						arm_aarch32_VMIN_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000910)) & (0xf0000f50)))) {
						arm_aarch32_VMUL_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000950)) & (0xf0000f50)))) {
						arm_aarch32_VMUL_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000b10)) & (0xf1000f10)))) {
						arm_aarch32_VPADD_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a00)) & (0xf0000f50)))) {
						arm_aarch32_VPMAX_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a10)) & (0xf0000f50)))) {
						arm_aarch32_VPMIN_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000010)) & (0xf0000f50)))) {
						arm_aarch32_VQADD_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000050)) & (0xf0000f50)))) {
						arm_aarch32_VQADD_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000510)) & (0xf0000f50)))) {
						arm_aarch32_VQRSHL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000550)) & (0xf0000f50)))) {
						arm_aarch32_VQRSHL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000410)) & (0xf0000f50)))) {
						arm_aarch32_VQSHL_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000450)) & (0xf0000f50)))) {
						arm_aarch32_VQSHL_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000210)) & (0xf0000f50)))) {
						arm_aarch32_VQSUB_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000250)) & (0xf0000f50)))) {
						arm_aarch32_VQSUB_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000100)) & (0xf0000f50)))) {
						arm_aarch32_VRHADD_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000140)) & (0xf0000f50)))) {
						arm_aarch32_VRHADD_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000500)) & (0xf0000f50)))) {
						arm_aarch32_VRSHL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000540)) & (0xf0000f50)))) {
						arm_aarch32_VRSHL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000400)) & (0xf0000f50)))) {
						arm_aarch32_VSHL_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000440)) & (0xf0000f50)))) {
						arm_aarch32_VSHL_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x0)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_AND_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x100000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ANDS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x200000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_EOR_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x300000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_EORS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1000000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MOV_i_A2((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1400000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MOVT_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x600000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_RSB_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x700000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_RSBS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}				}
				else {
					if ((!((inst ^ (0xf1360640)) & (0xf13f0fd0)))) {
						arm_aarch32_VCVT_bfs_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320000)) & (0xf13f0fd0)))) {
						arm_aarch32_VSWP_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320040)) & (0xf13f0fd0)))) {
						arm_aarch32_VSWP_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a10)) & (0xf0070fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VMOVL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (19)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300340)) & (0xf1330fd0)))) {
						arm_aarch32_AESD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300300)) & (0xf1330fd0)))) {
						arm_aarch32_AESE_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13003c0)) & (0xf1330fd0)))) {
						arm_aarch32_AESIMC_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300380)) & (0xf1330fd0)))) {
						arm_aarch32_AESMC_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13102c0)) & (0xf1330fd0)))) {
						arm_aarch32_SHA1H_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320380)) & (0xf1330fd0)))) {
						arm_aarch32_SHA1SU1_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13203c0)) & (0xf1330fd0)))) {
						arm_aarch32_SHA256SU0_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300400)) & (0xf1330fd0)))) {
						arm_aarch32_VCLS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300440)) & (0xf1330fd0)))) {
						arm_aarch32_VCLS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300480)) & (0xf1330fd0)))) {
						arm_aarch32_VCLZ_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13004c0)) & (0xf1330fd0)))) {
						arm_aarch32_VCLZ_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300500)) & (0xf1330fd0)))) {
						arm_aarch32_VCNT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300540)) & (0xf1330fd0)))) {
						arm_aarch32_VCNT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320700)) & (0xf1330fd0)))) {
						arm_aarch32_VCVT_sh_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320600)) & (0xf1330fd0)))) {
						arm_aarch32_VCVT_hs_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320200)) & (0xf1330fd0)))) {
						arm_aarch32_VMOVN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300580)) & (0xf1330fd0)))) {
						arm_aarch32_VMVN_r_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13005c0)) & (0xf1330fd0)))) {
						arm_aarch32_VMVN_r_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300700)) & (0xf1330fd0)))) {
						arm_aarch32_VQABS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300740)) & (0xf1330fd0)))) {
						arm_aarch32_VQABS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320240)) & (0xf1330fd0)))) {
						arm_aarch32_VQMOVUN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300780)) & (0xf1330fd0)))) {
						arm_aarch32_VQNEG_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13007c0)) & (0xf1330fd0)))) {
						arm_aarch32_VQNEG_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300100)) & (0xf1330fd0)))) {
						arm_aarch32_VREV16_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300140)) & (0xf1330fd0)))) {
						arm_aarch32_VREV16_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300080)) & (0xf1330fd0)))) {
						arm_aarch32_VREV32_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13000c0)) & (0xf1330fd0)))) {
						arm_aarch32_VREV32_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300000)) & (0xf1330fd0)))) {
						arm_aarch32_VREV64_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300040)) & (0xf1330fd0)))) {
						arm_aarch32_VREV64_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320500)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTA_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320540)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTA_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320680)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTM_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13206c0)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTM_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320400)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTN_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320440)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTN_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320780)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTP_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13207c0)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTP_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320480)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTX_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13204c0)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTX_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320580)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTZ_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13205c0)) & (0xf1330fd0)))) {
						arm_aarch32_VRINTZ_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320300)) & (0xf1330fd0)))) {
						arm_aarch32_VSHLL_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320080)) & (0xf1330fd0)))) {
						arm_aarch32_VTRN_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13200c0)) & (0xf1330fd0)))) {
						arm_aarch32_VTRN_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320100)) & (0xf1330fd0)))) {
						arm_aarch32_VUZP_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320140)) & (0xf1330fd0)))) {
						arm_aarch32_VUZP_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320180)) & (0xf1330fd0)))) {
						arm_aarch32_VZIP_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13201c0)) & (0xf1330fd0)))) {
						arm_aarch32_VZIP_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310300)) & (0xf1330bd0)))) {
						arm_aarch32_VABS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310340)) & (0xf1330bd0)))) {
						arm_aarch32_VABS_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310100)) & (0xf1330bd0)))) {
						arm_aarch32_VCEQ_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310140)) & (0xf1330bd0)))) {
						arm_aarch32_VCEQ_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310080)) & (0xf1330bd0)))) {
						arm_aarch32_VCGE_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13100c0)) & (0xf1330bd0)))) {
						arm_aarch32_VCGE_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310000)) & (0xf1330bd0)))) {
						arm_aarch32_VCGT_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310040)) & (0xf1330bd0)))) {
						arm_aarch32_VCGT_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310180)) & (0xf1330bd0)))) {
						arm_aarch32_VCLE_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13101c0)) & (0xf1330bd0)))) {
						arm_aarch32_VCLE_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310200)) & (0xf1330bd0)))) {
						arm_aarch32_VCLT_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310240)) & (0xf1330bd0)))) {
						arm_aarch32_VCLT_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330000)) & (0xf1330f50)))) {
						arm_aarch32_VCVTA_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330040)) & (0xf1330f50)))) {
						arm_aarch32_VCVTA_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330300)) & (0xf1330f50)))) {
						arm_aarch32_VCVTM_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330340)) & (0xf1330f50)))) {
						arm_aarch32_VCVTM_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330100)) & (0xf1330f50)))) {
						arm_aarch32_VCVTN_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330140)) & (0xf1330f50)))) {
						arm_aarch32_VCVTN_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330200)) & (0xf1330f50)))) {
						arm_aarch32_VCVTP_asimd_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330240)) & (0xf1330f50)))) {
						arm_aarch32_VCVTP_asimd_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000e30)) & (0xf0380ff0)))) {
						arm_aarch32_VMOV_i_A5_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000e70)) & (0xf0380ff0)))) {
						arm_aarch32_VMOV_i_A5_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1310380)) & (0xf1330bd0)))) {
						arm_aarch32_VNEG_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13103c0)) & (0xf1330bd0)))) {
						arm_aarch32_VNEG_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (10)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300600)) & (0xf1330f50)))) {
						arm_aarch32_VPADAL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300640)) & (0xf1330f50)))) {
						arm_aarch32_VPADAL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300200)) & (0xf1330f50)))) {
						arm_aarch32_VPADDL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300240)) & (0xf1330f50)))) {
						arm_aarch32_VPADDL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1320280)) & (0xf1330f90)))) {
						arm_aarch32_VQMOVN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000850)) & (0xf1000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VQRSHRUN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000610)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VQSHLU_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000650)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VQSHLU_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000810)) & (0xf1000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VQSHRUN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330400)) & (0xf1330ed0)))) {
						arm_aarch32_VRECPE_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330440)) & (0xf1330ed0)))) {
						arm_aarch32_VRECPE_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000850)) & (0xf1000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VRSHRN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330480)) & (0xf1330ed0)))) {
						arm_aarch32_VRSQRTE_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf13304c0)) & (0xf1330ed0)))) {
						arm_aarch32_VRSQRTE_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000510)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSHL_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000550)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSHL_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000810)) & (0xf1000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VSHRN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000510)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSLI_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000550)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSLI_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000410)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSRI_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000450)) & (0xf1000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSRI_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000930)) & (0xf0380df0)))) {
						arm_aarch32_VBIC_i_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000970)) & (0xf0380df0)))) {
						arm_aarch32_VBIC_i_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330600)) & (0xf1330e50)))) {
						arm_aarch32_VCVT_is_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1330640)) & (0xf1330e50)))) {
						arm_aarch32_VCVT_is_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (18)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300c00)) & (0xf1300fd0)))) {
						arm_aarch32_VDUP_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300c40)) & (0xf1300fd0)))) {
						arm_aarch32_VDUP_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000810)) & (0xf0380df0)))) {
						arm_aarch32_VMOV_i_A3_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000850)) & (0xf0380df0)))) {
						arm_aarch32_VMOV_i_A3_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000830)) & (0xf0380df0)))) {
						arm_aarch32_VMVN_i_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000870)) & (0xf0380df0)))) {
						arm_aarch32_VMVN_i_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c30)) & (0xf0380ef0)))) {
						arm_aarch32_VMVN_i_A3_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c70)) & (0xf0380ef0)))) {
						arm_aarch32_VMVN_i_A3_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000910)) & (0xf0380df0)))) {
						arm_aarch32_VORR_i_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000950)) & (0xf0380df0)))) {
						arm_aarch32_VORR_i_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000950)) & (0xf0000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VQRSHRN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000710)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VQSHL_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000750)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VQSHL_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000910)) & (0xf0000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VQSHRN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000210)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VRSHR_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000250)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VRSHR_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000310)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VRSRA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000350)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VRSRA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a10)) & (0xf0000fd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VSHLL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000010)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSHR_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000050)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSHR_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000110)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSRA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000150)) & (0xf0000f50))) && ((inst ^ (0x0)) & (0x388000))) {
						arm_aarch32_VSRA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000400)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VADDHN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000130)) & (0xf03809f0)))) {
						arm_aarch32_VBIC_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000170)) & (0xf03809f0)))) {
						arm_aarch32_VBIC_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000010)) & (0xf03809f0)))) {
						arm_aarch32_VMOV_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000050)) & (0xf03809f0)))) {
						arm_aarch32_VMOV_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c10)) & (0xf0380cf0)))) {
						arm_aarch32_VMOV_i_A4_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c50)) & (0xf0380cf0)))) {
						arm_aarch32_VMOV_i_A4_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000030)) & (0xf03809f0)))) {
						arm_aarch32_VMVN_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000070)) & (0xf03809f0)))) {
						arm_aarch32_VMVN_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000110)) & (0xf03809f0)))) {
						arm_aarch32_VORR_i_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000150)) & (0xf03809f0)))) {
						arm_aarch32_VORR_i_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000900)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMLAL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000340)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMLAL_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000b00)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMLSL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000740)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMLSL_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMULH_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000c40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMULH_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d00)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMULL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000b40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQDMULL_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000e40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMLAH_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000e40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMLAH_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000f40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMLSH_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000f40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMLSH_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000d40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMULH_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000d40)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VQRDMULH_A2_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000400)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VRADDHN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000600)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VRSUBHN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000600)) & (0xf1000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VSUBHN_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x100000)) & (0x1700000))) && ((inst ^ (0xf00d0000)) & (0xf00f0000))) {
						arm_aarch32_ADDS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xd0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADD_SP_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1d0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADDS_SP_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADR_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1200000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MOV_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1300000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MOVS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1600000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MVN_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1700000)) & (0x17f0000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_MVNS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000500)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VABAL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000700)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VABDL_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000000)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VADDL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000100)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VADDW_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c10)) & (0xf0000cd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VCVT_xs_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c50)) & (0xf0000cd0))) && ((inst ^ (0x0)) & (0x380000))) {
						arm_aarch32_VCVT_xs_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x3f)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000800)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLAL_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000240)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLAL_s_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000040)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLA_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000040)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLA_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a00)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLSL_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000640)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLSL_s_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000440)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLS_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000440)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMLS_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000a40)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMULL_s_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000840)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMUL_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1000840)) & (0xf1000e50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMUL_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000200)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VSUBL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000300)) & (0xf0000f50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VSUBW_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x0)) & (0x1700000))) && ((inst ^ (0xf00d0000)) & (0xf00d0000))) {
						arm_aarch32_ADD_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0000c00)) & (0xf0000d50))) && ((inst ^ (0x300000)) & (0x300000))) {
						arm_aarch32_VMULL_i_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (9)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300800)) & (0xf1300c50)))) {
						arm_aarch32_VTBL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf1300840)) & (0xf1300c50)))) {
						arm_aarch32_VTBX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0300000)) & (0xf1300050)))) {
						arm_aarch32_VEXT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0xf0300040)) & (0xf1300050)))) {
						arm_aarch32_VEXT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
					}else if ((!((inst ^ (0x200000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADC_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x300000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ADCS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1400000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_BIC_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1500000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_BICS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1000000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ORR_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x1100000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_ORRS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x600000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_RSC_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x700000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_RSCS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x400000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SBC_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}else if ((!((inst ^ (0x500000)) & (0x1700000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
						arm_aarch32_SBCS_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
					}				}
			}
			else {
				if ((!((inst ^ (0x1000000)) & (0x1000000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
					arm_aarch32_BL_i_A1((u32) (inst & ((u32) 0xffffff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
				}else if ((!((inst ^ (0x0)) & (0x1000000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
					arm_aarch32_B_A1((u32) (inst & ((u32) 0xffffff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
				}else if ((!((inst ^ (0xf0000000)) & (0xf0000000)))) {
					arm_aarch32_BL_i_A2((u32) (inst & ((u32) 0xffffff)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
				}			}
		}
	}
	else {
		if (!(inst & ((u32) 1 << (27)))) {
			if (!(inst & ((u32) 1 << (25)))) {
				if (!(inst & ((u32) 1 << (20)))) {
					if (!(inst & ((u32) 1 << (21)))) {
						if (!(inst & ((u32) 1 << (24)))) {
							if ((!((inst ^ (0xf080000f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080000d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080040f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080040d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080080f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080080d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000070f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000070d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a0f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A2_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a0d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A2_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000060f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A3_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000060d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A3_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000020f)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A4_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000020d)) & (0xf0800f0f)))) {
								arm_aarch32_VST1_m_A4_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080010f)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080010d)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080050f)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080050d)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080090f)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080090d)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000030f)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_m_A2_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000030d)) & (0xf0800f0f)))) {
								arm_aarch32_VST2_m_A2_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080020f)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080020d)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080060f)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080060d)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a0f)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a0d)) & (0xf0800f0f)))) {
								arm_aarch32_VST3_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080030f)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080030d)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080070f)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080070d)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b0f)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b0d)) & (0xf0800f0f)))) {
								arm_aarch32_VST4_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800000)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800400)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800800)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000700)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_m_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000600)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_m_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000200)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST1_m_A4_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800100)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST2_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800500)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST2_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800900)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST2_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000080f)) & (0xf0800e0f)))) {
								arm_aarch32_VST2_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000080d)) & (0xf0800e0f)))) {
								arm_aarch32_VST2_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000300)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST2_m_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800200)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST3_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800600)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST3_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST3_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000040f)) & (0xf0800e0f)))) {
								arm_aarch32_VST3_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000040d)) & (0xf0800e0f)))) {
								arm_aarch32_VST3_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800300)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST4_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800700)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST4_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST4_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000000f)) & (0xf0800e0f)))) {
								arm_aarch32_VST4_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000000d)) & (0xf0800e0f)))) {
								arm_aarch32_VST4_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000800)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST2_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000400)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST3_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000000)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VST4_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0x400000)) & (0x400000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRB_i_A1_post((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x0)) & (0x400000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STR_i_A1_post((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}						}
						else {
							if (!(inst & ((u32) 1 << (22)))) {
									arm_aarch32_STR_i_A1_off((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
							else {
									arm_aarch32_STRB_i_A1_off((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (24)))) {
							if ((!((inst ^ (0xf0800e0f)) & (0xf0800f1f)))) {
								arm_aarch32_VLD3_a_A1_nowb((u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800e0d)) & (0xf0800f1f)))) {
								arm_aarch32_VLD3_a_A1_posti((u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080000f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080000d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080040f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080040d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080080f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080080d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800c0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_a_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800c0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_a_A1_posti((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000070f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000070d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A2_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A2_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000060f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A3_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000060d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A3_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000020f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A4_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000020d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD1_m_A4_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080010f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080010d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080050f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080050d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080090f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080090d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800d0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_a_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800d0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_a_A1_posti((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000030f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_m_A2_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000030d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD2_m_A2_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080020f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080020d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080060f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080060d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD3_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800e00)) & (0xf0800f10))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD3_a_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080030f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A1_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080030d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A1_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080070f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A2_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf080070d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A2_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A3_nowb((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_1_A3_posti((u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800f0f)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_a_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800f0d)) & (0xf0800f0f)))) {
								arm_aarch32_VLD4_a_A1_posti((u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800000)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800400)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800800)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800c00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_a_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000700)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000a00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_m_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000600)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_m_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000200)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD1_m_A4_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800100)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800500)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800900)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800d00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_a_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000080f)) & (0xf0800e0f)))) {
								arm_aarch32_VLD2_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000080d)) & (0xf0800e0f)))) {
								arm_aarch32_VLD2_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000300)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_m_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800200)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD3_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800600)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD3_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800a00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD3_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000040f)) & (0xf0800e0f)))) {
								arm_aarch32_VLD3_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000040d)) & (0xf0800e0f)))) {
								arm_aarch32_VLD3_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800300)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD4_1_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800700)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD4_1_A2_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800b00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD4_1_A3_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0800f00)) & (0xf0800f00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD4_a_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x1)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000000f)) & (0xf0800e0f)))) {
								arm_aarch32_VLD4_m_A1_nowb((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf000000d)) & (0xf0800e0f)))) {
								arm_aarch32_VLD4_m_A1_posti((u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000800)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD2_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000400)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD3_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0xf0000000)) & (0xf0800e00))) && ((inst ^ (0xd)) & (0xd))) {
								arm_aarch32_VLD4_m_A1_postr((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0x3)), (u32) ((inst >> (6)) & ((u32) 0x3)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
							}else if ((!((inst ^ (0x400000)) & (0x400000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRBT_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x0)) & (0x400000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_STRT_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}						}
						else {
							if (!(inst & ((u32) 1 << (22)))) {
									arm_aarch32_STR_i_A1_pre((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
							else {
									arm_aarch32_STRB_i_A1_pre((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}
						}
					}
				}
				else {
					if (!(inst & ((u32) 1 << (22)))) {
						if ((!((inst ^ (0xf100f000)) & (0xf120f000))) && ((inst ^ (0xf0000)) & (0xf0000))) {
							arm_aarch32_PLDW_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0x1000000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDR_i_A1_off((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0x0)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDR_i_A1_post((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0x1200000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDR_i_A1_pre((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf0000)) & (0xf0000))) && ((inst ^ (0xf0800000)) & (0xf1800000))) {
							arm_aarch32_LDR_l_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0x200000)) & (0x1200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
							arm_aarch32_LDRT_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}					}
					else {
						if ((!((inst ^ (0xf12ff01f)) & (0xf1afffff)))) {
							arm_aarch32_CLREX_A1( __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff044)) & (0xf1afffff)))) {
							arm_aarch32_PSSBB_A1( __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff070)) & (0xf1afffff)))) {
							arm_aarch32_SB_A1( __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff040)) & (0xf1afffff)))) {
							arm_aarch32_SSBB_A1( __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff040)) & (0xf1affff0))) && ((inst ^ (0x0)) & (0xb))) {
							arm_aarch32_DSB_A1((u32) (inst & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff050)) & (0xf1affff0)))) {
							arm_aarch32_DMB_A1((u32) (inst & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf12ff060)) & (0xf1affff0)))) {
							arm_aarch32_ISB_A1((u32) (inst & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf100f000)) & (0xf120f000))) && ((inst ^ (0xf0000)) & (0xf0000))) {
							arm_aarch32_PLD_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0xf10ff000)) & (0xf12ff000)))) {
							arm_aarch32_PLD_l_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0x1000000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDRB_i_A1_off((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0x0)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDRB_i_A1_post((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0x1200000)) & (0x1200000))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
							arm_aarch32_LDRB_i_A1_pre((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf0000)) & (0xf0000))) && ((inst ^ (0xf0800000)) & (0xf1800000))) {
							arm_aarch32_LDRB_l_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}else if ((!((inst ^ (0xf000f000)) & (0xf120f000)))) {
							arm_aarch32_PLI_i_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
						}else if ((!((inst ^ (0x200000)) & (0x1200000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
							arm_aarch32_LDRBT_A1((u32) (inst & ((u32) 0xfff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
						}					}
				}
			}
			else {
				if (!(inst & ((u32) 1 << (22)))) {
					if (!(inst & ((u32) 1 << (21)))) {
						if (!(inst & ((u32) 1 << (24)))) {
							if (!(inst & ((u32) 1 << (20)))) {
								if (!(inst & ((u32) 1 << (4)))) {
										arm_aarch32_STR_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0x800000)) & (0x800000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_PKHBT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800000)) & (0x800000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_PKHTB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0x800f80)) & (0x800f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SEL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800000)) & (0x800380))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
												arm_aarch32_SXTAB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0x8f0000)) & (0x8f0380))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SXTB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (4)))) {
										arm_aarch32_LDR_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x800f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x800f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0xf00)) & (0x800f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SSAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf00)) & (0x800f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x800f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SSUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x800f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SSUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (20)))) {
										arm_aarch32_STR_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
									if ((!((inst ^ (0xf000f000)) & (0xf000f000))) && ((inst ^ (0x60)) & (0xfe0))) {
										arm_aarch32_PLDW_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0xf000f060)) & (0xf000ffe0)))) {
										arm_aarch32_PLDW_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_LDR_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									}								}
							}
							else {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if (!(inst & ((u32) 1 << (20)))) {
												if ((!((inst ^ (0x0)) & (0x80))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
													arm_aarch32_SMLAD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf000)) & (0xf080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMUAD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0xf000)) & (0xf080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SDIV_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0xf000)) & (0x10f080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_USAD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0x0)) & (0x100080))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
												arm_aarch32_USADA8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
									}
									else {
										if ((!((inst ^ (0x0)) & (0x900080))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
											arm_aarch32_SMLSD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf000)) & (0x90f080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SMUSD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if ((!((inst ^ (0x0)) & (0x900080))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
											arm_aarch32_SMLADX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf000)) & (0x90f080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SMUADX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x0)) & (0x900080))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
											arm_aarch32_SMLSDX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf000)) & (0x90f080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SMUSDX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (4)))) {
							if (!(inst & ((u32) 1 << (20)))) {
								if (!(inst & ((u32) 1 << (24)))) {
										arm_aarch32_STRT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
										arm_aarch32_STR_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
							}
							else {
								if (!(inst & ((u32) 1 << (24)))) {
										arm_aarch32_LDRT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
										arm_aarch32_LDR_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (6)))) {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if (!(inst & ((u32) 1 << (7)))) {
											if (!(inst & ((u32) 1 << (20)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_QADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (24)))) {
													if ((!((inst ^ (0xf00)) & (0xf00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_SHADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0xf000)) & (0xf000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_UDIV_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
										else {
											if (!(inst & ((u32) 1 << (20)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_QADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SHADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if ((!((inst ^ (0x0)) & (0x1000000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_SSAT_A1_LSL((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_QASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SSAT16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (7)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SHASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf0f00)) & (0x10f0f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_REV_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0x8f0f00)) & (0x18f0f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_REV16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (23)))) {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (5)))) {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_QSAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_QSUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_QSUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (5)))) {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SHSAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SHSUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SHSUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_SSAT_A1_ASR((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_SBFX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (20)))) {
											if ((!((inst ^ (0x0)) & (0x1000380))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
												arm_aarch32_SXTAB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0xf0000)) & (0x10f0380))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SXTB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
										else {
											if ((!((inst ^ (0x0)) & (0x1000380))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
												arm_aarch32_SXTAH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0xf0000)) & (0x10f0380))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SXTH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
									}
								}
							}
						}
					}
				}
				else {
					if (!(inst & ((u32) 1 << (21)))) {
						if (!(inst & ((u32) 1 << (24)))) {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (20)))) {
										arm_aarch32_STRB_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
									if ((!((inst ^ (0xf000f060)) & (0xf000ffe0)))) {
										arm_aarch32_PLI_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0xf000f000)) & (0xf000f000))) && ((inst ^ (0x60)) & (0xfe0))) {
										arm_aarch32_PLI_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_LDRB_r_A1_post((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									}								}
							}
							else {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (7)))) {
											if ((!((inst ^ (0x100f00)) & (0x900f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x100f00)) & (0x900f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if ((!((inst ^ (0x100f00)) & (0x900f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_USAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (8)))) {
										if ((!((inst ^ (0x800040)) & (0x9002c0))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_UXTAB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0x8f0040)) & (0x9f02c0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_UXTB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0x100e00)) & (0x900e80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0x100e00)) & (0x900e00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_USUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x100e00)) & (0x900e00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_USUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (20)))) {
										arm_aarch32_STRB_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
									if ((!((inst ^ (0xf000f000)) & (0xf000f000))) && ((inst ^ (0x60)) & (0xfe0))) {
										arm_aarch32_PLD_r_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0xf000f060)) & (0xf000ffe0)))) {
										arm_aarch32_PLD_r_A1_RRX((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)) __dec_args_vals);
									}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_LDRB_r_A1_off((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									}								}
							}
							else {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if (!(inst & ((u32) 1 << (20)))) {
												if ((!((inst ^ (0x0)) & (0x80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMLALD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x0)) & (0x80))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
													arm_aarch32_SMMLA_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf000)) & (0xf080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_SMMUL_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}											}
										}
										else {
											if ((!((inst ^ (0xf)) & (0xf))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_BFC_A1((u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0x0)) & (0x0))) && ((inst ^ (0xf000000f)) & (0xf000000f))) {
												arm_aarch32_BFI_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
									}
									else {
										if (!(inst & ((u32) 1 << (7)))) {
											if ((!((inst ^ (0x0)) & (0x900000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMLSLD_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x100000)) & (0x900000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMMLS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (20)))) {
											if ((!((inst ^ (0x0)) & (0x800080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMLALDX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x0)) & (0x800080))) && ((inst ^ (0xf000f000)) & (0xf000f000))) {
												arm_aarch32_SMMLAR_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0xf000)) & (0x80f080))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMMULR_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
									}
									else {
										if (!(inst & ((u32) 1 << (7)))) {
											if ((!((inst ^ (0x0)) & (0x900000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMLSLDX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x100000)) & (0x900000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_SMMLSR_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (4)))) {
							if (!(inst & ((u32) 1 << (20)))) {
								if (!(inst & ((u32) 1 << (24)))) {
										arm_aarch32_STRBT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
										arm_aarch32_STRB_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
							}
							else {
								if (!(inst & ((u32) 1 << (24)))) {
										arm_aarch32_LDRBT_A2((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
								else {
										arm_aarch32_LDRB_r_A1_pre((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (23)))) {
								if (!(inst & ((u32) 1 << (5)))) {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UQADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UQADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UQSAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UHADD16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UHADD8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UHSAX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UQASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UQSUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UQSUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf00)) & (0x1000f80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UHASX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UHSUB16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UHSUB8_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (6)))) {
									if (!(inst & ((u32) 1 << (5)))) {
										if ((!((inst ^ (0x0)) & (0x1000000))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_USAT_A1_LSL((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (7)))) {
											if (!(inst & ((u32) 1 << (20)))) {
												if ((!((inst ^ (0xf00)) & (0x1000f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_USAT16_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf0f00)) & (0x10f0f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_RBIT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0x1f0f00)) & (0x11f0f00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_REVSH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (5)))) {
										if (!(inst & ((u32) 1 << (24)))) {
												arm_aarch32_USAT_A1_ASR((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
										else {
												arm_aarch32_UBFX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (7)) & ((u32) 0x1f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1f)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}
									}
									else {
										if (!(inst & ((u32) 1 << (20)))) {
											if ((!((inst ^ (0x0)) & (0x1000380))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
												arm_aarch32_UXTAB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}else if ((!((inst ^ (0xf0000)) & (0x10f0380))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_UXTB_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											}										}
										else {
											if (!(inst & ((u32) 1 << (7)))) {
												if ((!((inst ^ (0x0)) & (0x1000300))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
													arm_aarch32_UXTAH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000)) & (0x10f0300))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_UXTH_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (10)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0xe1000000)) & (0xf1000000)))) {
													arm_aarch32_UDF_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0xfff)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else {
			if (!(inst & ((u32) 1 << (25)))) {
				if (!(inst & ((u32) 1 << (9)))) {
					if (!(inst & ((u32) 1 << (10)))) {
						if (!(inst & ((u32) 1 << (21)))) {
							if (!(inst & ((u32) 1 << (8)))) {
								if (!(inst & ((u32) 1 << (6)))) {
									if ((!((inst ^ (0xf0800800)) & (0xf0800810)))) {
										arm_aarch32_VCADD_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
									} else goto undefined;
								}
								else {
									if ((!((inst ^ (0xf0800800)) & (0xf0800810)))) {
										arm_aarch32_VCADD_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)) __dec_args_vals);
									} else goto undefined;
								}
							}
							else {
								if (!(inst & ((u32) 1 << (20)))) {
									if ((!((inst ^ (0x1000800)) & (0x1000800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_VSTR_A1_H((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									} else goto undefined;
								}
								else {
									if ((!((inst ^ (0x1000800)) & (0x1000800))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
										arm_aarch32_VLDR_A1_H((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									}else if ((!((inst ^ (0x10f0800)) & (0x10f0800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_VLDR_l_A1_H((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									}								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (6)))) {
									if ((!((inst ^ (0xf0000800)) & (0xf0000900)))) {
										arm_aarch32_VCMLA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x3)) __dec_args_vals);
									} else goto undefined;
								}
								else {
									if ((!((inst ^ (0xf0000800)) & (0xf0000900)))) {
										arm_aarch32_VCMLA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x3)) __dec_args_vals);
									} else goto undefined;
								}
							}
							else {
								if (!(inst & ((u32) 1 << (23)))) {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf1000900)))) {
												arm_aarch32_VFMAL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000800)) & (0xf1000900)))) {
												arm_aarch32_VFMAL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if ((!((inst ^ (0xf0000800)) & (0xf1000900)))) {
											arm_aarch32_VFMA_bf_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if ((!((inst ^ (0xf0000800)) & (0xf1100900)))) {
											arm_aarch32_VFMSL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0xf0000800)) & (0xf1100900)))) {
											arm_aarch32_VFMSL_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (6)))) {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (21)))) {
									if ((!((inst ^ (0xf0000900)) & (0xf1900900)))) {
										arm_aarch32_VDOT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
									} else goto undefined;
								}
								else {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0xf0000900)) & (0xf1100900)))) {
											arm_aarch32_VSDOT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0xf0000900)) & (0xf1100900)))) {
											arm_aarch32_VUSDOT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
							else {
								if ((!((inst ^ (0xf0200900)) & (0xf1b00900)))) {
									arm_aarch32_VUDOT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
								} else goto undefined;
							}
						}
						else {
							if (!(inst & ((u32) 1 << (8)))) {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0xf0000800)) & (0xf1900800)))) {
											arm_aarch32_VMMLA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf1100800)))) {
												arm_aarch32_VSMMLA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000800)) & (0xf1100800)))) {
												arm_aarch32_VUSMMLA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if ((!((inst ^ (0xf0200800)) & (0xf1b00800)))) {
										arm_aarch32_VUMMLA_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
									} else goto undefined;
								}
							}
							else {
								if (!(inst & ((u32) 1 << (4)))) {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0xf0000800)) & (0xf1900800)))) {
											arm_aarch32_VDOT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf1100800)))) {
												arm_aarch32_VSDOT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000800)) & (0xf1100800)))) {
												arm_aarch32_VUSDOT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if ((!((inst ^ (0xf0200800)) & (0xf1b00800)))) {
										arm_aarch32_VUDOT_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
									} else goto undefined;
								}
							}
						}
					}
				}
				else {
					if (!(inst & ((u32) 1 << (20)))) {
						if (!(inst & ((u32) 1 << (24)))) {
							if (!(inst & ((u32) 1 << (10)))) {
								if (!(inst & ((u32) 1 << (8)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x400810)) & (0x6008d0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VMOV_toss_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VSTM_A2((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x400810)) & (0x6008d0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VMOV_tod_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (0)))) {
											if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VSTM_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_FSTMIAX_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (21)))) {
									if (!(inst & ((u32) 1 << (22)))) {
										if ((!((inst ^ (0x805800)) & (0x80f900))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_STC_A1_unind((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x800)) & (0x800800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_MCRR_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if ((!((inst ^ (0x5800)) & (0x40f900))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_STC_A1_post((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									} else goto undefined;
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (8)))) {
								if (!(inst & ((u32) 1 << (10)))) {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VSTR_A1_S((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x800)) & (0x800800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VSTMDB_A2((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0x5800)) & (0x40f800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_STC_A1_off((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x5800)) & (0x40f800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_STC_A1_pre((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (21)))) {
									if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_VSTR_A1_D((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									} else goto undefined;
								}
								else {
									if (!(inst & ((u32) 1 << (0)))) {
										if ((!((inst ^ (0x800)) & (0x800c00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VSTMDB_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x800)) & (0x800c00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_FSTMDBX_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (10)))) {
							if (!(inst & ((u32) 1 << (8)))) {
								if (!(inst & ((u32) 1 << (24)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x400810)) & (0x6008d0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VMOV_ss_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VLDM_A2((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_VLDR_A1_S((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf0800)) & (0xf0800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VLDR_l_A1_S((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if ((!((inst ^ (0x800)) & (0x800800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VLDMDB_A2((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (24)))) {
									if (!(inst & ((u32) 1 << (23)))) {
										if ((!((inst ^ (0x400810)) & (0x6008d0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VMOV_d_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (0)))) {
											if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VLDM_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_FLDMIAX_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (21)))) {
										if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
											arm_aarch32_VLDR_A1_D((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}else if ((!((inst ^ (0xf0800)) & (0xf0800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VLDR_l_A1_D((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										}									}
									else {
										if (!(inst & ((u32) 1 << (0)))) {
											if ((!((inst ^ (0x800)) & (0x800800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VLDMDB_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800)) & (0x800800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_FLDMDBX_A1((u32) ((inst >> (1)) & ((u32) 0x7f)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
						}
						else {
							if ((!((inst ^ (0x805800)) & (0x1e0f900))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
								arm_aarch32_LDC_i_A1_unind((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x1005800)) & (0x160f900))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
								arm_aarch32_LDC_i_A1_off((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x205800)) & (0x160f900))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
								arm_aarch32_LDC_i_A1_post((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x1205800)) & (0x160f900))) && ((inst ^ (0xf00f0000)) & (0xf00f0000))) {
								arm_aarch32_LDC_i_A1_pre((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0xf5800)) & (0xff900))) && ((inst ^ (0xf0000000)) & (0xf1c00000))) {
								arm_aarch32_LDC_l_A1((u32) (inst & ((u32) 0xff)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (24)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}else if ((!((inst ^ (0x400800)) & (0x1e00800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
								arm_aarch32_MRRC_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (4)) & ((u32) 0xf)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
							}						}
					}
				}
			}
			else {
				if (!(inst & ((u32) 1 << (24)))) {
					if (!(inst & ((u32) 1 << (9)))) {
						if (!(inst & ((u32) 1 << (23)))) {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (6)))) {
									if (!(inst & ((u32) 1 << (10)))) {
										if (!(inst & ((u32) 1 << (8)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
												arm_aarch32_VCMLA_s_A1_DH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (20)))) {
												if (!(inst & ((u32) 1 << (21)))) {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VMLA_f_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													}else if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
														arm_aarch32_VSELEQ_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
													}												}
												else {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VMUL_f_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													}else if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
														arm_aarch32_VSELGE_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
													}												}
											}
											else {
												if (!(inst & ((u32) 1 << (21)))) {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VNMLS_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													}else if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
														arm_aarch32_VSELVS_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
													}												}
												else {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VADD_f_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													}else if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
														arm_aarch32_VSELGT_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
													}												}
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (21)))) {
											if ((!((inst ^ (0xf0000900)) & (0xf0100900)))) {
												arm_aarch32_VDOT_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000900)) & (0xf0100900)))) {
												arm_aarch32_VSDOT_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (10)))) {
										if (!(inst & ((u32) 1 << (8)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf0000800)))) {
												arm_aarch32_VCMLA_s_A1_QH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if (!(inst & ((u32) 1 << (20)))) {
												if (!(inst & ((u32) 1 << (21)))) {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VMLS_f_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VNMUL_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
											else {
												if (!(inst & ((u32) 1 << (21)))) {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VNMLA_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
												else {
													if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
														arm_aarch32_VSUB_f_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
													} else goto undefined;
												}
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (21)))) {
											if ((!((inst ^ (0xf0000900)) & (0xf0100900)))) {
												arm_aarch32_VDOT_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000900)) & (0xf0100900)))) {
												arm_aarch32_VSDOT_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (8)))) {
									if (!(inst & ((u32) 1 << (20)))) {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf0000800)) & (0xf0200c00)))) {
												arm_aarch32_VFMAL_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0000800)) & (0xf0200c00)))) {
												arm_aarch32_VFMAL_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VFMSL_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VFMSL_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
												arm_aarch32_VFMA_bfs_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (6)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (10)))) {
										if (!(inst & ((u32) 1 << (20)))) {
											if ((!((inst ^ (0x800)) & (0x60086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMOV_toh_A1((u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800)) & (0x60086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMOV_h_A1((u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if ((!((inst ^ (0xf0200800)) & (0xf0300800)))) {
												arm_aarch32_VUDOT_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xf0200800)) & (0xf0300800)))) {
												arm_aarch32_VUDOT_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (6)))) {
								if (!(inst & ((u32) 1 << (10)))) {
									if (!(inst & ((u32) 1 << (8)))) {
										if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
											arm_aarch32_VCMLA_s_A1_DS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (20)))) {
											if (!(inst & ((u32) 1 << (21)))) {
												if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VDIV_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
													arm_aarch32_VMAXNM_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMA_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (21)))) {
												if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMS_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0x8b0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMOV_i_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (4)))) {
										if ((!((inst ^ (0xf0000900)) & (0xf0300900)))) {
											arm_aarch32_VUSDOT_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0xf0000900)) & (0xf0300900)))) {
											arm_aarch32_VSUDOT_s_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (10)))) {
									if (!(inst & ((u32) 1 << (8)))) {
										if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
											arm_aarch32_VCMLA_s_A1_QS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (20)) & ((u32) 0x3)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if (!(inst & ((u32) 1 << (20)))) {
											if (!(inst & ((u32) 1 << (21)))) {
												if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
													arm_aarch32_VMINNM_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMS_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (21)))) {
												if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMA_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (19)))) {
													if (!(inst & ((u32) 1 << (7)))) {
														if (!(inst & ((u32) 1 << (17)))) {
															if (!(inst & ((u32) 1 << (16)))) {
																if ((!((inst ^ (0x40800)) & (0x40810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCMP_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																} else goto undefined;
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VNEG_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0x83f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMP_A2_H((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if (!(inst & ((u32) 1 << (16)))) {
																if ((!((inst ^ (0x40800)) & (0x40810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VRINTR_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																} else goto undefined;
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTB_A1_bfs((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTX_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
													}
													else {
														if (!(inst & ((u32) 1 << (16)))) {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VABS_A2_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if ((!((inst ^ (0x40800)) & (0x40810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VRINTZ_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																} else goto undefined;
															}
														}
														else {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VSQRT_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0x83f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A2_H((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if ((!((inst ^ (0x800)) & (0x40810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTT_A1_bfs((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																} else goto undefined;
															}
														}
													}
												}
												else {
													if (!(inst & ((u32) 1 << (17)))) {
														if (!(inst & ((u32) 1 << (16)))) {
															if (!(inst & ((u32) 1 << (18)))) {
																if ((!((inst ^ (0xf0000800)) & (0xf0000890)))) {
																	arm_aarch32_VRINTA_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_vi_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}															}
															else {
																if ((!((inst ^ (0x880)) & (0x890))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_uiv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0x890))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_uiv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
																	arm_aarch32_VCVTA_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
														}
														else {
															if (!(inst & ((u32) 1 << (18)))) {
																if ((!((inst ^ (0xf0000800)) & (0xf0000890)))) {
																	arm_aarch32_VRINTN_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																} else goto undefined;
															}
															else {
																if ((!((inst ^ (0x880)) & (0x890))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_siv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0x890))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_siv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000810)))) {
																	arm_aarch32_VCVTN_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
														}
													}
													else {
														if (!(inst & ((u32) 1 << (18)))) {
															if ((!((inst ^ (0xf0010800)) & (0xf0010890)))) {
																arm_aarch32_VRINTM_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010890)))) {
																arm_aarch32_VRINTP_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_toxv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
														else {
															if ((!((inst ^ (0xf0010800)) & (0xf0010810)))) {
																arm_aarch32_VCVTM_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010810)))) {
																arm_aarch32_VCVTP_vfp_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0x810))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_xv_A1_H((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
													}
												}
											}
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (4)))) {
										if ((!((inst ^ (0xf0000900)) & (0xf0300900)))) {
											arm_aarch32_VUSDOT_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
									else {
										if ((!((inst ^ (0xf0000900)) & (0xf0300900)))) {
											arm_aarch32_VSUDOT_s_A1_Q((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
										} else goto undefined;
									}
								}
							}
						}
					}
					else {
						if (!(inst & ((u32) 1 << (20)))) {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (8)))) {
									if (!(inst & ((u32) 1 << (21)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMLA_f_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELEQ_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMLS_f_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VDIV_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VMAXNM_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VMINNM_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMUL_f_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELGE_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMA_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMUL_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMS_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (21)))) {
										if (!(inst & ((u32) 1 << (23)))) {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMLA_f_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELEQ_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMLS_f_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (6)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VDIV_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VMAXNM_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VMINNM_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (6)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMUL_f_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELGE_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMA_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMUL_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFMS_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (10)))) {
									if (!(inst & ((u32) 1 << (8)))) {
										if (!(inst & ((u32) 1 << (21)))) {
											if ((!((inst ^ (0x800)) & (0xc0086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMOV_tos_A1((u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xc00800)) & (0xc008ef))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMSR_A1_AS((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if (!(inst & ((u32) 1 << (23)))) {
											if ((!((inst ^ (0x800)) & (0x80f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMOV_rs_A1((u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x3)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0x800)) & (0x84f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VDUP_r_A1((u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
								}
								else {
									if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_MCR_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x7)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x7)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									} else goto undefined;
								}
							}
						}
						else {
							if (!(inst & ((u32) 1 << (4)))) {
								if (!(inst & ((u32) 1 << (8)))) {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMLS_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELVS_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMS_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VADD_f_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELGT_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xca0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMOV_i_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMLA_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMA_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VSUB_f_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (18)))) {
													if (!(inst & ((u32) 1 << (17)))) {
														if (!(inst & ((u32) 1 << (16)))) {
															if (!(inst & ((u32) 1 << (19)))) {
																if (!(inst & ((u32) 1 << (7)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VMOV_r_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																		arm_aarch32_VMOVX_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																	}																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VABS_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																		arm_aarch32_VINS_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																	}																}
															}
															else {
																if ((!((inst ^ (0xf0000800)) & (0xf0000c80)))) {
																	arm_aarch32_VRINTA_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_vi_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}															}
														}
														else {
															if (!(inst & ((u32) 1 << (7)))) {
																if (!(inst & ((u32) 1 << (19)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VNEG_A2_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																		arm_aarch32_VRINTN_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if ((!((inst ^ (0x800)) & (0x80c00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VSQRT_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																} else goto undefined;
															}
														}
													}
													else {
														if (!(inst & ((u32) 1 << (19)))) {
															if (!(inst & ((u32) 1 << (7)))) {
																if (!(inst & ((u32) 1 << (16)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTB_A1_SH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTB_A1_HS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (16)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTT_A1_SH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTT_A1_HS((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if ((!((inst ^ (0xf0010800)) & (0xf0010c80)))) {
																arm_aarch32_VRINTM_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010c80)))) {
																arm_aarch32_VRINTP_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_toxv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
													}
												}
												else {
													if (!(inst & ((u32) 1 << (19)))) {
														if (!(inst & ((u32) 1 << (7)))) {
															if (!(inst & ((u32) 1 << (16)))) {
																if (!(inst & ((u32) 1 << (17)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMP_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTR_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (17)))) {
																	if ((!((inst ^ (0x800)) & (0xc2f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMP_A2_S((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTX_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if (!(inst & ((u32) 1 << (16)))) {
																if (!(inst & ((u32) 1 << (17)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTZ_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (17)))) {
																	if ((!((inst ^ (0x800)) & (0xc2f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A2_S((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVT_ds_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
													}
													else {
														if (!(inst & ((u32) 1 << (17)))) {
															if (!(inst & ((u32) 1 << (16)))) {
																if ((!((inst ^ (0x880)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_uiv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_uiv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																	arm_aarch32_VCVTA_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
															else {
																if ((!((inst ^ (0x880)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_siv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_siv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																	arm_aarch32_VCVTN_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
														}
														else {
															if ((!((inst ^ (0xf0010800)) & (0xf0010c00)))) {
																arm_aarch32_VCVTM_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010c00)))) {
																arm_aarch32_VCVTP_vfp_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_xv_A1_S((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
													}
												}
											}
										}
									}
								}
								else {
									if (!(inst & ((u32) 1 << (6)))) {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMLS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELVS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMS_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VADD_f_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
													arm_aarch32_VSELGT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
												}											}
											else {
												if ((!((inst ^ (0x800)) & (0xca0))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VMOV_i_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
									}
									else {
										if (!(inst & ((u32) 1 << (21)))) {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VNMLA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VFNMA_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
										}
										else {
											if (!(inst & ((u32) 1 << (23)))) {
												if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
													arm_aarch32_VSUB_f_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
												} else goto undefined;
											}
											else {
												if (!(inst & ((u32) 1 << (19)))) {
													if (!(inst & ((u32) 1 << (7)))) {
														if (!(inst & ((u32) 1 << (16)))) {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VMOV_r_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMP_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTB_A1_DH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTR_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VNEG_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc2f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMP_A2_D((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTB_A1_HD((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTX_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
													}
													else {
														if (!(inst & ((u32) 1 << (16)))) {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VABS_A2_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTT_A1_DH((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VRINTZ_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if (!(inst & ((u32) 1 << (17)))) {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VSQRT_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc2f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCMPE_A2_D((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
															else {
																if (!(inst & ((u32) 1 << (18)))) {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVTT_A1_HD((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VCVT_sd_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (8)) & ((u32) 0x3)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
													}
												}
												else {
													if (!(inst & ((u32) 1 << (18)))) {
														if (!(inst & ((u32) 1 << (17)))) {
															if (!(inst & ((u32) 1 << (16)))) {
																if ((!((inst ^ (0xf0000800)) & (0xf0000c80)))) {
																	arm_aarch32_VRINTA_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_vi_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}															}
															else {
																if (!(inst & ((u32) 1 << (7)))) {
																	if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																		arm_aarch32_VRINTN_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																	} else goto undefined;
																}
																else {
																	if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																		arm_aarch32_VJCVT_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																	} else goto undefined;
																}
															}
														}
														else {
															if ((!((inst ^ (0xf0010800)) & (0xf0010c80)))) {
																arm_aarch32_VRINTM_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010c80)))) {
																arm_aarch32_VRINTP_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_toxv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
													}
													else {
														if (!(inst & ((u32) 1 << (17)))) {
															if (!(inst & ((u32) 1 << (16)))) {
																if ((!((inst ^ (0x880)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_uiv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_uiv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																	arm_aarch32_VCVTA_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
															else {
																if ((!((inst ^ (0x880)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVT_siv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0x800)) & (0xc80))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																	arm_aarch32_VCVTR_siv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x7)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
																}else if ((!((inst ^ (0xf0000800)) & (0xf0000c00)))) {
																	arm_aarch32_VCVTN_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
																}															}
														}
														else {
															if ((!((inst ^ (0xf0010800)) & (0xf0010c00)))) {
																arm_aarch32_VCVTM_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0xf0000800)) & (0xf0010c00)))) {
																arm_aarch32_VCVTP_vfp_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (22)) & ((u32) 0x1)) __dec_args_vals);
															}else if ((!((inst ^ (0x800)) & (0xc00))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
																arm_aarch32_VCVT_xv_A1_D((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x1)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0x1)), (u32) ((inst >> (22)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
															}														}
													}
												}
											}
										}
									}
								}
							}
							else {
								if (!(inst & ((u32) 1 << (10)))) {
									if (!(inst & ((u32) 1 << (8)))) {
										if (!(inst & ((u32) 1 << (21)))) {
											if ((!((inst ^ (0x800)) & (0xc0086f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMOV_s_A1((u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
										else {
											if ((!((inst ^ (0xc00800)) & (0xc008ef))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
												arm_aarch32_VMRS_A1_AS((u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
											} else goto undefined;
										}
									}
									else {
										if ((!((inst ^ (0x800)) & (0x80f))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
											arm_aarch32_VMOV_sr_A1((u32) ((inst >> (5)) & ((u32) 0x3)), (u32) ((inst >> (7)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x3)), (u32) ((inst >> (23)) & ((u32) 0x1)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
										} else goto undefined;
									}
								}
								else {
									if ((!((inst ^ (0x800)) & (0x800))) && ((inst ^ (0xf0000000)) & (0xf0000000))) {
										arm_aarch32_MRC_A1((u32) (inst & ((u32) 0xf)), (u32) ((inst >> (5)) & ((u32) 0x7)), (u32) ((inst >> (8)) & ((u32) 0x1)), (u32) ((inst >> (12)) & ((u32) 0xf)), (u32) ((inst >> (16)) & ((u32) 0xf)), (u32) ((inst >> (21)) & ((u32) 0x7)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
									} else goto undefined;
								}
							}
						}
					}
				}
				else {
						arm_aarch32_SVC_A1((u32) (inst & ((u32) 0xffffff)), (u32) ((inst >> (28)) & ((u32) 0xf)) __dec_args_vals);
				}
			}
		}
	}
	return 0;
	undefined:;
	return 1;
}
#endif /* __dec_args_sig */

