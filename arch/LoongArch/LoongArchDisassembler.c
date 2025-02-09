/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2023 */
/* Automatically translated source file from LLVM. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Only small edits allowed. */
/* For multiple similar edits, please create a Patch for the translator. */

/* Capstone's C++ file translator: */
/* https://github.com/capstone-engine/capstone/tree/next/suite/auto-sync */

//===-- LoongArchDisassembler.cpp - Disassembler for LoongArch ------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements the LoongArchDisassembler class.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <capstone/platform.h>

#include "../../MCInst.h"
#include "../../MathExtras.h"
#include "../../MCInstPrinter.h"
#include "../../MCDisassembler.h"
#include "../../MCFixedLenDisassembler.h"
#include "../../cs_priv.h"
#include "../../utils.h"
#include "LoongArchDisassemblerExtension.h"
#include "LoongArchInstPrinter.h"

#define GET_SUBTARGETINFO_ENUM
#include "LoongArchGenSubtargetInfo.inc"

#define GET_INSTRINFO_ENUM
#include "LoongArchGenInstrInfo.inc"

#define GET_REGINFO_ENUM
#include "LoongArchGenRegisterInfo.inc"

#define CONCAT(a, b) CONCAT_(a, b)
#define CONCAT_(a, b) a##_##b

#define DEBUG_TYPE "loongarch-disassembler"

// typedef MCDisassembler::DecodeStatus DecodeStatus;

;
// end namespace

//static MCDisassembler *createLoongArchDisassembler(const Target &T,
//                                                   const MCSubtargetInfo &STI,
//                                                   MCContext &Ctx) {
//  return new LoongArchDisassembler(STI, Ctx);
//}
//
//extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeLoongArchDisassembler() {
//  // Register the disassembler for each target.
//  TargetRegistry::RegisterMCDisassembler(getTheLoongArch32Target(),
//                                         createLoongArchDisassembler);
//  TargetRegistry::RegisterMCDisassembler(getTheLoongArch64Target(),
//                                         createLoongArchDisassembler);
//}

static DecodeStatus DecodeGPRRegisterClass(MCInst *Inst, uint64_t RegNo,
					   uint64_t Address,
					   const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;
	MCOperand_CreateReg0(Inst, (LoongArch_R0 + RegNo));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeFPR32RegisterClass(MCInst *Inst, uint64_t RegNo,
					     uint64_t Address,
					     const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;
	MCOperand_CreateReg0(Inst, (LoongArch_F0 + RegNo));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeFPR64RegisterClass(MCInst *Inst, uint64_t RegNo,
					     uint64_t Address,
					     const void *Decoder)
{
	if (RegNo >= 32)
		return MCDisassembler_Fail;
	MCOperand_CreateReg0(Inst, (LoongArch_F0_64 + RegNo));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeCFRRegisterClass(MCInst *Inst, uint64_t RegNo,
					   uint64_t Address,
					   const void *Decoder)
{
	if (RegNo >= 8)
		return MCDisassembler_Fail;
	MCOperand_CreateReg0(Inst, (LoongArch_FCC0 + RegNo));
	return MCDisassembler_Success;
}

static DecodeStatus DecodeFCSRRegisterClass(MCInst *Inst, uint64_t RegNo,
					    uint64_t Address,
					    const void *Decoder)
{
	if (RegNo >= 4)
		return MCDisassembler_Fail;
	MCOperand_CreateReg0(Inst, (LoongArch_FCSR0 + RegNo));
	return MCDisassembler_Success;
}

#define DEFINE_decodeUImmOperand(N, P) \
	static DecodeStatus CONCAT(decodeUImmOperand, CONCAT(N, P))( \
		MCInst * Inst, uint64_t Imm, int64_t Address, \
		const void *Decoder) \
	{ \
		MCOperand_CreateImm0(Inst, (Imm + P)); \
		return MCDisassembler_Success; \
	}
DEFINE_decodeUImmOperand(2, 1);
DEFINE_decodeUImmOperand(12, 0);

#define DEFINE_decodeSImmOperand(N, S) \
	static DecodeStatus CONCAT(decodeSImmOperand, CONCAT(N, S))( \
		MCInst * Inst, uint64_t Imm, int64_t Address, \
		const void *Decoder) \
	{ \
		MCOperand_CreateImm0(Inst, (SignExtend64((Imm << S), N + S))); \
		return MCDisassembler_Success; \
	}
DEFINE_decodeSImmOperand(12, 0);
DEFINE_decodeSImmOperand(16, 0);
DEFINE_decodeSImmOperand(20, 0);
DEFINE_decodeSImmOperand(14, 2);
DEFINE_decodeSImmOperand(21, 2);
DEFINE_decodeSImmOperand(16, 2);
DEFINE_decodeSImmOperand(26, 2);

#include "LoongArchGenDisassemblerTables.inc"

DecodeStatus getInstruction(MCInst *MI, uint16_t *Size, const uint8_t *Bytes,
			    size_t BytesLen, uint64_t Address, SStream *CS)
{
	uint32_t Insn;
	DecodeStatus Result;

	// We want to read exactly 4 bytes of data because all LoongArch instructions
	// are fixed 32 bits.
	if (BytesLen < 4) {
		*Size = 0;
		return MCDisassembler_Fail;
	}

	Insn = support_endian_read32le(Bytes);
	// Calling the auto-generated decoder function.
	Result = decodeInstruction_4(DecoderTable32, MI, Insn, Address, NULL);
	*Size = 4;

	return Result;
}

DecodeStatus LoongArch_LLVM_getInstruction(csh handle, const uint8_t *Bytes,
										 size_t ByteLen, MCInst *MI, uint16_t *Size, uint64_t Address,
										 void *Info) {
	DecodeStatus Result = MCDisassembler_Fail;
	Result = getInstruction(MI, Size, Bytes, ByteLen, Address, NULL);
	return Result;
}