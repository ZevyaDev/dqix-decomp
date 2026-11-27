#include <globaldefs.h>

// USA: SetConfusion_020883cc
extern "C" ARM void SetConfusion_020883cc(unsigned char* stats) {
    stats[0x21] = 0;
    *(int*)(stats + 0x18) &= ~0x20;
    stats[0x5e] = 3;
    stats[0x81] = 0;
    *(int*)(stats + 0x14) |= 0x20;
}
