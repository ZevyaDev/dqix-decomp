#include <globaldefs.h>

// USA: ClearFireBarrier_02088c38
extern "C" ARM void ClearFireBarrier_02088c38(unsigned char* stats) {
    ((int*)stats)[6] &= ~0x2;
    stats[0x6c] = 0;
    stats[0x8f] = 0;
}
