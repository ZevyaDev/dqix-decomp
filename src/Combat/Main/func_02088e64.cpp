#include <globaldefs.h>

// USA: ClearRage_02088e64
extern "C" ARM void ClearRage_02088e64(unsigned char* stats) {
    *(int*)(stats + 0x18) &= ~0x1000;
    stats[0x7e] = 0;
    stats[0xa1] = 0;
}
