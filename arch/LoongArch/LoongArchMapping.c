/* Capstone Disassembly Engine */
/* By Jiajie Chen <c@jia.je>, 2024 */

#ifdef CAPSTONE_HAS_LOONGARCH

#include <stdio.h>
#include <string.h>

#include "capstone/capstone.h"

#include "../../Mapping.h"
#include "../../MCDisassembler.h"
#include "../../cs_priv.h"
#include "../../cs_simple_types.h"

void LoongArch_init_mri(MCRegisterInfo *MRI)
{
}

const char *LoongArch_reg_name(csh handle, unsigned int reg)
{
}

void LoongArch_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id)
{
	// Not used by LoongArch. Information is set after disassembly.
}

const char *LoongArch_insn_name(csh handle, unsigned int id)
{
}

const char *LoongArch_group_name(csh handle, unsigned int id)
{
	return NULL;
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
