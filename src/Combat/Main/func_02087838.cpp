#include <globaldefs.h>

// USA: ClearAttackBuff_02087838
extern "C" ARM void ClearAttackBuff_02087838(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x400;
    *(int*)(statsBytes + 0x58) &= ~0x7;
    statsBytes[0x6e] = 0;
    statsBytes[0x91] = 0;
}
