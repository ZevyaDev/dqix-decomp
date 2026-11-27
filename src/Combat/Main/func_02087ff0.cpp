#include <globaldefs.h>

// USA: ClearEvasionBuff_02087ff0
extern "C" ARM void ClearEvasionBuff_02087ff0(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x2000000;
    *(int*)(statsBytes + 0x58) &= ~0x38000000;
    statsBytes[0x77] = 0;
    statsBytes[0x9a] = 0;
}
