#include <globaldefs.h>

// USA: ClearCharmBuff_02087b14
extern "C" ARM void ClearCharmBuff_02087b14(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x2000;
    *(int*)(statsBytes + 0x58) &= ~0xe00;
    statsBytes[0x71] = 0;
    statsBytes[0x94] = 0;
}
