#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

static inline unsigned long inline_ov021_0218b5fc_2(volatile unsigned int* arg0) { return *arg0; }
static inline void inline_ov021_0218b5fc(volatile unsigned int* arg0, unsigned int arg1) { *arg0 = arg1; }

#if defined(jpn)
enum { Enum_ov021_0218b5fc_1288 = 0x608, Enum_ov021_0218b5fc_7720 = 0x1c4c, Enum_ov021_0218b5fc_307768 = 0x48e10, Enum_ov021_0218b5fc_3512 = 0xd90, Enum_ov021_0218b5fc_3464 = 0xd4c };
#else
enum { Enum_ov021_0218b5fc_1288 = 0x508, Enum_ov021_0218b5fc_7720 = 0x1e28, Enum_ov021_0218b5fc_307768 = 0x4b238, Enum_ov021_0218b5fc_3512 = 0xdb8, Enum_ov021_0218b5fc_3464 = 0xd88 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"

#if defined(jpn)
#define func_020c51dc func_020c6ca8
#endif


struct AllocatorUnion;
struct TextureVRAMArea_0203d028;
struct Struct_0200f3a4_9;
struct Struct_0203bdb0;
struct GameResources;
struct Struct_0209c3b4_2;
struct MusicManager_02109bf4_4;
struct Struct_02109bf4_3;

extern "C" void PushOverlay_020a1df8(int overlayEntry);
extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void LoadOverlay_020a1940(unsigned int overlayId);
extern "C" void func_0200fb84(int* arg0, int arg1);
extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);
extern "C" void* GetOAMManager_0203bd08(void);
extern "C" void ResetOAMManager_0203bd24(char* oamManager);
extern "C" int* GetSpriteTextManager_0203bd14();
extern "C" int GetSubOAMBuffer_0203be4c(void* arg0);
extern "C" void func_0203c35c(int* arg0);
extern "C" void MapVRAMBanksToLCDC(unsigned short mask);
extern "C" void Memset32Bit_020ca458(unsigned int value, void* dest, int count);
extern "C" int DisableLCDCMappedVRAMBanks(void);
void Finish3DRendering();
extern "C" void func_020c51dc();
extern "C" void func_020c537c();
void LockStagedTextureVRAMCopying();
void UnlockStagedTextureVRAMCopying();
void UpdateVRAMStagingVRAMBanks();
extern "C" void MapVRAMBanksToTextureImage(int handle);
extern "C" void InitTextureImageVRAMAllocator_020bb48c(unsigned int bankCount, int install);
extern "C" void MapVRAMBanksToTexturePalette(int value);
extern "C" void func_020bb780(void* arg0, int arg1);
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void MapVRAMBanksToMainObj(int mode);
extern "C" void MapVRAMBanksToSubObj(int value);
extern "C" void SetMainDisplayAndBGMode_020c391c(int displayMode, int bgMode, int isBG03D);
extern "C" void SetSubBGMode_020c3984(unsigned int bgMode);
extern "C" void Set3DClearColorAndDepth_020c5588(int color, int alpha, int depth, int polygonId, int isFogEnabled);
extern "C" void func_020c555c(int arg0);
extern "C" void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void func_02042c68(void* arg0);
extern "C" void CloseMessageWindow_02043124(void* window);
extern "C" void func_020440a4(void* arg0);
extern "C" void ResetTextureVRAMState_0207df50(TextureVRAMArea_0203d028* area);
extern "C" void RestoreTextureVRAMState_0207df90(char* area);
extern "C" void InitMessageGlyphs_020432c4(void* window);
extern "C" void SaveTextureVRAMState_0207dfac(char* area);
extern "C" void func_020100a0(GameState* arg0, int arg1);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void func_ov009_0218454c(void* arg0, int arg1, int arg2);
extern "C" void* func_02010954(char* arg0);
extern "C" void func_ov009_021842a0(void* arg0, SafeAllocator* arg1);
extern "C" void PlayMusic_0209c3b4(Struct_0209c3b4_2* manager, int musicIndex);
extern "C" void WaitForVBlank_020c9820();
extern "C" void TurnOnMainDisplay_020c38d4();
extern "C" void func_02010124(Struct_0200f3a4_9* arg0);
extern "C" int GetGameMode_0200fb9c(char* gameState);
extern "C" void UpdateInput_02012efc();
extern "C" void func_ov021_0218bb30(void* arg0);
extern "C" void func_020bbcb4();
extern "C" void func_ov009_02184ca4(void* arg0);
extern "C" void func_0203bdb0(Struct_0203bdb0* arg0);
void UpdateAndApplyBrightness(GameResources* resources);
extern "C" void func_ov009_02184848(void* arg0);
extern "C" void StopMusic_0209c678(MusicManager_02109bf4_4* manager, int fadeDuration);
extern "C" void func_0203ad88(void* arg0, void* arg1, int arg2);
extern "C" void func_0203aa08(void* arg0);
extern "C" void ResetMusic_0209c20c(Struct_02109bf4_3* manager);
extern "C" void func_02043000(char* arg0);
extern char gMainHeap_02114e20;
extern char gMusicManager_02109bf4;
extern int data_02114e50;

struct Struct_ov021_0218bbc4 {
    unsigned short unknown_0_[8];
};

extern Struct_ov021_0218bbc4 data_ov021_0218bbc4;

struct Struct_ov021_0218b5fc {
    char unknown_0_[0x28];
    unsigned char unknown_28_;
    char unknown_29_[0x2c - 0x29];
    SafeAllocator unknown_2c_;
    void* unknown_40_;
    char unknown_44_[0xb4 - 0x44];
    char* unknown_b4_;
    int unknown_b8_;
};

struct Struct_ov021_0218b5fc_2;
extern "C" void func_ov021_0218baf8(Struct_ov021_0218b5fc_2* arg0);

// USA: func_ov021_0218b5fc
extern "C" ARM void func_ov021_0218b5fc(Struct_ov021_0218b5fc* arg0) {
#if !defined(jpn)
    PushOverlay_020a1df8(3);
#endif
    LoadOverlay_020a1940(OVERLAY_ID(9));
    LoadOverlay_020a1940(OVERLAY_ID(23));
    GameState* var0 = GameState::GetInstance();
    func_0200fb84((int*)var0, (int)arg0);
    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
    BackgroundLoader::GetInstance()->MaybeReset();
    void* var1 = GetOAMManager_0203bd08();
    ResetOAMManager_0203bd24((char*)var1);
    *(int*)var1 = 0;
    int* var2 = GetSpriteTextManager_0203bd14();
    *var2 = GetSubOAMBuffer_0203be4c(var1) + 0x200;
    func_0203c35c(var2);
    var2[Enum_ov021_0218b5fc_1288 / 4] = 0x7000;
    MapVRAMBanksToLCDC(0x1ff);
    Memset32Bit_020ca458(0, (void*)0x6800000, 0xa4000);
    DisableLCDCMappedVRAMBanks();
    Finish3DRendering();
    func_020c51dc();
    func_020c537c();
    LockStagedTextureVRAMCopying();
    MapVRAMBanksToTextureImage(1);
    InitTextureImageVRAMAllocator_020bb48c(1, 1);
    MapVRAMBanksToTexturePalette(0x40);
    func_020bb780((void*)0x4000, 1);
    MapVRAMBanksToMainBG(0x10);
    MapVRAMBanksToSubBG(4);
    MapVRAMBanksToMainObj(0x20);
    unsigned int var3 = inline_ov021_0218b5fc_2(&DISPCNT);
#if defined(jpn)
    var3 = (var3 & 0xffcfffef) | 0x10;
#else
    var3 &= 0xffcfffef;
    var3 |= 0x10;
#endif
    inline_ov021_0218b5fc(&DISPCNT, var3);
    MapVRAMBanksToSubObj(8);
    DISPCNTSUB = (DISPCNTSUB & 0xffcfffef) | 0x10;
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
    var3 = inline_ov021_0218b5fc_2(&DISPCNT);
    var3 = (var3 & ~0x1f00) | 0x1f00;
    inline_ov021_0218b5fc(&DISPCNT, var3);
    SetMainDisplayAndBGMode_020c391c(1, 0, 1);

    BG1CNT = (BG1CNT & 0x43) | 0x1d00;
    BG2CNT = (BG2CNT & 0x43) | 0x1e08;
    BG3CNT = (BG3CNT & 0x43) | 0x1f0c;
    BG0CNT = (BG0CNT & ~3) | 2;
    BG1CNT = (BG1CNT & ~3) | 3;
    BG2CNT = (BG2CNT & ~3) | 1;
    BG3CNT = BG3CNT & ~3;
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1700;
    SetSubBGMode_020c3984(0);

    BG0CNTSUB = (BG0CNTSUB & 0x43) | 0x1d00;
    BG1CNTSUB = (BG1CNTSUB & 0x43) | 0x1e10;
    BG2CNTSUB = (BG2CNTSUB & 0x43) | 0x1f18;
    BG0CNTSUB = (BG0CNTSUB & ~3) | 2;
    BG1CNTSUB = (BG1CNTSUB & ~3) | 1;
    BG2CNTSUB = BG2CNTSUB & ~3;
    BG3CNTSUB = (BG3CNTSUB & ~3) | 3;
    *(unsigned short*)0x4000304 |= 0x8000;
    Set3DClearColorAndDepth_020c5588(0, 0, 0x7fff, 0, 0);

    Struct_ov021_0218bbc4 var4 = data_ov021_0218bbc4;
    func_020c555c((int)&var4);
    InitTextureVRAMArea_0207de48(arg0->unknown_44_, 0x4000, 0x40);
    void* var5 = GetMessageWindow_020421a0();
    func_02042c68(var5);
    CloseMessageWindow_02043124(var5);
    func_020440a4(var5);
    *(char**)((char*)var5 + Enum_ov021_0218b5fc_7720) = arg0->unknown_44_;
    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)arg0->unknown_44_);
    RestoreTextureVRAMState_0207df90(arg0->unknown_44_);
    InitMessageGlyphs_020432c4(var5);
    SaveTextureVRAMState_0207dfac(arg0->unknown_44_);
    func_020100a0(var0, 0);
    arg0->unknown_2c_.CreateTypeA(AllocateRoundedSize_02012d88((AllocatorUnion*)&gMainHeap_02114e20, Enum_ov021_0218b5fc_307768), Enum_ov021_0218b5fc_307768);
    arg0->unknown_2c_.Reset();
    arg0->unknown_40_ = arg0->unknown_2c_.Allocate(Enum_ov021_0218b5fc_3512);
    func_ov009_0218454c(arg0->unknown_40_, 0, 0);
    arg0->unknown_b4_ = (char*)func_02010954((char*)var0);
    *(short*)(arg0->unknown_b4_ + 0x568) = GetProtagonistObjectIndex_020100a8(var0);
    *(char**)((char*)arg0->unknown_40_ + Enum_ov021_0218b5fc_3464) = arg0->unknown_b4_;
    func_ov009_021842a0(arg0->unknown_40_, &arg0->unknown_2c_);
    PlayMusic_0209c3b4((Struct_0209c3b4_2*)&gMusicManager_02109bf4, 2);
    WaitForVBlank_020c9820();
    TurnOnMainDisplay_020c38d4();
    DISPCNTSUB |= 0x10000;
    func_02010124((Struct_0200f3a4_9*)var0);

    for (;;) {
        if (GetGameMode_0200fb9c((char*)var0) == 0 || arg0->unknown_b8_ != 0) {
            break;
        }
        UpdateInput_02012efc();
        func_ov021_0218baf8((Struct_ov021_0218b5fc_2*)arg0);
        func_ov021_0218bb30(arg0);
        arg0->unknown_28_ = 1;
        WaitForVBlank_020c9820();
        func_020bbcb4();
        func_ov009_02184ca4(arg0->unknown_40_);
        func_0203bdb0((Struct_0203bdb0*)GetOAMManager_0203bd08());
        UpdateAndApplyBrightness((GameResources*)arg0);
        data_02114e50++;
        var0->CalculateDeltaTime(0x411b);
    }

    func_ov009_02184848(arg0->unknown_40_);
    StopMusic_0209c678((MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0);
    func_0203ad88(&gMusicManager_02109bf4, 0, 0);
    func_0203aa08(&gMusicManager_02109bf4);
    ResetMusic_0209c20c((Struct_02109bf4_3*)&gMusicManager_02109bf4);
    func_02043000((char*)var5);
    ResetTextureVRAMState_0207df50((TextureVRAMArea_0203d028*)arg0->unknown_44_);
    func_0200fb84((int*)var0, 0);
#if !defined(jpn)
    PopOverlay_020a1e54(1);
#endif
}
