#include <globaldefs.h>

struct TextureImageVRAMState_0207dfc8 {
    unsigned int unknown_0_[10];
};

struct TexturePaletteVRAMState_0207dfc8_2 {
    unsigned int unknown_0_[2];
};

struct TextureVRAMArea_02015ef4_5 {
    struct TextureImageVRAMState_0207dfc8 unknown_0_;   // 0x00
    struct TextureImageVRAMState_0207dfc8 unknown_28_;   // 0x28
    unsigned int unknown_50_;         // 0x50
    unsigned int unknown_54_;         // 0x54
    struct TexturePaletteVRAMState_0207dfc8_2 unknown_58_; // 0x58
    struct TexturePaletteVRAMState_0207dfc8_2 unknown_60_; // 0x60
    unsigned int unknown_68_;         // 0x68
    unsigned int unknown_6c_;         // 0x6c
};

// USA: InitTextureVRAMAreaFromSaved_0207dfc8
extern "C" ARM void InitTextureVRAMAreaFromSaved_0207dfc8(struct TextureVRAMArea_02015ef4_5* sourceArea, struct TextureVRAMArea_02015ef4_5* area) {
    area->unknown_0_ = sourceArea->unknown_28_;
    area->unknown_28_ = sourceArea->unknown_28_;
    area->unknown_54_ = sourceArea->unknown_54_;
    area->unknown_50_ = sourceArea->unknown_50_;
    area->unknown_58_ = sourceArea->unknown_60_;
    area->unknown_60_ = sourceArea->unknown_60_;
    area->unknown_6c_ = sourceArea->unknown_6c_;
    area->unknown_68_ = sourceArea->unknown_68_;
}
