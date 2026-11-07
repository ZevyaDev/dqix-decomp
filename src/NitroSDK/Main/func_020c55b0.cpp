#include <globaldefs.h>
#include "NitroSDK/DMA.h"


extern "C" void Memset32BitByWord_020ca3ec(int arg0, void* arg1, int arg2);
extern int gGraphicsDMAChannel_020f2270;

// USA: func_020c55b0
extern "C" ARM void func_020c55b0() {
    if (gGraphicsDMAChannel_020f2270 != -1) {
        DMAMemsetAsync(gGraphicsDMAChannel_020f2270, 0x4000330, 0, 0x10, NULL, 0);
        DMAMemsetSynchronous(gGraphicsDMAChannel_020f2270, 0x4000360, 0, 0x60);
    } else {
        Memset32BitByWord_020ca3ec(0, (void*)0x4000330, 0x10);
        Memset32BitByWord_020ca3ec(0, (void*)0x4000360, 0x60);
    }
    int var0 = 0;
    do {
        var0++;
        *(volatile unsigned int*)0x40004d0 = 0;
    } while (var0 < 0x20);
}
