#include <globaldefs.h>

// USA: ClearAgilityBuff_02087a20
extern "C" ARM void ClearAgilityBuff_02087a20(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x1000;
    *(int*)(statsBytes + 0x58) &= ~0x1c0;
    statsBytes[0x70] = 0;
    statsBytes[0x93] = 0;
}
