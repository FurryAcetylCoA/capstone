#ifndef CAPSTONE_LOONGARCH_H
#define CAPSTONE_LOONGARCH_H

/* Capstone Disassembly Engine */
/* LoongArch Backend By Jiajie Chen */

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_MSC_VER) || !defined(_KERNEL_MODE)
#include <stdint.h>
#endif

#include "platform.h"

//> Operand type for instruction's operands
typedef enum loongarch_op_type {
	LOONGARCH_OP_INVALID = 0, // = CS_OP_INVALID (Uninitialized).
	LOONGARCH_OP_REG, // = CS_OP_REG (Register operand).
	LOONGARCH_OP_IMM, // = CS_OP_IMM (Immediate operand).
	LOONGARCH_OP_MEM, // = CS_OP_MEM (Memory operand).
} loongarch_op_type;

// Instruction's operand referring to memory
// This is associated with LOONGARCH_OP_MEM operand type above
typedef struct loongarch_op_mem {
	unsigned int base;	// base register
	int64_t disp;	// displacement/offset value
} loongarch_op_mem;

// Instruction operand
typedef struct cs_loongarch_op {
	loongarch_op_type type;	// operand type
	union {
		unsigned int reg;	// register value for REG operand
		int64_t imm;		// immediate value for IMM operand
		loongarch_op_mem mem;	// base/disp value for MEM operand
	};
} cs_loongarch_op;

// Instruction structure
typedef struct cs_loongarch {
	// Number of operands of this instruction, 
	// or 0 when instruction has no operand.
	uint8_t op_count;
	cs_loongarch_op operands[8]; // operands for this instruction.
} cs_loongarch;

//> LOONGARCH registers
typedef enum loongarch_reg {
	LOONGARCH_REG_INVALID = 0,
	//> General purpose registers

	//> Floating-point registers
	LOONGARCH_REG_ENDING,		// <-- mark the end of the list or registers
} loongarch_reg;

//> LOONGARCH instruction
typedef enum loongarch_insn {
  	LOONGARCH_INS_INVALID = 0,
	
  	LOONGARCH_INS_ENDING,
} loongarch_insn;

//> Group of LOONGARCH instructions
typedef enum loongarch_insn_group {
  	LOONGARCH_GRP_INVALID = 0, ///< = CS_GRP_INVALID

  	// Generic groups
  	// all jump instructions (conditional+direct+indirect jumps)
  	LOONGARCH_GRP_JUMP,	///< = CS_GRP_JUMP
  	// all call instructions
  	LOONGARCH_GRP_CALL,	///< = CS_GRP_CALL
  	// all return instructions
  	LOONGARCH_GRP_RET,	///< = CS_GRP_RET
  	// all interrupt instructions (int+syscall)
  	LOONGARCH_GRP_INT,	///< = CS_GRP_INT
  	// all interrupt return instructions
  	LOONGARCH_GRP_IRET,	///< = CS_GRP_IRET
  	// all privileged instructions
  	LOONGARCH_GRP_PRIVILEGE,	///< = CS_GRP_PRIVILEGE
  	// all relative branching instructions
  	LOONGARCH_GRP_BRANCH_RELATIVE, ///< = CS_GRP_BRANCH_RELATIVE
  
  	// Architecture-specific groups

  	LOONGARCH_GRP_ENDING,
} loongarch_insn_group;

#ifdef __cplusplus
}
#endif

#endif

