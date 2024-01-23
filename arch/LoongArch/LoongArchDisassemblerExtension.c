/* Capstone Disassembly Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2019 */
/*    Rot127 <unisono@quyllur.org>, 2022-2023 */
/*    Jiajie Chen <c@jia.je>, 2024 */

#include "LoongArchDisassemblerExtension.h"

bool LoongArch_getFeatureBits(unsigned int mode, unsigned int feature)
{
	// we support everything
	return true;
}