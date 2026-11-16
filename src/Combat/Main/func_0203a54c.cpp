#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

struct Struct_0203a54c {
    struct Struct_02012fa4 unknown_0_[5];
    struct Struct_02012fa4 unknown_2a8_[5];
};


// USA: func_0203a54c
extern "C" ARM void func_0203a54c(struct Struct_0203a54c* arg0) {
    int var0;
    for (var0 = 0; var0 < 5; var0++) {
        ((SPRSprite*)(&arg0->unknown_0_[var0]))->Release();
        ((SPRSprite*)(&arg0->unknown_2a8_[var0]))->Release();
    }
}
