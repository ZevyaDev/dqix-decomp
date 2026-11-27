#include <globaldefs.h>

// USA: ClearMagicalMendingBuff_02087cfc
extern "C" ARM void ClearMagicalMendingBuff_02087cfc(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x8000;
    *(int*)(statsBytes + 0x58) &= ~0x38000;
    statsBytes[0x73] = 0;
    statsBytes[0x96] = 0;
}
