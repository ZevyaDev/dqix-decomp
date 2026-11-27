#include <globaldefs.h>

#include "NitroSDK/Graphics.h"

// USA: GetOBJCharBoundaryShift_0209378c
extern "C" ARM int GetOBJCharBoundaryShift_0209378c(int isSubScreen) {
    unsigned int var0;
    if (isSubScreen == 0)
        var0 = DISPCNT & 0x00300010;
    else
        var0 = DISPCNTSUB & 0x00300010;

    int var1 = 0;
    switch (var0) {
        case 0x00000010: var1 = 5; break;
        case 0x00100010: var1 = 6; break;
        case 0x00200010: var1 = 7; break;
    }
    return var1;
}
