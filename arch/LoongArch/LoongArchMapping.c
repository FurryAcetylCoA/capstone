/* Capstone Disassembly Engine */
/* By Jiajie Chen <c@jia.je>, 2024 */

#include "capstone/loongarch.h"
#ifdef CAPSTONE_HAS_LOONGARCH

#include <stdio.h>
#include <string.h>

#include "capstone/capstone.h"

#include "../../Mapping.h"
#include "../../MCDisassembler.h"
#include "../../cs_priv.h"
#include "../../cs_simple_types.h"

#include "LoongArchMapping.h"
#include "LoongArchDisassembler.h"
#include "LoongArchInstPrinter.h"

#ifndef CAPSTONE_DIET
static const name_map reg_name_maps[] = {
	{LOONGARCH_REG_INVALID, NULL },

	{LOONGARCH_REG_R0, "zero" },
	{LOONGARCH_REG_R1, "ra" },
	{LOONGARCH_REG_R2, "tp" },
	{LOONGARCH_REG_R3, "sp" },
	{LOONGARCH_REG_R4, "a0" },
	{LOONGARCH_REG_R5, "a1" },
	{LOONGARCH_REG_R6, "a2" },
	{LOONGARCH_REG_R7, "a3" },
	{LOONGARCH_REG_R8, "a4" },
	{LOONGARCH_REG_R9, "a5" },
	{LOONGARCH_REG_R10, "a6" },
	{LOONGARCH_REG_R11, "a7" },
	{LOONGARCH_REG_R12, "t0" },
	{LOONGARCH_REG_R13, "t1" },
	{LOONGARCH_REG_R14, "t2" },
	{LOONGARCH_REG_R15, "t3" },
	{LOONGARCH_REG_R16, "t4" },
	{LOONGARCH_REG_R17, "t5" },
	{LOONGARCH_REG_R18, "t6" },
	{LOONGARCH_REG_R19, "t7" },
	{LOONGARCH_REG_R20, "t8" },
	{LOONGARCH_REG_R21, "r21" },
	{LOONGARCH_REG_R22, "fp" },
	{LOONGARCH_REG_R23, "s0" },
	{LOONGARCH_REG_R24, "s1" },
	{LOONGARCH_REG_R25, "s2" },
	{LOONGARCH_REG_R26, "s3" },
	{LOONGARCH_REG_R27, "s4" },
	{LOONGARCH_REG_R28, "s5" },
	{LOONGARCH_REG_R29, "s6" },
	{LOONGARCH_REG_R30, "s7" },
	{LOONGARCH_REG_R31, "s8" },

	{LOONGARCH_REG_F0, "fa0" },
	{LOONGARCH_REG_F1, "fa1" },
	{LOONGARCH_REG_F2, "fa2" },
	{LOONGARCH_REG_F3, "fa3" },
	{LOONGARCH_REG_F4, "fa4" },
	{LOONGARCH_REG_F5, "fa5" },
	{LOONGARCH_REG_F6, "fa6" },
	{LOONGARCH_REG_FA6, "fa6" },
	{LOONGARCH_REG_FA7, "fa7" },
	{LOONGARCH_REG_F8, "ft0" },
	{LOONGARCH_REG_F9, "ft1" },
	{LOONGARCH_REG_F10, "ft2" },
	{LOONGARCH_REG_F11, "ft3" },
	{LOONGARCH_REG_F12, "ft4" },
	{LOONGARCH_REG_F13, "ft5" },
	{LOONGARCH_REG_F14, "ft6" },
	{LOONGARCH_REG_F15, "ft7" },
	{LOONGARCH_REG_F16, "ft8" },
	{LOONGARCH_REG_F17, "ft9" },
	{LOONGARCH_REG_F18, "ft10" },
	{LOONGARCH_REG_F19, "ft11" },
	{LOONGARCH_REG_F20, "ft12" },
	{LOONGARCH_REG_F21, "ft13" },
	{LOONGARCH_REG_F22, "ft14" },
	{LOONGARCH_REG_F23, "ft15" },
	{LOONGARCH_REG_F24, "fs0" },
	{LOONGARCH_REG_F25, "fs1" },
	{LOONGARCH_REG_F26, "fs2" },
	{LOONGARCH_REG_F27, "fs3" },
	{LOONGARCH_REG_F28, "fs4" },
	{LOONGARCH_REG_F29, "fs5" },
	{LOONGARCH_REG_F30, "fs6" },
	{LOONGARCH_REG_F31, "fs7" },
};
#endif

#define GET_REGINFO_ENUM
#define GET_REGINFO_MC_DESC
#include "LoongArchGenRegisterInfo.inc"
void LoongArch_init_mri(MCRegisterInfo *MRI)
{
	//InitMCRegisterInfo(LoongArchRegDesc, 109, 
	//					RA, PC, 
	//					LoongArchMCRegisterClasses, 6, 
	//					LoongArchRegUnitRoots, 76, 
	//					LoongArchRegDiffLists, LoongArchLaneMaskLists, 
	//					LoongArchRegStrings, 
	//					LoongArchRegClassStrings, 
	//					LoongArchSubRegIdxLists, 2,
	//					LoongArchSubRegIdxRanges, LoongArchRegEncodingTable);

	MCRegisterInfo_InitMCRegisterInfo(MRI,
	  			     LoongArchRegDesc, sizeof(LoongArchRegDesc), 
					 0, 0,
                     LoongArchMCRegisterClasses, ARR_SIZE(LoongArchMCRegisterClasses),
                     0, 0,
                     LoongArchRegDiffLists,
                     0,
                     LoongArchSubRegIdxLists,
                     ARR_SIZE(LoongArchSubRegIdxLists),
                     0);
}

const char *LoongArch_reg_name(csh handle, unsigned int reg)
{
#ifndef CAPSTONE_DIET
	if(reg >= LOONGARCH_REG_ENDING)
		return NULL;
	return reg_name_maps[reg].name;
#else
	return NULL;
#endif
}

void LoongArch_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id)
{
	// Not used by LoongArch. Information is set after disassembly.
}

static const char *const insn_name_maps[] = {
#include "LoongArchGenCSMappingInsnName.inc"
};

const char *LoongArch_insn_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
	if(id < ARR_SIZE(insn_name_maps))
		return insn_name_maps[id];
	// not found
	return NULL;
#else
	return NULL;
#endif
}

#ifndef CAPSTONE_DIET
static const name_map group_name_maps[] = {
	{LOONGARCH_GRP_INVALID, NULL},

  	{ LOONGARCH_GRP_JUMP, "jump" },
  	{ LOONGARCH_GRP_CALL, "call" },
  	{ LOONGARCH_GRP_RET, "return" },
  	{ LOONGARCH_GRP_INT, "int" },
  	{ LOONGARCH_GRP_IRET, "iret" },
  	{ LOONGARCH_GRP_PRIVILEGE, "privilege" },
  	{ LOONGARCH_GRP_BRANCH_RELATIVE, "branch_relative" },

	// architecture-specific groups
	#include "LoongArchGenCSFeatureName.inc"
};
#endif

const char *LoongArch_group_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
	return id2name(group_name_maps, ARR_SIZE(group_name_maps), id);
#else
	return NULL;
#endif
}

void LoongArch_reg_access(const cs_insn *insn, cs_regs regs_read,
		    uint8_t *regs_read_count, cs_regs regs_write,
		    uint8_t *regs_write_count)
{
}

bool LoongArch_getInstruction(csh handle, const uint8_t *code, size_t code_len,
			MCInst *instr, uint16_t *size, uint64_t address,
			void *info)
{
}

void LoongArch_printer(MCInst *MI, SStream *O, void * /* MCRegisterInfo* */ info)
{
}

#endif
