#include <globaldefs.h>

// USA: ClearTension_02088234
extern "C" ARM void ClearTension_02088234(void* stats) {
    unsigned char* var0 = (unsigned char*)stats;
    *(int*)(var0 + 0x14) &= ~0x800000;
    var0[0x24] = 0;
}
