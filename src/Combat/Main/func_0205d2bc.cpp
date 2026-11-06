#include <globaldefs.h>

struct Struct_0204b088_2 { unsigned char unknown_0_[0x20]; };

struct TextWindowManager_0205d2bc {
    char unknown_0_[0x98];
    struct Struct_0204b088_2* pBGLayers_98_;   // 0x98
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char bgLayerCount_b2_;           // 0xb2
};

extern "C" void CopyBGScreenDataToVRAM_0204b088(struct Struct_0204b088_2*, int);

// USA: func_0205d2bc
extern "C" ARM void func_0205d2bc(struct TextWindowManager_0205d2bc* arg0) {
    unsigned char var0;
    if (arg0->pBGLayers_98_ == 0) return;
    for (var0 = 0; var0 < arg0->bgLayerCount_b2_; var0++) {
        CopyBGScreenDataToVRAM_0204b088(&arg0->pBGLayers_98_[var0], 0);
    }
}
