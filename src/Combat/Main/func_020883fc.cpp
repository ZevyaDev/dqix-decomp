#include <globaldefs.h>

// USA: ClearConfusion_020883fc
extern "C" ARM void ClearConfusion_020883fc(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x20;
    statsBytes[0x5e] = 0;
    statsBytes[0x81] = 0;
}
