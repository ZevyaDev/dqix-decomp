#pragma ipa file

#if defined(jpn)
extern unsigned char gFileScratchSpace_0211e33c[0x30000] __attribute__((aligned(4)));
#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "Resource/CharacterCreationUI.h"
#include "Combat/MapDisplay.h"
#include "World/Object3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "NitroSDK/Graphics.h"
#include "Filesystem/FileIO.h"
#include "Filesystem/GPC.h"
#include "Resource/Brightness.h"
#include "Input/Input.h"
#include "NitroSDK/ColorEffects.h"
#include "Util/Random.h"

struct Struct_ov009_021842a0;
struct GlobalFlags_02038598_4;
struct Struct_02045cac;
struct BGLayer_0204b010;
struct BGLayer_02020cb8_3;
struct TextWindowManager_0205d048;
struct TextWindowManager_0205d81c;
struct Struct_ov009_02184a18;
struct TextWindowManager_0205d1e0;
struct TextWindowManager_0205d228;
struct TextWindowManager_0205d274;
struct TextWindowManager_0205d2bc;
struct BGLayer_02020cb8;
struct BGLayer_02020cb8_5;
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
struct PacEntry_02020aec;
struct PacEntry_02020cb8_4;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;
struct BGLayer_02020cb8_6;
struct BGLayer_0204af14;
struct Struct_02000c9c_8;
struct TextWindow_0204c7a8;
struct TextWindowManager_0205cf78;
struct TextWindow_0205cf78_2;
struct Struct_0201099c_3;
struct TextureVRAMArea_0203d028;
struct GameResources;
struct Struct_0202e5c0;
struct Sprite_02043368_2;
struct SpriteAnimationList_02043368;
struct SoundEffectManager_02108760;
struct Struct_0205c570;
struct TextWindowManager_0205da38;
struct TextWindowManager_0205d6a0;
struct ItemTable_0201099c_10;
struct Struct_0201099c_18;
struct MusicManager_02109bf4_4;
struct Struct_ov009_02188454;
struct KeyMenuCursor_0205bef8;
struct MenuCursor_0205ba68;
struct MenuCursor_0205bacc;
struct MenuCursor_0205bb04;
struct MenuCursor_0205bb84;

struct StringTable_0201099c_14 {
    char unknown_0_[0x18];
};

struct TextWindowManager_0205cfd4 {
    char unknown_0_[0xbc];
};

struct Struct_ov006_02158478 {
    char unknown_0_[0xe0];
};

struct KeyMenuCursor_0205bef8 {
    int unknown_0_[0x10];
};

struct Struct_ov009_021847c4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

struct Struct_ov009_021842a0_2 {
    SafeAllocator unknown_0_[8];
    SafeAllocator* unknown_b4_;
    SafeAllocator* unknown_b8_;
    char unknown_c8_[0x18];
    StringTable_0201099c_14 unknown_e0_;
    void* unknown_f8_;
    char unknown_fc_[0x20];
    BGLayer_02020cb8 unknown_138_[6];
    TextWindowManager_0205cfd4 unknown_1f8_[2];
    Struct_ov006_02158478 unknown_370_[1];
    Struct_ov006_02158478 unknown_450_[4];
    void* unknown_7d0_;
    void* unknown_7d4_;
    void* unknown_7d8_;
    void* unknown_7dc_;
    void* unknown_7e0_;
    void* unknown_7e4_;
    void* unknown_7e8_;
    void* unknown_7ec_;
    void* unknown_7f0_[2];
    void* unknown_7f8_;
    void* unknown_7fc_;
    int unknown_800_;
    int unknown_804_;
    char unknown_808_[0x70];
    Object3D unknown_878_;
    char unknown_924_[0x2c8];
    KeyMenuCursor_0205bef8 unknown_bec_;
    Struct_ov009_021847c4 unknown_c2c_;
    short unknown_c4c_;
    short unknown_c4e_;
    short unknown_c50_;
    short unknown_c52_;
    short unknown_c54_;
    short unknown_c56_;
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[2];
    int unknown_c5c_[3];
    char unknown_c68_[0x70];
    Object3D unknown_cd8_;
    unsigned char unknown_d84_;
    unsigned char unknown_d85_;
    char unknown_d86_[2];
    void* unknown_d88_;
    int unknown_d8c_;
    int unknown_d90_;
    unsigned char unknown_d94_;
    unsigned char unknown_d95_;
    short unknown_d96_;
    short unknown_d98_;
    char unknown_d9a_[2];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
    unsigned char unknown_da6_[2];
    unsigned char unknown_da8_[2];
    unsigned char unknown_daa_[2];
    unsigned char unknown_dac_[2];
    unsigned char unknown_dae_[2];
    char unknown_d74_[2][11];
    unsigned char unknown_d8a_[2];
    unsigned char unknown1_d8c_;
    unsigned char unknown_d8d_;
    unsigned char unknown_db6_;
    char unknown_d8f_;
};

struct Struct_ov009_021847c4_2 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_; };

struct Struct_ov009_0218aafc { char unknown_0_[5]; };

struct Struct_ov009_021847ec {
    char unknown_18_[0xc];
    int unknown_24_;
    short unknown_28_;
    unsigned short unknown_12_;
    int unknown_14_[2];
    int unknown_1c_;
};

struct Struct_ov009_02185888 {
    char unknown_0_[0x12];
    short unknown_12_;
    int unknown_14_[2];
    int unknown_1c_;
};

struct Struct_ov006_02158478_2 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

struct Struct_ov009_02184a18_2 {
    char unknown_0_[4];
    int unknown_4_[0x14];
    int unknown_54_[0x10];
    unsigned char unknown_94_[4];
};

struct Struct_02081870_2 {
    Struct_ov009_02184a18_2 unknown_0_;
    char unknown_98_[0xbc - 0x98];
};

struct Struct_ov009_021842a0_3 {
    char unknown_0_[(0x1bc)];
    Struct_02081870_2 unknown_1f8_[2];
    char unknown_370_[0x7f8 - 0x370];
    void* unknown_7f8_;
    void* unknown_7fc_;
    char unknown_800_[0x878 - 0x800];
    Object3D unknown_878_;
    char unknown_924_[0x2c8];
    char unknown_bec_[0xc58 - 0xbec];
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[0xcd8 - 0xc5a];
    Object3D unknown_cd8_;
    unsigned char unknown_d84_;
    unsigned char unknown_d85_;
    char unknown_d86_[0xd9c - 0xd86];
    unsigned int unknown_d9c_;

    void inline_ov009_021842a0();
};

typedef void (Struct_ov009_021842a0_3::*Type_02000c9c_2)();

struct Struct_ov008_0218b340 {
    Type_02000c9c_2 unknown_0_[13];
};

struct Struct_ov009_02185c58 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    unsigned short unknown_10_;
    short unknown_12_;
    int unknown_14_[2];
    SafeAllocator* unknown_1c_;
};

struct Struct_ov003_021594c4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov009_02184e58 {
    char unknown_0_[0xc];
    void* unknown_c_;
};

struct Struct_ov009_021842a0_4 {
    SafeAllocator unknown_0_[9];
    char unknown_b4_[0x138 - 0xb4];
    Struct_ov003_021594c4 unknown_138_[6];
    char unknown_1f8_[0xc58 - 0x1f8];
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[0xd90 - 0xc5a];
    int unknown_d90_;
    unsigned char unknown_d94_;
    unsigned char unknown_d95_;
    char unknown_d96_[0xd9c - 0xd96];
    unsigned int unknown_d9c_;
    char unknown_da0_[0xdb6 - 0xda0];
    unsigned char unknown_db6_;
};

struct Struct_ov009_02184e58_2 {
    SafeAllocator unknown_0_[2];
    char unknown_28_[0xfc - 0x28];
    Struct_ov003_021594c4 unknown_fc_[5];
    char unknown_19c_[0xc1c - 0x19c];
    signed char unknown_c1c_;
    unsigned char unknown_c1d_;
    char unknown_c1e_[0xd54 - 0xc1e];
    int unknown_d54_;
    unsigned char unknown_d58_;
    unsigned char unknown_d59_;
    char unknown_d5a_[0xd60 - 0xd5a];
    unsigned int unknown_d60_;
    char unknown_d64_[0xd8f - 0xd64];
    unsigned char unknown_d8f_;
};

struct Struct_ov009_021842a0_5 {
    char unknown1_0_[0xc1c];
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[0xd9c - 0xc5a];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
};

struct Struct_ov006_02158478_3 {
    char unknown_0_[4];
    Struct_ov003_021594c4* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov009_02185634_3 {
    char unknown_0_[0x98];
    Struct_ov003_021594c4* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov008_02184a4c_8 { char unknown_0_[0x28]; };

struct Struct_ov009_02185634_4 { signed char unknown_0_[10]; };

struct Struct_ov009_02185634_5 {
    char unknown_0_[0x3c];
    void* unknown_3c_;
    Struct_ov008_02184a4c_8* unknown_40_;
    char unknown_44_[0x4c - 0x44];
    short unknown_4c_;
    char unknown_4e_[2];
    unsigned char unknown_50_;
    void inline_ov009_02185634(unsigned char arg0) { unknown_50_ = arg0; }
    void inline_ov009_02185634_2(Struct_ov008_02184a4c_8* arg0, short arg1)
    {
        unknown_40_ = arg0;
        unknown_4c_ = arg1;
    }
};

struct Struct_ov009_02185634 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    short unknown_12_;
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_ov008_02187f6c_3 {
    char unknown_0_[0x488];
    Struct_ov009_02185634 unknown_488_;
    char unknown_4a4_[0x568 - 0x4a4];
    short unknown_568_;
};

struct Struct_ov009_0218aa40 { short unknown_0_[10]; };

struct Struct_ov003_02154af4_3 {
    char unknown_0_[0x800];
    char unknown_800_[0xc58 - 0x924];
};

struct Struct_ov009_02185634_2 {
    char unknown_0_[4];
    void* unknown_4_;
};

struct Struct_ov009_021842a0_6 {
    SafeAllocator unknown_0_[8];
    SafeAllocator* unknown_b4_;
    char unknown_a4_[0xa8 - 0xa4];
    char unknown_c8_[0xc0 - 0xa8];
    char unknown_e0_[0xd8 - 0xc0];
    int unknown_d8_;
    char unknown_dc_[0xee - 0xdc];
    short unknown_ee_;
    char unknown_f0_[0xf8 - 0xf0];
    SafeAllocator* unknown_f8_;
    Struct_ov003_021594c4 unknown_138_[6];
    Struct_ov009_02185634_3 unknown_1f8_;
    Struct_ov009_02185634_3 unknown_2b4_;
    Struct_ov006_02158478_3 unknown_370_[1];
    Struct_ov006_02158478_3 unknown_450_[4];
    void* unknown_7d0_;
    void* unknown_7d4_;
    Struct_ov009_02185634_5* unknown_7d8_;
    Struct_ov008_02184a4c_8* unknown_7dc_;
    void* unknown_7e0_;
    Struct_ov009_02185634_5* unknown_7e4_;
    Struct_ov008_02184a4c_8* unknown_7e8_;
    void* unknown_7ec_;
    void* unknown_7f0_[2];
    void* unknown_7f8_;
    void* unknown_7fc_;
    char unknown1_800_[0x808 - 0x800];
    char unknown_808_[0x878 - 0x808];
    char unknown_878_[0x924 - 0x878];
    char unknown_800_[0xc58 - 0x924];
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[0xc68 - 0xc5a];
    char unknown_c68_[0xd88 - 0xc68];
    Struct_ov008_02187f6c_3* unknown_d88_;
    char unknown_d8c_[0xd90 - 0xd8c];
    int unknown_d90_;
    unsigned char unknown_d94_;
    unsigned char unknown_d95_;
    char unknown_d96_[0xd9c - 0xd96];
    unsigned int unknown_d9c_;
    char unknown_da0_[0xda2 - 0xda0];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
    unsigned char unknown_da6_[2];
    unsigned char unknown_da8_[2];
    unsigned char unknown_daa_[2];
    unsigned char unknown_dac_[2];
    unsigned char unknown_dae_[2];
    char unknown_d74_[0xb];
    char unknown_d7f_[0xb];
    char unknown_d8a_;
    char unknown_d8b_;
};

enum Enum_ov009_02185634 { Enum_ov009_02185634_3072 = 0xc00 };

enum Enum_ov009_02185634_B { Enum_ov009_02185634_B_48 = 0x30 };

struct Struct_ov009_021863d0 {
    char unknown_0_[0xc12];
    unsigned char unknown_c12_;
};

struct Struct_ov005_0215840c_2 { char unknown_0_[0x3c]; char unknown_3c_[1]; };

struct Struct_ov009_0218742c_7 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
    void inline_ov009_0218742c_3(int arg0) { unknown_0_0_ = arg0; }
};

struct Struct_01ff8b48_28 { char unknown_0_[32]; };

struct Struct_ov009_0218742c_9 {
    Struct_ov009_0218742c_7 unknown_0_[4];
    char unknown_10_[0x5c];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
    unsigned short unknown_70_;
    unsigned short unknown_72_;
    char unknown_74_[0xc4];
    int unknown_138_[13];
    unsigned short unknown_16c_[20];
    Struct_01ff8b48_28 unknown_194_[7];
    char unknown_274_[0x214];
    short unknown_488_[0x71];
    unsigned char unknown_56a_;
    char unknown_56b_[0x34d];
    int unknown_950_;
};

struct Struct_ov009_0218742c { char unknown_0_[0x14c]; Struct_ov009_0218742c_7 unknown_14c_[5]; char unknown_160_[0xdc]; };

struct Struct_ov009_0218742c_2 { char unknown_0_[0x3c]; char unknown_3c_[0x18]; };

struct Struct_ov009_0218742c_3 { unsigned short unknown_0_; unsigned short unknown_2_; };

struct Struct_ov009_0218742c_4 { char unknown_0_[0x10c]; Struct_ov009_0218742c_3 unknown_10c_[13][20]; char unknown_51c_[0x34]; };

struct Struct_ov009_0218742c_5 {
    void* unknown_0_;
    char unknown_4_[0x1a];
    unsigned char unknown_1e_;
    char unknown_1f_;
    unsigned char unknown_20_;
    void inline_ov009_0218742c(unsigned char arg0) { unknown_1e_ = arg0; }
    void inline_ov009_0218742c_2(unsigned char arg0) { unknown_20_ = arg0; }
};

struct Struct_ov009_0218742c_6 {
    char unknown_0_[0xa0]; Struct_ov009_0218742c_5* unknown_a0_;
    char unknown_a4_[4]; char unknown_a8_[0xd4];
    char unknown_1b8_[0xfc]; char unknown_2b4_[0x9a5];
    unsigned char unknown_c59_;
    char unknown_c1e_[0x12a];
    signed char unknown_d84_;
    char unknown_d85_[3]; Struct_ov009_0218742c_9* unknown_d88_;
    char unknown_d8c_[9]; unsigned char unknown_d95_;
    char unknown_d96_[6]; unsigned int unknown_d9c_;
    char unknown_da0_[2]; unsigned char unknown_da2_; unsigned char unknown_da3_;
    char unknown_da4_[4]; unsigned char unknown_da8_[1];
};

struct Struct_ov009_0218742c_8 { char unknown_0_[0x6174]; unsigned char unknown_63d4_; };

struct Struct_ov009_0218aac8 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_[5]; };

struct Struct_ov009_02187b34 {
    short unknown_0_[10];
    unsigned char unknown_14_[4];
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_ov005_0215840c_3 {
    char unknown_0_[0x488];
    Struct_ov009_02187b34 unknown_488_;
};

struct Struct_ov009_02187b34_2 {
    SafeAllocator* unknown_0_;
    const char* unknown_4_;
    unsigned char unknown_8_;
};

struct Struct_ov009_0218aa98 {
    Struct_ov009_02187b34_2 unknown_0_[4];
};

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov009_021842a0_7 {
    char unknown_0_[(0xa0)];
    SafeAllocator* unknown_b4_;
    SafeAllocator* unknown_b8_;
    char unknown_bc_[(0xc0-0xa8)];
    char unknown_e0_[0x18];
    char unknown_f8_[(0x7bc-0xd8)];
    void* unknown_7f8_;
    void* unknown_7fc_;
    int unknown_800_;
    int unknown_804_;
    char unknown_808_[0x70];
    Object3D unknown_878_;
    char unknown_924_[0x2c8];
    char unknown_bec_[0xc58 - 0xbec];
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[2];
    int unknown_c5c_[3];
    char unknown_c68_[0x70];
    Object3D unknown_cd8_;
    unsigned char unknown_d84_;
    unsigned char unknown_d85_;
    char unknown_d86_[2];
    Struct_ov005_0215840c_3* unknown_d88_;
    char unknown_d8c_[0xd96 - 0xd8c];
    short unknown_d96_;
    short unknown_d98_;
    char unknown_d9a_[2];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
};

struct Struct_ov009_021842a0_8 {
    char unknown_0_[0x7bc];
    Struct_ov009_021863d0* unknown_7f8_;
    Struct_ov009_021863d0* unknown_7fc_;
    char unknown_800_[0xd88 - 0x800];
    Struct_ov005_0215840c_3* unknown_d88_;
    char unknown_d8c_[0xd9c - 0xd8c];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
};

struct Struct_ov009_021885b8 {
    unsigned char unknown_0_[0x568];
    short unknown_568_;
};

struct Struct_ov009_021842a0_9 {
    char unknown_0_[0x7bc];
    void* unknown_7f8_;
    void* unknown_7fc_;
    int unknown_800_;
    int unknown_804_;
    char unknown_808_[0xd9c - 0x808];
    unsigned int unknown_d9c_;
};

struct Struct_ov009_02187b34_3 {
    short unknown_0_[10];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_ov005_0215840c_4 {
    char unknown_0_[0x488];
    Struct_ov009_02187b34_3 unknown_488_;
};

struct Struct_ov009_0218a9bc {
    signed char unknown_0_[10];
};

struct Struct_ov009_02187b34_4 {
    short unknown_0_[10];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_, unknown_18_, unknown_1a_;
};

struct Struct_ov005_0215840c_5 { char unknown_0_[0x488]; Struct_ov009_02187b34_4 unknown_488_; };

struct Struct_ov009_02189854 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_;
};

struct Struct_ov009_02189854_2 {
    unsigned char unknown_0_[0xbb0];
    unsigned char unknown_bec_[12];
    int unknown_bf8_;
    unsigned char unknown_bfc_[0xc2c - 0xbfc];
    Struct_ov009_02189854 unknown_c2c_;
    short unknown_c4c_, unknown_c4e_, unknown_c50_, unknown_c52_;
    unsigned char unknown_c54_[4];
    signed char unknown_c58_;
    unsigned char unknown_c59_[0xd9c - 0xc59];
    unsigned int unknown_d9c_;
};

struct Struct_ov009_0218ad0c_2 {
    unsigned short unknown_0_0_ : 1;
    unsigned short unknown_0_1_ : 4;
    unsigned short unknown_0_5_ : 11;
};

struct Struct_ov009_0218ad0c_1 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    Struct_ov009_0218ad0c_2* unknown_4_;
    char* unknown_8_;
    char* unknown_c_;
    short unknown_10_;
};

struct Struct_ov009_0218ad0c {
    unsigned char unknown_0_[0xdc];
    Struct_ov009_0218ad0c_1 unknown_dc_;
    unsigned char unknown_f0_[0xd60 - 0xf0];
    unsigned int unknown_d60_;
    unsigned char unknown_d64_[3];
    unsigned char unknown_d67_;
    unsigned char unknown_d68_[0xc];
    char unknown_d74_[2][11];
};

extern "C" unsigned int* GetGlobalFlags_020d6c00();
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void ClearItemTable_020de848(void* itemTable);
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14* stringTable);
extern "C" void func_ov009_02185850(struct Struct_ov009_021847ec* arg0);
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8* layer);
extern "C" void InitTextWindowManager_0205cfd4(TextWindowManager_0205cfd4* windowManager);
extern "C" void InitTextWindow_0204c684(Struct_ov006_02158478* textWindow);
extern "C" void InitKeyMenuCursor_0205bef8(KeyMenuCursor_0205bef8*);
extern "C" void func_ov009_021847c4(struct Struct_ov009_021847c4_2 *arg0);
extern "C" int FindFontGlyphIndex_020424e4(int text, int font);
extern "C" int func_ov009_02185888(Struct_ov009_02185888* arg0);
extern "C" void ClearGlobalFlags_020466f4(GlobalFlags_02038598_4*, unsigned int);
extern "C" void func_ov023_021e4f18(void* arg0);
extern "C" int GetMessageWindow_020421a0();
extern "C" void func_02045cac(struct Struct_02045cac* arg0);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);
extern "C" void DestroySpriteSet_0205a494(void* spriteSet);
extern "C" void* GetSpriteTextManager_0203bd14();
extern "C" void func_0203c4c4(char* arg0);
extern "C" void ClearBGScreenData_0204b010(BGLayer_0204b010*, void*);
extern "C" void FlushBGScreenData_0204b04c(void*, int);
extern "C" void CopyBGScreenDataToVRAM_0204b088(void*, int);
extern "C" void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer);
extern "C" void ResetTextWindowManager_0205d048(struct TextWindowManager_0205d048* windowManager);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_ov009_02185c58(Struct_ov009_02185c58* arg0);
extern "C" void func_020a20d8(void* arg0);
extern "C" Struct_ov006_02158478_2* GetCursorTextWindow_0205d8c4(TextWindowManager_0205d81c* windowManager);
extern "C" int IsTextWindowReady_0204c7cc(unsigned char* textWindow);
extern "C" void SetMenuCursorTouchedIndex_0205bc24(void* cursor, int index);
extern "C" int UpdateTextWindowManager_0205d0e0(Struct_02081870_2* windowManager, unsigned int ticks);
extern "C" void func_ov023_021e5020(void* arg0);
extern "C" void func_ov009_021893c4(Struct_ov009_021842a0_9* arg0, unsigned int arg1);
extern "C" void func_ov009_02189214(Struct_ov009_021842a0_8* arg0);
extern "C" void func_ov009_021885b8(Struct_ov009_02184a18* arg0);
extern "C" void func_ov009_02184d70(void* arg0);
extern "C" int func_ov009_02185ed8(unsigned int* arg0);
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);
extern "C" void func_ov023_021da274(void*);
extern "C" void func_ov023_021da770(Struct_ov009_021842a0* arg0);
extern "C" void func_ov023_021da9b4(Struct_ov009_021842a0* arg0);
extern "C" void func_ov023_021e5628(void*, void*);
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(TextWindowManager_0205d2bc*);
extern "C" void func_ov009_02184e58(Struct_ov009_02184e58_2* arg0);
extern "C" void func_ov023_021d9a6c(char*);
extern "C" void func_ov023_021d9d34(char*);
extern "C" void func_ov023_021d9e60(char*);
extern "C" void func_ov023_021da1dc(unsigned char*);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize);
extern "C" void SetBGPriority_0204b5b4(Struct_ov003_021594c4* layer, int priority);
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5* layer, int scrollX, int scrollY);
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c* layer, SafeAllocator* allocator);
extern "C" void AllocateBGScreenBlocks_0204af38(BGLayer_0204af38* layer, int capacity, SafeAllocator* allocator);
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4* pac);
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);
extern "C" void LoadBGBlock_0204b174(Struct_ov003_021594c4* layer, void* block, SafeAllocator* allocator, unsigned int arg3);
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0* layer, unsigned int screenBlockIndex, int srcX, int srcY, short destX, short destY, short width, short height, unsigned short palette);
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2* layer, void* screenData);
extern "C" void FillBGScreenRect_0204bc74(void*, int, int, int, int, int, int);
extern "C" int CompareBytes_02001aec(const void*, const void*, unsigned int);
extern "C" void FlushBGBlock_0204b2e0(void* layer, char* block);
extern "C" void CopyBGBlockToVRAM_0204b3a0(BGLayer_02020cb8_6* layer, char* block);
extern "C" void* GetBGScreenBlock_0204af14(BGLayer_0204af14* layer, unsigned int screenBlockIndex);
extern "C" void func_0204b620(Struct_ov003_021594c4* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" int GetGameLanguage_0200fb08(Struct_02000c9c_8* gameState);
extern "C" GameResources* GetResources_0200fb8c(int*);
extern "C" void LoadItemTableByIds_020de9a4(void* itemTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize, const void* itemIds, int itemIdCount);
extern "C" void LoadStringTable_020dfec0(void* stringTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize);
extern "C" void func_ov023_021e4e8c(void* arg0);
extern "C" void func_ov023_021e4f64(void* arg0, SafeAllocator* arg1);
extern "C" void func_ov023_021e4fd8(void* arg0);
extern "C" void func_ov023_021e6198(void* arg0, int arg1);
extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern "C" void ResetTextureVRAMState_0207df50(TextureVRAMArea_0203d028* area);
extern "C" void RestoreTextureVRAMState_0207df90(char* area);
extern "C" void SaveTextureVRAMState_0207dfac(char* area);
extern "C" void InitFollowCamera_020a2010(void* storage);
extern "C" void func_0202e5c0(Struct_0202e5c0* arg0, int arg1, int arg2, int arg3);
extern "C" void SetCameraTarget_0202e5c8(unsigned char* camera, int x, int y, int z);
extern "C" void UpdateCamera_0202e0a4(void* camera);
extern "C" void DisableCameraFollow_020a27a0(void* camera);
extern "C" void SetCamera_020100c4(GameState* gameState, int camera);
extern "C" void func_ov009_02188bf8(unsigned char* arg0, int arg1, short* arg2, short* arg3);
extern "C" int func_ov009_02188b14(void* arg0, int arg1, int arg2);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void func_ov023_021e5e68(void*, int, int);
extern "C" void func_ov023_021e6150(void* arg0, unsigned char arg1);
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8* window, SafeAllocator* allocator, int characterData, unsigned int screenDataSize);
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78* windowManager, TextWindow_0205cf78_2* textWindows, unsigned char textWindowCapacity);
extern "C" void InitSpriteSet_0205a444(char* spriteSet);
extern "C" void InitSprite_0205a198(Sprite_02043368_2* sprite);
extern "C" void InitSpriteAnimationList_0205a234(SpriteAnimationList_02043368* animationList);
extern "C" void LoadSpriteSetFile_0205a528(Struct_ov009_02185634_5* spriteSet, void* fileData, int size, SafeAllocator* allocator);
extern "C" void func_ov003_0215e6f8(void* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
extern "C" void func_ov003_0215f41c(Struct_ov009_02185634_2* arg0, const char* arg1);
extern "C" unsigned char* func_ov003_0215f4fc(void*, const char*);
extern "C" void func_ov023_021e60e0(void*, unsigned int);
extern "C" void func_ov023_021e5974(void*, void*, int, int, int);
extern "C" void func_ov023_021d99a4(void* arg0);
extern "C" void func_ov023_021d9c7c(void* arg0);
extern "C" void func_ov023_021d9da4(void* arg0);
extern "C" void SetTextWindowPalette_0205deb4(TextWindowManager_0205d81c*, int, int);
extern "C" void func_ov009_021855dc(unsigned char* arg0, int arg1);
extern "C" void func_020e0484(void* arg0, SafeAllocator* arg1, const char* arg2, const void* arg3, int arg4, int arg5);
extern "C" void func_ov009_021867bc(unsigned char* arg0, int arg1);
extern "C" void func_ov009_02188c2c(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_02188d9c(void *arg0);
extern "C" void func_ov009_02188e70(Struct_ov009_021842a0* arg0, int arg1);
extern "C" void func_ov009_02188944(Struct_ov009_021842a0* arg0, int arg1);
extern "C" int func_ov009_02188ee8(Struct_ov009_021842a0* arg0);
extern "C" void func_ov023_021e6158(void*, int);
extern "C" int func_0202ee38(char*, int, int);
extern "C" void func_0202ee58(char* arg0, int arg1, int arg2);
extern "C" void func_ov009_0218ad0c(Struct_ov009_0218ad0c* arg0);
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760*, int, int);
extern "C" void func_ov023_021d9f88(Struct_ov009_0218742c_6*);
extern "C" int GetCursorIndex_0205d794(Struct_0205c570*);
extern "C" int IsEntryTouchedAgain_0205da38(TextWindowManager_0205da38*, int);
extern "C" void CloseTextWindows_0205d6a0(TextWindowManager_0205d6a0*, int);
extern "C" void func_02086404(Struct_ov009_0218742c*);
extern "C" void func_02083ca0(unsigned char*, int);
extern "C" int sprintf(char*, const char*, ...);
extern "C" void func_0208247c(void*);
void* LoadFileIntoMemory(const char*, void*, unsigned int*);
extern "C" void func_02082490(void*, void*, unsigned int, int, int);
extern "C" void func_02083cbc(void*, void*, void*);
extern "C" void* FindItemData_020dedd0(ItemTable_0201099c_10*, int);
extern "C" void func_02083e28(void*, int);
extern "C" void func_020863c4(unsigned char*);
extern "C" void ClearSpellTable_0209a804(int*);
extern "C" void func_0209a810(Struct_0201099c_18*, void*);
extern "C" void func_02083b60(unsigned char*, int);
extern "C" void func_020830cc(void*, Struct_ov009_0218742c*);
extern "C" void func_02086778(void*, Struct_ov009_0218742c*, unsigned char, unsigned char);
extern "C" Object3D* func_ov023_021e6194(void*);
extern "C" void func_ov023_021db4b4(void* arg0, unsigned int arg1);
extern "C" int func_ov009_0218b908(char* arg0, int arg1);
extern "C" void StopMusic_0209c678(MusicManager_02109bf4_4* manager, int fadeDuration);
extern "C" int func_0202eeb4(char* arg0);
extern "C" void LoadExtraSoundSet_0205ebc0(void* manager, int soundSetToLoad, int soundSet);
extern "C" void PlayExtraSoundEffect_0205ebfc(void* manager, int soundEffectIndex, int handle);
extern "C" void WriteBrightnessRegister_020c39a0(short* arg0, int arg1);
extern "C" void UnloadExtraSoundSet_0205ebec(void* manager);
extern "C" Vector3i func_ov023_021e613c(void* arg0);
extern "C" void func_ov023_021e6088(void*, Struct_ov009_02188454*);
extern "C" int GetStringLength_020d2ff0(const char*);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_ov023_021e540c(void* arg0);
extern "C" void SetMenuCursorGrid_0205ba68(MenuCursor_0205ba68*, int, int, int);
extern "C" void SetMenuCursorItemCount_0205bacc(MenuCursor_0205bacc*, int);
extern "C" void SetMenuCursorIndex_0205bb04(void*, int);
extern "C" int GetMenuCursorItemCount_0205bafc(void*);
extern "C" int GetMenuCursorIndex_0205bb84(void*);
extern "C" int func_ov009_0218a8b4(Struct_ov009_02189854_2* arg0, int arg1, int arg2);
extern "C" int func_ov009_0218aab0(Struct_ov009_021842a0* arg0, unsigned char arg1);
extern "C" void func_ov009_0218b200(Struct_ov009_021842a0* arg0, int arg1);
extern "C" void func_ov009_0218b850(Struct_ov009_021842a0* arg0);
extern "C" int UpdateKeyMenuCursor_0205bf58(Struct_ov009_02188c2c*, unsigned int);
extern "C" void func_ov009_0218b2e8(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_0218b680(Struct_ov009_021842a0* arg0);
extern "C" int func_ov009_0218b150(int arg0);
extern "C" int func_ov009_0218b1e8(unsigned char* arg0, int arg1);

extern char data_ov009_0218aca4[];
extern const Type_02000c9c_2 gNullMemberFunctionPointer_020e6d5c;
extern const char* data_020f2a54;
extern const char* data_020f2a50;
extern char data_ov009_0218aca6[];
extern char data_ov009_0218acab[];
extern char data_ov009_0218bc20[];
extern const char data_ov009_0218bc25[];
extern const char data_ov009_0218acc9[];
extern const char* gItemDataPath_020f2a38;
extern const char* data_020f2a30;
extern const char data_ov009_0218bc3e[];
extern const char data_ov009_0218acf4[];
extern const char data_ov009_0218ad0d[];
extern const char data_ov009_0218ad26[];
extern const char data_ov009_0218ad28[];
extern char data_ov009_0218bc59[];
extern const char data_020ef078[];
extern SoundEffectManager_02108760 gSoundEffectManager_02108760;
extern char data_ov009_0218ad2c[];
extern char data_ov009_0218bc71[];
extern char gMusicManager_02109bf4[];
extern const char data_ov009_0218bc73[];
extern const char data_ov009_0218bc76[];
extern const char data_ov009_0218bc79[];
extern const char data_ov009_0218bc7c[];
extern const char data_ov009_0218bc7f[];
extern const char data_ov009_0218bc82[];
extern const char data_ov009_0218bc85[];
extern const char data_ov009_0218bc88[];

extern "C" void func_ov009_02185634(Struct_ov009_021842a0_6* arg0);
extern "C" void func_ov009_021863d0(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_021865dc(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_021868c4(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_021869d8(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_021866f0(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_02186aec(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_02186c00(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_02186e00(Struct_ov009_021842a0* arg0);
extern "C" void func_ov009_0218742c(Struct_ov009_0218742c_6* arg0);
extern "C" void func_ov009_02187b34(Struct_ov009_021842a0_7* arg0);
extern "C" void func_ov009_021883cc(unsigned char* arg0);
static const Vector3fix data_ov009_0218b9e0 = {0x9000, 0x12800, 0x0};
static const unsigned char data_ov009_0218b93b[2] = {0, 1};
static const unsigned char data_ov009_0218b93d[3] = {1, 2, 3};
static const signed char data_ov009_0218b943[3] = {2, 1, 0};
static const signed char data_ov009_0218ba30[27] = {1, 2, 2, 2, 1, 5, 3, 1, 1, 4, 1, 0, 5, 1, 1, 6, 1, 0, 7, 1, 0, 8, 2, 4, -1, -1, -1};
static const signed char data_ov009_0218b939[2] = {2, 1};
static const signed char data_ov009_0218b946[3] = {3, 1, 0};
static const unsigned short data_ov009_0218b990[4] = {0x200, 0x80, 0x80, 0x80};
static const unsigned char data_ov009_0218b978[4] = {0, 0, 0, 1};
static const signed char data_ov009_0218b968[4] = {3, 1, 0, 0};
static const short data_ov009_0218bab0[41] __attribute__((aligned(4))) = {994, 1000, 8001, 8010, 9000, 9001, 9002, 9003, 9004, 9005, 9006, 9007, 9008, 9009, 9020, 9021, 9022, 9023, 9024, 9025, 9026, 9027, 9028, 9029, 20004, 20403, 20600, 20100, 13005, 16213, 14005, 13007, 13008, 16215, 17120, 14007, 14008, 17406, 20500, 20700, 19050};
static void (*const data_ov009_0218bb04[26])() = {(void (*)())func_ov009_02185634, 0, (void (*)())func_ov009_021863d0, 0, (void (*)())func_ov009_021865dc, 0, (void (*)())func_ov009_021868c4, 0, (void (*)())func_ov009_021869d8, 0, (void (*)())func_ov009_021866f0, 0, (void (*)())func_ov009_02186aec, 0, (void (*)())func_ov009_02186c00, 0, (void (*)())func_ov009_02186e00, 0, (void (*)())func_ov009_0218742c, 0, (void (*)())func_ov009_02187b34, 0, (void (*)())func_ov009_021883cc, 0, 0, 0};
static const Struct_ov009_0218aa40 data_ov009_0218ba1c = {{-1, -1, 0, 0, -1, -1, -1, -1, -1, -1}};
static const signed char data_ov009_0218b998[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const unsigned char data_ov009_0218b95c[4] = {1, 2, 3, 2};
static const signed char data_ov009_0218b952[4] = {2, 1, 0, 0};
static const Vector3fix data_ov009_0218b9a4 = {0x9000, 0x12800, 0x2f000};
static const Vector3fix data_ov009_0218b9b0 = {0x9000, 0x12800, 0x0};
static const Vector3fix data_ov009_0218b9bc = {0xd000, 0xf800, 0x42ccc};
static const unsigned char data_ov009_0218a9b4[8] = {12, 13, 4, 1, 6, 7, 9, 14};
static const Struct_ov009_0218aac8 data_ov009_0218aac8[7] = {{0, 0, {0, 0, 0, 0, 0}}, {1, 1, {0, 0, 0, 0, 0}}, {4, 5, {0, 0, 0, 0, 0}}, {5, 6, {0, 0, 0, 0, 0}}, {6, 7, {0, 0, 0, 0, 0}}, {7, 8, {0, 0, 0, 0, 0}}, {8, 9, {0, 0, 0, 0, 0}}};
static const Vector3fix data_ov009_0218b9c8 = {0xd000, 0xf800, 0x0};
static const Vector3fix data_ov009_0218b9d4 = {0x9000, 0x12800, 0x2f000};
static const Vector3fix data_ov009_0218b9ec = {0xd000, 0xf800, 0x42ccc};
static const Vector3fix data_ov009_0218b9f8 = {0xd000, 0xf800, 0x0};
static const Struct_ov009_0218aa28 data_ov009_0218ba04 = {0x0, 0xf800, 0x42ccc};
static const Struct_ov009_0218aa28 data_ov009_0218ba10 = {0x0, 0xf800, 0x0};
static const Struct_ov009_0218aa98 data_ov009_0218ba4c = {{{NULL, NULL, 0}, {NULL, NULL, 1}, {NULL, NULL, 2}, {NULL, NULL, 0}}};
static const short data_ov009_0218bb6c[73] = {1, 64, 48, 128, 32, 0, 48, 1, 2, 2, 32, 40, 32, 72, 40, 0, 5, 1, 3, 32, 40, 32, 32, 40, 40, 5, 2, 4, 32, 40, 32, 32, 40, 40, 5, 2, 5, 32, 40, 32, 32, 40, 40, 5, 2, 7, 40, 40, 32, 32, 48, 40, 4, 2, 6, 40, 40, 32, 32, 48, 40, 4, 2, 8, 24, 56, 16, 16, 16, 16, 11, 6, -1};

extern "C" ARM void func_ov009_021842a0(void* arg0, SafeAllocator* arg1) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    const int var2 = 0x3800;
    const int var3 = 0x2800;
    const int var4 = 0x1000;
    const int var5 = 0x2b240;
    const int var6 = 0xc00;
    const int var7 = 0x400;
    const int var8 = 0x2000;
    const int var9 = 0x800;
    if (arg1 == NULL) return;
    var0->unknown_0_[0].CreateTypeA(arg1->Allocate(var2), var2);
    var0->unknown_0_[1].CreateTypeA(arg1->Allocate(var3), var3);
    var0->unknown_0_[2].CreateTypeA(arg1->Allocate(var4), var4);
    var0->unknown_0_[3].CreateTypeA(arg1->Allocate(var5), var5);
    var0->unknown_0_[4].CreateTypeA(arg1->Allocate(var6), var6);
    var0->unknown_0_[5].CreateTypeA(arg1->Allocate(var8), var8);
    var0->unknown_0_[6].CreateTypeA(arg1->Allocate(var7), var7);
    var0->unknown_0_[7].CreateTypeA(arg1->Allocate(var9), var9);
    var0->unknown_7d8_ = (SpriteSet_0205ac40*)arg1->Allocate(0x54);
    var0->unknown_7dc_ = (Sprite_0205ac40_2*)arg1->Allocate(0xf0);
    var0->unknown_7e0_ = (SpriteAnimationList_0205a254*)arg1->Allocate(8);
    var0->unknown_7e4_ = (SpriteSet_0205ac40*)arg1->Allocate(0x54);
    var0->unknown_7e8_ = (Sprite_0205ac40_2*)arg1->Allocate(0x3e8);
    var0->unknown_7ec_ = (SpriteAnimationList_0205a254*)arg1->Allocate(8);
    if (var0->unknown_d95_ != 0) return;
    var0->unknown_b4_ = (SafeAllocator*)arg1->Allocate(0x14);
    var0->unknown_b8_ = (SafeAllocator*)arg1->Allocate(0x28);
    var0->unknown_b4_->ResetAllocatorPointer();
    for (int var1 = 0; var1 < 2; ++var1) var0->unknown_b8_[var1].ResetAllocatorPointer();
    var0->unknown_b4_->CreateTypeA(arg1->Allocate(0xc000), 0xc000);
    var0->unknown_b8_[0].CreateTypeA(arg1->Allocate(0x3000), 0x3000);
    var0->unknown_b8_[1].CreateTypeA(arg1->Allocate(0x1800), 0x1800);
}

extern "C" ARM void func_ov009_0218454c(Struct_ov009_021842a0_2* arg0, int arg1, int arg2)
{
    arg0->unknown_d95_ = arg2;
    if (arg0->unknown_d95_ == 1)
        SetGlobalFlags_020466e4(GetGlobalFlags_020d6c00(), 0xf);
    arg0->unknown_0_[0].ResetAllocatorPointer();
    arg0->unknown_0_[1].ResetAllocatorPointer();
    arg0->unknown_0_[2].ResetAllocatorPointer();
    arg0->unknown_0_[3].ResetAllocatorPointer();
    arg0->unknown_0_[4].ResetAllocatorPointer();
    arg0->unknown_0_[5].ResetAllocatorPointer();
    arg0->unknown_0_[6].ResetAllocatorPointer();
    arg0->unknown_0_[7].ResetAllocatorPointer();
    arg0->unknown_b4_ = NULL;
    arg0->unknown_b8_ = NULL;
    ClearItemTable_020de848(&arg0->unknown_c8_);
    InitStringTable_020dfc40(&arg0->unknown_e0_);
    arg0->unknown_f8_ = NULL;
    func_ov009_02185850((Struct_ov009_021847ec*)(&arg0->unknown_fc_));
    InitBGLayer_0204af64(&arg0->unknown_138_[0]);
    InitBGLayer_0204af64(&arg0->unknown_138_[1]);
    InitBGLayer_0204af64(&arg0->unknown_138_[2]);
    InitBGLayer_0204af64(&arg0->unknown_138_[3]);
    InitBGLayer_0204af64(&arg0->unknown_138_[4]);
    InitBGLayer_0204af64(&arg0->unknown_138_[5]);
    InitTextWindowManager_0205cfd4(&arg0->unknown_1f8_[0]);
    InitTextWindowManager_0205cfd4(&arg0->unknown_1f8_[1]);
    for (int var0 = 0; var0 < 1; var0++)
        InitTextWindow_0204c684(&arg0->unknown_370_[var0]);
    for (int var1 = 0; var1 < 4; var1++)
        InitTextWindow_0204c684(&arg0->unknown_450_[var1]);
    arg0->unknown_7d0_ = NULL;
    arg0->unknown_7d4_ = NULL;
    arg0->unknown_7d8_ = NULL;
    arg0->unknown_7dc_ = NULL;
    arg0->unknown_7e0_ = NULL;
    arg0->unknown_7e4_ = NULL;
    arg0->unknown_7e8_ = NULL;
    arg0->unknown_7ec_ = NULL;
    arg0->unknown_7f0_[0] = NULL;
    arg0->unknown_7f0_[1] = NULL;
    arg0->unknown_7f8_ = NULL;
    arg0->unknown_7fc_ = NULL;
    arg0->unknown_800_ = 0;
    arg0->unknown_804_ = 0;
    arg0->unknown_878_.Initialize();
    arg0->unknown_cd8_.Initialize();
    InitKeyMenuCursor_0205bef8(&arg0->unknown_bec_);
    func_ov009_021847c4((Struct_ov009_021847c4_2*)(&arg0->unknown_c2c_));
    arg0->unknown_c4c_ = -1;
    arg0->unknown_c4e_ = -1;
    arg0->unknown_c50_ = -1;
    arg0->unknown_c52_ = -1;
    arg0->unknown_c54_ = -1;
    arg0->unknown_c56_ = -1;
    arg0->unknown_c58_ = 0;
    arg0->unknown_c59_ = 0;
    arg0->unknown_d84_ = 0;
    arg0->unknown_d85_ = 0;
    arg0->unknown_d88_ = NULL;
    arg0->unknown_d8c_ = -1;
    arg0->unknown_d90_ = 0;
    arg0->unknown_d94_ = 0;
    arg0->unknown_d96_ = 0;
    arg0->unknown_d98_ = 0;
    memset(&arg0->unknown_d9c_, 0, sizeof(arg0->unknown_d9c_));
    for (int var2 = 0; var2 < 2; var2++)
        arg0->unknown_da0_[var2] = 1;
    arg0->unknown_da2_ = arg1;
    arg0->unknown_da3_ = 0;
    for (int var3 = 0; var3 < 2; var3++)
    {
        arg0->unknown_da4_[var3] = 0;
        arg0->unknown_da6_[var3] = 0;
        arg0->unknown_da8_[var3] = 0;
        arg0->unknown_daa_[var3] = 0;
        arg0->unknown_dac_[var3] = 0;
        arg0->unknown_dae_[var3] = 0;
        memset(arg0->unknown_d74_[var3], 0, sizeof(arg0->unknown_d74_[var3]));
        arg0->unknown_d8a_[var3] = 0;
    }
    arg0->unknown1_d8c_ = 0;
    arg0->unknown_d8d_ = 0;
    arg0->unknown_db6_ = 0;
    arg0->unknown_d8f_ = 0;
}

extern "C" ARM void func_ov009_021847c4(struct Struct_ov009_021847c4_2 *arg0) {
	arg0->unknown_4_ = -1;
	arg0->unknown_0_ = -1;
	arg0->unknown_c_ = -1;
	arg0->unknown_8_ = -1;
	arg0->unknown_10_ = -1;
	arg0->unknown_14_ = -1;
	arg0->unknown_18_ = -1;
	arg0->unknown_1c_ = -1;
}

extern "C" ARM void func_ov009_02185850(struct Struct_ov009_021847ec* arg0) {
    memset(arg0->unknown_18_, 0, 0xc);
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_14_[0] = -1;
    arg0->unknown_14_[1] = -1;
    func_ov009_02185888((Struct_ov009_02185888*)arg0);
}

extern "C" ARM int func_ov009_02185888(Struct_ov009_02185888* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int* var1 = arg0->unknown_14_;
    for (int var2 = 0; var2 < 2; var2++, var1++) {
        if (*var1 >= 0) {
            var0->RemoveTask(*var1);
            *var1 = -1;
        }
    }
    arg0->unknown_12_ = 0;
    arg0->unknown_1c_ = 0;
    return 1;
}

extern "C" ARM void func_ov009_02184848(Struct_ov009_021842a0* arg0) {
    char* var0 = (char*)arg0;
    if (*(unsigned char*)(var0 + (0xd59)) == 1) {
        ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0xf);
    }

    func_ov023_021e4f18(*(void**)(var0 + (0x7b4)));
    func_ov023_021e4f18(*(void**)(var0 + (0x7b8)));

    void* var1 = (void*)GetMessageWindow_020421a0();
    func_02045cac((struct Struct_02045cac*)var1);
    ResetMessageWindow_02043204((char*)var1);
    CloseMessageWindow_02043124((char*)var1);

    if (*(void**)(var0 + (0x79c)) != 0) {
        DestroySpriteSet_0205a494(*(void**)(var0 + (0x79c)));
    }
    if (*(void**)(var0 + (0x7a8)) != 0) {
        DestroySpriteSet_0205a494(*(void**)(var0 + (0x7a8)));
    }
    func_0203c4c4((char*)GetSpriteTextManager_0203bd14());

    {
        void* var2[6];
        var2[0] = var0 + (0xfc);
        var2[1] = var0 + (0x11c);
        var2[2] = var0 + (0x13c);
        var2[3] = var0 + (0x15c);
        var2[4] = var0 + (0x17c);
        var2[5] = var0 + (0x19c);
        for (int var3 = 0; var3 < 6; var3++) {
            void* var4 = var2[var3];
            ClearBGScreenData_0204b010((BGLayer_0204b010*)var4, 0);
            FlushBGScreenData_0204b04c(var4, 0);
            CopyBGScreenDataToVRAM_0204b088(var4, 0);
            ResetBGLayerData_0204afb4((struct BGLayer_02020cb8_3*)var4);
        }
    }

    ResetTextWindowManager_0205d048((struct TextWindowManager_0205d048*)(var0 + (0x1bc)));
    ResetTextWindowManager_0205d048((struct TextWindowManager_0205d048*)(var0 + (0x278)));
    *(int*)(var0 + (0xd8)) = 0;
    *(int*)(var0 + (0x794)) = 0;
    *(int*)(var0 + (0x798)) = 0;

    if (*(void**)(var0 + (0xa4)) != 0) {
        ((SafeAllocator*)(*(void**)(var0 + (0xa4))))->Destroy();
        ((SafeAllocator*)((char*)(*(void**)(var0 + (0xa4))) + 0x14))->Destroy();
    }
    if (*(void**)(var0 + (0xa0)) != 0) {
        ((SafeAllocator*)(*(void**)(var0 + (0xa0))))->Destroy();
    }

    SafeAllocator* var5[(9)];
    __clear(var5, (0x24));
    var5[0] = (SafeAllocator*)(var0 + 0x8c);
    var5[1] = (SafeAllocator*)(var0 + 0x78);
    var5[2] = (SafeAllocator*)(var0 + 0x64);
    var5[3] = (SafeAllocator*)(var0 + 0x50);
    var5[4] = (SafeAllocator*)(var0 + 0x3c);
    var5[5] = (SafeAllocator*)(var0 + 0x28);
    var5[6] = (SafeAllocator*)(var0 + 0x14);
    var5[7] = (SafeAllocator*)var0;

    int var6 = 0;
    while (var5[var6] != 0) {
        if (var5[var6]->GetSignedAllocator() != 0) {
            var5[var6]->Destroy();
        }
        var6++;
    }
}

extern "C" ARM int func_ov009_02184a18(Struct_ov009_021842a0_3* arg0)
{
    unsigned int var0 = GameState::GetInstance()->GetTickCount();
    if (var0 == 0)
        var0 = 1;
    if (arg0->unknown_c58_ != 0)
        func_020a20d8(arg0->unknown_924_);
    if (arg0->unknown_c58_ == 9 && arg0->unknown_c59_ == 2)
    {
        Struct_ov006_02158478_2* var1 = GetCursorTextWindow_0205d8c4((TextWindowManager_0205d81c*)&arg0->unknown_1f8_[1]);
        if (var1 != NULL && IsTextWindowReady_0204c7cc((unsigned char*)var1) != 0 && !(var1->unknown_c5_ & 2))
            SetMenuCursorTouchedIndex_0205bc24(&arg0->unknown_1f8_[1].unknown_0_.unknown_4_, -1);
    }
    UpdateTextWindowManager_0205d0e0(&arg0->unknown_1f8_[0], var0);
    arg0->unknown_d85_ = UpdateTextWindowManager_0205d0e0(&arg0->unknown_1f8_[1], var0);
    if (arg0->unknown_d9c_ & 0x200)
    {
        arg0->unknown_878_.AdvanceEffects();
        arg0->unknown_cd8_.AdvanceEffects();
    }
    if (arg0->unknown_7f8_ != NULL)
        func_ov023_021e5020(arg0->unknown_7f8_);
    if (arg0->unknown_7fc_ != NULL)
        func_ov023_021e5020(arg0->unknown_7fc_);
    func_ov009_021893c4((Struct_ov009_021842a0_9*)arg0, var0);
    func_ov009_02189214((Struct_ov009_021842a0_8*)arg0);
    func_ov009_021885b8((Struct_ov009_02184a18*)arg0);

    Struct_ov008_0218b340 var2 = *(const Struct_ov008_0218b340*)data_ov009_0218bb04;
    var2.unknown_0_[12] = gNullMemberFunctionPointer_020e6d5c;
    if (var2.unknown_0_[arg0->unknown_c58_] == 0)
        return 0;
    (arg0->*var2.unknown_0_[arg0->unknown_c58_])();
    func_ov009_02184d70(arg0);
    func_ov009_02185c58((Struct_ov009_02185c58*)((char*)arg0 + 0xdc));
    return arg0->unknown_c58_ == 12;
}

extern "C" ARM int func_ov009_02185c58(Struct_ov009_02185c58* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    switch (arg0->unknown_12_) {
    case 1:
        arg0->unknown_14_[0] = var0->QueueLoadFile(data_020f2a54, NULL);
        arg0->unknown_14_[1] = var0->QueueLoadFile(data_020f2a50, NULL);
        arg0->unknown_12_ = 2;
        return func_ov009_02185c58(arg0);
    case 2:
        for (int var1 = 0; var1 < 2; var1++) {
            if (arg0->unknown_14_[var1] >= 0 && var0->GetTaskStatus(arg0->unknown_14_[var1]) == 0) {
                return 0;
            }
        }
        arg0->unknown_12_ = 3;
        return func_ov009_02185c58(arg0);
    case 3: {
        void* var2[2];
        unsigned int var3[2];
        __clear(var2, 8);
        __clear(var3, 8);
        int* var11 = arg0->unknown_14_;
        void** var12 = var2;
        unsigned int* var13 = var3;
        for (int var4 = 0; var4 < 2; var4++, var11++, var12++, var13++) {
            if (*var11 >= 0) {
                var0->GetLoadedFileByID(*var11, var12, var13);
            }
        }
        SafeAllocator* var5 = arg0->unknown_1c_;
        void* var7;
        unsigned int var6 = var3[1];
        var7 = var2[1];
        if (var5 != NULL && ((var2[0] != NULL && var3[0] != 0) || (var7 != NULL && var6 != 0))) {
            if (var2[0] != NULL && var3[0] != 0) {
                if (var5 != NULL && var2[0] != NULL) {
                    memcpy(arg0, var2[0], 4);
                    int var8 = func_ov009_02185ed8((unsigned int*)arg0);
                    unsigned int var9 = arg0->unknown_1_4_;
                    arg0->unknown_4_ = var8 != 0 ? var5->Allocate(var8) : NULL;
                    arg0->unknown_8_ = var9 != 0 ? var5->Allocate(var9) : NULL;
                    if (arg0->unknown_4_ != NULL) {
                        memcpy(arg0->unknown_4_, (char*)var2[0] + 4, var8);
                    }
                    if (arg0->unknown_8_ != NULL) {
                        int var14 = func_ov009_02185ed8((unsigned int*)arg0) + 4;
                        memcpy(arg0->unknown_8_, (char*)var2[0] + var14, var9);
                    }
                    arg0->unknown_3_7_ = 1;
                }
            }
            arg0->unknown_c_ = NULL;
            arg0->unknown_10_ = 0;
            if (var7 != NULL && var6 != 0) {
                void* var10 = var5->Allocate(var6);
                if (var10 != NULL) {
                    memcpy(var10, var7, var6);
                    arg0->unknown_c_ = var10;
                    arg0->unknown_10_ = var6;
                }
            }
        }
        func_ov009_02185888((Struct_ov009_02185888*)arg0);
        return 1;
    }
    }
    return 1;
}

extern "C" ARM int func_ov009_02185ed8(unsigned int* arg0) {
    if (*arg0 & 0x80000000) {
        return (*arg0 & 0xFFF) << 1;
    }
    return (*arg0 & 0xFFF) << 1;
}

extern "C" ARM void func_ov009_02185ee8(void* arg0) {
    char* var0 = (char*)arg0;
    signed char var1 = *(signed char*)(var0 + (0xc1c));
    if (var1 == 0 || var1 == 0xc) {
        return;
    }

    func_ov023_021da274((Struct_ov009_021842a0*)arg0);
    func_ov023_021da770((Struct_ov009_021842a0*)arg0);
    func_ov023_021da9b4((Struct_ov009_021842a0*)arg0);

    if (*(signed char*)(var0 + (0xc1c)) != 0xa) {
        ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(var0 + (0x1bc)));
        DrawTextWindows_0205d228((TextWindowManager_0205d228*)(var0 + (0x1bc)));
        FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(var0 + (0x1bc)));
    }

    ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)(var0 + (0x278)));
    DrawTextWindows_0205d228((TextWindowManager_0205d228*)(var0 + (0x278)));
    FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)(var0 + (0x278)));
}

extern "C" ARM void func_ov009_02184c30(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (var0->unknown_c58_ == 0 || var0->unknown_c58_ == 12)
        return;
    *(volatile unsigned int*)0x04000444 = 0;
    func_ov023_021e5628(var0->unknown_7f8_, 0);
    if (var0->unknown_d9c_ & 0x200) {
        var0->unknown_878_.Draw(true);
        var0->unknown_cd8_.Draw(true);
    }
    *(volatile unsigned int*)0x04000448 = 1;
}

extern "C" ARM void func_ov009_02184ca4(unsigned char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    func_ov009_02184e58((Struct_ov009_02184e58_2*)arg0);
    signed char var1 = var0->unknown_c58_;
    if (var1 == 0 || var1 == 12)
        return;
    if (var0->unknown_d9c_ & 0x80)
        return;
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)&var0->unknown_1f8_[0]);
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)&var0->unknown_1f8_[1]);
    if (var0->unknown_d9c_ & 0x1000) {
        CopyBGScreenDataToVRAM_0204b088(&var0->unknown_158_[0], (int)0);
        var0->unknown_d9c_ &= ~0x1000;
    }
    if (var0->unknown_d9c_ & 0x2000) {
        CopyBGScreenDataToVRAM_0204b088(&var0->unknown_158_[3], (int)0);
        if (var0->unknown_c58_ == 8 || var0->unknown_c58_ == 9)
            CopyBGScreenDataToVRAM_0204b088(&var0->unknown_158_[2], (int)0);
        var0->unknown_d9c_ &= ~0x2000;
    }
    func_ov023_021d9a6c((char*)arg0);
    func_ov023_021d9d34((char*)arg0);
    func_ov023_021d9e60((char*)arg0);
    func_ov023_021da1dc(arg0);
}

extern "C" ARM void func_ov009_02184d70(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (!(var0->unknown_d9c_ & 0x80) || var0->unknown_d94_ == 2)
        return;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    unsigned char var2 = var0->unknown_d94_;
    if (var2 == 0) {
        int var3 = var0->unknown_c58_;
        short var4 = var3;
        if ((var3 == 3) | ((var3 == 2) | (var3 == 5)))
            var4 = var0->unknown_da3_ * 100 + var4;
        const char* var5 = (const char*)FindStringInTable_020e0434(&var0->unknown_e0_, var4);
        var0->unknown_d90_ = var1->QueueLoadFile(var5, 0);
        var0->unknown_d94_ = 1;
    } else if (var2 == 1) {
        if (var1->GetTaskStatus(var0->unknown_d90_) != 0)
            var0->unknown_d94_ = 2;
    }
}

extern "C" ARM void func_ov009_02184e58(Struct_ov009_02184e58_2* arg0)
{
    int var0;
    int var1;
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    if (arg0->unknown_d58_ != 2)
        return;

    if (arg0->unknown_c1c_ == 10)
    {
        arg0->unknown_0_[0].Reset();
        Struct_ov003_021594c4* var3[] = {&arg0->unknown_fc_[0], &arg0->unknown_fc_[1], &arg0->unknown_fc_[2]};
        for (int var4 = 0; var4 < 3; var4++)
        {
            Struct_ov003_021594c4* var5 = var3[var4];
            InitBGLayer_0204af64((BGLayer_02020cb8*)var5);
            SetBGScreenSize_0204b11c((unsigned char*)var5, 0);
            var5->unknown_1c_0_ = 0;
            var5->unknown_1c_4_ = data_ov009_0218b93d[var4];
            SetBGPriority_0204b5b4(var5, data_ov009_0218b946[var4]);
            SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)var5, 0, 0);
            AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)var5, &arg0->unknown_0_[0]);
            if (data_ov009_0218b943[var4] > 0)
                AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)var5, (unsigned char)data_ov009_0218b943[var4], &arg0->unknown_0_[0]);
        }
        char var6[4];
        void* var7;
        unsigned int var8;
        var2->GetLoadedFileByID(arg0->unknown_d54_, &var7, &var8);
        int var9 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var7);
        if (arg0->unknown_d59_ == 1)
            var9--;
        for (int var10 = 0; var10 < var9; var10++)
        {
            unsigned int var11;
            void* var12 = GetPacEntryData_020467f0((PacEntry_02020aec*)var7, var10, (void**)var6, (int*)&var11);
            if (var12 != NULL)
            {
                if (var10 == 2)
                {
                    LoadBGBlock_0204b174(&arg0->unknown_fc_[1], var12, &arg0->unknown_0_[0], var11);
                    LoadBGBlock_0204b174(&arg0->unknown_fc_[2], var12, &arg0->unknown_0_[0], var11);
                }
                else
                {
                    LoadBGBlock_0204b174(&arg0->unknown_fc_[0], var12, &arg0->unknown_0_[0], var11);
                }
            }
        }
        var2->RemoveTask(arg0->unknown_d54_);
        arg0->unknown_d54_ = -1;
        CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)&arg0->unknown_fc_[0], 0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_fc_[0], 0);
        FillBGScreenRect_0204bc74(&arg0->unknown_fc_[1], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_fc_[1], 0);
        FillBGScreenRect_0204bc74(&arg0->unknown_fc_[2], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_fc_[2], 0);
        arg0->unknown_d60_ &= ~0x80;
        arg0->unknown_d58_ = 0;
        return;
    }

    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1500;
    arg0->unknown_0_[1].Reset();
    var0 = 0;
    Struct_ov003_021594c4* var13[] = {&arg0->unknown_fc_[3], &arg0->unknown_fc_[4]};
    for (int var14 = 0; var14 < 2; var14++)
    {
        Struct_ov003_021594c4* var15 = var13[var14];
        InitBGLayer_0204af64((BGLayer_02020cb8*)var15);
        SetBGScreenSize_0204b11c((unsigned char*)var15, 0);
        var15->unknown_1c_0_ = 1;
        var15->unknown_1c_4_ = data_ov009_0218b93b[var14];
        SetBGPriority_0204b5b4(var15, data_ov009_0218b939[var14]);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)var15, 0, 0);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)var15, &arg0->unknown_0_[1]);
        unsigned char var16 = 0;
        for (int var17 = 0; data_ov009_0218ba30[var17] >= 0; var17 += 3)
        {
            if (arg0->unknown_c1c_ == data_ov009_0218ba30[var17])
            {
                var16 = data_ov009_0218ba30[var17 + var14 + 1];
                if (var14 == 0)
                    var0 = var16;
                break;
            }
        }
        if (var16 != 0)
            AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)var15, var16, &arg0->unknown_0_[1]);
    }

    char var18[4];
    void* var19;
    unsigned int var20;
    unsigned int var21;
    var2->GetLoadedFileByID(arg0->unknown_d54_, &var19, &var20);
    void* var22;
    int var23 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var19);
    if (arg0->unknown_c1c_ == 8)
    {
        if (arg0->unknown_d8f_ != 0)
            arg0->unknown_d8f_ = 0;
        else
            arg0->unknown_d8f_ = 1;
    }
    if (arg0->unknown_d59_ == 1)
        var23--;
    int var24 = var0 * 2 + 1;
    var1 = var0 + 1;
    for (int var25 = 0; var25 < var23; var25++)
    {
        var22 = GetPacEntryData_020467f0((PacEntry_02020aec*)var19, var25, (void**)var18, (int*)&var21);
        if (var22 == NULL)
            continue;
        if (arg0->unknown_c1c_ == 8)
        {
            Struct_ov003_021594c4* var26 = &arg0->unknown_fc_[4];
            if (var25 < var24)
            {
                if (arg0->unknown_d59_ == 1)
                {
                    if (var25 >= var1)
                        continue;
                }
                else if (var25 < var1 && var25 != 0)
                {
                    continue;
                }
                var26 = &arg0->unknown_fc_[3];
            }
            if (arg0->unknown_d8f_ != 0)
            {
                FlushBGBlock_0204b2e0(var26, (char*)var22);
            }
            else
            {
                char var27[5] = {};
                memcpy(var27, var22, 4);
                CopyBGBlockToVRAM_0204b3a0((BGLayer_02020cb8_6*)var26, (char*)var22);
                if (CompareBytes_02001aec(var27, data_ov009_0218bc20, 4) == 0)
                    LoadBGBlock_0204b174(var26, var22, &arg0->unknown_0_[1], var21);
            }
        }
        else if (var25 < var1)
        {
            LoadBGBlock_0204b174(&arg0->unknown_fc_[3], var22, &arg0->unknown_0_[1], var21);
        }
        else
        {
            LoadBGBlock_0204b174(&arg0->unknown_fc_[4], var22, &arg0->unknown_0_[1], var21);
        }
    }

    if (arg0->unknown_d8f_ != 0)
        return;
    var2->RemoveTask(arg0->unknown_d54_);
    arg0->unknown_d54_ = -1;
    int var28 = 0;
    if (arg0->unknown_d59_ == 0 && arg0->unknown_c1c_ == 1)
        var28 = 1;
    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)&arg0->unknown_fc_[3], var28, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    FillBGScreenRect_0204bc74(&arg0->unknown_fc_[4], 0, 0, 0, 0x20, 0x19, 0);
    arg0->unknown_d60_ |= 0x2000;
    if (arg0->unknown_fc_[4].unknown_1d_ != 0)
        func_ov023_021da274(arg0);
    arg0->unknown_d60_ &= ~0x2000;
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_fc_[3], 0);
    LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_fc_[4], 0);
    arg0->unknown_d60_ |= 0x4000;
    func_ov023_021d9d34((char*)arg0);
    arg0->unknown_d60_ &= ~0x4000;
    arg0->unknown_d60_ |= 0x8000;
    func_ov023_021d9e60((char*)arg0);
    arg0->unknown_d60_ &= ~0x8000;
    arg0->unknown_d60_ &= ~0x80;
    arg0->unknown_d58_ = 0;
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1700;
}

extern "C" ARM void func_ov009_021867bc(unsigned char* arg0, int arg1) {
    Struct_ov009_021842a0_5* var0 = (Struct_ov009_021842a0_5*)arg0;
    signed char var1 = (signed char)arg1;
    var0->unknown_c58_ = var1;
    var0->unknown_c59_ = 0;
    int var2 = var0->unknown_da3_;
    if (var0->unknown_da0_[var2] < arg1)
        var0->unknown_da0_[var2] = var1;
    var0->unknown_d9c_ |= 0x1100;
    if (arg1 != 9 && arg1 != 11 && arg1 != 12)
        var0->unknown_d9c_ |= 0x80;
}

extern "C" ARM void func_ov009_02185634(Struct_ov009_021842a0_6* arg0)
{
    unsigned int var0;
    GameState* var1 = GameState::GetInstance();
    GetResources_0200fb8c((int*)var1);
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    unsigned char var3 = arg0->unknown_c59_;
    if (var3 == 0)
    {
        arg0->unknown_0_[1].Reset();
        void* var4 = arg0->unknown_0_[1].Allocate(0x1800);
        unsigned int var5;
        LoadFileIntoMemory(data_ov009_0218bc25, var4, &var5);
        arg0->unknown_0_[5].Reset();
        LoadStringTable_020dfec0(arg0->unknown_e0_, &arg0->unknown_0_[5], var4, var5);
        arg0->unknown_d8_ = *(int*)(GetMessageWindow_020421a0() + 0x28);
        ClearItemTable_020de848(arg0->unknown_c8_);
        const int var99 = 0x29;
        func_020e0484(arg0->unknown_c8_, &arg0->unknown_0_[4], gItemDataPath_020f2a38, data_ov009_0218bab0, var99, 1);

        arg0->unknown_7f0_[0] = arg0->unknown_0_[3].Allocate(0xc20);
        func_ov023_021e4e8c(arg0->unknown_7f0_[0]);
        func_ov023_021e4f64(arg0->unknown_7f0_[0], &arg0->unknown_0_[3]);
        func_ov023_021e4fd8(arg0->unknown_7f0_[0]);
        func_ov023_021e6198(arg0->unknown_7f0_[0], (int)arg0->unknown_c8_);
        arg0->unknown_7f0_[1] = arg0->unknown_0_[3].Allocate(0xc20);
        func_ov023_021e4e8c(arg0->unknown_7f0_[1]);
        func_ov023_021e4f64(arg0->unknown_7f0_[1], &arg0->unknown_0_[3]);
        func_ov023_021e4fd8(arg0->unknown_7f0_[1]);
        func_ov023_021e6198(arg0->unknown_7f0_[1], (int)arg0->unknown_c8_);

        if (arg0->unknown_d95_ == 0)
        {
            Enum_ov009_02185634 var17 = Enum_ov009_02185634_3072;
            Enum_ov009_02185634_B var18 = Enum_ov009_02185634_B_48;
            BackgroundLoader::AddLockGlobal();
            BackgroundLoader::FreeAllocationsGlobal();
            GPCReadPair var12;
            GPCReadPair* var13 = &var12;
            unsigned int var14 = 0;
            unsigned char* var15 = gFileScratchSpace_0211e33c;
            int var16 = 0x30000;
            ZeroInitGPCPointer(&var13->pGPCFile);
            var13->ZeroInitializeMachine();
            if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var12.pGPCFile, var12.machine, data_ov009_0218bc3e, var15,
                                                           var14, var16, false, 0))
            {
                var0 = var14;
                var16 -= var0;
                if (DecompressFileFromGPCByName(var12.pGPCFile, var12.machine, var15 + var0, var14, var16,
                                                FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 0x7d0)))
                {
                    InitTextureVRAMArea_0207de48(arg0->unknown_808_, var17, var18);
                    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)arg0->unknown_808_);
                    RestoreTextureVRAMState_0207df90(arg0->unknown_808_);
                    ((Object3D*)arg0->unknown_878_)->SetModelFromFileCopy(arg0->unknown_b4_, var15 + var0, var14,
                                                       Model3D::TextureStagingMode_Normal);
                    SaveTextureVRAMState_0207dfac(arg0->unknown_808_);
                }
            }
            BackgroundLoader::RemoveLockGlobal();
            InitTextureVRAMArea_0207de48(arg0->unknown_c68_, 0x1a00, 0x20);
            var12.Reset();
            ZeroDestroyGPCPointer(&var12.pGPCFile);
        }

        Struct_ov009_021842a0_6* var19 = arg0;
        InitFollowCamera_020a2010(var19->unknown_800_);
        func_0202e5c0((Struct_0202e5c0*)var19->unknown_800_, 0xd000, 0xf800, 0x42ccc);
        SetCameraTarget_0202e5c8((unsigned char*)var19->unknown_800_, 0xd000, 0xf800, 0);
        UpdateCamera_0202e0a4(var19->unknown_800_);
        DisableCameraFollow_020a27a0(var19->unknown_800_);
        SetCamera_020100c4(var1, (int)var19->unknown_800_);

        arg0->unknown_da3_ = 0;
        arg0->unknown_da4_[0] = 2;
        arg0->unknown_da4_[1] = 2;
        arg0->unknown_da6_[0] = 0;
        arg0->unknown_da6_[1] = 0;
        arg0->unknown_da8_[0] = 0;
        arg0->unknown_da8_[1] = 5;
        arg0->unknown_daa_[0] = 3;
        arg0->unknown_daa_[1] = 3;
        arg0->unknown_dac_[0] = 0;
        arg0->unknown_dac_[1] = 0;
        arg0->unknown_dae_[0] = 0;
        arg0->unknown_dae_[1] = 3;
        if (arg0->unknown_d95_ == 1)
        {
            arg0->unknown_da6_[0] = 1;
            arg0->unknown_da6_[1] = 1;
            arg0->unknown_dac_[1] = 1;
            arg0->unknown_da8_[1] = 0;
            arg0->unknown_dae_[1] = 0;
        }
        memcpy(arg0->unknown_d74_, FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 0x4272), 0xb);
        arg0->unknown_d8a_ = 0;
        memcpy(arg0->unknown_d7f_, FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 0x4272), 0xb);
        arg0->unknown_d8b_ = 0;

        Struct_ov009_0218aa40 var20;
        Struct_ov003_021594c4* var21[4];
        Struct_ov009_02185634* var22 = &arg0->unknown_d88_->unknown_488_;
        var22->unknown_14_0_ = arg0->unknown_da3_;
        var22->unknown_14_1_ = arg0->unknown_daa_[arg0->unknown_da3_];
        int var23 = arg0->unknown_da8_[arg0->unknown_da3_];
        {
            Struct_ov009_02185634_4 var24 = *(Struct_ov009_02185634_4*)data_ov009_0218b998;
        }
        var22->unknown_14_4_ = var23;
        {
            signed char var30[10];
            int var31;
            unsigned char* var32;
            unsigned char* var33;
            int var34 = arg0->unknown_dae_[arg0->unknown_da3_];
            var33 = (unsigned char*)data_ov009_0218b998;
            var32 = (unsigned char*)var30;
            var31 = 10;
            do {
                unsigned char var35 = *var33;
                var33++;
                *var32 = var35;
                var32++;
            } while (--var31);
            var22->unknown_15_0_ = var34;
        }
        func_ov009_02188bf8((unsigned char*)arg0, arg0->unknown_da4_[arg0->unknown_da3_], &var22->unknown_18_, &var22->unknown_1a_);
        short var36 = func_ov009_02188b14(arg0, 5, arg0->unknown_da6_[arg0->unknown_da3_]) + 0x233c;
        short var37 = func_ov009_02188b14(arg0, 3, arg0->unknown_dac_[arg0->unknown_da3_]) + 0x2328;
        var20 = data_ov009_0218ba1c;
        var20.unknown_0_[2] = var36;
        var20.unknown_0_[3] = var37;
        memcpy(var22, &var20, 0x14);
        var22->unknown_16_ = -1;
        func_ov023_021e5e68(arg0->unknown_7f0_[0], (short)var22->unknown_18_, (short)var22->unknown_1a_);
        func_ov023_021e5e68(arg0->unknown_7f0_[1], (short)var22->unknown_18_, (short)var22->unknown_1a_);

        if (arg0->unknown_da2_ != 0)
        {
            func_ov023_021e6150(arg0->unknown_7f0_[0], 1);
            func_ov023_021e6150(arg0->unknown_7f0_[1], 1);
            switch (arg0->unknown_da2_)
            {
            case 1:
            case 7:
            case 8:
                var22->unknown_e_ = 0x4e24;
                break;
            case 2:
            case 9:
                var22->unknown_e_ = 0x5014;
                break;
            case 3:
            case 10:
                var22->unknown_e_ = 0x4fb3;
                break;
            case 4:
                var22->unknown_e_ = 0x5078;
                break;
            case 6:
            case 11:
                var22->unknown_e_ = 0x4e84;
                break;
            case 5:
                var22->unknown_e_ = 0x4a6a;
                break;
            case 12:
                var22->unknown_e_ = 0x50dc;
                break;
            }
            var22->unknown_0_ = 0x32cd;
            var22->unknown_16_ = 0x36b5;
            var22->unknown_2_ = 0x3f55;
            var22->unknown_a_ = 0x43fe;
        }
        if (arg0->unknown_d95_ == 0)
        {
            var22->unknown_0_ = 0x32cf;
            var22->unknown_16_ = 0x36b7;
            var22->unknown_2_ = 0x3f57;
            var22->unknown_a_ = 0x42e0;
        }

        var21[0] = &arg0->unknown_138_[0];
        var21[1] = &arg0->unknown_138_[1];
        var21[2] = &arg0->unknown_138_[2];
        var21[3] = &arg0->unknown_138_[5];
        for (int var38 = 0; var38 < 4; var38++)
        {
            Struct_ov003_021594c4* var39 = var21[var38];
            SafeAllocator* var40 = &arg0->unknown_0_[0];
            if (var38 == 3)
                var40 = &arg0->unknown_0_[2];
            InitBGLayer_0204af64((BGLayer_02020cb8*)var39);
            SetBGScreenSize_0204b11c((unsigned char*)var39, 0);
            unsigned char var41 = data_ov009_0218b978[var38];
            var39->unknown_1c_0_ = var41;
            var39->unknown_1c_4_ = data_ov009_0218b95c[var38];
            SetBGPriority_0204b5b4(var39, data_ov009_0218b968[var38]);
            SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)var39, 0, 0);
            AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)var39, var40);
            if (data_ov009_0218b952[var38] > 0)
                AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)var39, (unsigned char)data_ov009_0218b952[var38], var40);
        }

        arg0->unknown_d90_ = var2->QueueLoadFile(FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, arg0->unknown_c58_), NULL);
        arg0->unknown_c59_++;
    }
    else if (var3 == 1)
    {
        if (var2->GetTaskStatus(arg0->unknown_d90_) != 0)
        {
            char var44[4];
            void* var45;
            unsigned int var46;
            int var47;
            var2->GetLoadedFileByID(arg0->unknown_d90_, &var45, &var46);
            int var48 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var45);
            if (arg0->unknown_d95_ == 1)
                var48--;
            for (int var49 = 0; var49 < var48; var49++)
            {
                void* var50 = GetPacEntryData_020467f0((PacEntry_02020aec*)var45, var49, (void**)var44, &var47);
                if (var50 != NULL)
                {
                    if (var49 == 0)
                    {
                        LoadBGBlock_0204b174(&arg0->unknown_138_[2], var50, &arg0->unknown_0_[0], var47);
                        LoadBGBlock_0204b174(&arg0->unknown_138_[5], var50, &arg0->unknown_0_[2], var47);
                    }
                    else if (var49 <= 3)
                    {
                        LoadBGBlock_0204b174(&arg0->unknown_138_[0], var50, &arg0->unknown_0_[0], var47);
                    }
                    else
                    {
                        LoadBGBlock_0204b174(&arg0->unknown_138_[1], var50, &arg0->unknown_0_[0], var47);
                    }
                }
            }
            var2->RemoveTask(arg0->unknown_d90_);
            arg0->unknown_d90_ = -1;
            int var51 = 1;
            if (arg0->unknown_d95_ == 1)
                var51 = 0;
            CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)&arg0->unknown_138_[0], var51, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_138_[0], 0);
            FillBGScreenRect_0204bc74(&arg0->unknown_138_[1], 0, 0, 0, 0x20, 0x19, 0);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_138_[1], 0);
            FillBGScreenRect_0204bc74(&arg0->unknown_138_[2], 0, 0, 0, 0x20, 0x19, 0);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_138_[2], 0);
            FillBGScreenRect_0204bc74(&arg0->unknown_138_[5], 0, 0, 0, 0x20, 0x19, 0);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_138_[5], 0);
            arg0->unknown_d9c_ |= 0x1000;
            func_ov023_021da274(arg0);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_138_[1], 0);
            arg0->unknown_d9c_ &= ~0x1000;

            arg0->unknown_7d0_ = arg0->unknown_0_[0].Allocate(0x1000);
            Struct_ov006_02158478_3* var52;
            unsigned int var53 = 0x200;
            for (int var54 = 0; var54 < 1; var54++)
            {
                var52 = &arg0->unknown_370_[var54];
                SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var52, &arg0->unknown_0_[0], (int)arg0->unknown_7d0_, var53);
                var52->unknown_4_ = &arg0->unknown_138_[2];
            }
            arg0->unknown_1f8_.unknown_98_ = &arg0->unknown_138_[2];
            arg0->unknown_1f8_.unknown_b2_ = 1;
            SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)&arg0->unknown_1f8_, (TextWindow_0205cf78_2*)arg0->unknown_370_, 1);

            arg0->unknown_7d4_ = arg0->unknown_0_[2].Allocate(0x400);
            for (int var55 = 0; var55 < 4; var55++)
            {
                var52 = &arg0->unknown_450_[var55];
                SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var52, &arg0->unknown_0_[2], (int)arg0->unknown_7d4_,
                                       data_ov009_0218b990[var55]);
                var52->unknown_4_ = &arg0->unknown_138_[5];
            }
            arg0->unknown_2b4_.unknown_98_ = &arg0->unknown_138_[5];
            arg0->unknown_2b4_.unknown_b2_ = 1;
            SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)&arg0->unknown_2b4_, (TextWindow_0205cf78_2*)arg0->unknown_450_, 4);

            int var56;
            InitSpriteSet_0205a444((char*)arg0->unknown_7d8_);
            arg0->unknown_7d8_->unknown_50_ = 0;
            arg0->unknown_7d8_->inline_ov009_02185634_2(arg0->unknown_7dc_, 6);
            arg0->unknown_7d8_->unknown_3c_ = arg0->unknown_7e0_;
            for (var56 = 0; var56 < 6; var56++)
                InitSprite_0205a198((Sprite_02043368_2*)&arg0->unknown_7dc_[var56]);
            InitSpriteAnimationList_0205a234((SpriteAnimationList_02043368*)arg0->unknown_7e0_);

            InitSpriteSet_0205a444((char*)arg0->unknown_7e4_);
            arg0->unknown_7e4_->inline_ov009_02185634(1);
            arg0->unknown_7e4_->inline_ov009_02185634_2(arg0->unknown_7e8_, 0x19);
            arg0->unknown_7e4_->unknown_3c_ = arg0->unknown_7ec_;
            for (int var59 = 0; var59 < 0x19; var59++)
                InitSprite_0205a198((Sprite_02043368_2*)&arg0->unknown_7e8_[var59]);
            InitSpriteAnimationList_0205a234((SpriteAnimationList_02043368*)arg0->unknown_7ec_);

            arg0->unknown_d90_ = var2->QueueLoadFile(FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 1000), NULL);
            arg0->unknown_c59_++;
        }
    }
    else if (var3 == 2)
    {
        if (var2->GetTaskStatus(arg0->unknown_d90_) != 0)
        {
            char var61[4];
            void* var62;
            unsigned int var63;
            int var64;
            var2->GetLoadedFileByID(arg0->unknown_d90_, &var62, &var63);
            int var65 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var62);
            arg0->unknown_0_[6].Reset();
            for (int var66 = 0; var66 < var65; var66++)
            {
                void* var67 = GetPacEntryData_020467f0((PacEntry_02020aec*)var62, var66, (void**)var61, &var64);
                if (var67 != NULL)
                {
                    if (var66 < 4)
                        LoadSpriteSetFile_0205a528(arg0->unknown_7d8_, var67, var64, &arg0->unknown_0_[6]);
                    else
                        LoadSpriteSetFile_0205a528(arg0->unknown_7e4_, var67, var64, &arg0->unknown_0_[6]);
                }
            }
            var2->RemoveTask(arg0->unknown_d90_);
            arg0->unknown_d90_ = -1;
            arg0->unknown_c59_++;
        }
    }
    else
    {
        func_ov023_021e60e0(arg0->unknown_7f0_[0], 0x1eb);
        func_ov023_021e60e0(arg0->unknown_7f0_[1], 0x1eb);
        func_ov023_021e5974(arg0->unknown_7f0_[0], arg0->unknown_d88_, (short)arg0->unknown_d88_->unknown_568_, 0, 0);
        func_ov023_021e5974(arg0->unknown_7f0_[1], arg0->unknown_d88_, (short)arg0->unknown_d88_->unknown_568_, 0, 0);
        arg0->unknown_7f8_ = arg0->unknown_7f0_[0];
        arg0->unknown_7fc_ = arg0->unknown_7f0_[1];
        func_ov023_021d99a4(arg0);
        func_ov023_021d9c7c(arg0);
        func_ov023_021d9da4(arg0);
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)&arg0->unknown_2b4_, 2, 0);
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)&arg0->unknown_2b4_, 3, 0);
        func_ov009_02185888((Struct_ov009_02185888*)arg0->unknown_dc_);
        func_ov009_02185850((Struct_ov009_021847ec*)arg0->unknown_dc_);
        arg0->unknown_f8_ = &arg0->unknown_0_[7];
        arg0->unknown_ee_ = 1;
        func_ov009_02185c58((Struct_ov009_02185c58*)arg0->unknown_dc_);
        func_ov009_021867bc((unsigned char*)arg0, 1);
    }
}

extern "C" ARM void func_ov009_021863d0(Struct_ov009_021842a0* arg0)
{
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = (GameResources*)GetResources_0200fb8c((int*)var0);
    if (arg0->unknown_c59_ == 0)
    {
        if (GetBrightness((GameResources*)var1, false) == -16 &&
            GetBrightness((GameResources*)var1, true) == -16)
        {
            if (arg0->unknown_d9c_ & 0x80)
                return;
            SetBrightness(var1, 0, 15);
        }
        func_ov009_02188c2c(arg0);
        func_ov009_02188d9c(arg0);
        func_ov009_02188e70(arg0, arg0->unknown_da3_);
        arg0->unknown_c59_++;
    }
    if (arg0->unknown_c59_ == 1)
    {
        if (IsBrightnessTransitionActive(var1))
            return;
        arg0->unknown_d9c_ |= 1;
        arg0->unknown_c59_++;
    }
    else if (arg0->unknown_c59_ == 2)
    {
        if (arg0->unknown_d9c_ & 0x80)
            return;
        func_ov009_02188944(arg0, arg0->unknown_da3_);
        arg0->unknown_c59_++;
    }
    else if (arg0->unknown_c59_ == 3)
    {
        int var2 = func_ov009_02188ee8(arg0);
        if (var2 != arg0->unknown_c58_)
        {
            Struct_ov009_021863d0* var3 = (Struct_ov009_021863d0*)arg0->unknown_7fc_;
            if (var3->unknown_c12_ == 0)
            {
                func_ov023_021e6158((Struct_ov009_021863d0*)arg0->unknown_7fc_, 0);
                func_ov023_021e6158((Struct_ov009_021863d0*)arg0->unknown_7fc_, 2);
                func_ov023_021e6158((Struct_ov009_021863d0*)arg0->unknown_7fc_, 3);
                func_ov023_021e6158((Struct_ov009_021863d0*)arg0->unknown_7fc_, 4);
            }
        }
        if (var2 == -2)
        {
            func_ov009_021867bc((unsigned char*)arg0, 2);
            return;
        }
        if (var2 == -3)
        {
            if (arg0->unknown_d95_ == 1)
                arg0->unknown_d9c_ &= ~0x400;
            else if (arg0->unknown_d95_ == 0)
                *((unsigned char*)var0 + 0x6174) = 0;
            func_ov009_021867bc((unsigned char*)arg0, 11);
            return;
        }
        if (var2 >= 101 && var2 <= 108)
        {
            int var4 = var2 - 100;
            if (var4 <= arg0->unknown_da0_[arg0->unknown_da3_] && var4 != arg0->unknown_c58_)
                func_ov009_021867bc((unsigned char*)arg0, (unsigned char)var4);
        }
    }
}

extern "C" ARM void func_ov009_021865dc(Struct_ov009_021842a0* arg0) {
	unsigned char var0 = arg0->unknown_c59_;
	if (var0 == 0) {
		func_ov009_02188c2c(arg0);
		func_ov009_02188d9c(arg0);
		int var1 = arg0->unknown_da3_;
		unsigned char var2 = arg0->unknown_da4_[var1];
		func_ov009_02188e70(arg0, var2);
		arg0->unknown_d9c_ |= 1;
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 == 1) {
		if (arg0->unknown_d9c_ & 0x80) {
			return;
		}
		int var3 = arg0->unknown_da3_;
		unsigned char var4 = arg0->unknown_da4_[var3];
		func_ov009_02188944(arg0, var4);
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 != 2) {
		return;
	}
	int var5 = func_ov009_02188ee8(arg0);
	if (var5 == -2) {
		func_ov009_021867bc((unsigned char*)arg0, 3);
		return;
	}
	if (var5 == -3) {
		func_ov009_021867bc((unsigned char*)arg0, 1);
		return;
	}
	if (var5 < 0x65 || var5 > 0x6c) {
		return;
	}
	int var6 = arg0->unknown_da3_;
	int var7 = var5 - 0x64;
	signed char *var8 = arg0->unknown_da0_;
	if (var7 > var8[var6]) {
		return;
	}
	if (var7 == arg0->unknown_c58_) {
		return;
	}
	func_ov009_021867bc((unsigned char*)arg0, var7 & 0xff);
}

extern "C" ARM void func_ov009_021866f0(Struct_ov009_021842a0* arg0) {
    unsigned char var0 = arg0->unknown_c59_;
    if (var0 == 0) {
        func_ov009_02188c2c(arg0);
        func_ov009_02188d9c(arg0);
        int var1 = arg0->unknown_da3_;
        unsigned char var2 = arg0->unknown_da6_[var1];
        func_ov009_02188e70(arg0, var2);

        Vector3fix var3 = data_ov009_0218b9a4;
        Vector3fix var4 = data_ov009_0218b9b0;
        func_0202ee38((char*)arg0->unknown_924_, (int)&var3, 0x1e000);
        func_0202ee58((char*)arg0->unknown_924_, (int)&var4, 0x1e000);

        arg0->unknown_d9c_ |= 1;
        arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
        return;
    }
    if (var0 == 1) {
        if (arg0->unknown_d9c_ & 0x80) {
            return;
        }
        int var5 = arg0->unknown_da3_;
        unsigned char var6 = arg0->unknown_da6_[var5];
        func_ov009_02188944(arg0, var6);
        arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
        return;
    }
    if (var0 != 2) {
        return;
    }

    int var7 = func_ov009_02188ee8(arg0);
    int var8 = 0;
    if (var7 == -2) {
        func_ov009_021867bc((unsigned char*)arg0, 6);
        var8 = 1;
    } else if (var7 == -3) {
        func_ov009_021867bc((unsigned char*)arg0, 4);
        var8 = 1;
    } else if (var7 >= 0x65 && var7 <= 0x6c) {
        int var9 = arg0->unknown_da3_;
        int var10 = var7 - 0x64;
        signed char var11 = arg0->unknown_da0_[var9];
        if (var10 <= var11) {
            signed char var12 = arg0->unknown_c58_;
            if (var10 != var12) {
                func_ov009_021867bc((unsigned char*)arg0, var10 & 0xff);
                var8 = 1;
            }
        }
    }

    if (var8 != 0) {
        Vector3fix var13 = data_ov009_0218b9bc;
        Vector3fix var14 = data_ov009_0218b9c8;
        func_0202ee38((char*)arg0->unknown_924_, (int)&var13, 0x1e000);
        func_0202ee58((char*)arg0->unknown_924_, (int)&var14, 0x1e000);
    }
}

extern "C" ARM void func_ov009_021868c4(Struct_ov009_021842a0* arg0) {
	unsigned char var0 = arg0->unknown_c59_;
	if (var0 == 0) {
		func_ov009_02188c2c(arg0);
		func_ov009_02188d9c(arg0);
		int var1 = arg0->unknown_da3_;
		unsigned char var2 = arg0->unknown_dac_[var1];
		func_ov009_02188e70(arg0, var2);
		arg0->unknown_d9c_ |= 1;
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 == 1) {
		if (arg0->unknown_d9c_ & 0x80) {
			return;
		}
		int var3 = arg0->unknown_da3_;
		unsigned char var4 = arg0->unknown_dac_[var3];
		func_ov009_02188944(arg0, var4);
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 != 2) {
		return;
	}
	int var5 = func_ov009_02188ee8(arg0);
	if (var5 == -2) {
		func_ov009_021867bc((unsigned char*)arg0, 4);
		return;
	}
	if (var5 == -3) {
		func_ov009_021867bc((unsigned char*)arg0, 2);
		return;
	}
	if (var5 < 0x65 || var5 > 0x6c) {
		return;
	}
	int var6 = arg0->unknown_da3_;
	int var7 = var5 - 0x64;
	signed char *var8 = arg0->unknown_da0_;
	if (var7 > var8[var6]) {
		return;
	}
	if (var7 == arg0->unknown_c58_) {
		return;
	}
	func_ov009_021867bc((unsigned char*)arg0, var7 & 0xff);
}

extern "C" ARM void func_ov009_021869d8(Struct_ov009_021842a0* arg0) {
	unsigned char var0 = arg0->unknown_c59_;
	if (var0 == 0) {
		func_ov009_02188c2c(arg0);
		func_ov009_02188d9c(arg0);
		int var1 = arg0->unknown_da3_;
		unsigned char var2 = arg0->unknown_dae_[var1];
		func_ov009_02188e70(arg0, var2);
		arg0->unknown_d9c_ |= 1;
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 == 1) {
		if (arg0->unknown_d9c_ & 0x80) {
			return;
		}
		int var3 = arg0->unknown_da3_;
		unsigned char var4 = arg0->unknown_dae_[var3];
		func_ov009_02188944(arg0, var4);
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 != 2) {
		return;
	}
	int var5 = func_ov009_02188ee8(arg0);
	if (var5 == -2) {
		func_ov009_021867bc((unsigned char*)arg0, 5);
		return;
	}
	if (var5 == -3) {
		func_ov009_021867bc((unsigned char*)arg0, 3);
		return;
	}
	if (var5 < 0x65 || var5 > 0x6c) {
		return;
	}
	int var6 = arg0->unknown_da3_;
	int var7 = var5 - 0x64;
	signed char *var8 = arg0->unknown_da0_;
	if (var7 > var8[var6]) {
		return;
	}
	if (var7 == arg0->unknown_c58_) {
		return;
	}
	func_ov009_021867bc((unsigned char*)arg0, var7 & 0xff);
}

extern "C" ARM void func_ov009_02186aec(Struct_ov009_021842a0* arg0) {
	unsigned char var0 = arg0->unknown_c59_;
	if (var0 == 0) {
		func_ov009_02188c2c(arg0);
		func_ov009_02188d9c(arg0);
		int var1 = arg0->unknown_da3_;
		unsigned char var2 = arg0->unknown_daa_[var1];
		func_ov009_02188e70(arg0, var2);
		arg0->unknown_d9c_ |= 1;
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 == 1) {
		if (arg0->unknown_d9c_ & 0x80) {
			return;
		}
		int var3 = arg0->unknown_da3_;
		unsigned char var4 = arg0->unknown_daa_[var3];
		func_ov009_02188944(arg0, var4);
		arg0->unknown_c59_ = arg0->unknown_c59_ + 1;
		return;
	}
	if (var0 != 2) {
		return;
	}
	int var5 = func_ov009_02188ee8(arg0);
	if (var5 == -2) {
		const unsigned char var98 = 7;
		func_ov009_021867bc((unsigned char*)arg0, var98);
		return;
	}
	if (var5 == -3) {
		func_ov009_021867bc((unsigned char*)arg0, 5);
		return;
	}
	if (var5 < 0x65 || var5 > 0x6c) {
		return;
	}
	int var6 = arg0->unknown_da3_;
	int var7 = var5 - 0x64;
	signed char *var8 = arg0->unknown_da0_;
	if (var7 > var8[var6]) {
		return;
	}
	if (var7 == arg0->unknown_c58_) {
		return;
	}
	func_ov009_021867bc((unsigned char*)arg0, var7 & 0xff);
}

extern "C" ARM void func_ov009_02186c00(Struct_ov009_021842a0* arg0)
{
    if (arg0->unknown_c59_ == 0)
    {
        func_ov009_02188c2c(arg0);
        func_ov009_02188d9c(arg0);
        func_ov009_02188e70(arg0, arg0->unknown_da8_[arg0->unknown_da3_]);
        Vector3fix var0 = data_ov009_0218b9d4;
        Vector3fix var1 = data_ov009_0218b9e0;
        func_0202ee38((char*)arg0->unknown_924_, (int)&var0, 0x1e000);
        func_0202ee58((char*)arg0->unknown_924_, (int)&var1, 0x1e000);
        arg0->unknown_804_ = 0x1eb;
        arg0->unknown_d9c_ = (arg0->unknown_d9c_ | 8) & ~1;
        arg0->unknown_c59_++;
    }
    else if (arg0->unknown_c59_ == 1)
    {
        if (arg0->unknown_d9c_ & 0x80)
            return;
        func_ov009_02188944(arg0, arg0->unknown_da8_[arg0->unknown_da3_]);
        arg0->unknown_c59_++;
    }
    else if (arg0->unknown_c59_ == 2)
    {
        if (!(arg0->unknown_d9c_ & 1) && !(arg0->unknown_d9c_ & 8))
            arg0->unknown_d9c_ |= 1;
        int var2 = func_ov009_02188ee8(arg0);
        int var3 = 0;
        if (var2 == -2)
        {
            func_ov009_021867bc((unsigned char*)arg0, 8);
            var3 = 1;
        }
        else if (var2 == -3)
        {
            func_ov009_021867bc((unsigned char*)arg0, 6);
            var3 = 1;
        }
        else if (var2 >= 101 && var2 <= 108)
        {
            int var4 = var2 - 100;
            if (var4 <= arg0->unknown_da0_[arg0->unknown_da3_] && var4 != arg0->unknown_c58_)
            {
                func_ov009_021867bc((unsigned char*)arg0, (unsigned char)var4);
                var3 = 1;
            }
        }
        if (var3)
        {
            Vector3fix var5 = data_ov009_0218b9ec;
            Vector3fix var6 = data_ov009_0218b9f8;
            func_0202ee38((char*)arg0->unknown_924_, (int)&var5, 0x1e000);
            func_0202ee58((char*)arg0->unknown_924_, (int)&var6, 0x1e000);
        }
    }
}

extern "C" ARM void func_ov009_02186e00(Struct_ov009_021842a0* arg0)
{
    if (arg0->unknown_c59_ == 0) {
        arg0->unknown1_d8c_ = 0;
        func_ov009_02188c2c(arg0);
        func_ov009_02188d9c(arg0);
        func_ov009_02188e70(arg0, arg0->unknown1_d8c_);
        arg0->unknown_d9c_ |= 1;
        arg0->unknown_d8d_ = arg0->unknown_d8e_ = 0;
        arg0->unknown_d9c_ &= ~0x800;
        if (arg0->unknown_d8a_[arg0->unknown_da3_] != 0 && arg0->unknown_d74_[arg0->unknown_da3_][8] == 0) {
            for (int var0 = 1; var0 < 5; var0++) {
                if (arg0->unknown_d74_[arg0->unknown_da3_][var0 * 2] == 0) {
                    for (int var1 = var0; var1 < 5; var1++)
                        memcpy(&arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], data_ov009_0218bc59, 2);
                }
            }
            arg0->unknown_d9c_ |= 0x8000;
        }
        arg0->unknown_c59_++;
    } else if (arg0->unknown_c59_ == 1) {
        if (arg0->unknown_d9c_ & 0x80)
            return;
        if (!func_ov009_02185c58((Struct_ov009_02185c58*)arg0->unknown_dc_))
            return;
        int var2 = func_ov009_02188ee8(arg0);
        if (var2 == -2) {
            func_ov009_0218ad0c((Struct_ov009_0218ad0c*)arg0);
        } else if (var2 == -3) {
            func_ov009_021867bc((unsigned char*)arg0, 7);
        } else if (var2 >= 101 && var2 <= 108) {
            var2 -= 100;
            if (var2 <= arg0->unknown_da0_[arg0->unknown_da3_] && var2 != arg0->unknown_c58_)
                func_ov009_021867bc((unsigned char*)arg0, (unsigned char)var2);
        }
        if (arg0->unknown_d9c_ & 0x400000) {
            arg0->unknown_d9c_ |= 0x2000;
            arg0->unknown_c59_++;
        }
        if (arg0->unknown_d9c_ & 0x800) {
            if (var2 == -2)
                arg0->unknown_d9c_ |= 0x1000000;
            Struct_ov005_0215840c_2* var3 = (Struct_ov005_0215840c_2*)arg0->unknown_d88_;
            sprintf(var3->unknown_3c_, data_020ef078, arg0->unknown_d74_[arg0->unknown_da3_]);
            func_ov009_021867bc((unsigned char*)arg0, 9);
        }
    } else if (arg0->unknown_c59_ == 2) {
        if (g_keyManager.TestKeysPressed(0x401) || g_touchInput.pressed_ != 0) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            arg0->unknown_d9c_ = (arg0->unknown_d9c_ & ~0x400000) | 0x2000;
            arg0->unknown_c59_ = 1;
        } else if (g_keyManager.TestKeysPressed(2)) {
            arg0->unknown_d9c_ = (arg0->unknown_d9c_ & ~0x400000) | 0x2000;
            arg0->unknown_c59_ = 1;
        }
    }
}

inline Struct_ov009_0218742c_7* inline_ov009_0218742c_4(Struct_ov009_0218742c* arg0) { return arg0->unknown_14c_; }

extern "C" ARM void func_ov009_0218742c(Struct_ov009_0218742c_6* arg0) {
    GameState* var0 = GameState::GetInstance();
    GetGlobalFlags_020d6c00();
    unsigned int var1 = arg0->unknown_c59_;
    if (var1 == 0) {
        func_ov023_021d9f88(arg0);
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)arg0->unknown_2b4_, 3, 2);
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 5, 0);
        ++arg0->unknown_c59_;
    } else if (var1 == 1) {
        arg0->unknown_d9c_ |= 0x2000;
        ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, -8);
        arg0->unknown_d9c_ &= ~0x1000000;
        ++arg0->unknown_c59_;
    } else if (var1 == 2) {
        arg0->unknown_d84_ = GetCursorIndex_0205d794((Struct_0205c570*)arg0->unknown_2b4_);
        int var2 = 0;
        int var3 = IsEntryTouchedAgain_0205da38((TextWindowManager_0205da38*)arg0->unknown_2b4_, 0x14);
        int var4 = g_keyManager.TestKeysPressed(1);
        int var5 = g_keyManager.TestKeysPressed(0x400);
        if (var3 | (var4 | var5)) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            switch (arg0->unknown_d84_) {
            case 0: ++arg0->unknown_c59_; break;
            case 1: var2 = 1; break;
            }
        } else if (g_keyManager.TestKeysPressed(2)) var2 = 1;
        if (arg0->unknown_c59_ == 3) {
            CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)arg0->unknown_2b4_, 0);
            SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)arg0->unknown_2b4_, 3, 2);
            arg0->unknown_d9c_ &= ~0x20;
            arg0->unknown_d9c_ &= ~0x40;
        } else if (var2) {
            CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)arg0->unknown_2b4_, 0);
            arg0->unknown_d9c_ &= ~0x20;
            arg0->unknown_d9c_ &= ~0x40;
            arg0->unknown_c59_ = 255;
        }
    } else if (var1 == 3) {
        ClearBGScreenData_0204b010((BGLayer_0204b010*)arg0->unknown_1b8_, 0);
        FillBGScreenRect_0204bc74(arg0->unknown_1b8_, 0, 0, 0, 32, 25, 0);
        FlushBGScreenData_0204b04c(arg0->unknown_1b8_, 0);
        CopyBGScreenDataToVRAM_0204b088(arg0->unknown_1b8_, 0);
        if (arg0->unknown_d95_ == 0) {
            Struct_ov009_0218742c_9* var6 = arg0->unknown_d88_;
            var6->unknown_56a_ = data_ov009_0218a9b4[arg0->unknown_da8_[arg0->unknown_da3_]];
            ((Struct_ov009_0218742c_8*)var0)->unknown_63d4_ = 1;
            ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, 0);
            SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)arg0->unknown_2b4_, 3, 0);
            ClearTextWindowManagerBGScreenData_0205d1e0((TextWindowManager_0205d1e0*)arg0->unknown_2b4_);
            DrawTextWindows_0205d228((TextWindowManager_0205d228*)arg0->unknown_2b4_);
            FlushTextWindowManagerBGScreenData_0205d274((TextWindowManager_0205d274*)arg0->unknown_2b4_);
            CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)arg0->unknown_2b4_);
            func_ov009_021867bc((unsigned char*)arg0, 10);
        } else if (arg0->unknown_d95_ == 1) {
            void* var7 = GetParty_02010828(var0);
            Struct_ov009_0218742c var8;
            func_02086404(&var8);
            func_02083ca0((unsigned char*)arg0->unknown_d88_, arg0->unknown_da2_);
            arg0->unknown_d88_->unknown_138_[arg0->unknown_da2_] = 0;
            arg0->unknown_d88_->unknown_16c_[arg0->unknown_da2_] = 1;
            arg0->unknown_d88_->unknown_56a_ = NextRandomMax(GetBTRandom(), 16);
            char var9[32];
            int var10 = arg0->unknown_d88_->unknown_950_;
            sprintf(var9, data_ov009_0218ad2c, var10);
            Struct_ov009_0218742c_2 var11;
            func_0208247c(&var11);
            BackgroundLoader::AddLockGlobal();
            unsigned int var12;
            void* var13 = LoadFileIntoMemory(var9, gFileScratchSpace_0211e33c, &var12);
            if (var13) func_02082490(&var11, var13, var12, arg0->unknown_d88_->unknown_16c_[arg0->unknown_da2_], 0);
            func_02083cbc(arg0->unknown_d88_, &var11, var11.unknown_3c_);
            BackgroundLoader::RemoveLockGlobal();
            short* var14 = arg0->unknown_d88_->unknown_488_;
            for (int var15 = 0; var15 < 7; ++var15) {
                void* var16 = FindItemData_020dedd0((ItemTable_0201099c_10*)arg0->unknown_a8_, var14[data_ov009_0218aac8[var15].unknown_0_]);
                if (var16) memcpy(&arg0->unknown_d88_->unknown_194_[data_ov009_0218aac8[var15].unknown_1_], var16, 32);
            }
            func_02083e28(arg0->unknown_d88_, 0);
            func_020863c4((unsigned char*)arg0->unknown_d88_);
            Struct_ov009_0218742c_7* var17 = inline_ov009_0218742c_4(&var8);
            Struct_ov009_0218742c_9* var18 = arg0->unknown_d88_;
            var17[0].unknown_0_0_ = var18->unknown_0_[0].unknown_0_0_;
            var17[0].unknown_1_2_ = var18->unknown_0_[0].unknown_1_2_;
            var17[0].unknown_2_4_ = var18->unknown_0_[0].unknown_2_4_;
            var17[1].unknown_0_0_ = var18->unknown_0_[1].unknown_0_0_;
            var17[1].unknown_1_2_ = var18->unknown_0_[1].unknown_1_2_;
            var17[1].unknown_2_4_ = var18->unknown_0_[1].unknown_2_4_;
            var17[2].unknown_0_0_ = var18->unknown_0_[2].unknown_0_0_;
            var17[2].unknown_1_2_ = var18->unknown_6c_;
            var17[2].unknown_2_4_ = var18->unknown_6e_;
            var17[3].inline_ov009_0218742c_3(var18->unknown_6c_);
            var17[3].unknown_1_2_ = var18->unknown_6e_;
            var17[3].unknown_2_4_ = var18->unknown_70_;
            var17[4].unknown_0_0_ = var18->unknown_72_;
            var17[4].unknown_1_2_ = var18->unknown_0_[3].unknown_0_0_;
            int var19;
            ClearSpellTable_0209a804(&var19);
            Struct_ov009_0218742c_4 var20;
            func_0209a810((Struct_0201099c_18*)&var19, &var20);
            unsigned char var21 = arg0->unknown_d88_->unknown_950_;
            unsigned char var22 = arg0->unknown_d88_->unknown_16c_[arg0->unknown_d88_->unknown_950_];
            Struct_ov009_0218742c_3* var23 = var20.unknown_10c_[var21];
            for (int var24 = 0; var24 < 20; ++var24) {
                if (var22 >= var23[var24].unknown_2_ && var23[var24].unknown_2_ != 0)
                    func_02083b60((unsigned char*)arg0->unknown_d88_, var23[var24].unknown_0_);
            }
            func_020830cc(arg0->unknown_d88_, &var8);
            func_02086778(var7, &var8, 0, 0);
            arg0->unknown_d9c_ |= 0x400;
            func_ov009_021867bc((unsigned char*)arg0, 11);
        }
    } else if (var1 == 255) {
        ClearBGScreenData_0204b010((BGLayer_0204b010*)arg0->unknown_1b8_, 0);
        FillBGScreenRect_0204bc74(arg0->unknown_1b8_, 0, 0, 0, 32, 25, 0);
        FlushBGScreenData_0204b04c(arg0->unknown_1b8_, 0);
        CopyBGScreenDataToVRAM_0204b088(arg0->unknown_1b8_, 0);
        ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, 0);
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)arg0->unknown_2b4_, 3, 0);
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)arg0->unknown_2b4_, 2, 0);
        func_ov009_021867bc((unsigned char*)arg0, 8);
    }
}

extern "C" ARM void func_ov009_02187b34(Struct_ov009_021842a0_7* arg0)
{
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetResources_0200fb8c((int*)var0);
    Object3D* var2 = func_ov023_021e6194(arg0->unknown_7f8_);
    unsigned int* var3 = GetGlobalFlags_020d6c00();
    BackgroundLoader* var4 = BackgroundLoader::GetInstance();
    if (var4 == NULL)
        return;
    unsigned int var5 = var0->GetTickCount();
    if (var5 == 0)
        var5 = 1;
    func_ov023_021db4b4(arg0, var5);
    if (func_ov009_0218b908((char*)arg0, (unsigned int)var5) > 0)
        return;

    switch (arg0->unknown_c59_)
    {
    case 0:
    {
        arg0->unknown_d9c_ &= ~1;
        arg0->unknown_804_ = 0x7a;
        arg0->unknown_d9c_ |= 8;
        Struct_ov009_0218aa28 var6 = data_ov009_0218ba04;
        Struct_ov009_0218aa28 var7 = data_ov009_0218ba10;
        func_0202ee38(arg0->unknown_924_, (int)&var6, 0x1e000);
        func_0202ee58(arg0->unknown_924_, (int)&var7, 0x1e000);
        arg0->unknown_d98_ = 90;
        arg0->unknown_d9c_ |= 0x10000;
        StopMusic_0209c678((MusicManager_02109bf4_4*)gMusicManager_02109bf4, 120);
        arg0->unknown_c59_ = 1;
        int* var8 = arg0->unknown_c5c_;
        for (unsigned char var9 = 0; var9 < 3; var9++)
            *var8++ = -1;
        SafeAllocator* var10 = arg0->unknown_b8_;
        for (unsigned char var11 = 0; var11 < 2; var11++, var10++)
            var10->Reset();
        break;
    }
    case 1:
        if (arg0->unknown_d9c_ & 8)
            break;
        if (func_0202eeb4(arg0->unknown_924_) != 0)
            break;
        arg0->unknown_d9c_ |= 0x800000;
        if (func_ov023_021e6194(arg0->unknown_7f8_)->normalizedAnimationTime_ >= 0xccc)
        {
            LoadExtraSoundSet_0205ebc0(&gSoundEffectManager_02108760, 0x6f, 0x6f);
            arg0->unknown_c59_ = 2;
        }
        break;
    case 2:
    {
        short var12 = arg0->unknown_da3_ * 100 + 2001;
        short var13 = arg0->unknown_da3_ * 100 + 2002;
        Struct_ov009_0218aa98 var14 = data_ov009_0218ba4c;
        var14.unknown_0_[0].unknown_0_ = arg0->unknown_b8_;
        var14.unknown_0_[0].unknown_4_ = FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, var13);
        var14.unknown_0_[1].unknown_0_ = &arg0->unknown_b8_[1];
        var14.unknown_0_[1].unknown_4_ = FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, var12);
        var14.unknown_0_[2].unknown_0_ = arg0->unknown_b4_;
        var14.unknown_0_[2].unknown_4_ = FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 0x898);
        Struct_ov009_02187b34_2* var15 = var14.unknown_0_;
        const char* var16 = data_ov009_0218bc3e;
        for (; var15->unknown_0_ != NULL; var15++)
        {
            int var17;
            if (var15->unknown_8_ == 2)
                var17 = var4->QueueLoadFile(var15->unknown_4_, var15->unknown_0_);
            else
                var17 = var4->QueueLoadFileInGP2(var16, var15->unknown_4_, var15->unknown_0_);
            arg0->unknown_c5c_[var15->unknown_8_] = var17;
        }
        arg0->unknown_c59_ = 3;
        break;
    }
    case 3:
    {
        int var18 = 1;
        int* var19 = arg0->unknown_c5c_;
        for (unsigned char var20 = 0; var20 < 3; var20++, var19++)
        {
            if (*var19 != -1 && var4->GetTaskStatus(*var19) == 0)
                var18 = 0;
        }
        if (var18)
            arg0->unknown_c59_ = 4;
        break;
    }
    case 4:
    {
        int* var21 = arg0->unknown_c5c_;
        for (unsigned char var22 = 0; var22 < 3; var22++, var21++)
        {
            if (*var21 == -1)
                continue;
            if (var4->GetTaskStatus(*var21) == 1)
            {
                unsigned int var23 = 0;
                void* var24 = NULL;
                var4->GetLoadedFileByID(*var21, &var24, &var23);
                ObjectArchiveLoadInfo var25;
                var25.unk_0 = 0;
                var25.allocator = NULL;
                var25.unk_14 = 0;
                var25.unk_18 = 0;
                var25.unk_10 = 0;
                var25.packageID = 0;
                var25.fileData = var24;
                var25.unk_8 = var23;
                switch (var22)
                {
                case 0:
                    var25.allocator = arg0->unknown_b8_;
                    var25.packageID = 1;
                    var2->LoadFromCHRArchive(&var25);
                    break;
                case 1:
                    var25.allocator = &arg0->unknown_b8_[1];
                    arg0->unknown_878_.LoadFromCHRArchive(&var25);
                    break;
                case 2:
                    var25.allocator = arg0->unknown_b4_;
                    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)arg0->unknown_c68_);
                    RestoreTextureVRAMState_0207df90(arg0->unknown_c68_);
                    arg0->unknown_cd8_.LoadFromCHRArchive(&var25);
                    SaveTextureVRAMState_0207dfac(arg0->unknown_c68_);
                    break;
                }
            }
            var4->RemoveTask(*var21);
            *var21 = -1;
        }
        arg0->unknown_c59_ = 5;
        var2->StopCurrentAnimation();
        var2->MaybeSetRegularAnimation(FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 2500), 0);
        Vector3fix var26;
        memset(&var26, 0, sizeof(var26));
        var26 = var2->rotation_;
        Struct_ov009_02187b34* var27 = &arg0->unknown_d88_->unknown_488_;
        int var28;
        int var29;
        short var30 = var27->unknown_18_;
        var28 = ((int)((var30 / 4096.0f) > 0.0f ? 0.5f + 4096.0f * (var30 / 4096.0f) : 4096.0f * (var30 / 4096.0f) - 0.5f));
        var29 = ((int)((var27->unknown_1a_ / 4096.0f) > 0.0f ? 0.5f + 4096.0f * (var27->unknown_1a_ / 4096.0f) : 4096.0f * (var27->unknown_1a_ / 4096.0f) - 0.5f));
        int var31 = ((int)((var30 / 4096.0f) > 0.0f ? 0.5f + 4096.0f * (var30 / 4096.0f) : 4096.0f * (var30 / 4096.0f) - 0.5f));
        arg0->unknown_878_.SetScale(var28, var29, var31);
        arg0->unknown_878_.rotation_ = var26;
        arg0->unknown_878_.StopCurrentAnimation();
        arg0->unknown_878_.MaybeSetRegularAnimation(FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_e0_, 2500), 0);
        Vector3fix var32;
        var32 = ((Object3D*)((char*)var2 + 0x408))->position_;
        arg0->unknown_cd8_.rotation_ = var26;
        arg0->unknown_cd8_.position_ = var32;
        arg0->unknown_cd8_.StopCurrentAnimation();
        arg0->unknown_cd8_.MaybeSetRegularAnimation(data_ov009_0218bc71, 0);
        arg0->unknown_d9c_ |= 0x200;
        arg0->unknown_d96_ = 30;
        arg0->unknown_c59_ = 6;
        break;
    }
    case 6:
        PlayExtraSoundEffect_0205ebfc(&gSoundEffectManager_02108760, 0, 0);
        arg0->unknown_d96_ = 150;
        arg0->unknown_c59_ = 7;
        break;
    case 7:
        SetGlobalFlags_020466e4(var3, 0x100);
        SetBrightness(var1, 16, 40);
        PlayExtraSoundEffect_0205ebfc(&gSoundEffectManager_02108760, 1, 0);
        arg0->unknown_c59_ = 8;
        break;
    case 8:
        if (IsBrightnessTransitionActive(var1))
            break;
        ColorEffect_ConfigureBrightnessAdjust(0x04000050, 0x1f, -16);
        ColorEffect_ConfigureBrightnessAdjust(0x04001050, 0x1f, -16);
        arg0->unknown_d96_ = 120;
        arg0->unknown_c59_ = 9;
        break;
    case 9:
        if (arg0->unknown_d96_ > 0)
        {
            unsigned int var36 = var0->GetTickCount();
            if (var36 == 0)
                var36 = 1;
            arg0->unknown_d96_ -= var36;
            break;
        }
        SetBrightness(var1, -16, 120);
        arg0->unknown_c59_ = 10;
        break;
    case 10:
        if (IsBrightnessTransitionActive(var1))
            break;
        WriteBrightnessRegister_020c39a0(((short*)0x0400006c), -16);
        WriteBrightnessRegister_020c39a0(((short*)0x0400106c), -16);
        ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)var3, 0x100);
        ColorEffect_ConfigureBrightnessAdjust(0x04000050, 0x1f, 0);
        ColorEffect_ConfigureBrightnessAdjust(0x04001050, 0x1f, 0);
        UnloadExtraSoundSet_0205ebec(&gSoundEffectManager_02108760);
        arg0->unknown_c59_ = 11;
        break;
    case 11:
        arg0->unknown_c59_ = 0xff;
        func_ov009_021867bc((unsigned char*)arg0, 11);
        break;
    }
}

extern "C" ARM void func_ov009_021883cc(unsigned char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    GameResources* var1 = (GameResources*)GetResources_0200fb8c((int*)GameState::GetInstance());
    unsigned char var2 = var0->unknown_c59_;
    if (var2 == 0) {
        SetBrightness(var1, -16, 15);
        ++var0->unknown_c59_;
        return;
    }
    if (var2 != 1 || IsBrightnessTransitionActive(var1))
        return;
    CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)&var0->unknown_1f8_[0], 1);
    CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)&var0->unknown_1f8_[1], 1);
    ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, 0);
    func_ov009_021867bc(arg0, 12);
}

extern "C" ARM void func_ov009_02189214(Struct_ov009_021842a0_8* arg0) {
    if (arg0->unknown_d9c_ & 4) {
        Struct_ov009_021863d0* var0 = arg0->unknown_7fc_;
        if (var0 != NULL && var0->unknown_c12_ != 0)
            return;

        if (arg0->unknown_d9c_ & 0x40000) {
            func_ov023_021e60e0(arg0->unknown_7f8_, 0x1eb);
            arg0->unknown_d9c_ &= ~0x40000;
        }
        const Vector3i& var1 = func_ov023_021e613c(arg0->unknown_7f8_);
        func_ov023_021e6088(arg0->unknown_7fc_, (Struct_ov009_02188454*)&var1);

        Object3D* var2 = func_ov023_021e6194(arg0->unknown_7f8_);
        Object3D* var3 = func_ov023_021e6194(arg0->unknown_7fc_);
        const BCFG::AnimationRecord* var4 = var3->activeAnimationRecord_;
        int var5 = 0;
        int var6 = 0;
        const BCFG::AnimationRecord* var7 = var2->activeAnimationRecord_;
        if (var4 != NULL)
            var5 = GetStringLength_020d2ff0(var4->name);
        if (var7 != NULL)
            var6 = GetStringLength_020d2ff0(var7->name);
        if (var5 == var6 && var7 != NULL) {
            var3->MaybeSetRegularAnimation(var7->name, 0);
            var3->SetCurrentAnimationTime(var2->animationTime_);
        }

        Struct_ov009_021863d0* var8 = arg0->unknown_7f8_;
        arg0->unknown_7f8_ = arg0->unknown_7fc_;
        arg0->unknown_7fc_ = var8;

        if (arg0->unknown_d9c_ & 0x20000) {
            unsigned char var9 = arg0->unknown_da3_;
            Struct_ov009_02187b34* var10 = &arg0->unknown_d88_->unknown_488_;
            unsigned char var11 = arg0->unknown_da4_[var9];
            func_ov009_02188bf8((unsigned char*)arg0, var11, &var10->unknown_18_, &var10->unknown_1a_);
            func_ov023_021e5e68(arg0->unknown_7f8_, var10->unknown_18_, var10->unknown_1a_);
            func_ov023_021e5e68(arg0->unknown_7fc_, var10->unknown_18_, var10->unknown_1a_);
            arg0->unknown_d9c_ &= ~0x20000;
        }
        arg0->unknown_d9c_ &= ~4;
    }
}

extern "C" ARM void func_ov009_021885b8(Struct_ov009_02184a18* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (var0->unknown_d9c_ & 2) {
        void* var1 = var0->unknown_7fc_;
        Struct_ov009_021885b8* var2 = (Struct_ov009_021885b8*)var0->unknown_d88_;
        func_ov023_021e5974(var1, var2, var2->unknown_568_, 0, 0);
        var0->unknown_d9c_ = (var0->unknown_d9c_ | 4) & ~2;
    }
}

extern "C" ARM void func_ov009_021893c4(Struct_ov009_021842a0_9* arg0, unsigned int arg1)
{
    if (arg0->unknown_d9c_ & 8)
    {
        int var0 = 0;
        Vector3i var1 = func_ov023_021e613c(arg0->unknown_7f8_);
        int var2;
        int var3 = var1.y;
        int var4 = fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var3);
        if (var4 >= 0 && var4 < 0x3244)
        {
            var2 = var3 + var4 / 12;
            for (unsigned int var5 = 0; var5 < arg1 - 1; var5++)
                var2 += fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2) / 12;
        }
        else if (var4 >= 0x3244 && var4 < 0x6488)
        {
            var2 = var3 - (0x6488 - var4) / 12;
            for (unsigned int var6 = 0; var6 < arg1 - 1; var6++)
                var2 -= (0x6488 - fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2)) / 12;
        }
        func_ov023_021e60e0(arg0->unknown_7f8_, fix32ReduceAngle0To2Pi(var2));
        int var7 = fix32ReduceAngle0To2Pi(arg0->unknown_804_ - var2);
        if ((var7 < 0 ? -var7 : var7) < 40)
            var0 = 1;
        else if (((0x6488 - var7) < 0 ? -(0x6488 - var7) : (0x6488 - var7)) < 40)
            var0 = 1;
        if (var0)
        {
            func_ov023_021e60e0(arg0->unknown_7f8_, fix32ReduceAngle0To2Pi(arg0->unknown_804_));
            arg0->unknown_804_ = 0;
            arg0->unknown_d9c_ &= ~8;
        }
    }
    else if (arg0->unknown_d9c_ & 1)
    {
        int var8 = 0;
        int var9 = 0;
        int var10 = 0;
        int var11;
        int var12;
        g_touchInput.GetTouchPoint(&var11, &var12);
        if (g_touchInput.pressed_ != 0 || (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ||
            g_touchInput.released_ != 0)
        {
            var10 = 1;
            if (var12 >= 0xa9 && var12 <= 0xb1)
            {
                if (var11 >= 0xe && var11 <= 0x17)
                    var8 = 1;
                if (var11 >= 0x3b && var11 <= 0x44)
                    var9 = 1;
            }
        }
        if (var10 == 0)
        {
            if (g_keyManager.TestKeysHeld(0x200))
                var8 = 1;
            if (g_keyManager.TestKeysHeld(0x100))
                var9 = 1;
        }
        if (var8 != 0 && var9 != 0)
        {
            arg0->unknown_804_ = 0x1eb;
            arg0->unknown_d9c_ |= 8;
        }
        else if (var8 != 0 || var9 != 0)
        {
            Vector3i var13 = func_ov023_021e613c(arg0->unknown_7f8_);
            if (var8 != 0)
                var13.y += (int)(4096.0f * (0.08f * arg1));
            if (var9 != 0)
                var13.y -= (int)(4096.0f * (0.08f * arg1));
            var13.y = fix32ReduceAngle0To2Pi(var13.y);
            func_ov023_021e6088(arg0->unknown_7f8_, (Struct_ov009_02188454*)&var13);
        }
    }
}

extern "C" ARM void func_ov009_02188944(Struct_ov009_021842a0* arg0, int arg1)
{
    Struct_ov009_02187b34_3* var0 = &((Struct_ov005_0215840c_4*)arg0->unknown_d88_)->unknown_488_;
    int var1 = arg0->unknown_c58_;
    if (var1 == 1)
    {
        var0->unknown_14_0_ = arg1;
        func_ov023_021e6158(arg0->unknown_7fc_, 0);
        func_ov023_021e6158(arg0->unknown_7fc_, 2);
        func_ov023_021e6158(arg0->unknown_7fc_, 3);
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 2)
    {
        func_ov009_02188bf8((unsigned char*)arg0, arg1, &var0->unknown_18_, &var0->unknown_1a_);
        func_ov023_021e5e68(arg0->unknown_7f8_, var0->unknown_18_, var0->unknown_1a_);
        func_ov023_021e5e68(arg0->unknown_7fc_, var0->unknown_18_, var0->unknown_1a_);
    }
    else if (var1 == 5)
    {
        var0->unknown_0_[2] = func_ov009_02188b14(arg0, 5, arg1) + 0x233c;
        func_ov023_021e6158(arg0->unknown_7fc_, 2);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 3)
    {
        var0->unknown_0_[3] = func_ov009_02188b14(arg0, 3, arg1) + 0x2328;
        func_ov023_021e6158(arg0->unknown_7fc_, 3);
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 4)
    {
        var0->unknown_15_0_ = arg1;
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 6)
    {
        var0->unknown_14_1_ = arg1;
        func_ov023_021e540c(arg0->unknown_7f8_);
    }
    else if (var1 == 7)
    {
        var0->unknown_14_4_ = arg1;
        func_ov023_021e540c(arg0->unknown_7f8_);
    }
}

extern "C" ARM int func_ov009_02188b14(void* arg0, int arg1, int arg2) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    Struct_ov009_0218a9bc var1 = *(Struct_ov009_0218a9bc*)data_ov009_0218b998;
    if (arg1 == 5) {
        if (var0->unknown_da3_) {
            var1.unknown_0_[0] = 1;
            var1.unknown_0_[1] = 0;
        } else {
            var1.unknown_0_[0] = 4;
            var1.unknown_0_[1] = 0;
            var1.unknown_0_[2] = 1;
            var1.unknown_0_[3] = 2;
            var1.unknown_0_[4] = 3;
        }
        return var1.unknown_0_[arg2];
    }
    if (arg1 == 3) {
        if (var0->unknown_da3_) {
            var1.unknown_0_[0] = 6;
            var1.unknown_0_[1] = 0;
            var1.unknown_0_[2] = 1;
            var1.unknown_0_[3] = 2;
            var1.unknown_0_[4] = 3;
            var1.unknown_0_[5] = 4;
            var1.unknown_0_[6] = 5;
        }
        return var1.unknown_0_[arg2];
    }
    return arg2;
}

extern "C" ARM void func_ov009_02188bf8(unsigned char* arg0, int arg1, short* arg2, short* arg3) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (var0->unknown_da3_ == 0) {
        switch (arg1) {
        case 0: *arg2 = 0xeb8; *arg3 = 0x109f; break;
        case 1: *arg2 = 0xe35; *arg3 = 0x1028; break;
        case 2: *arg2 = 0xf0a; *arg3 = 0xfae; break;
        case 3: *arg2 = 0x1024; *arg3 = 0xf33; break;
        case 4: *arg2 = 0xf1e; *arg3 = 0xeb4; break;
        }
    } else {
        switch (arg1) {
        case 0: *arg2 = 0xeb8; *arg3 = 0x1051; break;
        case 1: *arg2 = 0xe39; *arg3 = 0xffb; break;
        case 2: *arg2 = 0xee1; *arg3 = 0xf85; break;
        case 3: *arg2 = 0x1024; *arg3 = 0xf33; break;
        case 4: *arg2 = 0xeb8; *arg3 = 0xeb4; break;
        }
    }
}

extern "C" ARM void func_ov009_02188c2c(Struct_ov009_021842a0* arg0) {
    int var0, var1, var2, var3, var4;
    signed char var5 = arg0->unknown_c58_;

    switch (var5) {
    case 1:
        var0 = 1;
        var1 = 2;
        var2 = var1;
        var3 = var0;
        var4 = arg0->unknown_da3_;
        break;
    case 2: {
        unsigned char var6 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 1;
        var2 = var0;
        var3 = var1;
        var4 = arg0->unknown_da4_[var6];
        break;
    }
    case 3: {
        unsigned char var7 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_dac_[var7];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 4: {
        unsigned char var8 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_dae_[var8];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 5: {
        unsigned char var9 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_da6_[var9];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 6: {
        unsigned char var10 = arg0->unknown_da3_;
        var0 = 4;
        var1 = 2;
        var4 = arg0->unknown_daa_[var10];
        var2 = 8;
        var3 = 1;
        break;
    }
    case 7: {
        unsigned char var11 = arg0->unknown_da3_;
        var0 = 4;
        var1 = 2;
        var4 = arg0->unknown_da8_[var11];
        var2 = 8;
        var3 = 1;
        break;
    }
    case 8:
        var0 = 0xb;
        var1 = 6;
        var2 = 0x42;
        var3 = 1;
        var4 = arg0->unknown1_d8c_;
        break;
    default:
        break;
    }

    Struct_ov009_02188c2c* var12 = &arg0->unknown_bec_;
    InitKeyMenuCursor_0205bef8((struct KeyMenuCursor_0205bef8*)var12);
    SetMenuCursorGrid_0205ba68((struct MenuCursor_0205ba68*)var12, var0, var1, 1);
    SetMenuCursorItemCount_0205bacc((struct MenuCursor_0205bacc*)var12, var2);
    var12->unknown_4_ = var3;
    SetMenuCursorIndex_0205bb04((struct MenuCursor_0205bb04*)var12, var4);
    var12->unknown_3d_ = 0;
}


extern "C" ARM void func_ov009_02188d9c(void *arg0) {
	int *var0 = (int*)((char*)arg0 + (0xbf0));
	int var1;

	func_ov009_021847c4((struct Struct_ov009_021847c4_2*)var0);

	var1 = 0;
	while (data_ov009_0218bb6c[var1] >= 0) {
		if (*(signed char*)((char*)arg0 + (0xc1c)) == data_ov009_0218bb6c[var1]) {
			int var2 = var1 + 1;
			int var3 = var1 + 2;
			int var4 = var1 + 3;
			int var5 = var1 + 4;
			int var6 = var1 + 5;
			int var7 = var1 + 6;
			int var8 = var1 + 7;
			int var9 = var1 + 8;
			var0[0] = data_ov009_0218bb6c[var2];
			var0[1] = data_ov009_0218bb6c[var3];
			var0[2] = data_ov009_0218bb6c[var4];
			var0[3] = data_ov009_0218bb6c[var5];
			var0[4] = data_ov009_0218bb6c[var6];
			var0[5] = data_ov009_0218bb6c[var7];
			var0[6] = data_ov009_0218bb6c[var8];
			var0[7] = data_ov009_0218bb6c[var9];
			return;
		}
		var1 += 9;
	}
}

extern "C" ARM void func_ov009_02188e70(Struct_ov009_021842a0* arg0, int arg1) {
    Struct_ov009_02188e70* var0 = &arg0->unknown_c2c_;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5 = var0->unknown_18_;
    var1 = var0->unknown_4_;
    var2 = var0->unknown_8_;
    var3 = var0->unknown_c_;
    var4 = var0->unknown_14_;
    int var6 = arg1 % var5;
    int var7 = arg1 / var5;
    arg0->unknown_c4c_ = var0->unknown_10_ * var6 + var0->unknown_0_;
    arg0->unknown_c4e_ = var4 * var7 + var1;
    arg0->unknown_c50_ = var2;
    arg0->unknown_c52_ = var3;
    if (arg0->unknown_c58_ == 8) {
        if (var6 >= 5)
            arg0->unknown_c4c_ += 8;
        if (var6 == var5 - 1) {
            arg0->unknown_c4c_ += 16;
            arg0->unknown_c50_ += 8;
            if (var7 == 5)
                arg0->unknown_c50_ += 8;
        }
    }
    arg0->unknown_c54_ = arg0->unknown_c4c_;
    arg0->unknown_c56_ = arg0->unknown_c4e_;
}

static inline unsigned char inline_ov009_02188ee8(Struct_ov009_021842a0* arg0) { return arg0->unknown_daa_[arg0->unknown_da3_]; }

static inline unsigned char inline_ov009_02188ee8_2(Struct_ov009_021842a0* arg0) { return arg0->unknown_da8_[arg0->unknown_da3_]; }

static inline unsigned char inline_ov009_02188ee8_3(Struct_ov009_021842a0* arg0) { return arg0->unknown_dae_[arg0->unknown_da3_]; }

#define RESET_NAVIGATION(columns, rows, total, selected) \
    Struct_ov009_02188c2c* navigation = &arg0->unknown_bec_; \
    InitKeyMenuCursor_0205bef8((KeyMenuCursor_0205bef8*)navigation); \
    SetMenuCursorGrid_0205ba68((MenuCursor_0205ba68*)navigation, columns, rows, 1); \
    SetMenuCursorItemCount_0205bacc((MenuCursor_0205bacc*)navigation, total); \
    navigation->unknown_4_ = 1; \
    SetMenuCursorIndex_0205bb04(navigation, selected); \
    navigation->unknown_3d_ = 0

#define TAB_CURSOR(selected) \
    arg0->unknown_c4c_ = ((selected) << 4) + 0x78; \
    arg0->unknown_c4e_ = 8; \
    arg0->unknown_c50_ = 16; \
    arg0->unknown_c52_ = 16

extern "C" ARM int func_ov009_02188ee8(Struct_ov009_021842a0* arg0)
{
    arg0->unknown_d9c_ &= ~0x20;
    arg0->unknown_d9c_ &= ~0x40;
    int var0 = -1;
    int var1 = -1;
    int var2, var3;
    g_touchInput.GetTouchPoint(&var2, &var3);
    int var4 = 0;
    if (g_touchInput.pressed_) {
        var4 = 1;
        var1 = func_ov009_0218a8b4((Struct_ov009_02189854_2*)arg0, var2, var3);
        arg0->unknown_d8c_ = var1;
        if ((unsigned int)(var1 + 3) <= 1) {
            if (var1 == -2) arg0->unknown_d9c_ |= 0x20;
            else if (var1 == -3) arg0->unknown_d9c_ |= 0x40;
            var0 = var1;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        } else if (var1 >= 101 && var1 <= 108) {
            var0 = var1;
            if (var1 - 100 <= arg0->unknown_da0_[arg0->unknown_da3_] && var1 - 100 != arg0->unknown_c58_)
                PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        } else if (var1 >= 0) {
            SetMenuCursorIndex_0205bb04(&arg0->unknown_bec_, var1);
            if (arg0->unknown_c58_ == 8) {
                func_ov009_0218aab0(arg0, (unsigned char)var1);
                if (arg0->unknown_d9c_ & 0x200000) {
                    arg0->unknown_d9c_ &= ~0x200000;
                    var0 = -2;
                }
                arg0->unknown_d9c_ |= 0x100;
            }
            arg0->unknown_c54_ = arg0->unknown_c4c_;
            arg0->unknown_c56_ = arg0->unknown_c4e_;
        }
    } else if (g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld) var4 = 1;
    else if (g_touchInput.released_) var4 = 1;
    if (!var4) {
        unsigned int var5 = GameState::GetInstance()->GetTickCount();
        if (!var5) var5 = 1;
        int var6 = arg0->unknown_bec_.unknown_1c_;
        if (UpdateKeyMenuCursor_0205bf58(&arg0->unknown_bec_, var5))
            var1 = GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_);
        if (arg0->unknown_c58_ == 8) {
            int var7 = arg0->unknown_bec_.unknown_c_;
            int var8 = GetMenuCursorItemCount_0205bafc(&arg0->unknown_bec_);
            if (var7 == 1 && var8 == 8) {
                if (var1 >= arg0->unknown_da0_[arg0->unknown_da3_]) {
                    SetMenuCursorIndex_0205bb04(&arg0->unknown_bec_, arg0->unknown_da0_[arg0->unknown_da3_] - 1);
                    var1 = arg0->unknown_da0_[arg0->unknown_da3_] - 1;
                }
                if (g_keyManager.TestKeysPressed(0x80)) {
                    RESET_NAVIGATION(11, 6, 66, arg0->unknown1_d8c_);
                    SetMenuCursorIndex_0205bb04(&arg0->unknown_bec_, arg0->unknown_bec_.unknown_18_);
                    arg0->unknown1_d8c_ = GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_);
                    arg0->unknown_d9c_ |= 0x2000;
                    func_ov009_02188e70(arg0, GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_));
                    return -1;
                }
                if (var1 >= 0) { TAB_CURSOR(var1); }
                if (g_keyManager.TestKeysPressed(1)) {
                    var0 = GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_) + 101;
                    if (var0 - 100 <= arg0->unknown_da0_[arg0->unknown_da3_] && var0 - 100 != arg0->unknown_c58_)
                        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
                } else if (g_keyManager.TestKeysPressed(2)) {
                    if (CompareBytes_02001aec(arg0->unknown_d74_[arg0->unknown_da3_], (const void*)FindStringInTable_020e0434(&arg0->unknown_e0_, 0x4272), 10) == 0)
                        var0 = -3;
                    else {
                        func_ov009_0218b200(arg0, 0);
                        arg0->unknown_d9c_ |= 0x8100;
                    }
                }
                return var0;
            } else if (var7 == 6) {
                if (g_keyManager.TestKeysPressed(0x40) && var6 == 0) {
                    RESET_NAVIGATION(8, 1, 8, arg0->unknown_c58_ - 1);
                    navigation->unknown_3c_ = 0;
                    TAB_CURSOR(arg0->unknown_c58_ - 1);
                    arg0->unknown_d9c_ |= 0x2000;
                    return -1;
                }
                if (g_keyManager.TestKeysPressed(8)) {
                    func_ov009_0218ad0c((Struct_ov009_0218ad0c*)arg0);
                } else if (g_keyManager.TestKeysPressed(4)) {
                    func_ov009_0218b850(arg0);
                    arg0->unknown_d9c_ |= 0x8100;
                } else if (g_keyManager.TestKeysPressed(1)) {
                    if (func_ov009_0218aab0(arg0, arg0->unknown1_d8c_) && arg0->unknown_d8a_[arg0->unknown_da3_] == 5) {
                        var1 = 65;
                        SetMenuCursorIndex_0205bb04(&arg0->unknown_bec_, var1);
                    }
                    if (!(arg0->unknown_d9c_ & 0x200000)) arg0->unknown_d9c_ |= 0xa100;
                    else {
                        func_ov009_0218ad0c((Struct_ov009_0218ad0c*)arg0);
                        arg0->unknown_d9c_ &= ~0x200000;
                    }
                } else if (g_keyManager.TestKeysPressed(2)) {
                    if (CompareBytes_02001aec(arg0->unknown_d74_[arg0->unknown_da3_], (const void*)FindStringInTable_020e0434(&arg0->unknown_e0_, 0x4272), 10) == 0)
                        var0 = -3;
                    else {
                        func_ov009_0218b200(arg0, 0);
                        arg0->unknown_d9c_ |= 0x8100;
                    }
                }
            }
        } else if (arg0->unknown_c58_ != 8) {
            int var9 = arg0->unknown_bec_.unknown_c_;
            int var10 = GetMenuCursorItemCount_0205bafc(&arg0->unknown_bec_);
            if (var9 == 1 && var10 == 8) {
                if (var1 >= arg0->unknown_da0_[arg0->unknown_da3_]) {
                    SetMenuCursorIndex_0205bb04(&arg0->unknown_bec_, arg0->unknown_da0_[arg0->unknown_da3_] - 1);
                    var1 = arg0->unknown_da0_[arg0->unknown_da3_] - 1;
                }
                if (g_keyManager.TestKeysPressed(0x80)) {
                    func_ov009_02188c2c(arg0);
                    arg0->unknown_d9c_ |= 0x2000;
                    func_ov009_02188e70(arg0, GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_));
                    return -1;
                }
                if (var1 >= 0) { TAB_CURSOR(var1); }
                if (g_keyManager.TestKeysPressed(1)) {
                    var0 = GetMenuCursorIndex_0205bb84((MenuCursor_0205bb84*)&arg0->unknown_bec_) + 101;
                    if (var0 - 100 <= arg0->unknown_da0_[arg0->unknown_da3_] && var0 - 100 != arg0->unknown_c58_)
                        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
                } else if (g_keyManager.TestKeysPressed(2)) var0 = -3;
                return var0;
            }
            if (g_keyManager.TestKeysPressed(0x40) && var6 == 0) {
                RESET_NAVIGATION(8, 1, 8, arg0->unknown_c58_ - 1);
                navigation->unknown_3c_ = 0;
                TAB_CURSOR(arg0->unknown_c58_ - 1);
                arg0->unknown_d9c_ |= 0x2000;
                return -1;
            }
            if (g_keyManager.TestKeysPressed(1)) {
                var0 = -2;
                PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            } else if (g_keyManager.TestKeysPressed(2)) var0 = -3;
        }
    }
    arg0->unknown_d9c_ &= ~0x10;
    if (var1 >= 0 && !(var1 >= 101 && var1 <= 108)) {
        switch (arg0->unknown_c58_) {
        case 1: if (arg0->unknown_da3_ != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_da3_ = var1; break;
        case 2: if (arg0->unknown_da4_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_da4_[arg0->unknown_da3_] = var1; break;
        case 3: if (arg0->unknown_dac_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_dac_[arg0->unknown_da3_] = var1; break;
        case 4: if (arg0->unknown_dae_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_dae_[arg0->unknown_da3_] = var1; break;
        case 5: if (arg0->unknown_da6_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_da6_[arg0->unknown_da3_] = var1; break;
        case 6: if (arg0->unknown_daa_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_daa_[arg0->unknown_da3_] = var1; break;
        case 7: if (arg0->unknown_da8_[arg0->unknown_da3_] != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown_da8_[arg0->unknown_da3_] = var1; break;
        case 8: if (arg0->unknown1_d8c_ != var1) arg0->unknown_d9c_ |= 0x10; arg0->unknown1_d8c_ = var1; break;
        }
    }
    if (arg0->unknown_d9c_ & 0x10) {
        if (arg0->unknown_c58_ != 8 || !var4) PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 2, 0);
        func_ov009_02188944(arg0, var1);
        if (arg0->unknown_c58_ == 1) {
            Struct_ov009_02187b34_4* var11 = &((Struct_ov005_0215840c_5*)arg0->unknown_d88_)->unknown_488_;
            arg0->unknown_d9c_ |= 0x60000;
            unsigned char var12 = inline_ov009_02188ee8(arg0);
            var11->unknown_14_1_ = var12;
            unsigned char var13 = inline_ov009_02188ee8_2(arg0);
            var11->unknown_14_4_ = var13;
            unsigned char var14 = inline_ov009_02188ee8_3(arg0);
            var11->unknown_15_0_ = var14;
            var11->unknown_0_[2] = func_ov009_02188b14(arg0, 5, arg0->unknown_da6_[arg0->unknown_da3_]) + 0x233c;
            var11->unknown_0_[3] = func_ov009_02188b14(arg0, 3, arg0->unknown_dac_[arg0->unknown_da3_]) + 0x2328;
        }
        if (!var4) func_ov009_02188e70(arg0, var1);
        arg0->unknown_d9c_ |= 0x6100;
    }
    return var0;
}

extern "C" int func_ov009_0218a8b4(Struct_ov009_02189854_2* arg0, int arg1, int arg2) {
        if (arg2 >= 0xa9 && arg2 <= 0xb8) {
            if (arg1 >= 0x98 && arg1 <= 0xc7)
                return -2;
            if (arg1 >= 0xd2 && arg1 <= 0xf9)
                return -3;
        }
        if (arg2 >= 8 && arg2 <= 24) {
            for (int var0 = 0; var0 < 8; ++var0) {
                int var1 = (var0 << 4) + 0x78;
                int var2 = var1 + 16;
                if (arg1 >= var1 && arg1 <= var2)
                    return var0 + 0x65;
            }
        }

        int var13;
        Struct_ov009_02189854* var3 = &arg0->unknown_c2c_;
        int var4 = var3->unknown_8_;
        int var5 = var3->unknown_c_;
        int var6 = var3->unknown_10_;
        int var7 = var3->unknown_14_;
        int var8 = var3->unknown_18_;
        int var9 = var3->unknown_1c_;
        int var10 = -4;
        for (int var11 = 0; var11 < var9; ++var11) {
            for (int var12 = 0; var12 < var8; ++var12) {
                var13 = var3->unknown_0_ + var6 * var12;
                if (arg0->unknown_c58_ == 8) {
                    if (var12 >= 5)
                        var13 += 8;
                    if (var12 == var8 - 1) {
                        var4 = 0x18;
                        var13 += 0x10;
                        if (var11 == 5)
                            var4 += 8;
                    }
                }
                int var14 = var13 + var4;
                if (arg1 >= var13 && arg1 <= var14) {
                    int var15 = var3->unknown_4_ + var7 * var11;
                    int var16 = var15 + var5;
                    if (arg2 >= var15 && arg2 <= var16) {
                        var10 = var12 + var11 * var8;
                        arg0->unknown_c4c_ = var13;
                        arg0->unknown_c4e_ = var15;
                        arg0->unknown_c50_ = var4;
                        arg0->unknown_c52_ = var5;
                        break;
                    }
                }
            }
            if (var10 >= 0)
                break;
            if (arg0->unknown_c58_ == 8)
                var4 = var3->unknown_8_;
        }

        int var17 = arg0->unknown_bf8_;
        int var18 = GetMenuCursorItemCount_0205bafc(arg0->unknown_bec_);
        if (var17 == 1 && var18 == 8 && var10 >= 0 && var10 != 0x65 && var10 != 0x6c) {
            func_ov009_02188c2c((Struct_ov009_021842a0*)arg0);
            SetMenuCursorIndex_0205bb04(arg0->unknown_bec_, var10);
            arg0->unknown_d9c_ |= 0x2000;
            int var19 = GetMenuCursorIndex_0205bb84(arg0->unknown_bec_);
            func_ov009_02188e70((Struct_ov009_021842a0*)arg0, var19);
        }
        return var10;
    }

extern "C" ARM int func_ov009_0218aab0(Struct_ov009_021842a0* arg0, unsigned char arg1)
{
    GetMessageWindow_020421a0();
    char var0[3] = {};
    int var1 = -1;
    int var2 = 0;
    const char* var3 = (const char*)FindStringInTable_020e0434(&arg0->unknown_e0_, (short)(arg0->unknown_d8d_ + 0x4268));
    memcpy(var0, var3 + arg1 * 2, 2);
    PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
    if (CompareBytes_02001aec(var0, data_ov009_0218bc73, 2) == 0) {
        arg0->unknown_d9c_ |= 0x200000;
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc76, 2) == 0) {
        func_ov009_0218b200(arg0, 0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_];
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc79, 2) == 0) {
        arg0->unknown_d8d_ = 0;
        arg0->unknown_d9c_ |= 0x2000;
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc7c, 2) == 0) {
        arg0->unknown_d8d_ = 1;
        arg0->unknown_d9c_ |= 0x2000;
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc7f, 2) == 0) {
        func_ov009_0218b2e8(arg0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_] - 1;
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc82, 2) == 0) {
        func_ov009_0218b680(arg0);
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_] - 1;
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc85, 2) == 0) {
    } else if (CompareBytes_02001aec(var0, data_ov009_0218bc88, 2) == 0) {
        if (arg0->unknown_d95_ == 1) {
            func_ov009_0218b850(arg0);
            arg0->unknown_d9c_ |= 0x8000;
        }
    } else {
        var1 = arg0->unknown_d8a_[arg0->unknown_da3_];
        if (var1 >= 5) --var1;
        memcpy(&arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], var0, 2);
        arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
        var2 = 1;
    }
    if (var1 >= 0) arg0->unknown_d9c_ |= 0x8000;
    return var2;
}

extern "C" ARM void func_ov009_0218ad0c(Struct_ov009_0218ad0c* arg0) {
    char var0[11];
    int var1;
    int var5;
    int var6;
    int var8;
    char* var7;
    int var10;
    Struct_ov009_0218ad0c_2* var13;
    int var12;
    Struct_ov009_0218ad0c_2* var24;
    unsigned int var15;
    Struct_ov009_0218ad0c_2* var11;
    int var16;
    int var17;
    int var18;
    char* var19;
    unsigned int var20;
    Struct_ov009_0218ad0c_2* var21;
    char* var23;
    int var26;
    int var27;
    char* var28;
    char* var14;
    char* var25;
    int var29;
    int var30;
    int var4;
    char* var3;
    __clear(var0, 11);
    memcpy(var0, arg0->unknown_d74_[arg0->unknown_d67_], 11);
    for (var1 = 1; var1 < 5; var1++) {
        char var2[3];
        __clear(var2, 3);
        memcpy(var2, var0 + var1 * 2, 2);
        if (CompareBytes_02001aec(var2, data_ov009_0218bc59, 2) == 0) {
            memset(var0 + var1 * 2, 0, 11 - var1 * 2);
            break;
        }
    }
    var3 = var0;
    var4 = strlen(var3);
    var7 = arg0->unknown_dc_.unknown_c_;
    if (var7 == NULL || (var8 = arg0->unknown_dc_.unknown_10_) == 0) {
        var6 = 0;
    } else {
        while (*var7 != 0 && var8 > 0) {
            var10 = strlen(var7);
            if (var4 == var10 && strcmp(var0, var7) == 0) {
                var6 = 1;
                goto found1;
            }
            var8 -= var10 + 1;
            var7 += var10 + 1;
        }
        var6 = 0;
    }
found1:
    if (var6 != 0) {
        var5 = 1;
        goto done;
    }
    while (*var3 != 0 || var4 > 2) {
        var12 = arg0->unknown_dc_.unknown_0_0_;
        if (var12 <= 0 || (var13 = arg0->unknown_dc_.unknown_4_) == NULL) {
            var13 = NULL;
        }
        var14 = arg0->unknown_dc_.unknown_8_;
        var15 = func_ov009_0218b150(((unsigned char)var3[0] << 8) | (unsigned char)var3[1]);
        var16 = 0;
        var17 = var12 - 1;
        while (var16 <= var17) {
            var18 = var16 + (var17 - var16 + 1) / 2;
            var19 = var14 + var13[var18].unknown_0_5_;
            var20 = ((unsigned char)var19[0] << 8) | (unsigned char)var19[1];
            var21 = &var13[var18];
            if (var15 == var20) {
                var11 = var21 - 1;
                while (var11 >= var13) {
                    var23 = var14 + var11->unknown_0_5_;
                    if (var15 != (((unsigned char)var23[0] << 8) | (unsigned char)var23[1])) {
                        break;
                    }
                    var21 = var11;
                    var11--;
                }
                var24 = var13 + var12;
                for (var11 = var21; var11 < var24; var11++) {
                    var25 = var14 + var11->unknown_0_5_;
                    if (var15 != (((unsigned char)var25[0] << 8) | (unsigned char)var25[1])) {
                        break;
                    }
                    var26 = var11->unknown_0_0_ ? var11->unknown_0_1_ * 2 : var11->unknown_0_1_;
                    if (var26 <= var4) {
                        var28 = var3;
                        while (*var28 != 0 && var26 > 0) {
                            var29 = (*var28 & 0x80) ? 2 : 1;
                            if (func_ov009_0218b150(func_ov009_0218b1e8((unsigned char*)var28, var29)) != func_ov009_0218b1e8((unsigned char*)var25, var29)) {
                                var27 = 0;
                                goto cmp;
                            }
                            var25 += var29;
                            var28 += var29;
                            var26 -= var29;
                        }
                        var27 = 1;
                    cmp:
                        if (var27 != 0) {
                            goto found2;
                        }
                    }
                }
                var11 = NULL;
                goto found2;
            }
            if (var15 < var20) {
                var17 = var18 - 1;
            } else {
                var16 = var18 + 1;
            }
        }
        var11 = NULL;
    found2:
        if (var11 != NULL) {
            var5 = 1;
            goto done;
        }
        var30 = (*var3 & 0x80) ? 2 : 1;
        var3 += var30;
        var4 -= var30;
    }
    var5 = 0;
done:
    if (var5 != 0) {
        arg0->unknown_d60_ |= 0x400000;
        return;
    }
    char var31[3];
    __clear(var31, 3);
    memcpy(var31, arg0->unknown_d74_[arg0->unknown_d67_], 2);
    if (CompareBytes_02001aec(var31, data_ov009_0218bc59, 2) == 0) {
        arg0->unknown_d60_ &= ~0x800;
    } else {
        arg0->unknown_d60_ |= 0x800;
    }
    if (arg0->unknown_d60_ & 0x800) {
        for (int var32 = 1; var32 < 5; var32++) {
            memcpy(var31, arg0->unknown_d74_[arg0->unknown_d67_] + var32 * 2, 2);
            if (CompareBytes_02001aec(var31, data_ov009_0218bc59, 2) == 0) {
                memset(arg0->unknown_d74_[arg0->unknown_d67_] + var32 * 2, 0, 11 - var32 * 2);
                break;
            }
        }
    }
}

extern "C" ARM int func_ov009_0218b150(int arg0) {
    if (arg0 >= 0x8340 && arg0 <= 0x837e) {
        arg0 -= 0xa1;
    } else if (arg0 >= 0x8380 && arg0 <= 0x8393) {
        arg0 -= 0xa2;
    }
    if (((arg0 >= 0x829f && arg0 <= 0x82a7) || (arg0 >= 0x82e1 && arg0 <= 0x82e5)) && (arg0 & 1) == 1 || arg0 == 0x82c1) {
        arg0 += 1;
    }
    return arg0;
}

extern "C" ARM int func_ov009_0218b1e8(unsigned char* arg0, int arg1) {
    if (arg1 == 2) {
        return (arg0[0] << 8) | arg0[1];
    }
    return *(signed char*)arg0;
}

extern "C" ARM void func_ov009_0218b200(Struct_ov009_021842a0* arg0, int arg1) {
    char var0[3];
    __clear(var0, 3);
    for (int var1 = 4; var1 >= 0; var1--) {
        memcpy(var0, &arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], 2);
        if (CompareBytes_02001aec(var0, data_ov009_0218bc59, 2) != 0) {
            char var2[3];
            __clear(var2, 3);
            memcpy(var2, &arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], 2);
            memcpy(&arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], data_ov009_0218bc59, 2);
            arg0->unknown_d8a_[arg0->unknown_da3_] = var1;
            return;
        }
    }
}

extern "C" ARM void func_ov009_0218b2e8(Struct_ov009_021842a0* arg0) {
    char var0[3];
    for (int var1 = 4; var1 >= 0; var1--) {
        int var9 = var1 * 2;
        __clear(var0, 3);
        memcpy(var0, &arg0->unknown_d74_[arg0->unknown_da3_][var9], 2);
        if (CompareBytes_02001aec(var0, data_ov009_0218bc59, 2) != 0) {
            unsigned char var2[3];
            __clear(var2, 3);
            memcpy(var2, &arg0->unknown_d74_[arg0->unknown_da3_][var9], 2);
            if (var2[0] == 0x83 && var2[1] == 0x45) {
                arg0->unknown_d74_[arg0->unknown_da3_][var9] = 0x83;
                arg0->unknown_d74_[arg0->unknown_da3_][var9 + 1] = 0x94;
                arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
            } else if (var2[0] == 0x82 && var2[1] >= 0x9f && var2[1] <= 0xf1) {
                unsigned char var3[3] = {0xa9, 0xc2, 0xcd};
                unsigned char var4[3] = {0xbf, 0xc7, 0xdb};
                for (int var5 = 0; var5 < 3; var5++) {
                    if (var3[var5] <= var2[1] && var2[1] <= var4[var5]) {
                        switch (var5) {
                        case 0:
                            var2[1] -= 1;
                            var2[1] /= 2;
                            var2[1] *= 2;
                            var2[1] += 2;
                            break;
                        case 1:
                            var2[1] /= 2;
                            var2[1] *= 2;
                            var2[1] += 1;
                            break;
                        case 2:
                            var2[1]--;
                            var2[1] -= var2[1] % 3;
                            var2[1] += 2;
                            break;
                        }
                        arg0->unknown_d74_[arg0->unknown_da3_][var9 + 1] = var2[1];
                        arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
                        break;
                    }
                }
            } else if (var2[0] == 0x83 && var2[1] >= 0x40 && var2[1] <= 0x96) {
                unsigned char var6[3] = {0x4a, 0x63, 0x6e};
                unsigned char var7[3] = {0x61, 0x68, 0x7c};
                for (int var8 = 0; var8 < 3; var8++) {
                    if (var6[var8] <= var2[1] && var2[1] <= var7[var8]) {
                        switch (var8) {
                        case 0:
                            var2[1] /= 2;
                            var2[1] *= 2;
                            var2[1] += 1;
                            break;
                        case 1:
                            var2[1] -= 1;
                            var2[1] /= 2;
                            var2[1] *= 2;
                            var2[1] += 2;
                            break;
                        case 2:
                            var2[1] -= 2;
                            var2[1] -= var2[1] % 3;
                            var2[1] += 3;
                            break;
                        }
                        arg0->unknown_d74_[arg0->unknown_da3_][var9 + 1] = var2[1];
                        arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
                        break;
                    }
                }
            }
            return;
        }
    }
}

extern "C" ARM void func_ov009_0218b680(Struct_ov009_021842a0* arg0) {
    char var0[3];
    for (int var1 = 4; var1 >= 0; var1--) {
        int var9 = var1 * 2;
        __clear(var0, 3);
        memcpy(var0, &arg0->unknown_d74_[arg0->unknown_da3_][var9], 2);
        if (CompareBytes_02001aec(var0, data_ov009_0218bc59, 2) != 0) {
            unsigned char var2[3];
            __clear(var2, 3);
            memcpy(var2, &arg0->unknown_d74_[arg0->unknown_da3_][var9], 2);
            unsigned char var3[2] = {0xcd, 0x6e};
            unsigned char var4[2] = {0xdb, 0x7c};
            if (var2[0] == 0x82 && var3[0] <= var2[1] && var2[1] <= var4[0]) {
                var2[1]--;
                var2[1] -= var2[1] % 3;
                var2[1] += 3;
                arg0->unknown_d74_[arg0->unknown_da3_][var9 + 1] = var2[1];
                arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
            } else if (var2[0] == 0x83 && var3[1] <= var2[1] && var2[1] <= var4[1]) {
                var2[1] -= 2;
                var2[1] -= var2[1] % 3;
                var2[1] += 4;
                arg0->unknown_d74_[arg0->unknown_da3_][var9 + 1] = var2[1];
                arg0->unknown_d8a_[arg0->unknown_da3_] = var1 + 1;
            }
            return;
        }
    }
}

extern "C" ARM void func_ov009_0218b850(Struct_ov009_021842a0* arg0)
{
    const char* var0 = (const char*)FindStringInTable_020e0434(&arg0->unknown_e0_, 0x4272);
    memcpy(arg0->unknown_d74_[arg0->unknown_da3_], var0, 11);
    int var1 = rand() % 101;
    short var2 = (arg0->unknown_da3_ * 1000 + 0x4e20) + var1;
    int var3 = GetStringLength_020d2ff0((const char*)FindStringInTable_020e0434(&arg0->unknown_e0_, var2));
    const char* var4 = (const char*)FindStringInTable_020e0434(&arg0->unknown_e0_, var2);
    memcpy(arg0->unknown_d74_[arg0->unknown_da3_], var4, var3);
    arg0->unknown_d8a_[arg0->unknown_da3_] = var3 / 2;
}

extern "C" ARM int func_ov009_0218b908(char* arg0, int arg1) {
    short var0 = *(short*)(arg0 + 0xd5a);
    if (var0 > arg1) {
        *(short*)(arg0 + 0xd5a) = var0 - arg1;
        goto ret1;
    }
    *(short*)(arg0 + 0xd5a) = 0;
    return 0;
ret1:
    return 1;
}
#endif
