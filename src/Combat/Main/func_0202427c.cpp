#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" void *GetZone3D_02012fe4(void);
extern "C" int func_0201b588(int arg0);
extern "C" int func_020d2ff0(const char *string);
extern "C" void DrawMetatileAt_0202756c(void *subScreenDisplay, int positionX, int positionY, int metatileIndex, unsigned char destinationObjIndex, unsigned char priority,
                              unsigned short palette, unsigned char rotScaleDataIndex, int scaleX, int scaleY);

static inline int inline_0202427c(int arg0) {
    return arg0 << 12;
}

// USA: func_0202427c
extern "C" ARM void func_0202427c(void *arg0) {
    unsigned char *var0 = static_cast<unsigned char *>(arg0);
    Zone3D *var1 = static_cast<Zone3D *>(GetZone3D_02012fe4());
    unsigned short var2 = var1->currentZoneID_;
    if (!var0[0x5a8] || func_0201b588(var2) || var2 == 10000 || var2 == 10100) {
        return;
    }

    int var3 = 256;
#if defined(jpn)
    int var4 = 10 * (func_020d2ff0(var1->substruct_c_.jpbuffer) / 2);
    int var5 = var4 / 8 + 1;
    *reinterpret_cast<unsigned short *>(var0 + 0x4d0) = var5;
    int var6 = var5 * 8;
#else
    int var6 = (*reinterpret_cast<int *>(var0 + 0xbe4) + 7) & ~7;
    if (var6 > 144) {
        var6 = 144;
    }
    *reinterpret_cast<unsigned short *>(var0 + 0x4d0) = static_cast<unsigned short>(var6) >> 3;
#endif

    var3 -= 8;
    DrawMetatileAt_0202756c(arg0, inline_0202427c(var3), 0, 26, 0x53, 0, 8, 0xff, 4096, 4096);
    var3 -= var6;
    DrawMetatileAt_0202756c(arg0, inline_0202427c(var3), 0, 25, 0x41, 0, 8, 0xff, 4096, 4096);
    DrawMetatileAt_0202756c(arg0, inline_0202427c(var3 - 8), 0, 24, 0x40, 0, 8, 0xff, 4096, 4096);
}
