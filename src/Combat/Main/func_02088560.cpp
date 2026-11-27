#include <globaldefs.h>

// USA: SetEnvenomated_02088560
extern "C" ARM void SetEnvenomated_02088560(unsigned char* stats) {
    *(int*)(stats + 0x14) &= ~0x2;
    *(unsigned short*)(stats + 0x22) &= ~0x3;
    *(int*)(stats + 0x14) |= 0x2;
    *(unsigned short*)(stats + 0x22) = (*(unsigned short*)(stats + 0x22) & ~0x3) | 0x2;
}
