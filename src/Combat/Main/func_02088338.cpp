#include <globaldefs.h>

// USA: SetSleep_02088338
extern "C" ARM void SetSleep_02088338(unsigned char* stats) {
    *(int*)(stats + 0x14) &= ~0x800000;
    stats[0x24] = 0;
    *(int*)(stats + 0x14) &= ~0x80000;
    *(unsigned short*)(stats + 0x22) &= ~0x3c;
    stats[0x21] = 0;
    *(int*)(stats + 0x18) &= ~0x20;
    stats[0x5d] = 1;
    stats[0x80] = 0;
    *(int*)(stats + 0x14) |= 0x10;
}
