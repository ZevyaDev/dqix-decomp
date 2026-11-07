#include <globaldefs.h>
#include "Graphics/VRAMStaging.h"
#include "Resource/GameResources.h"

struct TextureImageVRAMState_0207df50 {
    unsigned int unknown_0_[10];
};

struct TexturePaletteVRAMState_0207df50_2 {
    unsigned int unknown_0_[2];
};

struct TextureVRAMArea_0203d028 {
    struct TextureImageVRAMState_0207df50 unknown_0_;
    struct TextureImageVRAMState_0207df50 savedImageState_28_;
    unsigned int unknown_50_;
    unsigned int unknown_54_;
    struct TexturePaletteVRAMState_0207df50_2 basePaletteState_58_;
    struct TexturePaletteVRAMState_0207df50_2 savedPaletteState_60_;
    unsigned int unknown_68_;
    unsigned int unknown_6c_;
};

struct Struct_ov000_02161e30_6 {
#if defined(jpn)
    char unknown_0_[0x27c];
#else
    char unknown1_0_[0x2cc];
#endif
    struct TextureVRAMArea_0203d028 unknown_2cc_[28];
};

struct Struct_ov000_02164280 {
#if defined(jpn)
    char unknown_0_[0x138];
#else
    char unknown1_0_[0x14c];
#endif
    struct TextureVRAMArea_0203d028 unknown_14c_;
#if defined(jpn)
    char unknown_1a8_[0x36ac - 0x1a8];
#else
    char unknown_1bc_[0x36f0 - 0x1bc];
#endif
    char unknown_36f0_[0x800];
};

extern "C" char* GetOAMManager_0203bd08(void);
extern "C" int* GetSpriteTextManager_0203bd14();
extern "C" void MapVRAMBanksToTextureImage(int handle);
extern "C" void InitTextureImageVRAMAllocator_020bb48c(unsigned int bankCount, int install);
extern "C" void MapVRAMBanksToSubObj(int value);
extern "C" void MapVRAMBanksToSubBG(int value);
extern "C" void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028* area);
extern "C" void ResetOAMManager_0203bd24(char* oamManager);
extern "C" void func_0203c35c(int* arg0);
extern "C" void func_ov017_02195540(unsigned char* arg0);
extern "C" void RestoreTextureVRAMState_0207df90(char* area);
extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern "C" void SaveTextureVRAMState_0207dfac(char* area);

// USA: func_ov000_02164280
extern "C" ARM void func_ov000_02164280(Struct_ov000_02164280* arg0) {
    Struct_ov000_02161e30_6* var0 = (Struct_ov000_02161e30_6*)GetGameResources();
    char* var1 = GetOAMManager_0203bd08();
    int* var2 = GetSpriteTextManager_0203bd14();
    LockStagedTextureVRAMCopying();
    MapVRAMBanksToTextureImage(7);
    InitTextureImageVRAMAllocator_020bb48c(3, 1);
    MapVRAMBanksToSubObj(8);
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & 0xffcfffef) | 0x10 | 0x200000;
    MapVRAMBanksToSubBG(0x180);

    arg0->unknown_14c_.unknown_0_ = var0->unknown_2cc_[27].unknown_0_;
    arg0->unknown_14c_.savedImageState_28_ = var0->unknown_2cc_[27].savedImageState_28_;
    arg0->unknown_14c_.unknown_50_ = var0->unknown_2cc_[27].unknown_50_;
    arg0->unknown_14c_.unknown_54_ = var0->unknown_2cc_[27].unknown_54_;
    arg0->unknown_14c_.basePaletteState_58_ = var0->unknown_2cc_[27].basePaletteState_58_;
    arg0->unknown_14c_.savedPaletteState_60_ = var0->unknown_2cc_[27].savedPaletteState_60_;
    arg0->unknown_14c_.unknown_68_ = var0->unknown_2cc_[27].unknown_68_;
    arg0->unknown_14c_.unknown_6c_ = var0->unknown_2cc_[27].unknown_6c_;
    ResetTextureVRAMState_0207df50(&arg0->unknown_14c_);

    ResetOAMManager_0203bd24(var1);
    func_0203c35c(var2);
    func_ov017_02195540((unsigned char*)var0);
    ResetTextureVRAMState_0207df50(var0->unknown_2cc_);
    RestoreTextureVRAMState_0207df90((char*)var0->unknown_2cc_);
    InitTextureVRAMArea_0207de48(arg0->unknown_36f0_, 0x18000, 0x800);
    SaveTextureVRAMState_0207dfac((char*)var0->unknown_2cc_);
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
}
