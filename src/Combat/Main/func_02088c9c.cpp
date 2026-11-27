#include <globaldefs.h>

// USA: ClearIceBarrier_02088c9c
extern "C" ARM void ClearIceBarrier_02088c9c(unsigned char* stats) {
    ((int*)stats)[6] &= ~0x4;
    stats[0x6d] = 0;
    stats[0x90] = 0;
}
