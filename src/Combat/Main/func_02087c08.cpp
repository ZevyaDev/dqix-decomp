#include <globaldefs.h>

// USA: ClearMagicalMightBuff_02087c08
extern "C" ARM void ClearMagicalMightBuff_02087c08(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x4000;
    *(int*)(statsBytes + 0x58) &= ~0x7000;
    statsBytes[0x72] = 0;
    statsBytes[0x95] = 0;
}
