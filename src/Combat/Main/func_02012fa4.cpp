#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

struct Struct_02012fa4;

// USA: func_02012fa4
extern "C" ARM void func_02012fa4(char* arg0) {
    signed char var0;
    for (var0 = 0; var0 < 4; var0++) {
        ((SPRSprite*)((struct Struct_02012fa4*)(arg0 + var0 * 0x88)))->Release();
        ((SPRSprite*)((struct Struct_02012fa4*)(arg0 + var0 * 0x88)))->Reset();
    }
}
