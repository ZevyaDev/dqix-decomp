#include <globaldefs.h>

extern "C" void ClearFireBarrier_02088c38(unsigned char* stats);

// USA: SetIceBarrier_02088c74
extern "C" ARM void SetIceBarrier_02088c74(unsigned char* stats) {
    stats[0x6d] = 5;
    stats[0x90] = 0;
    *(int*)(stats + 0x18) |= 0x4;
    ClearFireBarrier_02088c38(stats);
}
