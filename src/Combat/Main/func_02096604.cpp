#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "std_library_functions.h"
#include "Graphics/SPRSprite.h"

struct Struct_02012fa4;

extern char data_020f14d0[];

// USA: func_02096604
extern "C" ARM void func_02096604(char* arg0, int arg1) {
    int var0;
    char var1[0x40];
    for (var0 = 0; var0 < 4; var0++) {
        sprintf(var1, data_020f14d0, var0);
        ((SPRSprite*)((struct Struct_02012fa4*)(arg0 + var0 * 0x88)))->Reset();
        ((SPRSprite*)((struct Struct_02012fa4*)(arg0 + var0 * 0x88)))->LoadAnimationFromFile((const char*)(var1), (SafeAllocator*)(arg1));
    }
    *(unsigned char*)(arg0 + 0x220) = 0;
    *(unsigned char*)(arg0 + 0x221) = 0;
    *(unsigned char*)(arg0 + 0x222) = 0;
    *(unsigned char*)(arg0 + 0x223) = 0;
    *(unsigned char*)(arg0 + 0x224) = 0;
    *(unsigned char*)(arg0 + 0x225) = 0;
    *(unsigned short*)(arg0 + 0x228) = 0;
    *(unsigned short*)(arg0 + 0x22a) = 0;
    *(unsigned short*)(arg0 + 0x22c) = 0;
    *(unsigned char*)(arg0 + 0x230) = 0;
    *(unsigned char*)(arg0 + 0x226) = 0;
}
