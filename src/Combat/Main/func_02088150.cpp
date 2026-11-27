#include <globaldefs.h>

// USA: SetSuperHighTension_02088150
extern "C" ARM void SetSuperHighTension_02088150(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x800000;
    statsBytes[0x24] = 0;
    *(int*)(statsBytes + 0x14) &= ~0x2;
    *(unsigned short*)(statsBytes + 0x22) &= ~0x3;
    *(int*)(statsBytes + 0x14) &= ~0x2;
    *(unsigned short*)(statsBytes + 0x22) &= ~0x3;
    *(int*)(statsBytes + 0x14) |= 0x1000000;
    statsBytes[0x24] = 4;
}
