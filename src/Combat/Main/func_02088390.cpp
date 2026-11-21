#include <globaldefs.h>

// USA: ClearSleep_02088390
extern "C" ARM void ClearSleep_02088390(void* stats) {
    unsigned char* statsBytes = (unsigned char*)stats;
    *(int*)(statsBytes + 0x14) &= ~0x10;
    statsBytes[0x5d] = 0;
    statsBytes[0x80] = 0;
}
