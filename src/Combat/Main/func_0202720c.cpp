#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" int* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void DrawMetatileAt_0202756c(void* subScreenDisplay, int positionX, int positionY, int metatileIndex,
        unsigned char destinationObjIndex, unsigned char priority, unsigned short palette, unsigned char rotScaleDataIndex, int scaleX, int scaleY);

// USA: func_0202720c
extern "C" ARM void func_0202720c(void* arg0) {
    int var0 = 5;
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1300;
    if (IsLocalWirelessOn_0202b7d8(func_0202ae18()) != 0) var0 += 0x10;
    DrawMetatileAt_0202756c(arg0, var0 << 12, 0x5000, 0x17, 0x40, 1, 0xff, 0xff, 0x1000, 0x1000);
}
