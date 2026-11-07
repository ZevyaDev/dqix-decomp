#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Memory/SafeAllocator.h"
#include "Resource/MessageSystem.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Combat/MapDisplay.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif


struct SpriteAnimationList_02043368 {
    int pAnimations_0_;
    unsigned short animationCount_4_;
};
struct TextureVRAMArea_0203d028;
struct StringTable_0201099c_14;
struct Struct_0201099c_3;
struct SaveProgress_020a9ea4;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct GlobalFlags_02038598_4;
struct Struct_020444e0;
struct Struct_0203bdb0;

extern "C" unsigned int* GetGlobalFlags_020d6c00();
extern "C" void SetLoadingIndicator_020daf9c(int isShown, int isFadeWaitSkipped, int isScreenBlanked, int isMainScreenForced);
extern "C" void InitSpriteSet_0205a444(char* spriteSet);
extern "C" void InitSprite_0205a198(Sprite_02043368_2* sprite);
extern "C" void InitSpriteAnimationList_0205a234(SpriteAnimationList_02043368* animationList);
extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);
extern "C" void func_0200fb84(int* arg0, int arg1);
extern "C" char* GetBGVRAMManager_0203b628();
extern "C" void func_0203b634(char* arg0);
extern "C" void* GetOAMManager_0203bd08(void);
extern "C" void ResetOAMManager_0203bd24(char* oamManager);
void LockStagedTextureVRAMCopying();
extern "C" unsigned int DisableTextureImageVRAMBanks();
extern "C" unsigned int DisableTexturePaletteVRAMBanks();
extern "C" unsigned int DisableMainBGVRAMBanks();
extern "C" unsigned int DisableSubBGVRAMBanks();
extern "C" unsigned int DisableMainObjVRAMBanks();
extern "C" unsigned int DisableSubObjVRAMBanks();
extern "C" void MapVRAMBanksToTextureImage(int banks);
extern "C" void InitTextureImageVRAMAllocator_020bb48c(unsigned int bankCount, int install);
extern "C" void MapVRAMBanksToTexturePalette(int banks);
extern "C" void MapVRAMBanksToMainBG(int banks);
extern "C" void SetMainDisplayAndBGMode_020c391c(int displayMode, int bgMode, int isBG03D);
extern "C" void MapVRAMBanksToMainObj(int banks);
void UpdateVRAMStagingVRAMBanks();
void UnlockStagedTextureVRAMCopying();
void Finish3DRendering();
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
extern "C" void Set3DClearColorAndDepth_020c5588(int color, int alpha, int depth, int polygonId, int isFogEnabled);
extern "C" void SetOrthographicProjection_020c5770(int, int, int, int, int, int, int, int, void*);
extern "C" void func_020bb780(void* arg0, int arg1);
extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern "C" MessageWindow_02021b84* GetMessageWindow_020421a0();
extern "C" void func_02042c68(MessageWindow_02021b84* arg0);
extern "C" void CloseMessageWindow_02043124(MessageWindow_02021b84* window);
extern "C" void func_02042b30(void* arg0, void* arg1);
extern "C" void ResetTextureVRAMState_0207df50(TextureVRAMArea_0203d028* area);
extern "C" void RestoreTextureVRAMState_0207df90(char* area);
extern "C" void InitMessageGlyphs_020432c4(MessageWindow_02021b84* window);
extern "C" void SaveTextureVRAMState_0207dfac(char* area);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void func_020440b8(char* arg0, void* arg1, void* arg2);
extern "C" void func_0202ad30();
extern "C" void func_0202adf0();
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14* stringTable);
extern "C" void LoadStringTable_020dfec0(void* stringTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" void Swap3DBuffers_020d86d0(int keepTranslucentOrder, int useWDepth);
extern "C" void WaitForVBlank_020c9820();
extern "C" void func_020bbcb4();
void UnlockAndSetMainBrightness(GameResources* res, int target, int frames);
void UnlockAndSetSubBrightness(GameResources* res, int target, int frames);
void UpdateAndApplyBrightness(GameResources* res);
extern "C" void TurnOnMainDisplay_020c38d4();
extern "C" void __clear(void* arg0, int arg1);
unsigned long long GetCurrentTimestamp();
extern "C" void UpdateInput_02012efc();
extern "C" int GetMessageChoice_020457e0(MessageWindow_02021b84* window);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void ResetSaveProgress_020a9ea4(SaveProgress_020a9ea4* progress);
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4* pac);
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);
extern "C" void LoadSpriteSetFile_0205a528(void* spriteSet, void* fileData, int size, SafeAllocator* allocator);
extern "C" int func_020ab7a8(void* arg0, int arg1);
extern "C" void ClearGlobalFlags_020466f4(GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void PlayJingle_0209c6d8(void* manager, int jingleIndex);
extern "C" int func_ov019_0218c240(void* arg0);
extern "C" int func_020aba5c(int arg0);
extern "C" void func_02043368(MessageWindow_02021b84* arg0);
extern "C" void UpdateSound_020bbd9c();
extern "C" void ResetGeometryEngine_020c52e8();
extern "C" void ResetMatrixStacks_020c5414();
extern "C" void func_020c57d4(int, int, int, int, void*);
extern "C" void func_020444e0(Struct_020444e0* arg0);
extern "C" void func_ov019_0218c178(void* arg0);
extern "C" void func_0203bd88(void* arg0);
extern "C" void DrawMessageGlyphs_0204359c(void* window, int glyphCount);
extern "C" void func_0203bdb0(Struct_0203bdb0* arg0);
extern "C" void func_020439b0(MessageWindow_02021b84* arg0, int arg1);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void SetGameMode_0200fb94(char* gameState, unsigned char mode);
extern "C" void func_02012010(void* arg0, int arg1);

void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);

#if defined(jpn)
#define data_ov019_0218c2c0 data_ov019_0218cea0
#define data_ov019_0218c2d4 data_ov019_0218ceb4
#define data_ov019_0218c294 data_ov019_0218ce7c
#define data_ov019_0218c2a0 data_ov019_0218ce88
#define data_ov019_0218c2fe data_ov019_0218ced3
#endif
extern unsigned char gFileScratchSpace_0211e33c[0x30000] __attribute__((aligned(4)));
extern AllocatorUnion gMainHeap_02114e20;
extern char gMusicManager_02109bf4[];
extern char data_ov019_0218c2c0[];
extern char data_ov019_0218c2d4[];
extern char data_ov019_0218c2d8[];
extern char data_ov019_0218c2ed[];
extern char data_ov019_0218c2fe[];
extern Vector3fix data_ov019_0218c294;
extern Vector3fix data_ov019_0218c2a0;

#if defined(jpn)
struct StringList_02072a68_2;
struct StringList_020727d8;
struct Struct_02013fb4;
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" void ResetStringList_020727d8(struct StringList_020727d8* stringList);
extern "C" void LoadStringList_020728ac(int stringList, int allocator, struct Struct_02013fb4* scriptData, int scriptSize, int idFilter, unsigned short idFilterCount, unsigned char skippedStringCount);
extern char data_ov019_0218ceb8[];
enum { Enum_ov019_0218b5a8_24 = 0x8, Enum_ov019_0218b5a8_728 = 0x228 };
#else
enum { Enum_ov019_0218b5a8_24 = 0x18, Enum_ov019_0218b5a8_728 = 0x2d8 };
#endif

struct Struct_ov019_0218b5a8 {
    char unknown_0_[0x28];
    unsigned char unknown_28_;
    char unknown_29_[0x2c - 0x29];
    char unknown_2c_[0x34 - 0x2c];
    char unknown_34_[Enum_ov019_0218b5a8_24];
    int unknown_4c_;
    int unknown_50_;
    char unknown_54_[0x90 - 0x54];
    SpriteAnimationList_02043368* unknown_90_;
    Sprite_02043368_2* unknown_94_;
    char unknown_98_[0xa0 - 0x98];
    short unknown_a0_;
    char unknown_a2_[0xa4 - 0xa2];
    unsigned char unknown_a4_;
    char unknown_a5_[0xa8 - 0xa5];
    Sprite_02043368_2 unknown_a8_[14];
    SpriteAnimationList_02043368 unknown_2d8_;
};

static inline void inline_ov019_0218b5a8(MessageWindow_02021b84* arg0, Struct_ov019_0218b5a8* arg1, int arg2) {
#if defined(jpn)
    StartMessage_0204500c(arg0, (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)arg1->unknown_34_, arg2), 0);
#else
    StartMessage_0204500c(arg0, FindStringInTable_020e0434((Struct_0201099c_3*)arg1->unknown_34_, arg2), 0, 0xe3);
#endif
}

static inline void inline_ov016_0218b5c4(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x7000000) | (arg0 << 24);
}

static inline void inline_ov016_0218b5c4_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x38000000) | (arg0 << 27);
}

static inline void inline_ov017_021a86d0_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & ~0x1f00) | (arg0 << 8);
}

static inline void inline_ov019_0218b5a8_2(int arg0) {
    unsigned int var0 = DISPCNT;
    DISPCNT = (var0 & 0xffcfffef) | arg0;
}

static inline void inline_ov017_021c0850(int arg0) {
    *(volatile unsigned short*)0x4000304 = (unsigned short)((*(volatile unsigned short*)0x4000304 & ~0x8000) | (arg0 << 15));
}

static inline void inline_ov019_0218b5a8_3(int arg0) {
    BG0CNT = (unsigned short)((BG0CNT & ~3) | arg0);
}

static inline void inline_ov019_0218b5a8_4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, void* arg7) {
    SetOrthographicProjection_020c5770(arg0, arg1, arg2, arg3, arg4, arg5, arg6, 1, arg7);
}

static inline void inline_ov019_0218b5a8_5(int arg0) {
    GXFIFO_MATRIX_STORE = arg0;
}

static inline void inline_ov019_0218b5a8_6(int arg0, int arg1, int arg2, int arg3) {
    *(volatile unsigned int*)0x4000580 = arg0 | (arg1 << 8) | (arg2 << 16) | (arg3 << 24);
}

static inline void inline_ov019_0218b5a8_7() {
    DISPCNTSUB |= 0x10000;
}

static inline void inline_ov019_0218b5a8_8(int arg0) {
    GXFIFO_MATRIX_MODE = arg0;
}

static inline void inline_ov019_0218b5a8_9(Vector3fix* arg0, Vector3fix* arg1, Vector3fix* arg2, void* arg3) {
    func_020c57d4((int)arg0, (int)arg1, (int)arg2, 1, arg3);
}

// USA: func_ov019_0218b5a8
extern "C" ARM void func_ov019_0218b5a8(Struct_ov019_0218b5a8* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    unsigned int* var2 = GetGlobalFlags_020d6c00();
    SetLoadingIndicator_020daf9c(0, 0, 1, 0);
    arg0->unknown_4c_ = 0;
    arg0->unknown_50_ = 0;
    InitSpriteSet_0205a444(arg0->unknown_54_);
    for (int var3 = 0; var3 < 14; var3++) {
        InitSprite_0205a198(&arg0->unknown_a8_[var3]);
    }
    InitSpriteAnimationList_0205a234(&arg0->unknown_2d8_);
    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
    func_0200fb84((int*)var0, (int)arg0);
    var1->MaybeReset();
    func_0203b634(GetBGVRAMManager_0203b628());
    void* var4 = GetOAMManager_0203bd08();
    ResetOAMManager_0203bd24((char*)var4);
    LockStagedTextureVRAMCopying();
    DisableTextureImageVRAMBanks();
    DisableTexturePaletteVRAMBanks();
    DisableMainBGVRAMBanks();
    DisableSubBGVRAMBanks();
    DisableMainObjVRAMBanks();
    DisableSubObjVRAMBanks();
    MapVRAMBanksToTextureImage(0xf);
    InitTextureImageVRAMAllocator_020bb48c(4, 1);
    MapVRAMBanksToTexturePalette(0x40);
    MapVRAMBanksToMainBG(0x10);
    inline_ov016_0218b5c4(0);
    inline_ov016_0218b5c4_2(0);
    BG1CNT = (BG1CNT & 0x43) | 4;
    inline_ov017_021a86d0_2(0x11);
    SetMainDisplayAndBGMode_020c391c(1, 0, 1);
    MapVRAMBanksToMainObj(0x20);
    inline_ov019_0218b5a8_2(0x10);
    inline_ov017_021c0850(0);
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    inline_ov019_0218b5a8_3(0);
    Set3DClearColorAndDepth_020c5588(0, 0x1f, 0x7fff, 0, 0);
    inline_ov019_0218b5a8_4(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
    inline_ov019_0218b5a8_5(0);
    inline_ov019_0218b5a8_6(0, 0, 255, 191);
    InitTextureImageVRAMAllocator_020bb48c(4, 1);
    func_020bb780((void*)0x4000, 1);

    char var5[0x70];
    char var6[0x70];
    InitTextureVRAMArea_0207de48(var5, 0x4000, 0x20);
    InitTextureVRAMArea_0207de48(var6, 0x4000, 0x20);
    MessageWindow_02021b84* var7 = GetMessageWindow_020421a0();
    func_02042c68(var7);
    CloseMessageWindow_02043124(var7);
    func_02042b30(var7, var5);
    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)var5);
    RestoreTextureVRAMState_0207df90(var5);
    InitMessageGlyphs_020432c4(var7);
    SaveTextureVRAMState_0207dfac(var5);

    unsigned int var8;
    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(data_ov019_0218c2c0, gFileScratchSpace_0211e33c, &var8) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    void* var9 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x19000);
    SafeAllocator var10;
    var10.ResetAllocatorPointer();
    var10.CreateTypeA(var9, 0x19000);
    NarcHandle var11;
    if (var11.Initialize(data_ov019_0218c2d4, gFileScratchSpace_0211e33c)) {
        RestoreTextureVRAMState_0207df90(var6);
        func_020440b8((char*)var7, &var10, gFileScratchSpace_0211e33c);
        SaveTextureVRAMState_0207dfac(var6);
        var11.Destroy();
    }
    func_0202ad30();
    func_0202adf0();
    *(int*)((char*)var7 + Enum_ov019_0218b5a8_728) = 0;
#if defined(jpn)
    if (LoadFileIntoMemory(data_ov019_0218ceb8, gFileScratchSpace_0211e33c, &var8) == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    ResetStringList_020727d8((struct StringList_020727d8*)arg0->unknown_34_);
    LoadStringList_020728ac((int)arg0->unknown_34_, (int)&var10, (struct Struct_02013fb4*)gFileScratchSpace_0211e33c, var8, 0, 0, 0);
#else
    void* var12 = ExtractFileFromGP2(data_ov019_0218c2d8, data_ov019_0218c2ed, &var8);
    if (var12 == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    InitStringTable_020dfc40((StringTable_0201099c_14*)arg0->unknown_34_);
    LoadStringTable_020dfec0(arg0->unknown_34_, &var10, var12, var8);
#endif
    BackgroundLoader::RemoveLockGlobal();

    int var13 = 0;
    unsigned char var14 = var0->unknown_5cc8_;
    if (var14 == 0) {
        inline_ov019_0218b5a8(var7, arg0, 0);
    } else if (var14 == 1) {
        inline_ov019_0218b5a8(var7, arg0, 1);
    } else if (var14 == 2) {
        inline_ov019_0218b5a8(var7, arg0, 2);
        var13 = 1;
    } else if (var14 == 4) {
        inline_ov019_0218b5a8(var7, arg0, 10);
    } else {
        inline_ov019_0218b5a8(var7, arg0, 8);
        var13 = 8;
    }
    var7->unknown_998_ = 1;
    Swap3DBuffers_020d86d0(0, 1);
    WaitForVBlank_020c9820();
    func_020bbcb4();
    UnlockAndSetMainBrightness((GameResources*)arg0, 0, 5);
    UnlockAndSetSubBrightness((GameResources*)arg0, -16, 1);
    UpdateAndApplyBrightness((GameResources*)arg0);
    TurnOnMainDisplay_020c38d4();
    inline_ov019_0218b5a8_7();

    Vector3fix var15 = data_ov019_0218c294;
    Vector3fix var16;
    __clear(&var16, sizeof(var16));
    Vector3fix var17 = data_ov019_0218c2a0;
    int var18 = 1;
    unsigned long long var19 = GetCurrentTimestamp();

    for (;;) {
        UpdateInput_02012efc();
        switch (var13) {
        case 1:
            if (var7->unknown_998_ == 0) {
                if (GetMessageChoice_020457e0(var7) == 0) {
                    SetGlobalFlags_020466e4(var2, 0x80);
                    inline_ov019_0218b5a8(var7, arg0, 5);
                    ResetSaveProgress_020a9ea4((SaveProgress_020a9ea4*)arg0->unknown_2c_);
                    var13 = 3;
                } else if (GetMessageChoice_020457e0(var7) == 1) {
                    inline_ov019_0218b5a8(var7, arg0, 3);
                    var13 = 2;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 2:
            if (var7->unknown_998_ == 0) {
                if (GetMessageChoice_020457e0(var7) == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 4);
                    var13 = 9;
                } else if (GetMessageChoice_020457e0(var7) == 1) {
                    inline_ov019_0218b5a8(var7, arg0, 2);
                    var13 = 1;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 3:
            if (var7->unknown_9a0_ == 4) {
                BackgroundLoader::AddLockGlobal();
                BackgroundLoader::FreeAllocationsGlobal();
                if (arg0->unknown_50_ == 0) {
                    if (LoadFileIntoMemory(data_ov019_0218c2fe, gFileScratchSpace_0211e33c, &var8) == NULL) {
                        BackgroundLoader::RemoveLockGlobal();
                        return;
                    }
                    InitSpriteSet_0205a444(arg0->unknown_54_);
                    for (int var20 = 0; var20 < 14; var20++) {
                        InitSprite_0205a198(&arg0->unknown_a8_[var20]);
                    }
                    InitSpriteAnimationList_0205a234(&arg0->unknown_2d8_);
                    arg0->unknown_a4_ = 0;
                    arg0->unknown_94_ = arg0->unknown_a8_;
                    arg0->unknown_a0_ = 14;
                    arg0->unknown_90_ = &arg0->unknown_2d8_;
                    void* var21 = gFileScratchSpace_0211e33c;
                    int var22 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var21);
                    for (int var23 = 0; var23 < var22; var23++) {
                        void* var24;
                        int var25;
                        void* var26 = GetPacEntryData_020467f0((PacEntry_02020aec*)var21, var23, &var24, &var25);
                        LoadSpriteSetFile_0205a528(arg0->unknown_54_, var26, var25, &var10);
                    }
                    arg0->unknown_4c_ |= 1;
                    arg0->unknown_50_++;
                } else if (arg0->unknown_50_ == 1) {
                    int var27 = func_020ab7a8(arg0->unknown_2c_, 1);
                    if (var27 == 1) {
                        inline_ov019_0218b5a8(var7, arg0, 0);
                        var7->unknown_998_ = 1;
                        ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)var2, 0x80);
                        arg0->unknown_4c_ &= ~1;
                        var13 = 0;
                    } else if (var27 == 2) {
                        inline_ov019_0218b5a8(var7, arg0, 1);
                        var7->unknown_998_ = 1;
                        ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)var2, 0x80);
                        arg0->unknown_4c_ &= ~1;
                        var13 = 0;
                    } else if (var27 == 3) {
                        ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)var2, 0x80);
                        var13 = 6;
                    } else if (var27 == 5) {
                        ClearGlobalFlags_020466f4((GlobalFlags_02038598_4*)var2, 0x80);
                        var13 = 4;
                    }
                    BackgroundLoader::RemoveLockGlobal();
                }
            }
            break;
        case 4:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                inline_ov019_0218b5a8(var7, arg0, 7);
                var7->unknown_998_ = 1;
                PlayJingle_0209c6d8(gMusicManager_02109bf4, 0x35);
                var13 = 5;
            }
            break;
        case 5:
            if (var7->unknown_998_ == 0) {
                var18 = 0;
            }
            break;
        case 6:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                if (var0->unknown_5cc8_ == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 0);
                    var13 = 0;
                } else {
                    inline_ov019_0218b5a8(var7, arg0, 6);
                    PlayJingle_0209c6d8(gMusicManager_02109bf4, 0x3d);
                    var13 = 7;
                }
                var7->unknown_998_ = 1;
            }
            break;
        case 7:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_998_ == 0) {
                inline_ov019_0218b5a8(var7, arg0, 4);
                var13 = 9;
                var7->unknown_998_ = 1;
            }
            break;
        case 9:
            if (var7->unknown_998_ == 0) {
                var18 = 0;
            }
            break;
        case 8:
            arg0->unknown_4c_ &= ~1;
            if (var7->unknown_9a0_ == 3 && func_ov019_0218c240(arg0) != 0) {
                if (func_020aba5c(1) == 0) {
                    inline_ov019_0218b5a8(var7, arg0, 1);
                    var13 = 0;
                } else {
                    inline_ov019_0218b5a8(var7, arg0, 9);
                    var13 = 9;
                }
            }
            break;
        }
        if (!var18) {
            break;
        }
        UpdateAndApplyBrightness((GameResources*)arg0);
        var1->RemoveAllLocks();
        if (!(arg0->unknown_4c_ & 1)) {
            func_02043368(var7);
        }
        if (var7->unknown_9a0_ != 3 && !(var13 == 3 && var7->unknown_9a0_ == 4)) {
            var7->func_020444d4(1);
        }
        UpdateSound_020bbd9c();
        ResetGeometryEngine_020c52e8();
        ResetMatrixStacks_020c5414();
        RenderConfig::Reset();
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
        DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
        inline_ov019_0218b5a8_8(0);
        inline_ov019_0218b5a8_9(&var16, &var17, &var15, NULL);
        inline_ov019_0218b5a8_4(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, NULL);
        inline_ov019_0218b5a8_8(2);
        func_020444e0((Struct_020444e0*)var7);
        func_ov019_0218c178(arg0);
        func_0203bd88(var4);
        DrawMessageGlyphs_0204359c(var7, 0x10);
        Swap3DBuffers_020d86d0(0, 1);
        arg0->unknown_28_ = 1;
        WaitForVBlank_020c9820();
        func_0203bdb0((Struct_0203bdb0*)var4);
        func_020439b0(var7, 1);
        var0->CalculateDeltaTime((GetCurrentTimestamp() - var19) * 64 * 1000 / 33514);
        var19 = GetCurrentTimestamp();
    }

    var10.Destroy();
    FreeMemory_02012da4(&gMainHeap_02114e20, var9);
    SetGameMode_0200fb94((char*)var0, 6);
    func_02012010(var0, 0);
}
