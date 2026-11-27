#include <globaldefs.h>

extern "C" void ClearEerieLight_02088d4c(unsigned char* stats);

// USA: SetHolyImpregnable_02088ccc
extern "C" ARM void SetHolyImpregnable_02088ccc(unsigned char* stats) {
    stats[0x6b] = 5;
    stats[0x8e] = 0;
    *(int*)(stats + 0x18) |= 0x8;
    ClearEerieLight_02088d4c(stats);
}
