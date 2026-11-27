#include <globaldefs.h>

// USA: ClearEerieLight_02088d4c
extern "C" ARM void ClearEerieLight_02088d4c(unsigned char* stats) {
    *(int*)(stats + 0x18) &= ~0x10;
    stats[0x7b] = 0;
    stats[0x9e] = 0;
}
