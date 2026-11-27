#include <globaldefs.h>

extern "C" void ClearIceBarrier_02088c9c(unsigned char* stats);

// USA: SetFireBarrier_02088c10
extern "C" ARM void SetFireBarrier_02088c10(unsigned char* stats) {
    stats[0x6c] = 5;
    stats[0x8f] = 0;
    *(int*)(stats + 0x18) |= 0x2;
    ClearIceBarrier_02088c9c(stats);
}
