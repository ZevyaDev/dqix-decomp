#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

struct Struct_02012fa4;

struct Struct_020966a0 {
    unsigned char unknown_0_[0x88];
};

// USA: func_020966a0
extern "C" ARM void func_020966a0(struct Struct_020966a0* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        ((SPRSprite*)((struct Struct_02012fa4*)&arg0[var0]))->Release();
    }
}
