#include <globaldefs.h>
struct TextureImageVRAMState_0207df50 { unsigned int unknown_0_[10]; };
struct TexturePaletteVRAMState_0207df50_2 { unsigned int unknown_0_[2]; };
struct TextureVRAMArea_0203d028 {
    struct TextureImageVRAMState_0207df50 unknown_0_;   // 0x00
    struct TextureImageVRAMState_0207df50 savedImageState_28_;   // 0x28
    unsigned int unknown_50_;           // 0x50
    unsigned int unknown_54_;           // 0x54
    struct TexturePaletteVRAMState_0207df50_2 basePaletteState_58_;   // 0x58
    struct TexturePaletteVRAMState_0207df50_2 savedPaletteState_60_;   // 0x60
};
// USA: ResetTextureVRAMState_0207df50
extern "C" ARM void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028 *area) {
    area->savedImageState_28_ = area->unknown_0_;
    area->savedPaletteState_60_ = area->basePaletteState_58_;
}
