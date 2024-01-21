/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2023 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

#include "../../MCInst.h"
#include "../../LEB128.h"

// Helper function for extracting fields from encoded instructions.
#define FieldFromInstruction(fname, InsnType) \
static InsnType fname(InsnType insn, unsigned startBit, unsigned numBits) \
{ \
  InsnType fieldMask; \
  if (numBits == sizeof(InsnType) * 8) \
    fieldMask = (InsnType)(-1LL); \
  else \
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit; \
  return (insn & fieldMask) >> startBit; \
}

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD_OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD_OPC_FilterValue, 0, 143, 9, 0, // Skip to: 2455
/* 8 */       MCD_OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 11 */      MCD_OPC_FilterValue, 0, 7, 4, 0, // Skip to: 1047
/* 16 */      MCD_OPC_ExtractField, 18, 4,  // Inst{21-18} ...
/* 19 */      MCD_OPC_FilterValue, 0, 73, 1, 0, // Skip to: 353
/* 24 */      MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 27 */      MCD_OPC_FilterValue, 0, 23, 1, 0, // Skip to: 311
/* 32 */      MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 35 */      MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 44
/* 40 */      MCD_OPC_Decode, 250, 2, 0, // Opcode: CLO_W
/* 44 */      MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 53
/* 49 */      MCD_OPC_Decode, 252, 2, 0, // Opcode: CLZ_W
/* 53 */      MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 62
/* 58 */      MCD_OPC_Decode, 138, 3, 0, // Opcode: CTO_W
/* 62 */      MCD_OPC_FilterValue, 7, 4, 0, 0, // Skip to: 71
/* 67 */      MCD_OPC_Decode, 140, 3, 0, // Opcode: CTZ_W
/* 71 */      MCD_OPC_FilterValue, 8, 9, 0, 0, // Skip to: 85
/* 76 */      MCD_OPC_CheckPredicate, 0, 138, 21, 0, // Skip to: 5595
/* 81 */      MCD_OPC_Decode, 249, 2, 0, // Opcode: CLO_D
/* 85 */      MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 99
/* 90 */      MCD_OPC_CheckPredicate, 0, 124, 21, 0, // Skip to: 5595
/* 95 */      MCD_OPC_Decode, 251, 2, 0, // Opcode: CLZ_D
/* 99 */      MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 113
/* 104 */     MCD_OPC_CheckPredicate, 0, 110, 21, 0, // Skip to: 5595
/* 109 */     MCD_OPC_Decode, 137, 3, 0, // Opcode: CTO_D
/* 113 */     MCD_OPC_FilterValue, 11, 9, 0, 0, // Skip to: 127
/* 118 */     MCD_OPC_CheckPredicate, 0, 96, 21, 0, // Skip to: 5595
/* 123 */     MCD_OPC_Decode, 139, 3, 0, // Opcode: CTZ_D
/* 127 */     MCD_OPC_FilterValue, 12, 4, 0, 0, // Skip to: 136
/* 132 */     MCD_OPC_Decode, 240, 4, 0, // Opcode: REVB_2H
/* 136 */     MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 150
/* 141 */     MCD_OPC_CheckPredicate, 0, 73, 21, 0, // Skip to: 5595
/* 146 */     MCD_OPC_Decode, 242, 4, 0, // Opcode: REVB_4H
/* 150 */     MCD_OPC_FilterValue, 14, 9, 0, 0, // Skip to: 164
/* 155 */     MCD_OPC_CheckPredicate, 0, 59, 21, 0, // Skip to: 5595
/* 160 */     MCD_OPC_Decode, 241, 4, 0, // Opcode: REVB_2W
/* 164 */     MCD_OPC_FilterValue, 15, 9, 0, 0, // Skip to: 178
/* 169 */     MCD_OPC_CheckPredicate, 0, 45, 21, 0, // Skip to: 5595
/* 174 */     MCD_OPC_Decode, 243, 4, 0, // Opcode: REVB_D
/* 178 */     MCD_OPC_FilterValue, 16, 9, 0, 0, // Skip to: 192
/* 183 */     MCD_OPC_CheckPredicate, 0, 31, 21, 0, // Skip to: 5595
/* 188 */     MCD_OPC_Decode, 244, 4, 0, // Opcode: REVH_2W
/* 192 */     MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 206
/* 197 */     MCD_OPC_CheckPredicate, 0, 17, 21, 0, // Skip to: 5595
/* 202 */     MCD_OPC_Decode, 245, 4, 0, // Opcode: REVH_D
/* 206 */     MCD_OPC_FilterValue, 18, 4, 0, 0, // Skip to: 215
/* 211 */     MCD_OPC_Decode, 232, 2, 0, // Opcode: BITREV_4B
/* 215 */     MCD_OPC_FilterValue, 19, 9, 0, 0, // Skip to: 229
/* 220 */     MCD_OPC_CheckPredicate, 0, 250, 20, 0, // Skip to: 5595
/* 225 */     MCD_OPC_Decode, 233, 2, 0, // Opcode: BITREV_8B
/* 229 */     MCD_OPC_FilterValue, 20, 4, 0, 0, // Skip to: 238
/* 234 */     MCD_OPC_Decode, 235, 2, 0, // Opcode: BITREV_W
/* 238 */     MCD_OPC_FilterValue, 21, 9, 0, 0, // Skip to: 252
/* 243 */     MCD_OPC_CheckPredicate, 0, 227, 20, 0, // Skip to: 5595
/* 248 */     MCD_OPC_Decode, 234, 2, 0, // Opcode: BITREV_D
/* 252 */     MCD_OPC_FilterValue, 22, 4, 0, 0, // Skip to: 261
/* 257 */     MCD_OPC_Decode, 149, 3, 0, // Opcode: EXT_W_H
/* 261 */     MCD_OPC_FilterValue, 23, 4, 0, 0, // Skip to: 270
/* 266 */     MCD_OPC_Decode, 148, 3, 0, // Opcode: EXT_W_B
/* 270 */     MCD_OPC_FilterValue, 24, 4, 0, 0, // Skip to: 279
/* 275 */     MCD_OPC_Decode, 238, 4, 0, // Opcode: RDTIMEL_W
/* 279 */     MCD_OPC_FilterValue, 25, 4, 0, 0, // Skip to: 288
/* 284 */     MCD_OPC_Decode, 237, 4, 0, // Opcode: RDTIMEH_W
/* 288 */     MCD_OPC_FilterValue, 26, 9, 0, 0, // Skip to: 302
/* 293 */     MCD_OPC_CheckPredicate, 0, 177, 20, 0, // Skip to: 5595
/* 298 */     MCD_OPC_Decode, 239, 4, 0, // Opcode: RDTIME_D
/* 302 */     MCD_OPC_FilterValue, 27, 168, 20, 0, // Skip to: 5595
/* 307 */     MCD_OPC_Decode, 253, 2, 0, // Opcode: CPUCFG
/* 311 */     MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 332
/* 316 */     MCD_OPC_CheckPredicate, 0, 154, 20, 0, // Skip to: 5595
/* 321 */     MCD_OPC_CheckField, 0, 5, 0, 147, 20, 0, // Skip to: 5595
/* 328 */     MCD_OPC_Decode, 224, 2, 1, // Opcode: ASRTLE_D
/* 332 */     MCD_OPC_FilterValue, 3, 138, 20, 0, // Skip to: 5595
/* 337 */     MCD_OPC_CheckPredicate, 0, 133, 20, 0, // Skip to: 5595
/* 342 */     MCD_OPC_CheckField, 0, 5, 0, 126, 20, 0, // Skip to: 5595
/* 349 */     MCD_OPC_Decode, 223, 2, 1, // Opcode: ASRTGT_D
/* 353 */     MCD_OPC_FilterValue, 1, 26, 0, 0, // Skip to: 384
/* 358 */     MCD_OPC_ExtractField, 17, 1,  // Inst{17} ...
/* 361 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 370
/* 366 */     MCD_OPC_Decode, 182, 2, 2, // Opcode: ALSL_W
/* 370 */     MCD_OPC_FilterValue, 1, 100, 20, 0, // Skip to: 5595
/* 375 */     MCD_OPC_CheckPredicate, 0, 95, 20, 0, // Skip to: 5595
/* 380 */     MCD_OPC_Decode, 183, 2, 2, // Opcode: ALSL_WU
/* 384 */     MCD_OPC_FilterValue, 2, 11, 0, 0, // Skip to: 400
/* 389 */     MCD_OPC_CheckField, 17, 1, 0, 79, 20, 0, // Skip to: 5595
/* 396 */     MCD_OPC_Decode, 247, 2, 3, // Opcode: BYTEPICK_W
/* 400 */     MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 414
/* 405 */     MCD_OPC_CheckPredicate, 0, 65, 20, 0, // Skip to: 5595
/* 410 */     MCD_OPC_Decode, 246, 2, 4, // Opcode: BYTEPICK_D
/* 414 */     MCD_OPC_FilterValue, 4, 85, 0, 0, // Skip to: 504
/* 419 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 422 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 431
/* 427 */     MCD_OPC_Decode, 180, 2, 5, // Opcode: ADD_W
/* 431 */     MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 445
/* 436 */     MCD_OPC_CheckPredicate, 0, 34, 20, 0, // Skip to: 5595
/* 441 */     MCD_OPC_Decode, 179, 2, 5, // Opcode: ADD_D
/* 445 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 454
/* 450 */     MCD_OPC_Decode, 159, 5, 5, // Opcode: SUB_W
/* 454 */     MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 468
/* 459 */     MCD_OPC_CheckPredicate, 0, 11, 20, 0, // Skip to: 5595
/* 464 */     MCD_OPC_Decode, 158, 5, 5, // Opcode: SUB_D
/* 468 */     MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 477
/* 473 */     MCD_OPC_Decode, 128, 5, 5, // Opcode: SLT
/* 477 */     MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 486
/* 482 */     MCD_OPC_Decode, 130, 5, 5, // Opcode: SLTU
/* 486 */     MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 495
/* 491 */     MCD_OPC_Decode, 199, 4, 5, // Opcode: MASKEQZ
/* 495 */     MCD_OPC_FilterValue, 7, 231, 19, 0, // Skip to: 5595
/* 500 */     MCD_OPC_Decode, 200, 4, 5, // Opcode: MASKNEZ
/* 504 */     MCD_OPC_FilterValue, 5, 75, 0, 0, // Skip to: 584
/* 509 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 512 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 521
/* 517 */     MCD_OPC_Decode, 227, 4, 5, // Opcode: NOR
/* 521 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 530
/* 526 */     MCD_OPC_Decode, 220, 2, 5, // Opcode: AND
/* 530 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 539
/* 535 */     MCD_OPC_Decode, 228, 4, 5, // Opcode: OR
/* 539 */     MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 548
/* 544 */     MCD_OPC_Decode, 167, 5, 5, // Opcode: XOR
/* 548 */     MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 557
/* 553 */     MCD_OPC_Decode, 230, 4, 5, // Opcode: ORN
/* 557 */     MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 566
/* 562 */     MCD_OPC_Decode, 222, 2, 5, // Opcode: ANDN
/* 566 */     MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 575
/* 571 */     MCD_OPC_Decode, 255, 4, 5, // Opcode: SLL_W
/* 575 */     MCD_OPC_FilterValue, 7, 151, 19, 0, // Skip to: 5595
/* 580 */     MCD_OPC_Decode, 139, 5, 5, // Opcode: SRL_W
/* 584 */     MCD_OPC_FilterValue, 6, 77, 0, 0, // Skip to: 666
/* 589 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 592 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 601
/* 597 */     MCD_OPC_Decode, 135, 5, 5, // Opcode: SRA_W
/* 601 */     MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 615
/* 606 */     MCD_OPC_CheckPredicate, 0, 120, 19, 0, // Skip to: 5595
/* 611 */     MCD_OPC_Decode, 254, 4, 5, // Opcode: SLL_D
/* 615 */     MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 629
/* 620 */     MCD_OPC_CheckPredicate, 0, 106, 19, 0, // Skip to: 5595
/* 625 */     MCD_OPC_Decode, 138, 5, 5, // Opcode: SRL_D
/* 629 */     MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 643
/* 634 */     MCD_OPC_CheckPredicate, 0, 92, 19, 0, // Skip to: 5595
/* 639 */     MCD_OPC_Decode, 134, 5, 5, // Opcode: SRA_D
/* 643 */     MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 652
/* 648 */     MCD_OPC_Decode, 249, 4, 5, // Opcode: ROTR_W
/* 652 */     MCD_OPC_FilterValue, 7, 74, 19, 0, // Skip to: 5595
/* 657 */     MCD_OPC_CheckPredicate, 0, 69, 19, 0, // Skip to: 5595
/* 662 */     MCD_OPC_Decode, 248, 4, 5, // Opcode: ROTR_D
/* 666 */     MCD_OPC_FilterValue, 7, 100, 0, 0, // Skip to: 771
/* 671 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 674 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 683
/* 679 */     MCD_OPC_Decode, 226, 4, 5, // Opcode: MUL_W
/* 683 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 692
/* 688 */     MCD_OPC_Decode, 221, 4, 5, // Opcode: MULH_W
/* 692 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 701
/* 697 */     MCD_OPC_Decode, 222, 4, 5, // Opcode: MULH_WU
/* 701 */     MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 715
/* 706 */     MCD_OPC_CheckPredicate, 0, 20, 19, 0, // Skip to: 5595
/* 711 */     MCD_OPC_Decode, 225, 4, 5, // Opcode: MUL_D
/* 715 */     MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 729
/* 720 */     MCD_OPC_CheckPredicate, 0, 6, 19, 0, // Skip to: 5595
/* 725 */     MCD_OPC_Decode, 219, 4, 5, // Opcode: MULH_D
/* 729 */     MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 743
/* 734 */     MCD_OPC_CheckPredicate, 0, 248, 18, 0, // Skip to: 5595
/* 739 */     MCD_OPC_Decode, 220, 4, 5, // Opcode: MULH_DU
/* 743 */     MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 757
/* 748 */     MCD_OPC_CheckPredicate, 0, 234, 18, 0, // Skip to: 5595
/* 753 */     MCD_OPC_Decode, 223, 4, 5, // Opcode: MULW_D_W
/* 757 */     MCD_OPC_FilterValue, 7, 225, 18, 0, // Skip to: 5595
/* 762 */     MCD_OPC_CheckPredicate, 0, 220, 18, 0, // Skip to: 5595
/* 767 */     MCD_OPC_Decode, 224, 4, 5, // Opcode: MULW_D_WU
/* 771 */     MCD_OPC_FilterValue, 8, 95, 0, 0, // Skip to: 871
/* 776 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 779 */     MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 788
/* 784 */     MCD_OPC_Decode, 145, 3, 5, // Opcode: DIV_W
/* 788 */     MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 797
/* 793 */     MCD_OPC_Decode, 203, 4, 5, // Opcode: MOD_W
/* 797 */     MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 806
/* 802 */     MCD_OPC_Decode, 146, 3, 5, // Opcode: DIV_WU
/* 806 */     MCD_OPC_FilterValue, 3, 4, 0, 0, // Skip to: 815
/* 811 */     MCD_OPC_Decode, 204, 4, 5, // Opcode: MOD_WU
/* 815 */     MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 829
/* 820 */     MCD_OPC_CheckPredicate, 0, 162, 18, 0, // Skip to: 5595
/* 825 */     MCD_OPC_Decode, 143, 3, 5, // Opcode: DIV_D
/* 829 */     MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 843
/* 834 */     MCD_OPC_CheckPredicate, 0, 148, 18, 0, // Skip to: 5595
/* 839 */     MCD_OPC_Decode, 201, 4, 5, // Opcode: MOD_D
/* 843 */     MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 857
/* 848 */     MCD_OPC_CheckPredicate, 0, 134, 18, 0, // Skip to: 5595
/* 853 */     MCD_OPC_Decode, 144, 3, 5, // Opcode: DIV_DU
/* 857 */     MCD_OPC_FilterValue, 7, 125, 18, 0, // Skip to: 5595
/* 862 */     MCD_OPC_CheckPredicate, 0, 120, 18, 0, // Skip to: 5595
/* 867 */     MCD_OPC_Decode, 202, 4, 5, // Opcode: MOD_DU
/* 871 */     MCD_OPC_FilterValue, 9, 115, 0, 0, // Skip to: 991
/* 876 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 879 */     MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 893
/* 884 */     MCD_OPC_CheckPredicate, 0, 98, 18, 0, // Skip to: 5595
/* 889 */     MCD_OPC_Decode, 130, 3, 5, // Opcode: CRC_W_B_W
/* 893 */     MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 907
/* 898 */     MCD_OPC_CheckPredicate, 0, 84, 18, 0, // Skip to: 5595
/* 903 */     MCD_OPC_Decode, 132, 3, 5, // Opcode: CRC_W_H_W
/* 907 */     MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 921
/* 912 */     MCD_OPC_CheckPredicate, 0, 70, 18, 0, // Skip to: 5595
/* 917 */     MCD_OPC_Decode, 133, 3, 5, // Opcode: CRC_W_W_W
/* 921 */     MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 935
/* 926 */     MCD_OPC_CheckPredicate, 0, 56, 18, 0, // Skip to: 5595
/* 931 */     MCD_OPC_Decode, 131, 3, 5, // Opcode: CRC_W_D_W
/* 935 */     MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 949
/* 940 */     MCD_OPC_CheckPredicate, 0, 42, 18, 0, // Skip to: 5595
/* 945 */     MCD_OPC_Decode, 254, 2, 5, // Opcode: CRCC_W_B_W
/* 949 */     MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 963
/* 954 */     MCD_OPC_CheckPredicate, 0, 28, 18, 0, // Skip to: 5595
/* 959 */     MCD_OPC_Decode, 128, 3, 5, // Opcode: CRCC_W_H_W
/* 963 */     MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 977
/* 968 */     MCD_OPC_CheckPredicate, 0, 14, 18, 0, // Skip to: 5595
/* 973 */     MCD_OPC_Decode, 129, 3, 5, // Opcode: CRCC_W_W_W
/* 977 */     MCD_OPC_FilterValue, 7, 5, 18, 0, // Skip to: 5595
/* 982 */     MCD_OPC_CheckPredicate, 0, 0, 18, 0, // Skip to: 5595
/* 987 */     MCD_OPC_Decode, 255, 2, 5, // Opcode: CRCC_W_D_W
/* 991 */     MCD_OPC_FilterValue, 10, 30, 0, 0, // Skip to: 1026
/* 996 */     MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 999 */     MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 1008
/* 1004 */    MCD_OPC_Decode, 241, 2, 6, // Opcode: BREAK
/* 1008 */    MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 1017
/* 1013 */    MCD_OPC_Decode, 142, 3, 6, // Opcode: DBCL
/* 1017 */    MCD_OPC_FilterValue, 6, 221, 17, 0, // Skip to: 5595
/* 1022 */    MCD_OPC_Decode, 160, 5, 6, // Opcode: SYSCALL
/* 1026 */    MCD_OPC_FilterValue, 11, 212, 17, 0, // Skip to: 5595
/* 1031 */    MCD_OPC_CheckPredicate, 0, 207, 17, 0, // Skip to: 5595
/* 1036 */    MCD_OPC_CheckField, 17, 1, 0, 200, 17, 0, // Skip to: 5595
/* 1043 */    MCD_OPC_Decode, 181, 2, 2, // Opcode: ALSL_D
/* 1047 */    MCD_OPC_FilterValue, 1, 157, 0, 0, // Skip to: 1209
/* 1052 */    MCD_OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1055 */    MCD_OPC_FilterValue, 0, 123, 0, 0, // Skip to: 1183
/* 1060 */    MCD_OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1063 */    MCD_OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1079
/* 1068 */    MCD_OPC_CheckField, 15, 1, 1, 168, 17, 0, // Skip to: 5595
/* 1075 */    MCD_OPC_Decode, 253, 4, 7, // Opcode: SLLI_W
/* 1079 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1093
/* 1084 */    MCD_OPC_CheckPredicate, 0, 154, 17, 0, // Skip to: 5595
/* 1089 */    MCD_OPC_Decode, 252, 4, 8, // Opcode: SLLI_D
/* 1093 */    MCD_OPC_FilterValue, 4, 11, 0, 0, // Skip to: 1109
/* 1098 */    MCD_OPC_CheckField, 15, 1, 1, 138, 17, 0, // Skip to: 5595
/* 1105 */    MCD_OPC_Decode, 137, 5, 7, // Opcode: SRLI_W
/* 1109 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1123
/* 1114 */    MCD_OPC_CheckPredicate, 0, 124, 17, 0, // Skip to: 5595
/* 1119 */    MCD_OPC_Decode, 136, 5, 8, // Opcode: SRLI_D
/* 1123 */    MCD_OPC_FilterValue, 8, 11, 0, 0, // Skip to: 1139
/* 1128 */    MCD_OPC_CheckField, 15, 1, 1, 108, 17, 0, // Skip to: 5595
/* 1135 */    MCD_OPC_Decode, 133, 5, 7, // Opcode: SRAI_W
/* 1139 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 1153
/* 1144 */    MCD_OPC_CheckPredicate, 0, 94, 17, 0, // Skip to: 5595
/* 1149 */    MCD_OPC_Decode, 132, 5, 8, // Opcode: SRAI_D
/* 1153 */    MCD_OPC_FilterValue, 12, 11, 0, 0, // Skip to: 1169
/* 1158 */    MCD_OPC_CheckField, 15, 1, 1, 78, 17, 0, // Skip to: 5595
/* 1165 */    MCD_OPC_Decode, 247, 4, 7, // Opcode: ROTRI_W
/* 1169 */    MCD_OPC_FilterValue, 13, 69, 17, 0, // Skip to: 5595
/* 1174 */    MCD_OPC_CheckPredicate, 0, 64, 17, 0, // Skip to: 5595
/* 1179 */    MCD_OPC_Decode, 246, 4, 8, // Opcode: ROTRI_D
/* 1183 */    MCD_OPC_FilterValue, 1, 55, 17, 0, // Skip to: 5595
/* 1188 */    MCD_OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 1191 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1200
/* 1196 */    MCD_OPC_Decode, 243, 2, 9, // Opcode: BSTRINS_W
/* 1200 */    MCD_OPC_FilterValue, 1, 38, 17, 0, // Skip to: 5595
/* 1205 */    MCD_OPC_Decode, 245, 2, 10, // Opcode: BSTRPICK_W
/* 1209 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1223
/* 1214 */    MCD_OPC_CheckPredicate, 0, 24, 17, 0, // Skip to: 5595
/* 1219 */    MCD_OPC_Decode, 242, 2, 11, // Opcode: BSTRINS_D
/* 1223 */    MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1237
/* 1228 */    MCD_OPC_CheckPredicate, 0, 10, 17, 0, // Skip to: 5595
/* 1233 */    MCD_OPC_Decode, 244, 2, 12, // Opcode: BSTRPICK_D
/* 1237 */    MCD_OPC_FilterValue, 4, 107, 4, 0, // Skip to: 2373
/* 1242 */    MCD_OPC_ExtractField, 15, 7,  // Inst{21-15} ...
/* 1245 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1259
/* 1250 */    MCD_OPC_CheckPredicate, 1, 244, 16, 0, // Skip to: 5595
/* 1255 */    MCD_OPC_Decode, 153, 3, 13, // Opcode: FADD_S
/* 1259 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1273
/* 1264 */    MCD_OPC_CheckPredicate, 2, 230, 16, 0, // Skip to: 5595
/* 1269 */    MCD_OPC_Decode, 152, 3, 14, // Opcode: FADD_D
/* 1273 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1287
/* 1278 */    MCD_OPC_CheckPredicate, 1, 216, 16, 0, // Skip to: 5595
/* 1283 */    MCD_OPC_Decode, 135, 4, 13, // Opcode: FSUB_S
/* 1287 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 1301
/* 1292 */    MCD_OPC_CheckPredicate, 2, 202, 16, 0, // Skip to: 5595
/* 1297 */    MCD_OPC_Decode, 134, 4, 14, // Opcode: FSUB_D
/* 1301 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 1315
/* 1306 */    MCD_OPC_CheckPredicate, 1, 188, 16, 0, // Skip to: 5595
/* 1311 */    MCD_OPC_Decode, 235, 3, 13, // Opcode: FMUL_S
/* 1315 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 1329
/* 1320 */    MCD_OPC_CheckPredicate, 2, 174, 16, 0, // Skip to: 5595
/* 1325 */    MCD_OPC_Decode, 234, 3, 14, // Opcode: FMUL_D
/* 1329 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 1343
/* 1334 */    MCD_OPC_CheckPredicate, 1, 160, 16, 0, // Skip to: 5595
/* 1339 */    MCD_OPC_Decode, 205, 3, 13, // Opcode: FDIV_S
/* 1343 */    MCD_OPC_FilterValue, 14, 9, 0, 0, // Skip to: 1357
/* 1348 */    MCD_OPC_CheckPredicate, 2, 146, 16, 0, // Skip to: 5595
/* 1353 */    MCD_OPC_Decode, 204, 3, 14, // Opcode: FDIV_D
/* 1357 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 1371
/* 1362 */    MCD_OPC_CheckPredicate, 1, 132, 16, 0, // Skip to: 5595
/* 1367 */    MCD_OPC_Decode, 225, 3, 13, // Opcode: FMAX_S
/* 1371 */    MCD_OPC_FilterValue, 18, 9, 0, 0, // Skip to: 1385
/* 1376 */    MCD_OPC_CheckPredicate, 2, 118, 16, 0, // Skip to: 5595
/* 1381 */    MCD_OPC_Decode, 224, 3, 14, // Opcode: FMAX_D
/* 1385 */    MCD_OPC_FilterValue, 21, 9, 0, 0, // Skip to: 1399
/* 1390 */    MCD_OPC_CheckPredicate, 1, 104, 16, 0, // Skip to: 5595
/* 1395 */    MCD_OPC_Decode, 229, 3, 13, // Opcode: FMIN_S
/* 1399 */    MCD_OPC_FilterValue, 22, 9, 0, 0, // Skip to: 1413
/* 1404 */    MCD_OPC_CheckPredicate, 2, 90, 16, 0, // Skip to: 5595
/* 1409 */    MCD_OPC_Decode, 228, 3, 14, // Opcode: FMIN_D
/* 1413 */    MCD_OPC_FilterValue, 25, 9, 0, 0, // Skip to: 1427
/* 1418 */    MCD_OPC_CheckPredicate, 1, 76, 16, 0, // Skip to: 5595
/* 1423 */    MCD_OPC_Decode, 223, 3, 13, // Opcode: FMAXA_S
/* 1427 */    MCD_OPC_FilterValue, 26, 9, 0, 0, // Skip to: 1441
/* 1432 */    MCD_OPC_CheckPredicate, 2, 62, 16, 0, // Skip to: 5595
/* 1437 */    MCD_OPC_Decode, 222, 3, 14, // Opcode: FMAXA_D
/* 1441 */    MCD_OPC_FilterValue, 29, 9, 0, 0, // Skip to: 1455
/* 1446 */    MCD_OPC_CheckPredicate, 1, 48, 16, 0, // Skip to: 5595
/* 1451 */    MCD_OPC_Decode, 227, 3, 13, // Opcode: FMINA_S
/* 1455 */    MCD_OPC_FilterValue, 30, 9, 0, 0, // Skip to: 1469
/* 1460 */    MCD_OPC_CheckPredicate, 2, 34, 16, 0, // Skip to: 5595
/* 1465 */    MCD_OPC_Decode, 226, 3, 14, // Opcode: FMINA_D
/* 1469 */    MCD_OPC_FilterValue, 33, 9, 0, 0, // Skip to: 1483
/* 1474 */    MCD_OPC_CheckPredicate, 1, 20, 16, 0, // Skip to: 5595
/* 1479 */    MCD_OPC_Decode, 249, 3, 13, // Opcode: FSCALEB_S
/* 1483 */    MCD_OPC_FilterValue, 34, 9, 0, 0, // Skip to: 1497
/* 1488 */    MCD_OPC_CheckPredicate, 2, 6, 16, 0, // Skip to: 5595
/* 1493 */    MCD_OPC_Decode, 248, 3, 14, // Opcode: FSCALEB_D
/* 1497 */    MCD_OPC_FilterValue, 37, 9, 0, 0, // Skip to: 1511
/* 1502 */    MCD_OPC_CheckPredicate, 1, 248, 15, 0, // Skip to: 5595
/* 1507 */    MCD_OPC_Decode, 201, 3, 13, // Opcode: FCOPYSIGN_S
/* 1511 */    MCD_OPC_FilterValue, 38, 9, 0, 0, // Skip to: 1525
/* 1516 */    MCD_OPC_CheckPredicate, 2, 234, 15, 0, // Skip to: 5595
/* 1521 */    MCD_OPC_Decode, 200, 3, 14, // Opcode: FCOPYSIGN_D
/* 1525 */    MCD_OPC_FilterValue, 40, 199, 0, 0, // Skip to: 1729
/* 1530 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 1533 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1547
/* 1538 */    MCD_OPC_CheckPredicate, 1, 212, 15, 0, // Skip to: 5595
/* 1543 */    MCD_OPC_Decode, 151, 3, 15, // Opcode: FABS_S
/* 1547 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1561
/* 1552 */    MCD_OPC_CheckPredicate, 2, 198, 15, 0, // Skip to: 5595
/* 1557 */    MCD_OPC_Decode, 150, 3, 16, // Opcode: FABS_D
/* 1561 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1575
/* 1566 */    MCD_OPC_CheckPredicate, 1, 184, 15, 0, // Skip to: 5595
/* 1571 */    MCD_OPC_Decode, 237, 3, 15, // Opcode: FNEG_S
/* 1575 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 1589
/* 1580 */    MCD_OPC_CheckPredicate, 2, 170, 15, 0, // Skip to: 5595
/* 1585 */    MCD_OPC_Decode, 236, 3, 16, // Opcode: FNEG_D
/* 1589 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 1603
/* 1594 */    MCD_OPC_CheckPredicate, 1, 156, 15, 0, // Skip to: 5595
/* 1599 */    MCD_OPC_Decode, 219, 3, 15, // Opcode: FLOGB_S
/* 1603 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 1617
/* 1608 */    MCD_OPC_CheckPredicate, 2, 142, 15, 0, // Skip to: 5595
/* 1613 */    MCD_OPC_Decode, 218, 3, 16, // Opcode: FLOGB_D
/* 1617 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 1631
/* 1622 */    MCD_OPC_CheckPredicate, 1, 128, 15, 0, // Skip to: 5595
/* 1627 */    MCD_OPC_Decode, 155, 3, 15, // Opcode: FCLASS_S
/* 1631 */    MCD_OPC_FilterValue, 14, 9, 0, 0, // Skip to: 1645
/* 1636 */    MCD_OPC_CheckPredicate, 2, 114, 15, 0, // Skip to: 5595
/* 1641 */    MCD_OPC_Decode, 154, 3, 16, // Opcode: FCLASS_D
/* 1645 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 1659
/* 1650 */    MCD_OPC_CheckPredicate, 1, 100, 15, 0, // Skip to: 5595
/* 1655 */    MCD_OPC_Decode, 253, 3, 15, // Opcode: FSQRT_S
/* 1659 */    MCD_OPC_FilterValue, 18, 9, 0, 0, // Skip to: 1673
/* 1664 */    MCD_OPC_CheckPredicate, 2, 86, 15, 0, // Skip to: 5595
/* 1669 */    MCD_OPC_Decode, 252, 3, 16, // Opcode: FSQRT_D
/* 1673 */    MCD_OPC_FilterValue, 21, 9, 0, 0, // Skip to: 1687
/* 1678 */    MCD_OPC_CheckPredicate, 1, 72, 15, 0, // Skip to: 5595
/* 1683 */    MCD_OPC_Decode, 243, 3, 15, // Opcode: FRECIP_S
/* 1687 */    MCD_OPC_FilterValue, 22, 9, 0, 0, // Skip to: 1701
/* 1692 */    MCD_OPC_CheckPredicate, 2, 58, 15, 0, // Skip to: 5595
/* 1697 */    MCD_OPC_Decode, 242, 3, 16, // Opcode: FRECIP_D
/* 1701 */    MCD_OPC_FilterValue, 25, 9, 0, 0, // Skip to: 1715
/* 1706 */    MCD_OPC_CheckPredicate, 1, 44, 15, 0, // Skip to: 5595
/* 1711 */    MCD_OPC_Decode, 247, 3, 15, // Opcode: FRSQRT_S
/* 1715 */    MCD_OPC_FilterValue, 26, 35, 15, 0, // Skip to: 5595
/* 1720 */    MCD_OPC_CheckPredicate, 2, 30, 15, 0, // Skip to: 5595
/* 1725 */    MCD_OPC_Decode, 246, 3, 16, // Opcode: FRSQRT_D
/* 1729 */    MCD_OPC_FilterValue, 41, 199, 0, 0, // Skip to: 1933
/* 1734 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 1737 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1751
/* 1742 */    MCD_OPC_CheckPredicate, 1, 8, 15, 0, // Skip to: 5595
/* 1747 */    MCD_OPC_Decode, 231, 3, 15, // Opcode: FMOV_S
/* 1751 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 1765
/* 1756 */    MCD_OPC_CheckPredicate, 2, 250, 14, 0, // Skip to: 5595
/* 1761 */    MCD_OPC_Decode, 230, 3, 16, // Opcode: FMOV_D
/* 1765 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 1779
/* 1770 */    MCD_OPC_CheckPredicate, 1, 236, 14, 0, // Skip to: 5595
/* 1775 */    MCD_OPC_Decode, 217, 4, 17, // Opcode: MOVGR2FR_W
/* 1779 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 1793
/* 1784 */    MCD_OPC_CheckPredicate, 3, 222, 14, 0, // Skip to: 5595
/* 1789 */    MCD_OPC_Decode, 216, 4, 18, // Opcode: MOVGR2FR_D
/* 1793 */    MCD_OPC_FilterValue, 11, 9, 0, 0, // Skip to: 1807
/* 1798 */    MCD_OPC_CheckPredicate, 2, 208, 14, 0, // Skip to: 5595
/* 1803 */    MCD_OPC_Decode, 215, 4, 19, // Opcode: MOVGR2FRH_W
/* 1807 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 1821
/* 1812 */    MCD_OPC_CheckPredicate, 1, 194, 14, 0, // Skip to: 5595
/* 1817 */    MCD_OPC_Decode, 210, 4, 20, // Opcode: MOVFR2GR_S
/* 1821 */    MCD_OPC_FilterValue, 14, 9, 0, 0, // Skip to: 1835
/* 1826 */    MCD_OPC_CheckPredicate, 3, 180, 14, 0, // Skip to: 5595
/* 1831 */    MCD_OPC_Decode, 209, 4, 21, // Opcode: MOVFR2GR_D
/* 1835 */    MCD_OPC_FilterValue, 15, 9, 0, 0, // Skip to: 1849
/* 1840 */    MCD_OPC_CheckPredicate, 2, 166, 14, 0, // Skip to: 5595
/* 1845 */    MCD_OPC_Decode, 212, 4, 21, // Opcode: MOVFRH2GR_S
/* 1849 */    MCD_OPC_FilterValue, 16, 9, 0, 0, // Skip to: 1863
/* 1854 */    MCD_OPC_CheckPredicate, 1, 152, 14, 0, // Skip to: 5595
/* 1859 */    MCD_OPC_Decode, 214, 4, 22, // Opcode: MOVGR2FCSR
/* 1863 */    MCD_OPC_FilterValue, 18, 9, 0, 0, // Skip to: 1877
/* 1868 */    MCD_OPC_CheckPredicate, 1, 138, 14, 0, // Skip to: 5595
/* 1873 */    MCD_OPC_Decode, 207, 4, 23, // Opcode: MOVFCSR2GR
/* 1877 */    MCD_OPC_FilterValue, 20, 9, 0, 0, // Skip to: 1891
/* 1882 */    MCD_OPC_CheckPredicate, 1, 124, 14, 0, // Skip to: 5595
/* 1887 */    MCD_OPC_Decode, 208, 4, 24, // Opcode: MOVFR2CF_S
/* 1891 */    MCD_OPC_FilterValue, 21, 9, 0, 0, // Skip to: 1905
/* 1896 */    MCD_OPC_CheckPredicate, 1, 110, 14, 0, // Skip to: 5595
/* 1901 */    MCD_OPC_Decode, 205, 4, 25, // Opcode: MOVCF2FR_S
/* 1905 */    MCD_OPC_FilterValue, 22, 9, 0, 0, // Skip to: 1919
/* 1910 */    MCD_OPC_CheckPredicate, 1, 96, 14, 0, // Skip to: 5595
/* 1915 */    MCD_OPC_Decode, 213, 4, 26, // Opcode: MOVGR2CF
/* 1919 */    MCD_OPC_FilterValue, 23, 87, 14, 0, // Skip to: 5595
/* 1924 */    MCD_OPC_CheckPredicate, 1, 82, 14, 0, // Skip to: 5595
/* 1929 */    MCD_OPC_Decode, 206, 4, 27, // Opcode: MOVCF2GR
/* 1933 */    MCD_OPC_FilterValue, 50, 31, 0, 0, // Skip to: 1969
/* 1938 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 1941 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 1955
/* 1946 */    MCD_OPC_CheckPredicate, 2, 60, 14, 0, // Skip to: 5595
/* 1951 */    MCD_OPC_Decode, 203, 3, 28, // Opcode: FCVT_S_D
/* 1955 */    MCD_OPC_FilterValue, 9, 51, 14, 0, // Skip to: 5595
/* 1960 */    MCD_OPC_CheckPredicate, 2, 46, 14, 0, // Skip to: 5595
/* 1965 */    MCD_OPC_Decode, 202, 3, 29, // Opcode: FCVT_D_S
/* 1969 */    MCD_OPC_FilterValue, 52, 115, 0, 0, // Skip to: 2089
/* 1974 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 1977 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1991
/* 1982 */    MCD_OPC_CheckPredicate, 1, 24, 14, 0, // Skip to: 5595
/* 1987 */    MCD_OPC_Decode, 139, 4, 15, // Opcode: FTINTRM_W_S
/* 1991 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2005
/* 1996 */    MCD_OPC_CheckPredicate, 2, 10, 14, 0, // Skip to: 5595
/* 2001 */    MCD_OPC_Decode, 138, 4, 28, // Opcode: FTINTRM_W_D
/* 2005 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 2019
/* 2010 */    MCD_OPC_CheckPredicate, 2, 252, 13, 0, // Skip to: 5595
/* 2015 */    MCD_OPC_Decode, 137, 4, 29, // Opcode: FTINTRM_L_S
/* 2019 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 2033
/* 2024 */    MCD_OPC_CheckPredicate, 2, 238, 13, 0, // Skip to: 5595
/* 2029 */    MCD_OPC_Decode, 136, 4, 16, // Opcode: FTINTRM_L_D
/* 2033 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 2047
/* 2038 */    MCD_OPC_CheckPredicate, 1, 224, 13, 0, // Skip to: 5595
/* 2043 */    MCD_OPC_Decode, 147, 4, 15, // Opcode: FTINTRP_W_S
/* 2047 */    MCD_OPC_FilterValue, 18, 9, 0, 0, // Skip to: 2061
/* 2052 */    MCD_OPC_CheckPredicate, 2, 210, 13, 0, // Skip to: 5595
/* 2057 */    MCD_OPC_Decode, 146, 4, 28, // Opcode: FTINTRP_W_D
/* 2061 */    MCD_OPC_FilterValue, 25, 9, 0, 0, // Skip to: 2075
/* 2066 */    MCD_OPC_CheckPredicate, 2, 196, 13, 0, // Skip to: 5595
/* 2071 */    MCD_OPC_Decode, 145, 4, 29, // Opcode: FTINTRP_L_S
/* 2075 */    MCD_OPC_FilterValue, 26, 187, 13, 0, // Skip to: 5595
/* 2080 */    MCD_OPC_CheckPredicate, 2, 182, 13, 0, // Skip to: 5595
/* 2085 */    MCD_OPC_Decode, 144, 4, 16, // Opcode: FTINTRP_L_D
/* 2089 */    MCD_OPC_FilterValue, 53, 115, 0, 0, // Skip to: 2209
/* 2094 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 2097 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2111
/* 2102 */    MCD_OPC_CheckPredicate, 1, 160, 13, 0, // Skip to: 5595
/* 2107 */    MCD_OPC_Decode, 151, 4, 15, // Opcode: FTINTRZ_W_S
/* 2111 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2125
/* 2116 */    MCD_OPC_CheckPredicate, 2, 146, 13, 0, // Skip to: 5595
/* 2121 */    MCD_OPC_Decode, 150, 4, 28, // Opcode: FTINTRZ_W_D
/* 2125 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 2139
/* 2130 */    MCD_OPC_CheckPredicate, 2, 132, 13, 0, // Skip to: 5595
/* 2135 */    MCD_OPC_Decode, 149, 4, 29, // Opcode: FTINTRZ_L_S
/* 2139 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 2153
/* 2144 */    MCD_OPC_CheckPredicate, 2, 118, 13, 0, // Skip to: 5595
/* 2149 */    MCD_OPC_Decode, 148, 4, 16, // Opcode: FTINTRZ_L_D
/* 2153 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 2167
/* 2158 */    MCD_OPC_CheckPredicate, 1, 104, 13, 0, // Skip to: 5595
/* 2163 */    MCD_OPC_Decode, 143, 4, 15, // Opcode: FTINTRNE_W_S
/* 2167 */    MCD_OPC_FilterValue, 18, 9, 0, 0, // Skip to: 2181
/* 2172 */    MCD_OPC_CheckPredicate, 2, 90, 13, 0, // Skip to: 5595
/* 2177 */    MCD_OPC_Decode, 142, 4, 28, // Opcode: FTINTRNE_W_D
/* 2181 */    MCD_OPC_FilterValue, 25, 9, 0, 0, // Skip to: 2195
/* 2186 */    MCD_OPC_CheckPredicate, 2, 76, 13, 0, // Skip to: 5595
/* 2191 */    MCD_OPC_Decode, 141, 4, 29, // Opcode: FTINTRNE_L_S
/* 2195 */    MCD_OPC_FilterValue, 26, 67, 13, 0, // Skip to: 5595
/* 2200 */    MCD_OPC_CheckPredicate, 2, 62, 13, 0, // Skip to: 5595
/* 2205 */    MCD_OPC_Decode, 140, 4, 16, // Opcode: FTINTRNE_L_D
/* 2209 */    MCD_OPC_FilterValue, 54, 59, 0, 0, // Skip to: 2273
/* 2214 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 2217 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2231
/* 2222 */    MCD_OPC_CheckPredicate, 1, 40, 13, 0, // Skip to: 5595
/* 2227 */    MCD_OPC_Decode, 155, 4, 15, // Opcode: FTINT_W_S
/* 2231 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2245
/* 2236 */    MCD_OPC_CheckPredicate, 2, 26, 13, 0, // Skip to: 5595
/* 2241 */    MCD_OPC_Decode, 154, 4, 28, // Opcode: FTINT_W_D
/* 2245 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 2259
/* 2250 */    MCD_OPC_CheckPredicate, 2, 12, 13, 0, // Skip to: 5595
/* 2255 */    MCD_OPC_Decode, 153, 4, 29, // Opcode: FTINT_L_S
/* 2259 */    MCD_OPC_FilterValue, 10, 3, 13, 0, // Skip to: 5595
/* 2264 */    MCD_OPC_CheckPredicate, 2, 254, 12, 0, // Skip to: 5595
/* 2269 */    MCD_OPC_Decode, 152, 4, 16, // Opcode: FTINT_L_D
/* 2273 */    MCD_OPC_FilterValue, 58, 59, 0, 0, // Skip to: 2337
/* 2278 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 2281 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 2295
/* 2286 */    MCD_OPC_CheckPredicate, 1, 232, 12, 0, // Skip to: 5595
/* 2291 */    MCD_OPC_Decode, 209, 3, 15, // Opcode: FFINT_S_W
/* 2295 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 2309
/* 2300 */    MCD_OPC_CheckPredicate, 2, 218, 12, 0, // Skip to: 5595
/* 2305 */    MCD_OPC_Decode, 208, 3, 28, // Opcode: FFINT_S_L
/* 2309 */    MCD_OPC_FilterValue, 8, 9, 0, 0, // Skip to: 2323
/* 2314 */    MCD_OPC_CheckPredicate, 2, 204, 12, 0, // Skip to: 5595
/* 2319 */    MCD_OPC_Decode, 207, 3, 29, // Opcode: FFINT_D_W
/* 2323 */    MCD_OPC_FilterValue, 10, 195, 12, 0, // Skip to: 5595
/* 2328 */    MCD_OPC_CheckPredicate, 2, 190, 12, 0, // Skip to: 5595
/* 2333 */    MCD_OPC_Decode, 206, 3, 16, // Opcode: FFINT_D_L
/* 2337 */    MCD_OPC_FilterValue, 60, 181, 12, 0, // Skip to: 5595
/* 2342 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 2345 */    MCD_OPC_FilterValue, 17, 9, 0, 0, // Skip to: 2359
/* 2350 */    MCD_OPC_CheckPredicate, 1, 168, 12, 0, // Skip to: 5595
/* 2355 */    MCD_OPC_Decode, 245, 3, 15, // Opcode: FRINT_S
/* 2359 */    MCD_OPC_FilterValue, 18, 159, 12, 0, // Skip to: 5595
/* 2364 */    MCD_OPC_CheckPredicate, 2, 154, 12, 0, // Skip to: 5595
/* 2369 */    MCD_OPC_Decode, 244, 3, 16, // Opcode: FRINT_D
/* 2373 */    MCD_OPC_FilterValue, 8, 4, 0, 0, // Skip to: 2382
/* 2378 */    MCD_OPC_Decode, 129, 5, 30, // Opcode: SLTI
/* 2382 */    MCD_OPC_FilterValue, 9, 4, 0, 0, // Skip to: 2391
/* 2387 */    MCD_OPC_Decode, 131, 5, 30, // Opcode: SLTUI
/* 2391 */    MCD_OPC_FilterValue, 10, 4, 0, 0, // Skip to: 2400
/* 2396 */    MCD_OPC_Decode, 177, 2, 30, // Opcode: ADDI_W
/* 2400 */    MCD_OPC_FilterValue, 11, 9, 0, 0, // Skip to: 2414
/* 2405 */    MCD_OPC_CheckPredicate, 0, 113, 12, 0, // Skip to: 5595
/* 2410 */    MCD_OPC_Decode, 176, 2, 30, // Opcode: ADDI_D
/* 2414 */    MCD_OPC_FilterValue, 12, 9, 0, 0, // Skip to: 2428
/* 2419 */    MCD_OPC_CheckPredicate, 0, 99, 12, 0, // Skip to: 5595
/* 2424 */    MCD_OPC_Decode, 198, 4, 30, // Opcode: LU52I_D
/* 2428 */    MCD_OPC_FilterValue, 13, 4, 0, 0, // Skip to: 2437
/* 2433 */    MCD_OPC_Decode, 221, 2, 31, // Opcode: ANDI
/* 2437 */    MCD_OPC_FilterValue, 14, 4, 0, 0, // Skip to: 2446
/* 2442 */    MCD_OPC_Decode, 229, 4, 31, // Opcode: ORI
/* 2446 */    MCD_OPC_FilterValue, 15, 72, 12, 0, // Skip to: 5595
/* 2451 */    MCD_OPC_Decode, 168, 5, 31, // Opcode: XORI
/* 2455 */    MCD_OPC_FilterValue, 1, 55, 1, 0, // Skip to: 2771
/* 2460 */    MCD_OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 2463 */    MCD_OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2493
/* 2468 */    MCD_OPC_ExtractField, 5, 5,  // Inst{9-5} ...
/* 2471 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2480
/* 2476 */    MCD_OPC_Decode, 134, 3, 32, // Opcode: CSRRD
/* 2480 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2489
/* 2485 */    MCD_OPC_Decode, 135, 3, 33, // Opcode: CSRWR
/* 2489 */    MCD_OPC_Decode, 136, 3, 34, // Opcode: CSRXCHG
/* 2493 */    MCD_OPC_FilterValue, 2, 25, 12, 0, // Skip to: 5595
/* 2498 */    MCD_OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 2501 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2510
/* 2506 */    MCD_OPC_Decode, 248, 2, 35, // Opcode: CACOP
/* 2510 */    MCD_OPC_FilterValue, 1, 8, 12, 0, // Skip to: 5595
/* 2515 */    MCD_OPC_ExtractField, 18, 4,  // Inst{21-18} ...
/* 2518 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2527
/* 2523 */    MCD_OPC_Decode, 168, 4, 36, // Opcode: LDDIR
/* 2527 */    MCD_OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2543
/* 2532 */    MCD_OPC_CheckField, 0, 5, 0, 240, 11, 0, // Skip to: 5595
/* 2539 */    MCD_OPC_Decode, 177, 4, 37, // Opcode: LDPTE
/* 2543 */    MCD_OPC_FilterValue, 2, 231, 11, 0, // Skip to: 5595
/* 2548 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 2551 */    MCD_OPC_FilterValue, 0, 197, 0, 0, // Skip to: 2753
/* 2556 */    MCD_OPC_ExtractField, 10, 5,  // Inst{14-10} ...
/* 2559 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2568
/* 2564 */    MCD_OPC_Decode, 159, 4, 0, // Opcode: IOCSRRD_B
/* 2568 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2577
/* 2573 */    MCD_OPC_Decode, 161, 4, 0, // Opcode: IOCSRRD_H
/* 2577 */    MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 2586
/* 2582 */    MCD_OPC_Decode, 162, 4, 0, // Opcode: IOCSRRD_W
/* 2586 */    MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 2600
/* 2591 */    MCD_OPC_CheckPredicate, 0, 183, 11, 0, // Skip to: 5595
/* 2596 */    MCD_OPC_Decode, 160, 4, 0, // Opcode: IOCSRRD_D
/* 2600 */    MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 2609
/* 2605 */    MCD_OPC_Decode, 163, 4, 0, // Opcode: IOCSRWR_B
/* 2609 */    MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 2618
/* 2614 */    MCD_OPC_Decode, 165, 4, 0, // Opcode: IOCSRWR_H
/* 2618 */    MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 2627
/* 2623 */    MCD_OPC_Decode, 166, 4, 0, // Opcode: IOCSRWR_W
/* 2627 */    MCD_OPC_FilterValue, 7, 9, 0, 0, // Skip to: 2641
/* 2632 */    MCD_OPC_CheckPredicate, 0, 142, 11, 0, // Skip to: 5595
/* 2637 */    MCD_OPC_Decode, 164, 4, 0, // Opcode: IOCSRWR_D
/* 2641 */    MCD_OPC_FilterValue, 8, 11, 0, 0, // Skip to: 2657
/* 2646 */    MCD_OPC_CheckField, 0, 10, 0, 126, 11, 0, // Skip to: 5595
/* 2653 */    MCD_OPC_Decode, 161, 5, 38, // Opcode: TLBCLR
/* 2657 */    MCD_OPC_FilterValue, 9, 11, 0, 0, // Skip to: 2673
/* 2662 */    MCD_OPC_CheckField, 0, 10, 0, 110, 11, 0, // Skip to: 5595
/* 2669 */    MCD_OPC_Decode, 163, 5, 38, // Opcode: TLBFLUSH
/* 2673 */    MCD_OPC_FilterValue, 10, 11, 0, 0, // Skip to: 2689
/* 2678 */    MCD_OPC_CheckField, 0, 10, 0, 94, 11, 0, // Skip to: 5595
/* 2685 */    MCD_OPC_Decode, 165, 5, 38, // Opcode: TLBSRCH
/* 2689 */    MCD_OPC_FilterValue, 11, 11, 0, 0, // Skip to: 2705
/* 2694 */    MCD_OPC_CheckField, 0, 10, 0, 78, 11, 0, // Skip to: 5595
/* 2701 */    MCD_OPC_Decode, 164, 5, 38, // Opcode: TLBRD
/* 2705 */    MCD_OPC_FilterValue, 12, 11, 0, 0, // Skip to: 2721
/* 2710 */    MCD_OPC_CheckField, 0, 10, 0, 62, 11, 0, // Skip to: 5595
/* 2717 */    MCD_OPC_Decode, 166, 5, 38, // Opcode: TLBWR
/* 2721 */    MCD_OPC_FilterValue, 13, 11, 0, 0, // Skip to: 2737
/* 2726 */    MCD_OPC_CheckField, 0, 10, 0, 46, 11, 0, // Skip to: 5595
/* 2733 */    MCD_OPC_Decode, 162, 5, 38, // Opcode: TLBFILL
/* 2737 */    MCD_OPC_FilterValue, 14, 37, 11, 0, // Skip to: 5595
/* 2742 */    MCD_OPC_CheckField, 0, 10, 0, 30, 11, 0, // Skip to: 5595
/* 2749 */    MCD_OPC_Decode, 147, 3, 38, // Opcode: ERTN
/* 2753 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 2762
/* 2758 */    MCD_OPC_Decode, 157, 4, 6, // Opcode: IDLE
/* 2762 */    MCD_OPC_FilterValue, 3, 12, 11, 0, // Skip to: 5595
/* 2767 */    MCD_OPC_Decode, 158, 4, 39, // Opcode: INVTLB
/* 2771 */    MCD_OPC_FilterValue, 2, 115, 0, 0, // Skip to: 2891
/* 2776 */    MCD_OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 2779 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 2793
/* 2784 */    MCD_OPC_CheckPredicate, 1, 246, 10, 0, // Skip to: 5595
/* 2789 */    MCD_OPC_Decode, 221, 3, 40, // Opcode: FMADD_S
/* 2793 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2807
/* 2798 */    MCD_OPC_CheckPredicate, 2, 232, 10, 0, // Skip to: 5595
/* 2803 */    MCD_OPC_Decode, 220, 3, 41, // Opcode: FMADD_D
/* 2807 */    MCD_OPC_FilterValue, 5, 9, 0, 0, // Skip to: 2821
/* 2812 */    MCD_OPC_CheckPredicate, 1, 218, 10, 0, // Skip to: 5595
/* 2817 */    MCD_OPC_Decode, 233, 3, 40, // Opcode: FMSUB_S
/* 2821 */    MCD_OPC_FilterValue, 6, 9, 0, 0, // Skip to: 2835
/* 2826 */    MCD_OPC_CheckPredicate, 2, 204, 10, 0, // Skip to: 5595
/* 2831 */    MCD_OPC_Decode, 232, 3, 41, // Opcode: FMSUB_D
/* 2835 */    MCD_OPC_FilterValue, 9, 9, 0, 0, // Skip to: 2849
/* 2840 */    MCD_OPC_CheckPredicate, 1, 190, 10, 0, // Skip to: 5595
/* 2845 */    MCD_OPC_Decode, 239, 3, 40, // Opcode: FNMADD_S
/* 2849 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 2863
/* 2854 */    MCD_OPC_CheckPredicate, 2, 176, 10, 0, // Skip to: 5595
/* 2859 */    MCD_OPC_Decode, 238, 3, 41, // Opcode: FNMADD_D
/* 2863 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 2877
/* 2868 */    MCD_OPC_CheckPredicate, 1, 162, 10, 0, // Skip to: 5595
/* 2873 */    MCD_OPC_Decode, 241, 3, 40, // Opcode: FNMSUB_S
/* 2877 */    MCD_OPC_FilterValue, 14, 153, 10, 0, // Skip to: 5595
/* 2882 */    MCD_OPC_CheckPredicate, 2, 148, 10, 0, // Skip to: 5595
/* 2887 */    MCD_OPC_Decode, 240, 3, 41, // Opcode: FNMSUB_D
/* 2891 */    MCD_OPC_FilterValue, 3, 237, 3, 0, // Skip to: 3901
/* 2896 */    MCD_OPC_ExtractField, 18, 8,  // Inst{25-18} ...
/* 2899 */    MCD_OPC_FilterValue, 4, 171, 0, 0, // Skip to: 3075
/* 2904 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 2907 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 2928
/* 2912 */    MCD_OPC_CheckPredicate, 1, 118, 10, 0, // Skip to: 5595
/* 2917 */    MCD_OPC_CheckField, 3, 2, 0, 111, 10, 0, // Skip to: 5595
/* 2924 */    MCD_OPC_Decode, 157, 3, 42, // Opcode: FCMP_CAF_S
/* 2928 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 2949
/* 2933 */    MCD_OPC_CheckPredicate, 1, 97, 10, 0, // Skip to: 5595
/* 2938 */    MCD_OPC_CheckField, 3, 2, 0, 90, 10, 0, // Skip to: 5595
/* 2945 */    MCD_OPC_Decode, 179, 3, 42, // Opcode: FCMP_SAF_S
/* 2949 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2970
/* 2954 */    MCD_OPC_CheckPredicate, 1, 76, 10, 0, // Skip to: 5595
/* 2959 */    MCD_OPC_CheckField, 3, 2, 0, 69, 10, 0, // Skip to: 5595
/* 2966 */    MCD_OPC_Decode, 163, 3, 42, // Opcode: FCMP_CLT_S
/* 2970 */    MCD_OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2991
/* 2975 */    MCD_OPC_CheckPredicate, 1, 55, 10, 0, // Skip to: 5595
/* 2980 */    MCD_OPC_CheckField, 3, 2, 0, 48, 10, 0, // Skip to: 5595
/* 2987 */    MCD_OPC_Decode, 185, 3, 42, // Opcode: FCMP_SLT_S
/* 2991 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3012
/* 2996 */    MCD_OPC_CheckPredicate, 1, 34, 10, 0, // Skip to: 5595
/* 3001 */    MCD_OPC_CheckField, 3, 2, 0, 27, 10, 0, // Skip to: 5595
/* 3008 */    MCD_OPC_Decode, 159, 3, 42, // Opcode: FCMP_CEQ_S
/* 3012 */    MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 3033
/* 3017 */    MCD_OPC_CheckPredicate, 1, 13, 10, 0, // Skip to: 5595
/* 3022 */    MCD_OPC_CheckField, 3, 2, 0, 6, 10, 0, // Skip to: 5595
/* 3029 */    MCD_OPC_Decode, 181, 3, 42, // Opcode: FCMP_SEQ_S
/* 3033 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 3054
/* 3038 */    MCD_OPC_CheckPredicate, 1, 248, 9, 0, // Skip to: 5595
/* 3043 */    MCD_OPC_CheckField, 3, 2, 0, 241, 9, 0, // Skip to: 5595
/* 3050 */    MCD_OPC_Decode, 161, 3, 42, // Opcode: FCMP_CLE_S
/* 3054 */    MCD_OPC_FilterValue, 7, 232, 9, 0, // Skip to: 5595
/* 3059 */    MCD_OPC_CheckPredicate, 1, 227, 9, 0, // Skip to: 5595
/* 3064 */    MCD_OPC_CheckField, 3, 2, 0, 220, 9, 0, // Skip to: 5595
/* 3071 */    MCD_OPC_Decode, 183, 3, 42, // Opcode: FCMP_SLE_S
/* 3075 */    MCD_OPC_FilterValue, 5, 171, 0, 0, // Skip to: 3251
/* 3080 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3083 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3104
/* 3088 */    MCD_OPC_CheckPredicate, 1, 198, 9, 0, // Skip to: 5595
/* 3093 */    MCD_OPC_CheckField, 3, 2, 0, 191, 9, 0, // Skip to: 5595
/* 3100 */    MCD_OPC_Decode, 177, 3, 42, // Opcode: FCMP_CUN_S
/* 3104 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 3125
/* 3109 */    MCD_OPC_CheckPredicate, 1, 177, 9, 0, // Skip to: 5595
/* 3114 */    MCD_OPC_CheckField, 3, 2, 0, 170, 9, 0, // Skip to: 5595
/* 3121 */    MCD_OPC_Decode, 199, 3, 42, // Opcode: FCMP_SUN_S
/* 3125 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 3146
/* 3130 */    MCD_OPC_CheckPredicate, 1, 156, 9, 0, // Skip to: 5595
/* 3135 */    MCD_OPC_CheckField, 3, 2, 0, 149, 9, 0, // Skip to: 5595
/* 3142 */    MCD_OPC_Decode, 173, 3, 42, // Opcode: FCMP_CULT_S
/* 3146 */    MCD_OPC_FilterValue, 3, 16, 0, 0, // Skip to: 3167
/* 3151 */    MCD_OPC_CheckPredicate, 1, 135, 9, 0, // Skip to: 5595
/* 3156 */    MCD_OPC_CheckField, 3, 2, 0, 128, 9, 0, // Skip to: 5595
/* 3163 */    MCD_OPC_Decode, 195, 3, 42, // Opcode: FCMP_SULT_S
/* 3167 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3188
/* 3172 */    MCD_OPC_CheckPredicate, 1, 114, 9, 0, // Skip to: 5595
/* 3177 */    MCD_OPC_CheckField, 3, 2, 0, 107, 9, 0, // Skip to: 5595
/* 3184 */    MCD_OPC_Decode, 169, 3, 42, // Opcode: FCMP_CUEQ_S
/* 3188 */    MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 3209
/* 3193 */    MCD_OPC_CheckPredicate, 1, 93, 9, 0, // Skip to: 5595
/* 3198 */    MCD_OPC_CheckField, 3, 2, 0, 86, 9, 0, // Skip to: 5595
/* 3205 */    MCD_OPC_Decode, 191, 3, 42, // Opcode: FCMP_SUEQ_S
/* 3209 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 3230
/* 3214 */    MCD_OPC_CheckPredicate, 1, 72, 9, 0, // Skip to: 5595
/* 3219 */    MCD_OPC_CheckField, 3, 2, 0, 65, 9, 0, // Skip to: 5595
/* 3226 */    MCD_OPC_Decode, 171, 3, 42, // Opcode: FCMP_CULE_S
/* 3230 */    MCD_OPC_FilterValue, 7, 56, 9, 0, // Skip to: 5595
/* 3235 */    MCD_OPC_CheckPredicate, 1, 51, 9, 0, // Skip to: 5595
/* 3240 */    MCD_OPC_CheckField, 3, 2, 0, 44, 9, 0, // Skip to: 5595
/* 3247 */    MCD_OPC_Decode, 193, 3, 42, // Opcode: FCMP_SULE_S
/* 3251 */    MCD_OPC_FilterValue, 6, 87, 0, 0, // Skip to: 3343
/* 3256 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3259 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3280
/* 3264 */    MCD_OPC_CheckPredicate, 1, 22, 9, 0, // Skip to: 5595
/* 3269 */    MCD_OPC_CheckField, 3, 2, 0, 15, 9, 0, // Skip to: 5595
/* 3276 */    MCD_OPC_Decode, 165, 3, 42, // Opcode: FCMP_CNE_S
/* 3280 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 3301
/* 3285 */    MCD_OPC_CheckPredicate, 1, 1, 9, 0, // Skip to: 5595
/* 3290 */    MCD_OPC_CheckField, 3, 2, 0, 250, 8, 0, // Skip to: 5595
/* 3297 */    MCD_OPC_Decode, 187, 3, 42, // Opcode: FCMP_SNE_S
/* 3301 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3322
/* 3306 */    MCD_OPC_CheckPredicate, 1, 236, 8, 0, // Skip to: 5595
/* 3311 */    MCD_OPC_CheckField, 3, 2, 0, 229, 8, 0, // Skip to: 5595
/* 3318 */    MCD_OPC_Decode, 167, 3, 42, // Opcode: FCMP_COR_S
/* 3322 */    MCD_OPC_FilterValue, 5, 220, 8, 0, // Skip to: 5595
/* 3327 */    MCD_OPC_CheckPredicate, 1, 215, 8, 0, // Skip to: 5595
/* 3332 */    MCD_OPC_CheckField, 3, 2, 0, 208, 8, 0, // Skip to: 5595
/* 3339 */    MCD_OPC_Decode, 189, 3, 42, // Opcode: FCMP_SOR_S
/* 3343 */    MCD_OPC_FilterValue, 7, 45, 0, 0, // Skip to: 3393
/* 3348 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3351 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3372
/* 3356 */    MCD_OPC_CheckPredicate, 1, 186, 8, 0, // Skip to: 5595
/* 3361 */    MCD_OPC_CheckField, 3, 2, 0, 179, 8, 0, // Skip to: 5595
/* 3368 */    MCD_OPC_Decode, 175, 3, 42, // Opcode: FCMP_CUNE_S
/* 3372 */    MCD_OPC_FilterValue, 1, 170, 8, 0, // Skip to: 5595
/* 3377 */    MCD_OPC_CheckPredicate, 1, 165, 8, 0, // Skip to: 5595
/* 3382 */    MCD_OPC_CheckField, 3, 2, 0, 158, 8, 0, // Skip to: 5595
/* 3389 */    MCD_OPC_Decode, 197, 3, 42, // Opcode: FCMP_SUNE_S
/* 3393 */    MCD_OPC_FilterValue, 8, 171, 0, 0, // Skip to: 3569
/* 3398 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3401 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3422
/* 3406 */    MCD_OPC_CheckPredicate, 2, 136, 8, 0, // Skip to: 5595
/* 3411 */    MCD_OPC_CheckField, 3, 2, 0, 129, 8, 0, // Skip to: 5595
/* 3418 */    MCD_OPC_Decode, 156, 3, 43, // Opcode: FCMP_CAF_D
/* 3422 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 3443
/* 3427 */    MCD_OPC_CheckPredicate, 2, 115, 8, 0, // Skip to: 5595
/* 3432 */    MCD_OPC_CheckField, 3, 2, 0, 108, 8, 0, // Skip to: 5595
/* 3439 */    MCD_OPC_Decode, 178, 3, 43, // Opcode: FCMP_SAF_D
/* 3443 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 3464
/* 3448 */    MCD_OPC_CheckPredicate, 2, 94, 8, 0, // Skip to: 5595
/* 3453 */    MCD_OPC_CheckField, 3, 2, 0, 87, 8, 0, // Skip to: 5595
/* 3460 */    MCD_OPC_Decode, 162, 3, 43, // Opcode: FCMP_CLT_D
/* 3464 */    MCD_OPC_FilterValue, 3, 16, 0, 0, // Skip to: 3485
/* 3469 */    MCD_OPC_CheckPredicate, 2, 73, 8, 0, // Skip to: 5595
/* 3474 */    MCD_OPC_CheckField, 3, 2, 0, 66, 8, 0, // Skip to: 5595
/* 3481 */    MCD_OPC_Decode, 184, 3, 43, // Opcode: FCMP_SLT_D
/* 3485 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3506
/* 3490 */    MCD_OPC_CheckPredicate, 2, 52, 8, 0, // Skip to: 5595
/* 3495 */    MCD_OPC_CheckField, 3, 2, 0, 45, 8, 0, // Skip to: 5595
/* 3502 */    MCD_OPC_Decode, 158, 3, 43, // Opcode: FCMP_CEQ_D
/* 3506 */    MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 3527
/* 3511 */    MCD_OPC_CheckPredicate, 2, 31, 8, 0, // Skip to: 5595
/* 3516 */    MCD_OPC_CheckField, 3, 2, 0, 24, 8, 0, // Skip to: 5595
/* 3523 */    MCD_OPC_Decode, 180, 3, 43, // Opcode: FCMP_SEQ_D
/* 3527 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 3548
/* 3532 */    MCD_OPC_CheckPredicate, 2, 10, 8, 0, // Skip to: 5595
/* 3537 */    MCD_OPC_CheckField, 3, 2, 0, 3, 8, 0, // Skip to: 5595
/* 3544 */    MCD_OPC_Decode, 160, 3, 43, // Opcode: FCMP_CLE_D
/* 3548 */    MCD_OPC_FilterValue, 7, 250, 7, 0, // Skip to: 5595
/* 3553 */    MCD_OPC_CheckPredicate, 2, 245, 7, 0, // Skip to: 5595
/* 3558 */    MCD_OPC_CheckField, 3, 2, 0, 238, 7, 0, // Skip to: 5595
/* 3565 */    MCD_OPC_Decode, 182, 3, 43, // Opcode: FCMP_SLE_D
/* 3569 */    MCD_OPC_FilterValue, 9, 171, 0, 0, // Skip to: 3745
/* 3574 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3577 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3598
/* 3582 */    MCD_OPC_CheckPredicate, 2, 216, 7, 0, // Skip to: 5595
/* 3587 */    MCD_OPC_CheckField, 3, 2, 0, 209, 7, 0, // Skip to: 5595
/* 3594 */    MCD_OPC_Decode, 176, 3, 43, // Opcode: FCMP_CUN_D
/* 3598 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 3619
/* 3603 */    MCD_OPC_CheckPredicate, 2, 195, 7, 0, // Skip to: 5595
/* 3608 */    MCD_OPC_CheckField, 3, 2, 0, 188, 7, 0, // Skip to: 5595
/* 3615 */    MCD_OPC_Decode, 198, 3, 43, // Opcode: FCMP_SUN_D
/* 3619 */    MCD_OPC_FilterValue, 2, 16, 0, 0, // Skip to: 3640
/* 3624 */    MCD_OPC_CheckPredicate, 2, 174, 7, 0, // Skip to: 5595
/* 3629 */    MCD_OPC_CheckField, 3, 2, 0, 167, 7, 0, // Skip to: 5595
/* 3636 */    MCD_OPC_Decode, 172, 3, 43, // Opcode: FCMP_CULT_D
/* 3640 */    MCD_OPC_FilterValue, 3, 16, 0, 0, // Skip to: 3661
/* 3645 */    MCD_OPC_CheckPredicate, 2, 153, 7, 0, // Skip to: 5595
/* 3650 */    MCD_OPC_CheckField, 3, 2, 0, 146, 7, 0, // Skip to: 5595
/* 3657 */    MCD_OPC_Decode, 194, 3, 43, // Opcode: FCMP_SULT_D
/* 3661 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3682
/* 3666 */    MCD_OPC_CheckPredicate, 2, 132, 7, 0, // Skip to: 5595
/* 3671 */    MCD_OPC_CheckField, 3, 2, 0, 125, 7, 0, // Skip to: 5595
/* 3678 */    MCD_OPC_Decode, 168, 3, 43, // Opcode: FCMP_CUEQ_D
/* 3682 */    MCD_OPC_FilterValue, 5, 16, 0, 0, // Skip to: 3703
/* 3687 */    MCD_OPC_CheckPredicate, 2, 111, 7, 0, // Skip to: 5595
/* 3692 */    MCD_OPC_CheckField, 3, 2, 0, 104, 7, 0, // Skip to: 5595
/* 3699 */    MCD_OPC_Decode, 190, 3, 43, // Opcode: FCMP_SUEQ_D
/* 3703 */    MCD_OPC_FilterValue, 6, 16, 0, 0, // Skip to: 3724
/* 3708 */    MCD_OPC_CheckPredicate, 2, 90, 7, 0, // Skip to: 5595
/* 3713 */    MCD_OPC_CheckField, 3, 2, 0, 83, 7, 0, // Skip to: 5595
/* 3720 */    MCD_OPC_Decode, 170, 3, 43, // Opcode: FCMP_CULE_D
/* 3724 */    MCD_OPC_FilterValue, 7, 74, 7, 0, // Skip to: 5595
/* 3729 */    MCD_OPC_CheckPredicate, 2, 69, 7, 0, // Skip to: 5595
/* 3734 */    MCD_OPC_CheckField, 3, 2, 0, 62, 7, 0, // Skip to: 5595
/* 3741 */    MCD_OPC_Decode, 192, 3, 43, // Opcode: FCMP_SULE_D
/* 3745 */    MCD_OPC_FilterValue, 10, 87, 0, 0, // Skip to: 3837
/* 3750 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3753 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3774
/* 3758 */    MCD_OPC_CheckPredicate, 2, 40, 7, 0, // Skip to: 5595
/* 3763 */    MCD_OPC_CheckField, 3, 2, 0, 33, 7, 0, // Skip to: 5595
/* 3770 */    MCD_OPC_Decode, 164, 3, 43, // Opcode: FCMP_CNE_D
/* 3774 */    MCD_OPC_FilterValue, 1, 16, 0, 0, // Skip to: 3795
/* 3779 */    MCD_OPC_CheckPredicate, 2, 19, 7, 0, // Skip to: 5595
/* 3784 */    MCD_OPC_CheckField, 3, 2, 0, 12, 7, 0, // Skip to: 5595
/* 3791 */    MCD_OPC_Decode, 186, 3, 43, // Opcode: FCMP_SNE_D
/* 3795 */    MCD_OPC_FilterValue, 4, 16, 0, 0, // Skip to: 3816
/* 3800 */    MCD_OPC_CheckPredicate, 2, 254, 6, 0, // Skip to: 5595
/* 3805 */    MCD_OPC_CheckField, 3, 2, 0, 247, 6, 0, // Skip to: 5595
/* 3812 */    MCD_OPC_Decode, 166, 3, 43, // Opcode: FCMP_COR_D
/* 3816 */    MCD_OPC_FilterValue, 5, 238, 6, 0, // Skip to: 5595
/* 3821 */    MCD_OPC_CheckPredicate, 2, 233, 6, 0, // Skip to: 5595
/* 3826 */    MCD_OPC_CheckField, 3, 2, 0, 226, 6, 0, // Skip to: 5595
/* 3833 */    MCD_OPC_Decode, 188, 3, 43, // Opcode: FCMP_SOR_D
/* 3837 */    MCD_OPC_FilterValue, 11, 45, 0, 0, // Skip to: 3887
/* 3842 */    MCD_OPC_ExtractField, 15, 3,  // Inst{17-15} ...
/* 3845 */    MCD_OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3866
/* 3850 */    MCD_OPC_CheckPredicate, 2, 204, 6, 0, // Skip to: 5595
/* 3855 */    MCD_OPC_CheckField, 3, 2, 0, 197, 6, 0, // Skip to: 5595
/* 3862 */    MCD_OPC_Decode, 174, 3, 43, // Opcode: FCMP_CUNE_D
/* 3866 */    MCD_OPC_FilterValue, 1, 188, 6, 0, // Skip to: 5595
/* 3871 */    MCD_OPC_CheckPredicate, 2, 183, 6, 0, // Skip to: 5595
/* 3876 */    MCD_OPC_CheckField, 3, 2, 0, 176, 6, 0, // Skip to: 5595
/* 3883 */    MCD_OPC_Decode, 196, 3, 43, // Opcode: FCMP_SUNE_D
/* 3887 */    MCD_OPC_FilterValue, 64, 167, 6, 0, // Skip to: 5595
/* 3892 */    MCD_OPC_CheckPredicate, 1, 162, 6, 0, // Skip to: 5595
/* 3897 */    MCD_OPC_Decode, 251, 3, 44, // Opcode: FSEL_S
/* 3901 */    MCD_OPC_FilterValue, 4, 9, 0, 0, // Skip to: 3915
/* 3906 */    MCD_OPC_CheckPredicate, 0, 148, 6, 0, // Skip to: 5595
/* 3911 */    MCD_OPC_Decode, 178, 2, 45, // Opcode: ADDU16I_D
/* 3915 */    MCD_OPC_FilterValue, 5, 26, 0, 0, // Skip to: 3946
/* 3920 */    MCD_OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 3923 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3932
/* 3928 */    MCD_OPC_Decode, 196, 4, 46, // Opcode: LU12I_W
/* 3932 */    MCD_OPC_FilterValue, 1, 122, 6, 0, // Skip to: 5595
/* 3937 */    MCD_OPC_CheckPredicate, 0, 117, 6, 0, // Skip to: 5595
/* 3942 */    MCD_OPC_Decode, 197, 4, 47, // Opcode: LU32I_D
/* 3946 */    MCD_OPC_FilterValue, 6, 21, 0, 0, // Skip to: 3972
/* 3951 */    MCD_OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 3954 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3963
/* 3959 */    MCD_OPC_Decode, 231, 4, 46, // Opcode: PCADDI
/* 3963 */    MCD_OPC_FilterValue, 1, 91, 6, 0, // Skip to: 5595
/* 3968 */    MCD_OPC_Decode, 234, 4, 46, // Opcode: PCALAU12I
/* 3972 */    MCD_OPC_FilterValue, 7, 26, 0, 0, // Skip to: 4003
/* 3977 */    MCD_OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 3980 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3989
/* 3985 */    MCD_OPC_Decode, 232, 4, 46, // Opcode: PCADDU12I
/* 3989 */    MCD_OPC_FilterValue, 1, 65, 6, 0, // Skip to: 5595
/* 3994 */    MCD_OPC_CheckPredicate, 0, 60, 6, 0, // Skip to: 5595
/* 3999 */    MCD_OPC_Decode, 233, 4, 46, // Opcode: PCADDU18I
/* 4003 */    MCD_OPC_FilterValue, 8, 49, 0, 0, // Skip to: 4057
/* 4008 */    MCD_OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4011 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 4020
/* 4016 */    MCD_OPC_Decode, 195, 4, 48, // Opcode: LL_W
/* 4020 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 4029
/* 4025 */    MCD_OPC_Decode, 251, 4, 49, // Opcode: SC_W
/* 4029 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4043
/* 4034 */    MCD_OPC_CheckPredicate, 0, 20, 6, 0, // Skip to: 5595
/* 4039 */    MCD_OPC_Decode, 194, 4, 48, // Opcode: LL_D
/* 4043 */    MCD_OPC_FilterValue, 3, 11, 6, 0, // Skip to: 5595
/* 4048 */    MCD_OPC_CheckPredicate, 0, 6, 6, 0, // Skip to: 5595
/* 4053 */    MCD_OPC_Decode, 250, 4, 49, // Opcode: SC_D
/* 4057 */    MCD_OPC_FilterValue, 9, 59, 0, 0, // Skip to: 4121
/* 4062 */    MCD_OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4065 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4079
/* 4070 */    MCD_OPC_CheckPredicate, 0, 240, 5, 0, // Skip to: 5595
/* 4075 */    MCD_OPC_Decode, 179, 4, 48, // Opcode: LDPTR_W
/* 4079 */    MCD_OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4093
/* 4084 */    MCD_OPC_CheckPredicate, 0, 226, 5, 0, // Skip to: 5595
/* 4089 */    MCD_OPC_Decode, 149, 5, 48, // Opcode: STPTR_W
/* 4093 */    MCD_OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4107
/* 4098 */    MCD_OPC_CheckPredicate, 0, 212, 5, 0, // Skip to: 5595
/* 4103 */    MCD_OPC_Decode, 178, 4, 48, // Opcode: LDPTR_D
/* 4107 */    MCD_OPC_FilterValue, 3, 203, 5, 0, // Skip to: 5595
/* 4112 */    MCD_OPC_CheckPredicate, 0, 198, 5, 0, // Skip to: 5595
/* 4117 */    MCD_OPC_Decode, 148, 5, 48, // Opcode: STPTR_D
/* 4121 */    MCD_OPC_FilterValue, 10, 182, 0, 0, // Skip to: 4308
/* 4126 */    MCD_OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4129 */    MCD_OPC_FilterValue, 0, 4, 0, 0, // Skip to: 4138
/* 4134 */    MCD_OPC_Decode, 187, 4, 30, // Opcode: LD_B
/* 4138 */    MCD_OPC_FilterValue, 1, 4, 0, 0, // Skip to: 4147
/* 4143 */    MCD_OPC_Decode, 190, 4, 30, // Opcode: LD_H
/* 4147 */    MCD_OPC_FilterValue, 2, 4, 0, 0, // Skip to: 4156
/* 4152 */    MCD_OPC_Decode, 192, 4, 30, // Opcode: LD_W
/* 4156 */    MCD_OPC_FilterValue, 3, 9, 0, 0, // Skip to: 4170
/* 4161 */    MCD_OPC_CheckPredicate, 0, 149, 5, 0, // Skip to: 5595
/* 4166 */    MCD_OPC_Decode, 189, 4, 30, // Opcode: LD_D
/* 4170 */    MCD_OPC_FilterValue, 4, 4, 0, 0, // Skip to: 4179
/* 4175 */    MCD_OPC_Decode, 154, 5, 30, // Opcode: ST_B
/* 4179 */    MCD_OPC_FilterValue, 5, 4, 0, 0, // Skip to: 4188
/* 4184 */    MCD_OPC_Decode, 156, 5, 30, // Opcode: ST_H
/* 4188 */    MCD_OPC_FilterValue, 6, 4, 0, 0, // Skip to: 4197
/* 4193 */    MCD_OPC_Decode, 157, 5, 30, // Opcode: ST_W
/* 4197 */    MCD_OPC_FilterValue, 7, 9, 0, 0, // Skip to: 4211
/* 4202 */    MCD_OPC_CheckPredicate, 0, 108, 5, 0, // Skip to: 5595
/* 4207 */    MCD_OPC_Decode, 155, 5, 30, // Opcode: ST_D
/* 4211 */    MCD_OPC_FilterValue, 8, 4, 0, 0, // Skip to: 4220
/* 4216 */    MCD_OPC_Decode, 188, 4, 30, // Opcode: LD_BU
/* 4220 */    MCD_OPC_FilterValue, 9, 4, 0, 0, // Skip to: 4229
/* 4225 */    MCD_OPC_Decode, 191, 4, 30, // Opcode: LD_HU
/* 4229 */    MCD_OPC_FilterValue, 10, 9, 0, 0, // Skip to: 4243
/* 4234 */    MCD_OPC_CheckPredicate, 0, 76, 5, 0, // Skip to: 5595
/* 4239 */    MCD_OPC_Decode, 193, 4, 30, // Opcode: LD_WU
/* 4243 */    MCD_OPC_FilterValue, 11, 4, 0, 0, // Skip to: 4252
/* 4248 */    MCD_OPC_Decode, 235, 4, 35, // Opcode: PRELD
/* 4252 */    MCD_OPC_FilterValue, 12, 9, 0, 0, // Skip to: 4266
/* 4257 */    MCD_OPC_CheckPredicate, 1, 53, 5, 0, // Skip to: 5595
/* 4262 */    MCD_OPC_Decode, 217, 3, 50, // Opcode: FLD_S
/* 4266 */    MCD_OPC_FilterValue, 13, 9, 0, 0, // Skip to: 4280
/* 4271 */    MCD_OPC_CheckPredicate, 1, 39, 5, 0, // Skip to: 5595
/* 4276 */    MCD_OPC_Decode, 133, 4, 50, // Opcode: FST_S
/* 4280 */    MCD_OPC_FilterValue, 14, 9, 0, 0, // Skip to: 4294
/* 4285 */    MCD_OPC_CheckPredicate, 2, 25, 5, 0, // Skip to: 5595
/* 4290 */    MCD_OPC_Decode, 216, 3, 51, // Opcode: FLD_D
/* 4294 */    MCD_OPC_FilterValue, 15, 16, 5, 0, // Skip to: 5595
/* 4299 */    MCD_OPC_CheckPredicate, 2, 11, 5, 0, // Skip to: 5595
/* 4304 */    MCD_OPC_Decode, 132, 4, 51, // Opcode: FST_D
/* 4308 */    MCD_OPC_FilterValue, 14, 123, 4, 0, // Skip to: 5460
/* 4313 */    MCD_OPC_ExtractField, 15, 11,  // Inst{25-15} ...
/* 4316 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4330
/* 4321 */    MCD_OPC_CheckPredicate, 0, 245, 4, 0, // Skip to: 5595
/* 4326 */    MCD_OPC_Decode, 180, 4, 5, // Opcode: LDX_B
/* 4330 */    MCD_OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4344
/* 4335 */    MCD_OPC_CheckPredicate, 0, 231, 4, 0, // Skip to: 5595
/* 4340 */    MCD_OPC_Decode, 183, 4, 5, // Opcode: LDX_H
/* 4344 */    MCD_OPC_FilterValue, 16, 9, 0, 0, // Skip to: 4358
/* 4349 */    MCD_OPC_CheckPredicate, 0, 217, 4, 0, // Skip to: 5595
/* 4354 */    MCD_OPC_Decode, 185, 4, 5, // Opcode: LDX_W
/* 4358 */    MCD_OPC_FilterValue, 24, 9, 0, 0, // Skip to: 4372
/* 4363 */    MCD_OPC_CheckPredicate, 0, 203, 4, 0, // Skip to: 5595
/* 4368 */    MCD_OPC_Decode, 182, 4, 5, // Opcode: LDX_D
/* 4372 */    MCD_OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4386
/* 4377 */    MCD_OPC_CheckPredicate, 0, 189, 4, 0, // Skip to: 5595
/* 4382 */    MCD_OPC_Decode, 150, 5, 5, // Opcode: STX_B
/* 4386 */    MCD_OPC_FilterValue, 40, 9, 0, 0, // Skip to: 4400
/* 4391 */    MCD_OPC_CheckPredicate, 0, 175, 4, 0, // Skip to: 5595
/* 4396 */    MCD_OPC_Decode, 152, 5, 5, // Opcode: STX_H
/* 4400 */    MCD_OPC_FilterValue, 48, 9, 0, 0, // Skip to: 4414
/* 4405 */    MCD_OPC_CheckPredicate, 0, 161, 4, 0, // Skip to: 5595
/* 4410 */    MCD_OPC_Decode, 153, 5, 5, // Opcode: STX_W
/* 4414 */    MCD_OPC_FilterValue, 56, 9, 0, 0, // Skip to: 4428
/* 4419 */    MCD_OPC_CheckPredicate, 0, 147, 4, 0, // Skip to: 5595
/* 4424 */    MCD_OPC_Decode, 151, 5, 5, // Opcode: STX_D
/* 4428 */    MCD_OPC_FilterValue, 64, 9, 0, 0, // Skip to: 4442
/* 4433 */    MCD_OPC_CheckPredicate, 0, 133, 4, 0, // Skip to: 5595
/* 4438 */    MCD_OPC_Decode, 181, 4, 5, // Opcode: LDX_BU
/* 4442 */    MCD_OPC_FilterValue, 72, 9, 0, 0, // Skip to: 4456
/* 4447 */    MCD_OPC_CheckPredicate, 0, 119, 4, 0, // Skip to: 5595
/* 4452 */    MCD_OPC_Decode, 184, 4, 5, // Opcode: LDX_HU
/* 4456 */    MCD_OPC_FilterValue, 80, 9, 0, 0, // Skip to: 4470
/* 4461 */    MCD_OPC_CheckPredicate, 0, 105, 4, 0, // Skip to: 5595
/* 4466 */    MCD_OPC_Decode, 186, 4, 5, // Opcode: LDX_WU
/* 4470 */    MCD_OPC_FilterValue, 88, 9, 0, 0, // Skip to: 4484
/* 4475 */    MCD_OPC_CheckPredicate, 0, 91, 4, 0, // Skip to: 5595
/* 4480 */    MCD_OPC_Decode, 236, 4, 52, // Opcode: PRELDX
/* 4484 */    MCD_OPC_FilterValue, 96, 9, 0, 0, // Skip to: 4498
/* 4489 */    MCD_OPC_CheckPredicate, 1, 77, 4, 0, // Skip to: 5595
/* 4494 */    MCD_OPC_Decode, 215, 3, 53, // Opcode: FLDX_S
/* 4498 */    MCD_OPC_FilterValue, 104, 9, 0, 0, // Skip to: 4512
/* 4503 */    MCD_OPC_CheckPredicate, 2, 63, 4, 0, // Skip to: 5595
/* 4508 */    MCD_OPC_Decode, 214, 3, 54, // Opcode: FLDX_D
/* 4512 */    MCD_OPC_FilterValue, 112, 9, 0, 0, // Skip to: 4526
/* 4517 */    MCD_OPC_CheckPredicate, 1, 49, 4, 0, // Skip to: 5595
/* 4522 */    MCD_OPC_Decode, 131, 4, 53, // Opcode: FSTX_S
/* 4526 */    MCD_OPC_FilterValue, 120, 9, 0, 0, // Skip to: 4540
/* 4531 */    MCD_OPC_CheckPredicate, 2, 35, 4, 0, // Skip to: 5595
/* 4536 */    MCD_OPC_Decode, 130, 4, 54, // Opcode: FSTX_D
/* 4540 */    MCD_OPC_FilterValue, 192, 1, 9, 0, 0, // Skip to: 4555
/* 4546 */    MCD_OPC_CheckPredicate, 0, 20, 4, 0, // Skip to: 5595
/* 4551 */    MCD_OPC_Decode, 215, 2, 55, // Opcode: AMSWAP_W
/* 4555 */    MCD_OPC_FilterValue, 193, 1, 9, 0, 0, // Skip to: 4570
/* 4561 */    MCD_OPC_CheckPredicate, 0, 5, 4, 0, // Skip to: 5595
/* 4566 */    MCD_OPC_Decode, 212, 2, 55, // Opcode: AMSWAP_D
/* 4570 */    MCD_OPC_FilterValue, 194, 1, 9, 0, 0, // Skip to: 4585
/* 4576 */    MCD_OPC_CheckPredicate, 0, 246, 3, 0, // Skip to: 5595
/* 4581 */    MCD_OPC_Decode, 187, 2, 55, // Opcode: AMADD_W
/* 4585 */    MCD_OPC_FilterValue, 195, 1, 9, 0, 0, // Skip to: 4600
/* 4591 */    MCD_OPC_CheckPredicate, 0, 231, 3, 0, // Skip to: 5595
/* 4596 */    MCD_OPC_Decode, 184, 2, 55, // Opcode: AMADD_D
/* 4600 */    MCD_OPC_FilterValue, 196, 1, 9, 0, 0, // Skip to: 4615
/* 4606 */    MCD_OPC_CheckPredicate, 0, 216, 3, 0, // Skip to: 5595
/* 4611 */    MCD_OPC_Decode, 191, 2, 55, // Opcode: AMAND_W
/* 4615 */    MCD_OPC_FilterValue, 197, 1, 9, 0, 0, // Skip to: 4630
/* 4621 */    MCD_OPC_CheckPredicate, 0, 201, 3, 0, // Skip to: 5595
/* 4626 */    MCD_OPC_Decode, 188, 2, 55, // Opcode: AMAND_D
/* 4630 */    MCD_OPC_FilterValue, 198, 1, 9, 0, 0, // Skip to: 4645
/* 4636 */    MCD_OPC_CheckPredicate, 0, 186, 3, 0, // Skip to: 5595
/* 4641 */    MCD_OPC_Decode, 211, 2, 55, // Opcode: AMOR_W
/* 4645 */    MCD_OPC_FilterValue, 199, 1, 9, 0, 0, // Skip to: 4660
/* 4651 */    MCD_OPC_CheckPredicate, 0, 171, 3, 0, // Skip to: 5595
/* 4656 */    MCD_OPC_Decode, 208, 2, 55, // Opcode: AMOR_D
/* 4660 */    MCD_OPC_FilterValue, 200, 1, 9, 0, 0, // Skip to: 4675
/* 4666 */    MCD_OPC_CheckPredicate, 0, 156, 3, 0, // Skip to: 5595
/* 4671 */    MCD_OPC_Decode, 219, 2, 55, // Opcode: AMXOR_W
/* 4675 */    MCD_OPC_FilterValue, 201, 1, 9, 0, 0, // Skip to: 4690
/* 4681 */    MCD_OPC_CheckPredicate, 0, 141, 3, 0, // Skip to: 5595
/* 4686 */    MCD_OPC_Decode, 216, 2, 55, // Opcode: AMXOR_D
/* 4690 */    MCD_OPC_FilterValue, 202, 1, 9, 0, 0, // Skip to: 4705
/* 4696 */    MCD_OPC_CheckPredicate, 0, 126, 3, 0, // Skip to: 5595
/* 4701 */    MCD_OPC_Decode, 198, 2, 55, // Opcode: AMMAX_W
/* 4705 */    MCD_OPC_FilterValue, 203, 1, 9, 0, 0, // Skip to: 4720
/* 4711 */    MCD_OPC_CheckPredicate, 0, 111, 3, 0, // Skip to: 5595
/* 4716 */    MCD_OPC_Decode, 192, 2, 55, // Opcode: AMMAX_D
/* 4720 */    MCD_OPC_FilterValue, 204, 1, 9, 0, 0, // Skip to: 4735
/* 4726 */    MCD_OPC_CheckPredicate, 0, 96, 3, 0, // Skip to: 5595
/* 4731 */    MCD_OPC_Decode, 206, 2, 55, // Opcode: AMMIN_W
/* 4735 */    MCD_OPC_FilterValue, 205, 1, 9, 0, 0, // Skip to: 4750
/* 4741 */    MCD_OPC_CheckPredicate, 0, 81, 3, 0, // Skip to: 5595
/* 4746 */    MCD_OPC_Decode, 200, 2, 55, // Opcode: AMMIN_D
/* 4750 */    MCD_OPC_FilterValue, 206, 1, 9, 0, 0, // Skip to: 4765
/* 4756 */    MCD_OPC_CheckPredicate, 0, 66, 3, 0, // Skip to: 5595
/* 4761 */    MCD_OPC_Decode, 199, 2, 55, // Opcode: AMMAX_WU
/* 4765 */    MCD_OPC_FilterValue, 207, 1, 9, 0, 0, // Skip to: 4780
/* 4771 */    MCD_OPC_CheckPredicate, 0, 51, 3, 0, // Skip to: 5595
/* 4776 */    MCD_OPC_Decode, 197, 2, 55, // Opcode: AMMAX_DU
/* 4780 */    MCD_OPC_FilterValue, 208, 1, 9, 0, 0, // Skip to: 4795
/* 4786 */    MCD_OPC_CheckPredicate, 0, 36, 3, 0, // Skip to: 5595
/* 4791 */    MCD_OPC_Decode, 207, 2, 55, // Opcode: AMMIN_WU
/* 4795 */    MCD_OPC_FilterValue, 209, 1, 9, 0, 0, // Skip to: 4810
/* 4801 */    MCD_OPC_CheckPredicate, 0, 21, 3, 0, // Skip to: 5595
/* 4806 */    MCD_OPC_Decode, 205, 2, 55, // Opcode: AMMIN_DU
/* 4810 */    MCD_OPC_FilterValue, 210, 1, 9, 0, 0, // Skip to: 4825
/* 4816 */    MCD_OPC_CheckPredicate, 0, 6, 3, 0, // Skip to: 5595
/* 4821 */    MCD_OPC_Decode, 214, 2, 55, // Opcode: AMSWAP_DB_W
/* 4825 */    MCD_OPC_FilterValue, 211, 1, 9, 0, 0, // Skip to: 4840
/* 4831 */    MCD_OPC_CheckPredicate, 0, 247, 2, 0, // Skip to: 5595
/* 4836 */    MCD_OPC_Decode, 213, 2, 55, // Opcode: AMSWAP_DB_D
/* 4840 */    MCD_OPC_FilterValue, 212, 1, 9, 0, 0, // Skip to: 4855
/* 4846 */    MCD_OPC_CheckPredicate, 0, 232, 2, 0, // Skip to: 5595
/* 4851 */    MCD_OPC_Decode, 186, 2, 55, // Opcode: AMADD_DB_W
/* 4855 */    MCD_OPC_FilterValue, 213, 1, 9, 0, 0, // Skip to: 4870
/* 4861 */    MCD_OPC_CheckPredicate, 0, 217, 2, 0, // Skip to: 5595
/* 4866 */    MCD_OPC_Decode, 185, 2, 55, // Opcode: AMADD_DB_D
/* 4870 */    MCD_OPC_FilterValue, 214, 1, 9, 0, 0, // Skip to: 4885
/* 4876 */    MCD_OPC_CheckPredicate, 0, 202, 2, 0, // Skip to: 5595
/* 4881 */    MCD_OPC_Decode, 190, 2, 55, // Opcode: AMAND_DB_W
/* 4885 */    MCD_OPC_FilterValue, 215, 1, 9, 0, 0, // Skip to: 4900
/* 4891 */    MCD_OPC_CheckPredicate, 0, 187, 2, 0, // Skip to: 5595
/* 4896 */    MCD_OPC_Decode, 189, 2, 55, // Opcode: AMAND_DB_D
/* 4900 */    MCD_OPC_FilterValue, 216, 1, 9, 0, 0, // Skip to: 4915
/* 4906 */    MCD_OPC_CheckPredicate, 0, 172, 2, 0, // Skip to: 5595
/* 4911 */    MCD_OPC_Decode, 210, 2, 55, // Opcode: AMOR_DB_W
/* 4915 */    MCD_OPC_FilterValue, 217, 1, 9, 0, 0, // Skip to: 4930
/* 4921 */    MCD_OPC_CheckPredicate, 0, 157, 2, 0, // Skip to: 5595
/* 4926 */    MCD_OPC_Decode, 209, 2, 55, // Opcode: AMOR_DB_D
/* 4930 */    MCD_OPC_FilterValue, 218, 1, 9, 0, 0, // Skip to: 4945
/* 4936 */    MCD_OPC_CheckPredicate, 0, 142, 2, 0, // Skip to: 5595
/* 4941 */    MCD_OPC_Decode, 218, 2, 55, // Opcode: AMXOR_DB_W
/* 4945 */    MCD_OPC_FilterValue, 219, 1, 9, 0, 0, // Skip to: 4960
/* 4951 */    MCD_OPC_CheckPredicate, 0, 127, 2, 0, // Skip to: 5595
/* 4956 */    MCD_OPC_Decode, 217, 2, 55, // Opcode: AMXOR_DB_D
/* 4960 */    MCD_OPC_FilterValue, 220, 1, 9, 0, 0, // Skip to: 4975
/* 4966 */    MCD_OPC_CheckPredicate, 0, 112, 2, 0, // Skip to: 5595
/* 4971 */    MCD_OPC_Decode, 195, 2, 55, // Opcode: AMMAX_DB_W
/* 4975 */    MCD_OPC_FilterValue, 221, 1, 9, 0, 0, // Skip to: 4990
/* 4981 */    MCD_OPC_CheckPredicate, 0, 97, 2, 0, // Skip to: 5595
/* 4986 */    MCD_OPC_Decode, 193, 2, 55, // Opcode: AMMAX_DB_D
/* 4990 */    MCD_OPC_FilterValue, 222, 1, 9, 0, 0, // Skip to: 5005
/* 4996 */    MCD_OPC_CheckPredicate, 0, 82, 2, 0, // Skip to: 5595
/* 5001 */    MCD_OPC_Decode, 203, 2, 55, // Opcode: AMMIN_DB_W
/* 5005 */    MCD_OPC_FilterValue, 223, 1, 9, 0, 0, // Skip to: 5020
/* 5011 */    MCD_OPC_CheckPredicate, 0, 67, 2, 0, // Skip to: 5595
/* 5016 */    MCD_OPC_Decode, 201, 2, 55, // Opcode: AMMIN_DB_D
/* 5020 */    MCD_OPC_FilterValue, 224, 1, 9, 0, 0, // Skip to: 5035
/* 5026 */    MCD_OPC_CheckPredicate, 0, 52, 2, 0, // Skip to: 5595
/* 5031 */    MCD_OPC_Decode, 196, 2, 55, // Opcode: AMMAX_DB_WU
/* 5035 */    MCD_OPC_FilterValue, 225, 1, 9, 0, 0, // Skip to: 5050
/* 5041 */    MCD_OPC_CheckPredicate, 0, 37, 2, 0, // Skip to: 5595
/* 5046 */    MCD_OPC_Decode, 194, 2, 55, // Opcode: AMMAX_DB_DU
/* 5050 */    MCD_OPC_FilterValue, 226, 1, 9, 0, 0, // Skip to: 5065
/* 5056 */    MCD_OPC_CheckPredicate, 0, 22, 2, 0, // Skip to: 5595
/* 5061 */    MCD_OPC_Decode, 204, 2, 55, // Opcode: AMMIN_DB_WU
/* 5065 */    MCD_OPC_FilterValue, 227, 1, 9, 0, 0, // Skip to: 5080
/* 5071 */    MCD_OPC_CheckPredicate, 0, 7, 2, 0, // Skip to: 5595
/* 5076 */    MCD_OPC_Decode, 202, 2, 55, // Opcode: AMMIN_DB_DU
/* 5080 */    MCD_OPC_FilterValue, 228, 1, 4, 0, 0, // Skip to: 5090
/* 5086 */    MCD_OPC_Decode, 141, 3, 6, // Opcode: DBAR
/* 5090 */    MCD_OPC_FilterValue, 229, 1, 4, 0, 0, // Skip to: 5100
/* 5096 */    MCD_OPC_Decode, 156, 4, 6, // Opcode: IBAR
/* 5100 */    MCD_OPC_FilterValue, 232, 1, 9, 0, 0, // Skip to: 5115
/* 5106 */    MCD_OPC_CheckPredicate, 1, 228, 1, 0, // Skip to: 5595
/* 5111 */    MCD_OPC_Decode, 211, 3, 53, // Opcode: FLDGT_S
/* 5115 */    MCD_OPC_FilterValue, 233, 1, 9, 0, 0, // Skip to: 5130
/* 5121 */    MCD_OPC_CheckPredicate, 2, 213, 1, 0, // Skip to: 5595
/* 5126 */    MCD_OPC_Decode, 210, 3, 54, // Opcode: FLDGT_D
/* 5130 */    MCD_OPC_FilterValue, 234, 1, 9, 0, 0, // Skip to: 5145
/* 5136 */    MCD_OPC_CheckPredicate, 1, 198, 1, 0, // Skip to: 5595
/* 5141 */    MCD_OPC_Decode, 213, 3, 53, // Opcode: FLDLE_S
/* 5145 */    MCD_OPC_FilterValue, 235, 1, 9, 0, 0, // Skip to: 5160
/* 5151 */    MCD_OPC_CheckPredicate, 2, 183, 1, 0, // Skip to: 5595
/* 5156 */    MCD_OPC_Decode, 212, 3, 54, // Opcode: FLDLE_D
/* 5160 */    MCD_OPC_FilterValue, 236, 1, 9, 0, 0, // Skip to: 5175
/* 5166 */    MCD_OPC_CheckPredicate, 1, 168, 1, 0, // Skip to: 5595
/* 5171 */    MCD_OPC_Decode, 255, 3, 53, // Opcode: FSTGT_S
/* 5175 */    MCD_OPC_FilterValue, 237, 1, 9, 0, 0, // Skip to: 5190
/* 5181 */    MCD_OPC_CheckPredicate, 2, 153, 1, 0, // Skip to: 5595
/* 5186 */    MCD_OPC_Decode, 254, 3, 54, // Opcode: FSTGT_D
/* 5190 */    MCD_OPC_FilterValue, 238, 1, 9, 0, 0, // Skip to: 5205
/* 5196 */    MCD_OPC_CheckPredicate, 1, 138, 1, 0, // Skip to: 5595
/* 5201 */    MCD_OPC_Decode, 129, 4, 53, // Opcode: FSTLE_S
/* 5205 */    MCD_OPC_FilterValue, 239, 1, 9, 0, 0, // Skip to: 5220
/* 5211 */    MCD_OPC_CheckPredicate, 2, 123, 1, 0, // Skip to: 5595
/* 5216 */    MCD_OPC_Decode, 128, 4, 54, // Opcode: FSTLE_D
/* 5220 */    MCD_OPC_FilterValue, 240, 1, 9, 0, 0, // Skip to: 5235
/* 5226 */    MCD_OPC_CheckPredicate, 0, 108, 1, 0, // Skip to: 5595
/* 5231 */    MCD_OPC_Decode, 169, 4, 5, // Opcode: LDGT_B
/* 5235 */    MCD_OPC_FilterValue, 241, 1, 9, 0, 0, // Skip to: 5250
/* 5241 */    MCD_OPC_CheckPredicate, 0, 93, 1, 0, // Skip to: 5595
/* 5246 */    MCD_OPC_Decode, 171, 4, 5, // Opcode: LDGT_H
/* 5250 */    MCD_OPC_FilterValue, 242, 1, 9, 0, 0, // Skip to: 5265
/* 5256 */    MCD_OPC_CheckPredicate, 0, 78, 1, 0, // Skip to: 5595
/* 5261 */    MCD_OPC_Decode, 172, 4, 5, // Opcode: LDGT_W
/* 5265 */    MCD_OPC_FilterValue, 243, 1, 9, 0, 0, // Skip to: 5280
/* 5271 */    MCD_OPC_CheckPredicate, 0, 63, 1, 0, // Skip to: 5595
/* 5276 */    MCD_OPC_Decode, 170, 4, 5, // Opcode: LDGT_D
/* 5280 */    MCD_OPC_FilterValue, 244, 1, 9, 0, 0, // Skip to: 5295
/* 5286 */    MCD_OPC_CheckPredicate, 0, 48, 1, 0, // Skip to: 5595
/* 5291 */    MCD_OPC_Decode, 173, 4, 5, // Opcode: LDLE_B
/* 5295 */    MCD_OPC_FilterValue, 245, 1, 9, 0, 0, // Skip to: 5310
/* 5301 */    MCD_OPC_CheckPredicate, 0, 33, 1, 0, // Skip to: 5595
/* 5306 */    MCD_OPC_Decode, 175, 4, 5, // Opcode: LDLE_H
/* 5310 */    MCD_OPC_FilterValue, 246, 1, 9, 0, 0, // Skip to: 5325
/* 5316 */    MCD_OPC_CheckPredicate, 0, 18, 1, 0, // Skip to: 5595
/* 5321 */    MCD_OPC_Decode, 176, 4, 5, // Opcode: LDLE_W
/* 5325 */    MCD_OPC_FilterValue, 247, 1, 9, 0, 0, // Skip to: 5340
/* 5331 */    MCD_OPC_CheckPredicate, 0, 3, 1, 0, // Skip to: 5595
/* 5336 */    MCD_OPC_Decode, 174, 4, 5, // Opcode: LDLE_D
/* 5340 */    MCD_OPC_FilterValue, 248, 1, 9, 0, 0, // Skip to: 5355
/* 5346 */    MCD_OPC_CheckPredicate, 0, 244, 0, 0, // Skip to: 5595
/* 5351 */    MCD_OPC_Decode, 140, 5, 5, // Opcode: STGT_B
/* 5355 */    MCD_OPC_FilterValue, 249, 1, 9, 0, 0, // Skip to: 5370
/* 5361 */    MCD_OPC_CheckPredicate, 0, 229, 0, 0, // Skip to: 5595
/* 5366 */    MCD_OPC_Decode, 142, 5, 5, // Opcode: STGT_H
/* 5370 */    MCD_OPC_FilterValue, 250, 1, 9, 0, 0, // Skip to: 5385
/* 5376 */    MCD_OPC_CheckPredicate, 0, 214, 0, 0, // Skip to: 5595
/* 5381 */    MCD_OPC_Decode, 143, 5, 5, // Opcode: STGT_W
/* 5385 */    MCD_OPC_FilterValue, 251, 1, 9, 0, 0, // Skip to: 5400
/* 5391 */    MCD_OPC_CheckPredicate, 0, 199, 0, 0, // Skip to: 5595
/* 5396 */    MCD_OPC_Decode, 141, 5, 5, // Opcode: STGT_D
/* 5400 */    MCD_OPC_FilterValue, 252, 1, 9, 0, 0, // Skip to: 5415
/* 5406 */    MCD_OPC_CheckPredicate, 0, 184, 0, 0, // Skip to: 5595
/* 5411 */    MCD_OPC_Decode, 144, 5, 5, // Opcode: STLE_B
/* 5415 */    MCD_OPC_FilterValue, 253, 1, 9, 0, 0, // Skip to: 5430
/* 5421 */    MCD_OPC_CheckPredicate, 0, 169, 0, 0, // Skip to: 5595
/* 5426 */    MCD_OPC_Decode, 146, 5, 5, // Opcode: STLE_H
/* 5430 */    MCD_OPC_FilterValue, 254, 1, 9, 0, 0, // Skip to: 5445
/* 5436 */    MCD_OPC_CheckPredicate, 0, 154, 0, 0, // Skip to: 5595
/* 5441 */    MCD_OPC_Decode, 147, 5, 5, // Opcode: STLE_W
/* 5445 */    MCD_OPC_FilterValue, 255, 1, 144, 0, 0, // Skip to: 5595
/* 5451 */    MCD_OPC_CheckPredicate, 0, 139, 0, 0, // Skip to: 5595
/* 5456 */    MCD_OPC_Decode, 145, 5, 5, // Opcode: STLE_D
/* 5460 */    MCD_OPC_FilterValue, 16, 4, 0, 0, // Skip to: 5469
/* 5465 */    MCD_OPC_Decode, 229, 2, 56, // Opcode: BEQZ
/* 5469 */    MCD_OPC_FilterValue, 17, 4, 0, 0, // Skip to: 5478
/* 5474 */    MCD_OPC_Decode, 240, 2, 56, // Opcode: BNEZ
/* 5478 */    MCD_OPC_FilterValue, 18, 31, 0, 0, // Skip to: 5514
/* 5483 */    MCD_OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 5486 */    MCD_OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5500
/* 5491 */    MCD_OPC_CheckPredicate, 1, 99, 0, 0, // Skip to: 5595
/* 5496 */    MCD_OPC_Decode, 226, 2, 57, // Opcode: BCEQZ
/* 5500 */    MCD_OPC_FilterValue, 1, 90, 0, 0, // Skip to: 5595
/* 5505 */    MCD_OPC_CheckPredicate, 1, 85, 0, 0, // Skip to: 5595
/* 5510 */    MCD_OPC_Decode, 227, 2, 57, // Opcode: BCNEZ
/* 5514 */    MCD_OPC_FilterValue, 19, 4, 0, 0, // Skip to: 5523
/* 5519 */    MCD_OPC_Decode, 167, 4, 58, // Opcode: JIRL
/* 5523 */    MCD_OPC_FilterValue, 20, 4, 0, 0, // Skip to: 5532
/* 5528 */    MCD_OPC_Decode, 225, 2, 59, // Opcode: B
/* 5532 */    MCD_OPC_FilterValue, 21, 4, 0, 0, // Skip to: 5541
/* 5537 */    MCD_OPC_Decode, 236, 2, 59, // Opcode: BL
/* 5541 */    MCD_OPC_FilterValue, 22, 4, 0, 0, // Skip to: 5550
/* 5546 */    MCD_OPC_Decode, 228, 2, 60, // Opcode: BEQ
/* 5550 */    MCD_OPC_FilterValue, 23, 4, 0, 0, // Skip to: 5559
/* 5555 */    MCD_OPC_Decode, 239, 2, 60, // Opcode: BNE
/* 5559 */    MCD_OPC_FilterValue, 24, 4, 0, 0, // Skip to: 5568
/* 5564 */    MCD_OPC_Decode, 237, 2, 60, // Opcode: BLT
/* 5568 */    MCD_OPC_FilterValue, 25, 4, 0, 0, // Skip to: 5577
/* 5573 */    MCD_OPC_Decode, 230, 2, 60, // Opcode: BGE
/* 5577 */    MCD_OPC_FilterValue, 26, 4, 0, 0, // Skip to: 5586
/* 5582 */    MCD_OPC_Decode, 238, 2, 60, // Opcode: BLTU
/* 5586 */    MCD_OPC_FilterValue, 27, 4, 0, 0, // Skip to: 5595
/* 5591 */    MCD_OPC_Decode, 231, 2, 60, // Opcode: BGEU
/* 5595 */    MCD_OPC_Fail,
  0
};

static bool checkDecoderPredicate(MCInst *Inst, unsigned Idx) {
  switch (Idx) {
  default: /* llvm_unreachable("Invalid index!"); */
  case 0:
    return (LoongArch_getFeatureBits(Inst->csh->mode, LoongArch_Feature64Bit));
  case 1:
    return (LoongArch_getFeatureBits(Inst->csh->mode, LoongArch_FeatureBasicF));
  case 2:
    return (LoongArch_getFeatureBits(Inst->csh->mode, LoongArch_FeatureBasicD));
  case 3:
    return (LoongArch_getFeatureBits(Inst->csh->mode, LoongArch_FeatureBasicD) && LoongArch_getFeatureBits(Inst->csh->mode, LoongArch_Feature64Bit));
  }
}

#define DecodeToMCInst(fname, fieldname, InsnType) \
static DecodeStatus fname(DecodeStatus S, unsigned Idx, InsnType insn, MCInst *MI, \
		uint64_t Address, const void *Decoder, bool *DecodeComplete) \
{ \
  *DecodeComplete = true; \
  InsnType tmp; \
  switch (Idx) { \
  default: /* llvm_unreachable("Invalid index!"); */ \
  case 0: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 1: \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 2: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 2); \
    if (decodeUImmOperand_2_1(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 3: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 2); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 4: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 3); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 5: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 6: \
    tmp = fieldname(insn, 0, 15); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 7: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 8: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 6); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 9: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 10, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 10: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 10, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 11: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 6); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 10, 6); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 12: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 16, 6); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 10, 6); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 13: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 14: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 15: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 16: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 17: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 18: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 19: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 20: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 21: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 22: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFCSRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 23: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFCSRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 24: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 25: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 26: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 27: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 28: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 29: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 30: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 12); \
    if (decodeSImmOperand_12(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 31: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 12); \
    if (decodeUImmOperand_12(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 32: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 14); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 33: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 14); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 34: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 14); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 35: \
    tmp = fieldname(insn, 0, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 12); \
    if (decodeSImmOperand_12(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 36: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 8); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 37: \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 8); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 38: \
    return S; \
  case 39: \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    return S; \
  case 40: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 41: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 42: \
    tmp = fieldname(insn, 0, 3); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 43: \
    tmp = fieldname(insn, 0, 3); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 44: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 15, 3); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 45: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 16); \
    if (decodeSImmOperand_16(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 46: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 20); \
    if (decodeSImmOperand_20(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 47: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 20); \
    if (decodeSImmOperand_20(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 48: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 14); \
    if (decodeSImmOperand_14_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 49: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 14); \
    if (decodeSImmOperand_14_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 50: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 12); \
    if (decodeSImmOperand_12(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 51: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 12); \
    if (decodeSImmOperand_12(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 52: \
    tmp = fieldname(insn, 0, 5); \
    MCOperand_CreateImm0(MI, tmp); \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 53: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 54: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 55: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 56: \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 16; \
    tmp |= fieldname(insn, 10, 16) << 0; \
    if (decodeSImmOperand_21_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 57: \
    tmp = fieldname(insn, 5, 3); \
    if (DecodeCFRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 5) << 16; \
    tmp |= fieldname(insn, 10, 16) << 0; \
    if (decodeSImmOperand_21_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 58: \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 16); \
    if (decodeSImmOperand_16_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 59: \
    tmp = 0x0; \
    tmp |= fieldname(insn, 0, 10) << 16; \
    tmp |= fieldname(insn, 10, 16) << 0; \
    if (decodeSImmOperand_26_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  case 60: \
    tmp = fieldname(insn, 5, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 0, 5); \
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    tmp = fieldname(insn, 10, 16); \
    if (decodeSImmOperand_16_2(MI, tmp, Address, Decoder) == MCDisassembler_Fail) { return MCDisassembler_Fail; } \
    return S; \
  } \
}

#define DecodeInstruction(fname, fieldname, decoder, InsnType) \
static DecodeStatus fname(const uint8_t DecodeTable[], MCInst *MI, \
                                      InsnType insn, uint64_t Address, const void *Decoder) { \
  const uint8_t *Ptr = DecodeTable; \
  uint64_t CurFieldValue = 0; \
  DecodeStatus S = MCDisassembler_Success; \
  while (true) { \
    switch (*Ptr) { \
    default: \
      return MCDisassembler_Fail; \
    case MCD_OPC_ExtractField: { \
      unsigned Start = *++Ptr; \
      unsigned Len = *++Ptr; \
      ++Ptr; \
      CurFieldValue = fieldname(insn, Start, Len); \
      break; \
    } \
    case MCD_OPC_FilterValue: { \
      /* Decode the field value. */ \
      unsigned Len; \
      uint64_t Val = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Perform the filter operation. */ \
      if (Val != CurFieldValue) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_CheckField: { \
      unsigned Start = *++Ptr; \
      unsigned Len = *++Ptr; \
      uint64_t FieldValue = fieldname(insn, Start, Len); \
      /* Decode the field value. */ \
      unsigned PtrLen = 0; \
      uint64_t ExpectedValue = decodeULEB128(++Ptr, &PtrLen); \
      Ptr += PtrLen; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* If the actual and expected values don't match, skip. */ \
      if (ExpectedValue != FieldValue) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_CheckPredicate: { \
      unsigned Len; \
      /* Decode the Predicate Index value. */ \
      unsigned PIdx = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Check the predicate. */ \
      bool Pred = checkDecoderPredicate(MI, PIdx); \
      if (!Pred) \
        Ptr += NumToSkip; \
      break; \
    } \
    case MCD_OPC_Decode: { \
      unsigned Len; \
      /* Decode the Opcode value. */ \
      unsigned Opc = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      MCInst_clear(MI); \
      MCInst_setOpcode(MI, Opc); \
      bool DecodeComplete = false; \
      S = decoder(S, DecodeIdx, insn, MI, Address, Decoder, &DecodeComplete); \
      return S; \
    } \
    case MCD_OPC_TryDecode: { \
      unsigned Len; \
      /* Decode the Opcode value. */ \
      unsigned Opc = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      /* NumToSkip is a plain 24-bit integer. */ \
      unsigned NumToSkip = *Ptr++; \
      NumToSkip |= (*Ptr++) << 8; \
      NumToSkip |= (*Ptr++) << 16; \
      /* Perform the decode operation. */ \
      MCInst TmpMI = { 0 }; \
      TmpMI.MRI = MI->MRI; \
      TmpMI.csh = MI->csh; \
      MCInst_setOpcode(&TmpMI, Opc); \
      bool DecodeComplete = false; \
      S = decoder(S, DecodeIdx, insn, &TmpMI, Address, Decoder, &DecodeComplete); \
      if (DecodeComplete) { \
        /* Decoding complete. */ \
        MCInst_updateWithTmpMI(MI, &TmpMI); \
        return S; \
      } else { \
        /* If the decoding was incomplete, skip. */ \
        Ptr += NumToSkip; \
        /* Reset decode status. This also drops a SoftFail status that could be */ \
        /* set before the decode attempt. */ \
        S = MCDisassembler_Success; \
      } \
      break; \
    } \
    case MCD_OPC_SoftFail: { \
      /* Decode the mask values. */ \
      unsigned Len; \
      uint64_t PositiveMask = decodeULEB128(++Ptr, &Len); \
      Ptr += Len; \
      uint64_t NegativeMask = decodeULEB128(Ptr, &Len); \
      Ptr += Len; \
      bool Fail = (insn & PositiveMask) != 0 || (~insn & NegativeMask) != 0; \
      if (Fail) \
        S = MCDisassembler_SoftFail; \
      break; \
    } \
    case MCD_OPC_Fail: { \
      return MCDisassembler_Fail; \
    } \
    } \
  } \
  /* Bogisity detected in disassembler state machine! */ \
}

