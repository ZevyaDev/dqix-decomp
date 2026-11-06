#include <globaldefs.h>

struct TextureVRAMArea_0203d028;

extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern "C" void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028* area);

struct Struct_ov005_02155d6c {
    char unknown_0_[0x70];
};

struct Struct_ov005_02153954 {
    char unknown_0_[0x294];
    Struct_ov005_02155d6c unknown_294_;
    Struct_ov005_02155d6c unknown_304_[24];
    Struct_ov005_02155d6c unknown_d84_;
};

// USA: func_ov005_02153b20
extern "C" ARM void func_ov005_02153b20(Struct_ov005_02153954* arg0) {
    for (int var0 = 0; var0 < 24; var0++) {
        InitTextureVRAMArea_0207de48(&arg0->unknown_304_[var0], 0x120, 0x20);
        ResetTextureVRAMState_0207df50((struct TextureVRAMArea_0203d028*)&arg0->unknown_304_[var0]);
    }
    InitTextureVRAMArea_0207de48(&arg0->unknown_d84_, 0x120, 0x20);
    ResetTextureVRAMState_0207df50((struct TextureVRAMArea_0203d028*)&arg0->unknown_d84_);
    InitTextureVRAMArea_0207de48(&arg0->unknown_294_, 0x3000, 0x400);
    ResetTextureVRAMState_0207df50((struct TextureVRAMArea_0203d028*)&arg0->unknown_294_);
}
