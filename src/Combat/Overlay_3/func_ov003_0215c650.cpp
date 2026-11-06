#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "NitroSDK/Graphics.h"
#include "Combat/MapDisplay.h"

struct BGControlSave_02074af4 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    unsigned short unknown_4_;
    char unknown_6_[2];
    unsigned short unknown_8_;
    char unknown_a_[2];
    unsigned short unknown_c_;
    char unknown_e_[2];
    unsigned char isMainSaved_10_;
    unsigned char unknown_11_;
};

struct StringTable_0201099c_14 {
    char unknown_0_[0x18];
};

struct TextWindowManager_0205cfd4 {
    char unknown_0_[0xbc];
};

struct Struct_02000c9c_83 {
    char unknown_0_[0xe0];
};

struct Struct_ov003_0215c650 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    SafeAllocator unknown_50_;
    struct StringTable_0201099c_14 unknown_64_;
#if defined(jpn)
    struct StringTable_0201099c_14 unknown_7c_;
#endif
    void* unknown1_7c_;
    struct BGControlSave_02074af4 unknown_80_;
    int unknown_94_;
    struct TextWindowManager_0205cfd4 unknown_98_;
    struct BGLayer_02020cb8 unknown_154_[2];
    struct Struct_02000c9c_83 unknown_194_[2];
    int unknown_354_;
    char unknown_358_[0x3ac - 0x358];
    int unknown_3ac_;
    int unknown_3b0_;
    int unknown_3b4_;
    unsigned char unknown_3b8_;
    unsigned char unknown_3b9_;
    unsigned char unknown_3ba_;
    unsigned char unknown_3bb_;
    unsigned char unknown_3bc_;
    unsigned char unknown_3bd_[3];
    unsigned char unknown_3c0_;
    signed char unknown_3c1_;
    unsigned char unknown_3c2_;
    unsigned char unknown_3c3_;
    unsigned char unknown_3c4_[4];
    int unknown_3c8_;
    int unknown_3cc_;
    int unknown_3d0_;
    float unknown_3d4_;
    float unknown_3d8_;
    float unknown_3dc_;
    float unknown_3e0_;
    float unknown_3e4_;
    int unknown_3e8_;
    unsigned char unknown_3ec_;
    unsigned char unknown_3ed_;
    unsigned char unknown_3ee_;
    unsigned char unknown_3ef_;
    unsigned char unknown_3f0_;
    unsigned char unknown_3f1_;
    unsigned char unknown_3f2_;
    unsigned char unknown_3f3_;
    unsigned char unknown_3f4_;
    unsigned char unknown_3f5_;
    int unknown_3f8_;
};

extern "C" void SaveMainBGControl_02074af4(struct BGControlSave_02074af4* save);
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager);
extern "C" void InitBGLayer_0204af64(struct BGLayer_02020cb8* layer);
extern "C" void InitTextWindow_0204c684(struct Struct_02000c9c_83* textWindow);
extern "C" void InitSpriteSet_0205a444(char* spriteSet);

// USA: func_ov003_0215c650
extern "C" ARM void func_ov003_0215c650(struct Struct_ov003_0215c650* arg0) {
    arg0->unknown_80_.isMainSaved_10_ = 0;
    arg0->unknown_80_.unknown_11_ = 0;
    SaveMainBGControl_02074af4(&arg0->unknown_80_);
    arg0->unknown_94_ = (DISPCNT & 0x1f00) >> 8;
    DISPCNT = (DISPCNT & ~0x1f00) | 0x100;

    arg0->unknown_0_.ResetAllocatorPointer();
    arg0->unknown_28_.ResetAllocatorPointer();
    arg0->unknown_3c_.ResetAllocatorPointer();
    arg0->unknown_50_.ResetAllocatorPointer();
    InitStringTable_020dfc40(&arg0->unknown_64_);
#if defined(jpn)
    InitStringTable_020dfc40(&arg0->unknown_7c_);
#endif
    arg0->unknown1_7c_ = 0;
    InitTextWindowManager_0205cfd4(&arg0->unknown_98_);

    for (int var0 = 0; var0 < 2; var0++) {
        InitBGLayer_0204af64(&arg0->unknown_154_[var0]);
    }
    for (int var1 = 0; var1 < 2; var1++) {
        InitTextWindow_0204c684(&arg0->unknown_194_[var1]);
    }

    arg0->unknown_354_ = 0;
    InitSpriteSet_0205a444(arg0->unknown_358_);
    arg0->unknown_3ac_ = 0;
    arg0->unknown_3b0_ = 0;
    arg0->unknown_3b4_ = 0;
    arg0->unknown_3b8_ = 0;
    arg0->unknown_3b9_ = 0;
    arg0->unknown_3bc_ = 0;
    arg0->unknown_3ba_ = 0;
    arg0->unknown_3bb_ = 0;
    for (int var2 = 0; var2 < 3; var2++) {
        arg0->unknown_3bd_[var2] = 0xff;
    }
    arg0->unknown_3c0_ = 0;
    arg0->unknown_3c1_ = -1;
    arg0->unknown_3c2_ = 0;
    arg0->unknown_3c3_ = 0;
    for (int var3 = 0; var3 < 4; var3++) {
        arg0->unknown_3c4_[var3] = 0xff;
    }
    arg0->unknown_3c8_ = -1;
    arg0->unknown_3cc_ = -1;
    GetDayThresholds(&arg0->unknown_3d4_, &arg0->unknown_3d8_, &arg0->unknown_3dc_,
                     &arg0->unknown_3e0_, &arg0->unknown_3e4_);
    arg0->unknown_3d0_ = GameState::GetInstance()->IsMorningDayOrEvening();
    arg0->unknown_3ec_ = 0;
    arg0->unknown_3ed_ = 0;
    arg0->unknown_3ee_ = 0;
    arg0->unknown_3ef_ = 1;
    arg0->unknown_3f0_ = 0;
    arg0->unknown_3f1_ = 0;
    arg0->unknown_3f2_ = 0;
    arg0->unknown_3f3_ = 0;
    arg0->unknown_3f8_ = 0;
    arg0->unknown_3f4_ = 0;
    arg0->unknown_3f5_ = 0;
    arg0->unknown_3e8_ = 0;
}
