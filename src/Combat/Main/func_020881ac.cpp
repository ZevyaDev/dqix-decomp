#include <globaldefs.h>

// USA: ClearSuperHighTension_020881ac
extern "C" ARM void ClearSuperHighTension_020881ac(void* stats) {
    unsigned char* var0 = (unsigned char*)stats;
    *(int*)(var0 + 0x14) &= ~0x1000000;
    var0[0x24] = 0;
}
