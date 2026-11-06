#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int GetResources_0200fb8c(int* gameState);

struct TextureImageVRAMState_0207df50 { unsigned int unknown_0_[10]; };
struct TexturePaletteVRAMState_0207df50_2 { unsigned int unknown_0_[2]; };
struct TextureVRAMArea_0203d028 {
    struct TextureImageVRAMState_0207df50 unknown_0_;
    struct TextureImageVRAMState_0207df50 savedImageState_28_;
    unsigned int unknown_50_;
    unsigned int unknown_54_;
    struct TexturePaletteVRAMState_0207df50_2 basePaletteState_58_;
    struct TexturePaletteVRAMState_0207df50_2 savedPaletteState_60_;
};
extern "C" void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028* area);
extern "C" void RestoreTextureVRAMState_0207df90(char* area);

// USA: func_ov001_0215eab0
extern "C" ARM int func_ov001_0215eab0(void* arg0, int arg1) {
#if defined(jpn)
 enum { Enum_ov001_0215eab0_716 = 0x27c };
#else
 enum { Enum_ov001_0215eab0_716 = 0x2cc };
#endif
    GameState* var0 = GameState::GetInstance();
    if (var0 == NULL) {
        return 0;
    }
    int var1 = GetResources_0200fb8c((int*)var0);
    if (var1 == 0) {
        return 0;
    }
    int var2 = func_ov017_021d60f4(arg0);
    int var3;
    if (var2 < 0) {
        var3 = var1 + Enum_ov001_0215eab0_716;
        var3 = var3 + 0xbd0;
    } else {
        var3 = var1 + Enum_ov001_0215eab0_716 + var2 * 0x70;
    }
    if (var3 == 0) {
        return 0;
    }
    int var4 = 1;
    if (arg1 >= 2) {
        var4 = func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    if (var4 != 0) {
        ResetTextureVRAMState_0207df50((struct TextureVRAMArea_0203d028*)var3);
    }
    RestoreTextureVRAMState_0207df90((char*)var3);
    return 1;
}
