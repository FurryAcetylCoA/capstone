/* Capstone Disassembly Engine */
/* By Jiajie Chen <c@jia.je>, 2024 */
#ifndef CS_LOONGARCHDISASSEMBLER_H
#define CS_LOONGARCHDISASSEMBLER_H

#include "capstone/capstone.h"
#include "../../MCRegisterInfo.h"
#include "../../MCInst.h"
#include "../../MCDisassembler.h"


DecodeStatus LoongArch_LLVM_getInstruction(csh handle, const uint8_t *Bytes,
										 size_t ByteLen, MCInst *MI, uint16_t *Size, uint64_t Address,
										 void *Info);

#endif // CS_LOONGARCHDISASSEMBLER_H
