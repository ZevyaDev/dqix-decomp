#include <globaldefs.h>

extern unsigned short data_020f226c;
extern unsigned short data_02111220;

// USA: TurnOnMainDisplay_020c38d4
extern "C" ARM void TurnOnMainDisplay_020c38d4(void) {
    volatile unsigned int* dISPCNT = (volatile unsigned int*)0x4000000;
    data_020f226c = 1;
    unsigned short displayMode = data_02111220;
    if (displayMode != 0) {
        *dISPCNT = (*dISPCNT & ~0x30000) | ((unsigned int)displayMode << 16);
        return;
    }
    *dISPCNT |= 0x10000;
}
