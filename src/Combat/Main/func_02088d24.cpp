#include <globaldefs.h>

extern "C" void ClearHolyImpregnable_02088cf4(unsigned char* stats);

// USA: SetEerieLight_02088d24
extern "C" ARM void SetEerieLight_02088d24(unsigned char* stats) {
    stats[0x7b] = 5;
    stats[0x9e] = 0;
    *(int*)(stats + 0x18) |= 0x10;
    ClearHolyImpregnable_02088cf4(stats);
}
