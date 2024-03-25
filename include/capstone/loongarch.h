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
	LOONGARCH_REG_R0,			// "zero"
	LOONGARCH_REG_ZERO = LOONGARCH_REG_R0,	// "zero"
	LOONGARCH_REG_R1,			// "ra"
	LOONGARCH_REG_RA = LOONGARCH_REG_R1,	// "ra"
	LOONGARCH_REG_R2,			// "tp"
	LOONGARCH_REG_TP = LOONGARCH_REG_R2,	// "tp"
	LOONGARCH_REG_R3,			// "sp"
	LOONGARCH_REG_SP = LOONGARCH_REG_R3,	// "sp"
	LOONGARCH_REG_R4,			// "a0"
	LOONGARCH_REG_A0 = LOONGARCH_REG_R4,	// "a0"
	LOONGARCH_REG_R5,			// "a1"
	LOONGARCH_REG_A1 = LOONGARCH_REG_R5,	// "a1"
	LOONGARCH_REG_R6,			// "a2"
	LOONGARCH_REG_A2 = LOONGARCH_REG_R6,	// "a2"
	LOONGARCH_REG_R7,			// "a3"
	LOONGARCH_REG_A3 = LOONGARCH_REG_R7,	// "a3"
	LOONGARCH_REG_R8,			// "a4"
	LOONGARCH_REG_A4 = LOONGARCH_REG_R8,	// "a4"
	LOONGARCH_REG_R9,			// "a5"
	LOONGARCH_REG_A5 = LOONGARCH_REG_R9,	// "a5"
	LOONGARCH_REG_R10,			// "a6"
	LOONGARCH_REG_A6 = LOONGARCH_REG_R10,	// "a6"
	LOONGARCH_REG_R11,			// "a7"
	LOONGARCH_REG_A7 = LOONGARCH_REG_R11,	// "a7"
	LOONGARCH_REG_R12,			// "t0"
	LOONGARCH_REG_T0 = LOONGARCH_REG_R12,	// "t0"
	LOONGARCH_REG_R13,			// "t1"
	LOONGARCH_REG_T1 = LOONGARCH_REG_R13,	// "t1"
	LOONGARCH_REG_R14,			// "t2"
	LOONGARCH_REG_T2 = LOONGARCH_REG_R14,	// "t2"
	LOONGARCH_REG_R15,			// "t3"
	LOONGARCH_REG_T3 = LOONGARCH_REG_R15,	// "t3"
	LOONGARCH_REG_R16,			// "t4"
	LOONGARCH_REG_T4 = LOONGARCH_REG_R16,	// "t4"
	LOONGARCH_REG_R17,			// "t5"
	LOONGARCH_REG_T5 = LOONGARCH_REG_R17,	// "t5"
	LOONGARCH_REG_R18,			// "t6"
	LOONGARCH_REG_T6 = LOONGARCH_REG_R18,	// "t6"
	LOONGARCH_REG_R19,			// "t7"
	LOONGARCH_REG_T7 = LOONGARCH_REG_R19,	// "t7"
	LOONGARCH_REG_R20,			// "t8"
	LOONGARCH_REG_T8 = LOONGARCH_REG_R20,	// "t8"
	LOONGARCH_REG_R21,
	LOONGARCH_REG_R22,			// "fp"
	LOONGARCH_REG_FP = LOONGARCH_REG_R22,	// "fp"
	LOONGARCH_REG_S9 = LOONGARCH_REG_R22,	// "s9"
	LOONGARCH_REG_R23,			// "s0"
	LOONGARCH_REG_S0 = LOONGARCH_REG_R23,	// "s0"
	LOONGARCH_REG_R24,			// "s1"
	LOONGARCH_REG_S1 = LOONGARCH_REG_R24,	// "s1"
	LOONGARCH_REG_R25,			// "s2"
	LOONGARCH_REG_S2 = LOONGARCH_REG_R25,	// "s2"
	LOONGARCH_REG_R26,			// "s3"
	LOONGARCH_REG_S3 = LOONGARCH_REG_R26,	// "s3"
	LOONGARCH_REG_R27,			// "s4"
	LOONGARCH_REG_S4 = LOONGARCH_REG_R27,	// "s4"
	LOONGARCH_REG_R28,			// "s5"
	LOONGARCH_REG_S5 = LOONGARCH_REG_R28,	// "s5"
	LOONGARCH_REG_R29,			// "s6"
	LOONGARCH_REG_S6 = LOONGARCH_REG_R29,	// "s6"
	LOONGARCH_REG_R30,			// "s7"
	LOONGARCH_REG_S7 = LOONGARCH_REG_R30,	// "s7"
	LOONGARCH_REG_R31,			// "s8"
	LOONGARCH_REG_S8 = LOONGARCH_REG_R31,	// "s8"

	//> Floating-point registers
	LOONGARCH_REG_F0,			// "fa0"
	LOONGARCH_REG_FA0 = LOONGARCH_REG_F0,	// "fa0"
	LOONGARCH_REG_F1,			// "fa1"
	LOONGARCH_REG_FA1 = LOONGARCH_REG_F1,	// "fa1"
	LOONGARCH_REG_F2,			// "fa2"
	LOONGARCH_REG_FA2 = LOONGARCH_REG_F2,	// "fa2"
	LOONGARCH_REG_F3,			// "fa3"
	LOONGARCH_REG_FA3 = LOONGARCH_REG_F3,	// "fa3"
	LOONGARCH_REG_F4,			// "fa4"
	LOONGARCH_REG_FA4 = LOONGARCH_REG_F4,	// "fa4"
	LOONGARCH_REG_F5,			// "fa5"
	LOONGARCH_REG_FA5 = LOONGARCH_REG_F5,	// "fa5"
	LOONGARCH_REG_F6,			// "fa6"
	LOONGARCH_REG_FA6 = LOONGARCH_REG_F6,	// "fa6"
	LOONGARCH_REG_F7,			// "fa7"
	LOONGARCH_REG_FA7 = LOONGARCH_REG_F7,	// "fa7"
	LOONGARCH_REG_F8,			// "ft0"
	LOONGARCH_REG_FT0 = LOONGARCH_REG_F8,	// "ft0"
	LOONGARCH_REG_F9,			// "ft1"
	LOONGARCH_REG_FT1 = LOONGARCH_REG_F9,	// "ft1"
	LOONGARCH_REG_F10,			// "ft2"
	LOONGARCH_REG_FT2 = LOONGARCH_REG_F10,	// "ft2"
	LOONGARCH_REG_F11,			// "ft3"
	LOONGARCH_REG_FT3 = LOONGARCH_REG_F11,	// "ft3"
	LOONGARCH_REG_F12,			// "ft4"
	LOONGARCH_REG_FT4 = LOONGARCH_REG_F12,	// "ft4"
	LOONGARCH_REG_F13,			// "ft5"
	LOONGARCH_REG_FT5 = LOONGARCH_REG_F13,	// "ft5"
	LOONGARCH_REG_F14,			// "ft6"
	LOONGARCH_REG_FT6 = LOONGARCH_REG_F14,	// "ft6"
	LOONGARCH_REG_F15,			// "ft7"
	LOONGARCH_REG_FT7 = LOONGARCH_REG_F15,	// "ft7"
	LOONGARCH_REG_F16,			// "ft8"
	LOONGARCH_REG_FT8 = LOONGARCH_REG_F16,	// "ft8"
	LOONGARCH_REG_F17,			// "ft9"
	LOONGARCH_REG_FT9 = LOONGARCH_REG_F17,	// "ft9"
	LOONGARCH_REG_F18,			// "ft10"
	LOONGARCH_REG_FT10 = LOONGARCH_REG_F18,	// "ft10"
	LOONGARCH_REG_F19,			// "ft11"
	LOONGARCH_REG_FT11 = LOONGARCH_REG_F19,	// "ft11"
	LOONGARCH_REG_F20,			// "ft12"
	LOONGARCH_REG_FT12 = LOONGARCH_REG_F20,	// "ft12"
	LOONGARCH_REG_F21,			// "ft13"
	LOONGARCH_REG_FT13 = LOONGARCH_REG_F21,	// "ft13"
	LOONGARCH_REG_F22,			// "ft14"
	LOONGARCH_REG_FT14 = LOONGARCH_REG_F22,	// "ft14"
	LOONGARCH_REG_F23,			// "ft15"
	LOONGARCH_REG_FT15 = LOONGARCH_REG_F23,	// "ft15"
	LOONGARCH_REG_F24,			// "fs0"
	LOONGARCH_REG_FS0 = LOONGARCH_REG_F24,	// "fs0"
	LOONGARCH_REG_F25,			// "fs1"
	LOONGARCH_REG_FS1 = LOONGARCH_REG_F25,	// "fs1"
	LOONGARCH_REG_F26,			// "fs2"
	LOONGARCH_REG_FS2 = LOONGARCH_REG_F26,	// "fs2"
	LOONGARCH_REG_F27,			// "fs3"
	LOONGARCH_REG_FS3 = LOONGARCH_REG_F27,	// "fs3"
	LOONGARCH_REG_F28,			// "fs4"
	LOONGARCH_REG_FS4 = LOONGARCH_REG_F28,	// "fs4"
	LOONGARCH_REG_F29,			// "fs5"
	LOONGARCH_REG_FS5 = LOONGARCH_REG_F29,	// "fs5"
	LOONGARCH_REG_F30,			// "fs6"
	LOONGARCH_REG_FS6 = LOONGARCH_REG_F30,	// "fs6"
	LOONGARCH_REG_F31,			// "fs7"
	LOONGARCH_REG_FS7 = LOONGARCH_REG_F31,	// "fs7"

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
	// generated content <LoongArchGenCSFeatureEnum.inc> begin
	LoongArch_FEATURE_IsLA64 = 128,
	LoongArch_FEATURE_IsLA32,
	LoongArch_FEATURE_HasBasicF,
	LoongArch_FEATURE_HasBasicD,
	LoongArch_FEATURE_HasExtLSX,
	LoongArch_FEATURE_HasExtLASX,
	LoongArch_FEATURE_HasExtLVZ,
	LoongArch_FEATURE_HasExtLBT,
	LoongArch_FEATURE_HasLaGlobalWithPcrel,
	LoongArch_FEATURE_HasLaGlobalWithAbs,
	LoongArch_FEATURE_HasLaLocalWithAbs,

  	LOONGARCH_GRP_ENDING,
} loongarch_insn_group;

#ifdef __cplusplus
}
#endif

#endif

