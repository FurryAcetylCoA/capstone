/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2023 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

enum {
  LoongArch_NoRegister,
  LoongArch_F0 = 1,
  LoongArch_F1 = 2,
  LoongArch_F2 = 3,
  LoongArch_F3 = 4,
  LoongArch_F4 = 5,
  LoongArch_F5 = 6,
  LoongArch_F6 = 7,
  LoongArch_F7 = 8,
  LoongArch_F8 = 9,
  LoongArch_F9 = 10,
  LoongArch_F10 = 11,
  LoongArch_F11 = 12,
  LoongArch_F12 = 13,
  LoongArch_F13 = 14,
  LoongArch_F14 = 15,
  LoongArch_F15 = 16,
  LoongArch_F16 = 17,
  LoongArch_F17 = 18,
  LoongArch_F18 = 19,
  LoongArch_F19 = 20,
  LoongArch_F20 = 21,
  LoongArch_F21 = 22,
  LoongArch_F22 = 23,
  LoongArch_F23 = 24,
  LoongArch_F24 = 25,
  LoongArch_F25 = 26,
  LoongArch_F26 = 27,
  LoongArch_F27 = 28,
  LoongArch_F28 = 29,
  LoongArch_F29 = 30,
  LoongArch_F30 = 31,
  LoongArch_F31 = 32,
  LoongArch_FCC0 = 33,
  LoongArch_FCC1 = 34,
  LoongArch_FCC2 = 35,
  LoongArch_FCC3 = 36,
  LoongArch_FCC4 = 37,
  LoongArch_FCC5 = 38,
  LoongArch_FCC6 = 39,
  LoongArch_FCC7 = 40,
  LoongArch_FCSR0 = 41,
  LoongArch_FCSR1 = 42,
  LoongArch_FCSR2 = 43,
  LoongArch_FCSR3 = 44,
  LoongArch_R0 = 45,
  LoongArch_R1 = 46,
  LoongArch_R2 = 47,
  LoongArch_R3 = 48,
  LoongArch_R4 = 49,
  LoongArch_R5 = 50,
  LoongArch_R6 = 51,
  LoongArch_R7 = 52,
  LoongArch_R8 = 53,
  LoongArch_R9 = 54,
  LoongArch_R10 = 55,
  LoongArch_R11 = 56,
  LoongArch_R12 = 57,
  LoongArch_R13 = 58,
  LoongArch_R14 = 59,
  LoongArch_R15 = 60,
  LoongArch_R16 = 61,
  LoongArch_R17 = 62,
  LoongArch_R18 = 63,
  LoongArch_R19 = 64,
  LoongArch_R20 = 65,
  LoongArch_R21 = 66,
  LoongArch_R22 = 67,
  LoongArch_R23 = 68,
  LoongArch_R24 = 69,
  LoongArch_R25 = 70,
  LoongArch_R26 = 71,
  LoongArch_R27 = 72,
  LoongArch_R28 = 73,
  LoongArch_R29 = 74,
  LoongArch_R30 = 75,
  LoongArch_R31 = 76,
  LoongArch_F0_64 = 77,
  LoongArch_F1_64 = 78,
  LoongArch_F2_64 = 79,
  LoongArch_F3_64 = 80,
  LoongArch_F4_64 = 81,
  LoongArch_F5_64 = 82,
  LoongArch_F6_64 = 83,
  LoongArch_F7_64 = 84,
  LoongArch_F8_64 = 85,
  LoongArch_F9_64 = 86,
  LoongArch_F10_64 = 87,
  LoongArch_F11_64 = 88,
  LoongArch_F12_64 = 89,
  LoongArch_F13_64 = 90,
  LoongArch_F14_64 = 91,
  LoongArch_F15_64 = 92,
  LoongArch_F16_64 = 93,
  LoongArch_F17_64 = 94,
  LoongArch_F18_64 = 95,
  LoongArch_F19_64 = 96,
  LoongArch_F20_64 = 97,
  LoongArch_F21_64 = 98,
  LoongArch_F22_64 = 99,
  LoongArch_F23_64 = 100,
  LoongArch_F24_64 = 101,
  LoongArch_F25_64 = 102,
  LoongArch_F26_64 = 103,
  LoongArch_F27_64 = 104,
  LoongArch_F28_64 = 105,
  LoongArch_F29_64 = 106,
  LoongArch_F30_64 = 107,
  LoongArch_F31_64 = 108,
  NUM_TARGET_REGS // 109
};

// Register classes

enum {
  LoongArch_FPR32RegClassID = 0,
  LoongArch_GPRRegClassID = 1,
  LoongArch_GPRTRegClassID = 2,
  LoongArch_CFRRegClassID = 3,
  LoongArch_FCSRRegClassID = 4,
  LoongArch_FPR64RegClassID = 5,

};

// Register alternate name indices

enum {
  LoongArch_NoRegAltName,	// 0
  LoongArch_RegAliasName,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};

// Subregister indices

enum {
  LoongArch_NoSubRegister,
  LoongArch_sub_32,	// 1
  LoongArch_NUM_TARGET_SUBREGS
};
#endif // GET_REGINFO_ENUM

#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

static const MCPhysReg LoongArchRegDiffLists[] = {
  /* 0 */ 76, 0,
  /* 2 */ 65459, 0,
  /* 4 */ 65460, 0,
  /* 6 */ 65535, 0,
};

static const uint16_t LoongArchSubRegIdxLists[] = {
  /* 0 */ 1, 0,
};

static const MCRegisterDesc LoongArchRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 29, 1, 0, 1, 97, 0 },
  { 67, 1, 0, 1, 97, 0 },
  { 97, 1, 0, 1, 97, 0 },
  { 127, 1, 0, 1, 97, 0 },
  { 371, 1, 0, 1, 97, 0 },
  { 398, 1, 0, 1, 97, 0 },
  { 425, 1, 0, 1, 97, 0 },
  { 452, 1, 0, 1, 97, 0 },
  { 474, 1, 0, 1, 97, 0 },
  { 496, 1, 0, 1, 97, 0 },
  { 0, 1, 0, 1, 97, 0 },
  { 38, 1, 0, 1, 97, 0 },
  { 76, 1, 0, 1, 97, 0 },
  { 106, 1, 0, 1, 97, 0 },
  { 136, 1, 0, 1, 97, 0 },
  { 377, 1, 0, 1, 97, 0 },
  { 404, 1, 0, 1, 97, 0 },
  { 431, 1, 0, 1, 97, 0 },
  { 458, 1, 0, 1, 97, 0 },
  { 480, 1, 0, 1, 97, 0 },
  { 8, 1, 0, 1, 97, 0 },
  { 46, 1, 0, 1, 97, 0 },
  { 84, 1, 0, 1, 97, 0 },
  { 114, 1, 0, 1, 97, 0 },
  { 144, 1, 0, 1, 97, 0 },
  { 385, 1, 0, 1, 97, 0 },
  { 412, 1, 0, 1, 97, 0 },
  { 439, 1, 0, 1, 97, 0 },
  { 466, 1, 0, 1, 97, 0 },
  { 488, 1, 0, 1, 97, 0 },
  { 16, 1, 0, 1, 97, 0 },
  { 54, 1, 0, 1, 97, 0 },
  { 24, 1, 1, 1, 97, 0 },
  { 62, 1, 1, 1, 97, 0 },
  { 92, 1, 1, 1, 97, 0 },
  { 122, 1, 1, 1, 97, 0 },
  { 366, 1, 1, 1, 97, 0 },
  { 393, 1, 1, 1, 97, 0 },
  { 420, 1, 1, 1, 97, 0 },
  { 447, 1, 1, 1, 97, 0 },
  { 32, 1, 1, 1, 97, 0 },
  { 70, 1, 1, 1, 97, 0 },
  { 100, 1, 1, 1, 97, 0 },
  { 130, 1, 1, 1, 97, 0 },
  { 35, 1, 1, 1, 97, 0 },
  { 73, 1, 1, 1, 97, 0 },
  { 103, 1, 1, 1, 97, 0 },
  { 133, 1, 1, 1, 97, 0 },
  { 374, 1, 1, 1, 97, 0 },
  { 401, 1, 1, 1, 97, 0 },
  { 428, 1, 1, 1, 97, 0 },
  { 455, 1, 1, 1, 97, 0 },
  { 477, 1, 1, 1, 97, 0 },
  { 499, 1, 1, 1, 97, 0 },
  { 4, 1, 1, 1, 97, 0 },
  { 42, 1, 1, 1, 97, 0 },
  { 80, 1, 1, 1, 97, 0 },
  { 110, 1, 1, 1, 97, 0 },
  { 140, 1, 1, 1, 97, 0 },
  { 381, 1, 1, 1, 97, 0 },
  { 408, 1, 1, 1, 97, 0 },
  { 435, 1, 1, 1, 97, 0 },
  { 462, 1, 1, 1, 97, 0 },
  { 484, 1, 1, 1, 97, 0 },
  { 12, 1, 1, 1, 97, 0 },
  { 50, 1, 1, 1, 97, 0 },
  { 88, 1, 1, 1, 97, 0 },
  { 118, 1, 1, 1, 97, 0 },
  { 148, 1, 1, 1, 97, 0 },
  { 389, 1, 1, 1, 97, 0 },
  { 416, 1, 1, 1, 97, 0 },
  { 443, 1, 1, 1, 97, 0 },
  { 470, 1, 1, 1, 97, 0 },
  { 492, 1, 1, 1, 97, 0 },
  { 20, 1, 1, 1, 97, 0 },
  { 58, 1, 1, 1, 97, 0 },
  { 173, 4, 1, 0, 33, 2 },
  { 200, 4, 1, 0, 33, 2 },
  { 220, 4, 1, 0, 33, 2 },
  { 240, 4, 1, 0, 33, 2 },
  { 260, 4, 1, 0, 33, 2 },
  { 280, 4, 1, 0, 33, 2 },
  { 300, 4, 1, 0, 33, 2 },
  { 320, 4, 1, 0, 33, 2 },
  { 340, 4, 1, 0, 33, 2 },
  { 360, 4, 1, 0, 33, 2 },
  { 152, 4, 1, 0, 33, 2 },
  { 179, 4, 1, 0, 33, 2 },
  { 206, 4, 1, 0, 33, 2 },
  { 226, 4, 1, 0, 33, 2 },
  { 246, 4, 1, 0, 33, 2 },
  { 266, 4, 1, 0, 33, 2 },
  { 286, 4, 1, 0, 33, 2 },
  { 306, 4, 1, 0, 33, 2 },
  { 326, 4, 1, 0, 33, 2 },
  { 346, 4, 1, 0, 33, 2 },
  { 159, 4, 1, 0, 33, 2 },
  { 186, 4, 1, 0, 33, 2 },
  { 213, 4, 1, 0, 33, 2 },
  { 233, 4, 1, 0, 33, 2 },
  { 253, 4, 1, 0, 33, 2 },
  { 273, 4, 1, 0, 33, 2 },
  { 293, 4, 1, 0, 33, 2 },
  { 313, 4, 1, 0, 33, 2 },
  { 333, 4, 1, 0, 33, 2 },
  { 353, 4, 1, 0, 33, 2 },
  { 166, 4, 1, 0, 33, 2 },
  { 193, 4, 1, 0, 33, 2 },
};

  // FPR32 Register Class...
  static const MCPhysReg FPR32[] = {
    LoongArch_F0, LoongArch_F1, LoongArch_F2, LoongArch_F3, LoongArch_F4, LoongArch_F5, LoongArch_F6, LoongArch_F7, LoongArch_F8, LoongArch_F9, LoongArch_F10, LoongArch_F11, LoongArch_F12, LoongArch_F13, LoongArch_F14, LoongArch_F15, LoongArch_F16, LoongArch_F17, LoongArch_F18, LoongArch_F19, LoongArch_F20, LoongArch_F21, LoongArch_F22, LoongArch_F23, LoongArch_F24, LoongArch_F25, LoongArch_F26, LoongArch_F27, LoongArch_F28, LoongArch_F29, LoongArch_F30, LoongArch_F31, 
  };

  // FPR32 Bit set.
  static const uint8_t FPR32Bits[] = {
    0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPR Register Class...
  static const MCPhysReg GPR[] = {
    LoongArch_R4, LoongArch_R5, LoongArch_R6, LoongArch_R7, LoongArch_R8, LoongArch_R9, LoongArch_R10, LoongArch_R11, LoongArch_R12, LoongArch_R13, LoongArch_R14, LoongArch_R15, LoongArch_R16, LoongArch_R17, LoongArch_R18, LoongArch_R19, LoongArch_R20, LoongArch_R22, LoongArch_R23, LoongArch_R24, LoongArch_R25, LoongArch_R26, LoongArch_R27, LoongArch_R28, LoongArch_R29, LoongArch_R30, LoongArch_R31, LoongArch_R0, LoongArch_R1, LoongArch_R2, LoongArch_R3, LoongArch_R21, 
  };

  // GPR Bit set.
  static const uint8_t GPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // GPRT Register Class...
  static const MCPhysReg GPRT[] = {
    LoongArch_R4, LoongArch_R5, LoongArch_R6, LoongArch_R7, LoongArch_R8, LoongArch_R9, LoongArch_R10, LoongArch_R11, LoongArch_R12, LoongArch_R13, LoongArch_R14, LoongArch_R15, LoongArch_R16, LoongArch_R17, LoongArch_R18, LoongArch_R19, LoongArch_R20, 
  };

  // GPRT Bit set.
  static const uint8_t GPRTBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x03, 
  };

  // CFR Register Class...
  static const MCPhysReg CFR[] = {
    LoongArch_FCC0, LoongArch_FCC1, LoongArch_FCC2, LoongArch_FCC3, LoongArch_FCC4, LoongArch_FCC5, LoongArch_FCC6, LoongArch_FCC7, 
  };

  // CFR Bit set.
  static const uint8_t CFRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 
  };

  // FCSR Register Class...
  static const MCPhysReg FCSR[] = {
    LoongArch_FCSR0, LoongArch_FCSR1, LoongArch_FCSR2, LoongArch_FCSR3, 
  };

  // FCSR Bit set.
  static const uint8_t FCSRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  };

  // FPR64 Register Class...
  static const MCPhysReg FPR64[] = {
    LoongArch_F0_64, LoongArch_F1_64, LoongArch_F2_64, LoongArch_F3_64, LoongArch_F4_64, LoongArch_F5_64, LoongArch_F6_64, LoongArch_F7_64, LoongArch_F8_64, LoongArch_F9_64, LoongArch_F10_64, LoongArch_F11_64, LoongArch_F12_64, LoongArch_F13_64, LoongArch_F14_64, LoongArch_F15_64, LoongArch_F16_64, LoongArch_F17_64, LoongArch_F18_64, LoongArch_F19_64, LoongArch_F20_64, LoongArch_F21_64, LoongArch_F22_64, LoongArch_F23_64, LoongArch_F24_64, LoongArch_F25_64, LoongArch_F26_64, LoongArch_F27_64, LoongArch_F28_64, LoongArch_F29_64, LoongArch_F30_64, LoongArch_F31_64, 
  };

  // FPR64 Bit set.
  static const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

static const MCRegisterClass LoongArchMCRegisterClasses[] = {
  { FPR32, FPR32Bits, sizeof(FPR32Bits) },
  { GPR, GPRBits, sizeof(GPRBits) },
  { GPRT, GPRTBits, sizeof(GPRTBits) },
  { CFR, CFRBits, sizeof(CFRBits) },
  { FCSR, FCSRBits, sizeof(FCSRBits) },
  { FPR64, FPR64Bits, sizeof(FPR64Bits) },
};

static const uint16_t LoongArchRegEncodingTable[] = {
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
};
#endif // GET_REGINFO_MC_DESC



