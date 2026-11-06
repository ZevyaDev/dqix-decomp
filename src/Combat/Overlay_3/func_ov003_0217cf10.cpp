#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/ColorEffects.h"

struct Struct_ov003_0217cf10_6 {
#if defined(jpn)
    char unknown_0_[0x868];
    int unknown_868_;
    char unknown_86c_[0x17e2 - 0x86c];
    unsigned char unknown_17e2_;
#else
    char unknown1_0_[0x998];
    int unknown_998_;
    char unknown_99c_[0x19b2 - 0x99c];
    unsigned char unknown_19b2_;
#endif
};

struct Struct_ov003_0217cf10_7 {
    unsigned char unknown_0_[0xb48];
    unsigned int unknown_b48_;
};

struct Struct_ov003_0217cf10_8 {
    unsigned char unknown_0_[0x1000];
    Struct_ov003_0217cf10_7 unknown_1000_;
};

struct Struct_ov003_0217cf10_9 {
#if defined(jpn)
    unsigned char unknown_0_[0x860];
#else
    unsigned char unknown1_0_[0x840];
#endif
    Struct_ov003_0217cf10_8 unknown_840_;
};

static inline unsigned int inline_ov003_0217cf10(Struct_ov003_0217cf10_7 *arg0) { return arg0->unknown_b48_; }
static inline bool inline_ov003_0217cf10_2(Struct_ov003_0217cf10_7 *arg0, unsigned int arg1) { return (inline_ov003_0217cf10(arg0) & arg1) != 0; }

struct Struct_ov003_0217cf10 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov003_0217cf10_2 {
    Struct_ov003_0217cf10_2 *unknown_0_;
    Struct_ov003_0217cf10 *unknown_4_;
    char unknown_8_[0xc4 - 8];
    unsigned char unknown_c4_;
    char unknown_c5_[0xe0 - 0xc5];
};

struct Struct_ov003_0217cf10_3 {
    char unknown_0_[0x98];
    Struct_ov003_0217cf10 *unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
};

struct Struct_ov003_0217cf10_4 {
    char unknown_0_[0x3c];
    int unknown_3c_;
    int unknown_40_;
    char unknown_44_[0x4c - 0x44];
    unsigned short unknown_4c_;
    char unknown_4e_[0x50 - 0x4e];
    unsigned char unknown_50_;
    char unknown_51_[0x54 - 0x51];
};

struct Struct_0201099c_3;

struct Struct_ov003_0217cf10_5 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    signed char unknown_5_;
    char unknown_6_[0xc - 6];
    int unknown_c_;
#if !defined(jpn)
    int unknown_10_;
#endif
    char unknown_14_[0x18 - 0x14];
    unsigned char unknown_18_[0x18];
    unsigned char unknown_30_;
    char unknown_31_;
    unsigned char unknown_32_;
    char unknown_33_;
    int unknown_34_;
    int unknown_38_;
    Struct_ov003_0217cf10_4 unknown_3c_;
    Struct_ov003_0217cf10_3 *unknown_90_;
    Struct_ov003_0217cf10 *unknown_94_;
    Struct_ov003_0217cf10_2 *unknown_98_;
    void *unknown_9c_;
    SafeAllocator *unknown_a0_;
    SafeAllocator unknown_a4_;
    SafeAllocator unknown_b8_;
    char unknown_cc_[8];
};

struct Struct_02018300_3;
struct SoundEffectManager_02108760;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_0204b12c;
struct BGLayer_02020cb8_5;
struct BGLayer_02020cb8_2;
struct TextWindow_0204c7a8;
struct TextWindowManager_0205cf78;
struct TextWindow_0205cf78_2;

extern "C" Struct_ov003_0217cf10_6 *GetMessageWindow_020421a0();
extern "C" Struct_ov003_0217cf10_9 *GetZone3D_02012fe4(void);
extern "C" void DisablePlayerControl_020397cc(Struct_02018300_3 *object, int standStill);
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760 *manager, int soundEffectIndex, int handle);
extern "C" const char *GetStandardString_020e51cc(int stringId);
#if defined(jpn)
extern "C" void StartMessage_0204500c(Struct_ov003_0217cf10_6 *window, const char *text, int arg2);
#else
extern "C" void StartMessage_0204500c(Struct_ov003_0217cf10_6 *window, const char *text, int arg2, int arg3);
#endif
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4 *pac);
extern "C" void *GetPacEntryData_020467f0(PacEntry_02020aec *pac, int index, void **outEntry, int *outSize);
extern "C" void LoadSpriteSetFile_0205a528(Struct_ov003_0217cf10_4 *spriteSet, void *fileData, int size, SafeAllocator *allocator);
extern "C" void SetBGScreenSize_0204b11c(unsigned char *layer, int screenSize);
extern "C" void SetBGPriority_0204b5b4(Struct_ov003_0217cf10 *layer, int priority);
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c *layer, SafeAllocator *allocator);
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5 *layer, int scrollX, int scrollY);
extern "C" void LoadBGBlock_0204b174(Struct_ov003_0217cf10 *layer, void *block, SafeAllocator *allocator, int arg3);
extern "C" void FillBGScreenRect_0204bc74(Struct_ov003_0217cf10 *layer, int screenEntry, int x, int y, int width, int height, int palette);
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2 *layer, void *screenData);
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8 *window, SafeAllocator *allocator, int characterData, unsigned int screenDataSize);
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78 *windowManager, TextWindow_0205cf78_2 *textWindows, unsigned char textWindowCapacity);
extern "C" void LoadStringTable_020dfec0(void *stringTable, SafeAllocator *allocator, void *fileData, unsigned int fileSize);
extern "C" const char *FindStringInTable_020e0434(Struct_0201099c_3 *stringTable, int stringId);
extern "C" int func_020420e8(const char *arg0, int arg1);

extern SoundEffectManager_02108760 gSoundEffectManager_02108760;
extern char data_ov003_02180c2c[];
extern char data_ov003_02180c43[];
extern char data_ov003_02180c56[];
extern char data_ov003_02180c6f[];
#if defined(jpn)
extern char data_ov003_0217ee58[];
extern char data_ov003_0217ee8c[];
extern char data_ov003_0217eecc[];
extern char data_ov003_0217eee3[];
extern char data_ov003_0217eef6[];
#endif

// USA: func_ov003_0217cf10
#if defined(jpn)
extern "C" ARM void func_ov003_0217cf10(Struct_ov003_0217cf10_5 *arg0) {
    Struct_ov003_0217cf10_6 *var0 = GetMessageWindow_020421a0();
    GameState *var1 = GameState::GetInstance();
    BackgroundLoader *var2 = BackgroundLoader::GetInstance();
    Struct_ov003_0217cf10_9 *var3 = GetZone3D_02012fe4();
    Struct_ov003_0217cf10_8 *var4 = &var3->unknown_840_;
    int var5 = arg0->unknown_5_;

    if (var5 == 0) {
        DisablePlayerControl_020397cc((Struct_02018300_3 *)var1->GetUnknownGameObject(), 1);
        var0->unknown_868_ = 1;
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        if (inline_ov003_0217cf10_2(&var4->unknown_1000_, 0xffffffff)) {
            StartMessage_0204500c(var0, data_ov003_0217ee58, 0);
            var0->unknown_17e2_ = 0;
            var0->unknown_868_ = 1;
        } else {
            StartMessage_0204500c(var0, data_ov003_0217ee8c, 0);
            var0->unknown_17e2_ = 0;
            var0->unknown_868_ = 1;
            arg0->unknown_4_ = 1;
            arg0->unknown_5_ = 0;
            return;
        }
        int var6 = 1;
        for (int var7 = 1; var7 < 0x18; var7++) {
            if (var4->unknown_1000_.unknown_b48_ & (1 << var7)) {
                arg0->unknown_18_[var6] = var7;
                var6++;
            }
        }
        arg0->unknown_30_ = var6;
        arg0->unknown_32_ = (arg0->unknown_30_ - 1) / 6 + 1;
        arg0->unknown_3c_.unknown_50_ = 0;
        arg0->unknown_3c_.unknown_40_ = arg0->unknown_34_;
        arg0->unknown_3c_.unknown_4c_ = 7;
        arg0->unknown_3c_.unknown_3c_ = arg0->unknown_38_;
        arg0->unknown_c_ = var2->QueueLoadFile(data_ov003_0217eecc, 0);
        arg0->unknown_5_ = 1;
    } else if (var5 == 1) {
        if (var2->GetTaskStatus(arg0->unknown_c_) == 0) return;
        void *var8;
        void *var9;
        unsigned int var10;
        int var11;
        var2->GetLoadedFileByID(arg0->unknown_c_, &var9, &var10);
        int var12 = CountPacEntries_02046900((PacEntry_02020cb8_4 *)var9);
        for (int var13 = 0; var13 < var12; var13++) {
            void *var14 = GetPacEntryData_020467f0((PacEntry_02020aec *)var9, var13, &var8, &var11);
            LoadSpriteSetFile_0205a528(&arg0->unknown_3c_, var14, var11, &arg0->unknown_b8_);
        }
        var2->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        arg0->unknown_c_ = var2->QueueLoadFile(data_ov003_0217eee3, 0);
        arg0->unknown_5_ = 2;
    } else if (var5 == 2) {
        if (var2->GetTaskStatus(arg0->unknown_c_) == 0) return;
        SetBGScreenSize_0204b11c((unsigned char *)&arg0->unknown_94_[0], 0);
        arg0->unknown_94_[0].unknown_1c_0_ = 0;
        arg0->unknown_94_[0].unknown_1c_4_ = 1;
        SetBGPriority_0204b5b4(&arg0->unknown_94_[0], 0);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c *)&arg0->unknown_94_[0], arg0->unknown_a0_);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5 *)&arg0->unknown_94_[0], 0, 0);
        BG1CNT = (BG1CNT & 0x43) | 0xd08;
        SetBGScreenSize_0204b11c((unsigned char *)&arg0->unknown_94_[1], 0);
        arg0->unknown_94_[1].unknown_1c_0_ = 0;
        arg0->unknown_94_[1].unknown_1c_4_ = 2;
        SetBGPriority_0204b5b4(&arg0->unknown_94_[1], 1);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c *)&arg0->unknown_94_[1], arg0->unknown_a0_);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5 *)&arg0->unknown_94_[1], 0, 0);
        BG2CNT = (BG2CNT & 0x43) | 0xe08;
        void *var15;
        void *var16;
        void *var17[2];
        unsigned int var18;
        int var19[2];
        var2->GetLoadedFileByID(arg0->unknown_c_, &var16, &var18);
        int var20 = CountPacEntries_02046900((PacEntry_02020cb8_4 *)var16);
        for (int var21 = 0; var21 < var20; var21++) {
            var17[var21] = GetPacEntryData_020467f0((PacEntry_02020aec *)var16, var21, &var15, &var19[var21]);
        }
        for (int var22 = 0; var22 < var20; var22++) {
            if (var17[var22] != 0) {
                LoadBGBlock_0204b174(&arg0->unknown_94_[0], var17[var22], arg0->unknown_a0_, var19[var22]);
            }
        }
        var2->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        FillBGScreenRect_0204bc74(&arg0->unknown_94_[0], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2 *)&arg0->unknown_94_[0], 0);
        FillBGScreenRect_0204bc74(&arg0->unknown_94_[1], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2 *)&arg0->unknown_94_[1], 0);
        arg0->unknown_9c_ = arg0->unknown_a0_->Allocate(0x2800);
        SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8 *)arg0->unknown_98_, arg0->unknown_a0_, (int)arg0->unknown_9c_, 0x800);
        arg0->unknown_98_->unknown_4_ = arg0->unknown_94_;
        arg0->unknown_98_->unknown_c4_ = 0;
        Struct_ov003_0217cf10_3 *var23 = arg0->unknown_90_;
        var23->unknown_98_ = arg0->unknown_94_;
        var23->unknown_b2_ = 2;
        SetTextWindowArray_0205cf78((TextWindowManager_0205cf78 *)arg0->unknown_90_, (TextWindow_0205cf78_2 *)arg0->unknown_98_, 1);
        BG0CNT = (BG0CNT & ~3) | 3;
        BG1CNT = (BG1CNT & ~3) | 1;
        BG2CNT = (BG2CNT & ~3) | 2;
        BG3CNT = (BG3CNT & ~3) | 0;
        ColorEffect_ConfigureAlphaBlend(0x04000050, 4, 1, 10, 6);
        arg0->unknown_c_ = var2->QueueLoadFile(data_ov003_0217eef6, 0);
        arg0->unknown_5_ = 3;
    } else if (var5 == 3) {
        if (var2->GetTaskStatus(arg0->unknown_c_) == 0) return;
        void *var24;
        unsigned int var25;
        var2->GetLoadedFileByID(arg0->unknown_c_, &var24, &var25);
        arg0->unknown_a4_.Reset();
        LoadStringTable_020dfec0(arg0->unknown_cc_, &arg0->unknown_a4_, var24, var25);
        var2->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        arg0->unknown_4_ = 2;
        arg0->unknown_5_ = 0;
    }
}
#else
extern "C" ARM void func_ov003_0217cf10(Struct_ov003_0217cf10_5 *arg0) {
    Struct_ov003_0217cf10_6 *var26 = GetMessageWindow_020421a0();
    GameState *var27 = GameState::GetInstance();
    BackgroundLoader *var28 = BackgroundLoader::GetInstance();
    Struct_ov003_0217cf10_9 *var29 = GetZone3D_02012fe4();
    int var30 = arg0->unknown_5_;

    if (var30 == 0) {
        Struct_ov003_0217cf10_8 *var31 = &var29->unknown_840_;
        DisablePlayerControl_020397cc((Struct_02018300_3 *)var27->GetUnknownGameObject(), 1);
        var26->unknown_998_ = 1;
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        if (inline_ov003_0217cf10_2(&var31->unknown_1000_, 0xffffffff)) {
            StartMessage_0204500c(var26, GetStandardString_020e51cc(0x42), 0, 0xe3);
            var26->unknown_19b2_ = 0;
            var26->unknown_998_ = 1;
        } else {
            StartMessage_0204500c(var26, GetStandardString_020e51cc(0x43), 0, 0xe3);
            var26->unknown_19b2_ = 0;
            var26->unknown_998_ = 1;
            arg0->unknown_4_ = 1;
            arg0->unknown_5_ = 0;
            return;
        }
        int var32 = 1;
        for (int var33 = 1; var33 < 0x18; var33++) {
            if (var31->unknown_1000_.unknown_b48_ & (1 << var33)) {
                arg0->unknown_18_[var32] = var33;
                var32++;
            }
        }
        arg0->unknown_30_ = var32;
        arg0->unknown_32_ = (arg0->unknown_30_ - 1) / 6 + 1;
        arg0->unknown_3c_.unknown_50_ = 0;
        arg0->unknown_3c_.unknown_40_ = arg0->unknown_34_;
        arg0->unknown_3c_.unknown_4c_ = 7;
        arg0->unknown_3c_.unknown_3c_ = arg0->unknown_38_;
        arg0->unknown_c_ = var28->QueueLoadFile(data_ov003_02180c2c, 0);
        arg0->unknown_5_ = 1;
    } else if (var30 == 1) {
        if (var28->GetTaskStatus(arg0->unknown_c_) == 0) return;
        void *var34;
        void *var35;
        unsigned int var36;
        int var37;
        var28->GetLoadedFileByID(arg0->unknown_c_, &var35, &var36);
        int var38 = CountPacEntries_02046900((PacEntry_02020cb8_4 *)var35);
        for (int var39 = 0; var39 < var38; var39++) {
            void *var40 = GetPacEntryData_020467f0((PacEntry_02020aec *)var35, var39, &var34, &var37);
            LoadSpriteSetFile_0205a528(&arg0->unknown_3c_, var40, var37, &arg0->unknown_b8_);
        }
        var28->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        arg0->unknown_c_ = var28->QueueLoadFile(data_ov003_02180c43, 0);
        arg0->unknown_5_ = 2;
    } else if (var30 == 2) {
        if (var28->GetTaskStatus(arg0->unknown_c_) == 0) return;
        SetBGScreenSize_0204b11c((unsigned char *)&arg0->unknown_94_[0], 0);
        arg0->unknown_94_[0].unknown_1c_0_ = 0;
        arg0->unknown_94_[0].unknown_1c_4_ = 1;
        SetBGPriority_0204b5b4(&arg0->unknown_94_[0], 0);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c *)&arg0->unknown_94_[0], arg0->unknown_a0_);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5 *)&arg0->unknown_94_[0], 0, 0);
        BG1CNT = (BG1CNT & 0x43) | 0xd08;
        SetBGScreenSize_0204b11c((unsigned char *)&arg0->unknown_94_[1], 0);
        arg0->unknown_94_[1].unknown_1c_0_ = 0;
        arg0->unknown_94_[1].unknown_1c_4_ = 2;
        SetBGPriority_0204b5b4(&arg0->unknown_94_[1], 1);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c *)&arg0->unknown_94_[1], arg0->unknown_a0_);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5 *)&arg0->unknown_94_[1], 0, 0);
        BG2CNT = (BG2CNT & 0x43) | 0xe08;
        void *var41;
        void *var42;
        void *var43[2];
        unsigned int var44;
        int var45[2];
        var28->GetLoadedFileByID(arg0->unknown_c_, &var42, &var44);
        int var46 = CountPacEntries_02046900((PacEntry_02020cb8_4 *)var42);
        for (int var47 = 0; var47 < var46; var47++) {
            var43[var47] = GetPacEntryData_020467f0((PacEntry_02020aec *)var42, var47, &var41, &var45[var47]);
        }
        for (int var48 = 0; var48 < var46; var48++) {
            if (var43[var48] != 0) {
                LoadBGBlock_0204b174(&arg0->unknown_94_[0], var43[var48], arg0->unknown_a0_, var45[var48]);
            }
        }
        var28->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        FillBGScreenRect_0204bc74(&arg0->unknown_94_[0], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2 *)&arg0->unknown_94_[0], 0);
        FillBGScreenRect_0204bc74(&arg0->unknown_94_[1], 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2 *)&arg0->unknown_94_[1], 0);
        arg0->unknown_9c_ = arg0->unknown_a0_->Allocate(0x2800);
        SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8 *)arg0->unknown_98_, arg0->unknown_a0_, (int)arg0->unknown_9c_, 0x800);
        arg0->unknown_98_->unknown_4_ = arg0->unknown_94_;
        arg0->unknown_98_->unknown_c4_ = 0;
        Struct_ov003_0217cf10_3 *var49 = arg0->unknown_90_;
        var49->unknown_98_ = arg0->unknown_94_;
        var49->unknown_b2_ = 2;
        SetTextWindowArray_0205cf78((TextWindowManager_0205cf78 *)arg0->unknown_90_, (TextWindow_0205cf78_2 *)arg0->unknown_98_, 1);
        BG0CNT = (BG0CNT & ~3) | 3;
        BG1CNT = (BG1CNT & ~3) | 1;
        BG2CNT = (BG2CNT & ~3) | 2;
        BG3CNT = (BG3CNT & ~3) | 0;
        ColorEffect_ConfigureAlphaBlend(0x04000050, 4, 1, 10, 6);
        arg0->unknown_c_ = var28->QueueLoadFileInGP2(data_ov003_02180c56, data_ov003_02180c6f, 0);
        arg0->unknown_5_ = 3;
    } else if (var30 == 3) {
        if (var28->GetTaskStatus(arg0->unknown_c_) == 0) return;
        void *var50;
        unsigned int var51;
        var28->GetLoadedFileByID(arg0->unknown_c_, &var50, &var51);
        arg0->unknown_a4_.Reset();
        LoadStringTable_020dfec0(arg0->unknown_cc_, &arg0->unknown_a4_, var50, var51);
        var28->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        int var52 = 0;
        for (int var53 = 0x64; var53 < 0x7c; var53++) {
            int var54 = 0;
            const char *var55 = FindStringInTable_020e0434((Struct_0201099c_3 *)arg0->unknown_cc_, (short)var53);
            if (var55 != 0) {
                var54 = func_020420e8(var55, 0);
            }
            if (var52 < var54) {
                var52 = var54;
            }
        }
        arg0->unknown_10_ = (var52 + 0x1b) & ~7;
        arg0->unknown_10_ = arg0->unknown_10_ >> 3;
        arg0->unknown_10_ = ((arg0->unknown_10_ + 1) & ~1) << 3;
        DISPCNT = (DISPCNT & ~0x1f00) | 0x1700;
        arg0->unknown_4_ = 2;
        arg0->unknown_5_ = 0;
    }
}
#endif
