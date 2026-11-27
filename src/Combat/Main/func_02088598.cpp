#include <globaldefs.h>

// USA: ClearEnvenomation_02088598
extern "C" ARM void ClearEnvenomation_02088598(unsigned char* stats) {
    *(int*)(stats + 0x14) &= ~0x2;
    *(unsigned short*)(stats + 0x22) &= ~0x3;
}
