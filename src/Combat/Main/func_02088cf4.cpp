#include <globaldefs.h>

// USA: ClearHolyImpregnable_02088cf4
extern "C" ARM void ClearHolyImpregnable_02088cf4(unsigned char* stats) {
    *(int*)(stats + 0x18) &= ~0x8;
    stats[0x6b] = 0;
    stats[0x8e] = 0;
}
