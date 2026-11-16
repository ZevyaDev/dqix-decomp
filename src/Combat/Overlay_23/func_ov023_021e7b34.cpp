#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "Graphics/BGLayer.h"

struct Struct_ov023_021e7b34_2 {
    char unknown_0_[0x5dc];
    int unknown_5dc_;
};

struct BGLayer_0204af14;

struct Struct_0204ae44;


struct Struct_ov023_021e7b34 {
    char unknown_0_[8];
    int unknown_8_;
    void* unknown_c_;
};

// USA: func_ov023_021e7b34
extern "C" ARM int func_ov023_021e7b34(Struct_ov023_021e7b34_2* arg0, int arg1) {
    if (arg0->unknown_5dc_ == 0) return 1;
    int var0 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (!var0) return 1;
    BGLayer_0204af14* var1 = (BGLayer_0204af14*)((char*)arg0 + 0x154);
    void* var2 = ((void*)((BGLayer*)(var1))->GetSprite(0));
    if (var2 == NULL) return 1;
    ((BGLayer::Sprite*)((Struct_0204ae44*)var2))->SwitchPalette((unsigned short)(arg1 + 0xc));
    Struct_ov023_021e7b34* var3 = (Struct_ov023_021e7b34*)var2;
    void* var4 = var3->unknown_c_;
    int var5 = var3->unknown_8_;
    CleanInvalidateCacheRange((const void*)(var4), var5);
    LoadToSubBG1ScreenData((const void*)((int)var4), 0, var5);
    return 0;
}
