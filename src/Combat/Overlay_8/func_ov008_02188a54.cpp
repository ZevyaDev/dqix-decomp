#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include <Resource/Brightness.h>
#include <Resource/CharacterCreationUI.h>
#include <Combat/MapDisplay.h>
#include "Resource/GameResources.h"

struct TextWindowManager_0205d6a0;
struct BGLayer_02020cb8_5;
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;
struct TextWindow_0204c7a8;
struct TextWindowManager_0205cf78;
struct TextWindow_0205cf78_2;
struct Struct_02081870_2 {
    char unknown_0_[0x98];
    BGLayer_02020cb8* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};
struct Struct_ov006_02158478 {
    Struct_ov006_02158478* unknown_0_;
    BGLayer_02020cb8* unknown_4_;
    char unknown_8_[0xe0 - 8];
};
struct Struct_ov008_021842a0_2 {
    char unknown_0_[0x14];
    SafeAllocator unknown_14_;
    char unknown_28_[0xa0 - 0x28];
    Struct_0201099c_3 unknown_a0_;
    char unknown_a8_[0xf0 - 0xa8];
    BGLayer_02020cb8 unknown_f0_;
    BGLayer_02020cb8 unknown_110_;
    Struct_02081870_2 unknown_130_;
    Struct_ov006_02158478 unknown_1ec_[6];
    int unknown_72c_;
    char unknown_730_[0xb12 - 0x730];
    unsigned char unknown_b12_;
    char unknown_b13_[0xb20 - 0xb13];
    int unknown_b20_;
};

extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3*, int);
extern "C" void CloseTextWindows_0205d6a0(TextWindowManager_0205d6a0*, int);
extern "C" void InitBGLayer_0204af64(BGLayer_02020cb8*);
extern "C" void SetBGScreenSize_0204b11c(unsigned char*, int);
extern "C" void SetBGPriority_0204b5b4(BGLayer_02020cb8*, int);
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5*, int, int);
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c*, SafeAllocator*);
extern "C" void AllocateBGScreenBlocks_0204af38(BGLayer_0204af38*, int, SafeAllocator*);
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4*);
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec*, int, void**, int*);
extern "C" void LoadBGBlock_0204b174(BGLayer_02020cb8*, void*, SafeAllocator*, int);
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2*, void*);
extern "C" void FillBGScreenRect_0204bc74(BGLayer_02020cb8*, int, int, int, int, int, int);
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8*, SafeAllocator*, int, unsigned int);
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78*, TextWindow_0205cf78_2*, unsigned char);

// USA: func_ov008_02188a54
extern "C" ARM int func_ov008_02188a54(Struct_ov008_021842a0_2* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = arg0->unknown_b12_;
    if (var2 == 0) {
#if defined(jpn)
        int var3 = 1;
        if (arg1) var3 = 2;
        const char* var4 = FindStringInTable_020e0434(&arg0->unknown_a0_, var3);
        arg0->unknown_b20_ = var1->QueueLoadFile(var4, 0);
#else
        int var5 = 1;
        int var6 = 2;
        if (arg1) {
            var5 = 3;
            var6 = 4;
        }
        const char* var7 = FindStringInTable_020e0434(&arg0->unknown_a0_, var6);
        const char* var8 = FindStringInTable_020e0434(&arg0->unknown_a0_, var5);
        arg0->unknown_b20_ = var1->QueueLoadFileInGP2(var8, var7, 0);
#endif
        ++arg0->unknown_b12_;
    }
    if (var2 == 1) {
        if (IsBrightnessTransitionActive(var0)) return 0;
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)&arg0->unknown_130_, 1);
        ++arg0->unknown_b12_;
    }
    if (var2 == 2) {
        if (var1->GetTaskStatus(arg0->unknown_b20_)) {
            arg0->unknown_14_.Reset();
            InitBGLayer_0204af64(&arg0->unknown_f0_);
            SetBGScreenSize_0204b11c((unsigned char*)&arg0->unknown_f0_, 0);
            arg0->unknown_f0_.isSubScreen_1c_0_ = 1;
            arg0->unknown_f0_.bgIndex_1c_4_ = 0;
            SetBGPriority_0204b5b4(&arg0->unknown_f0_, 1);
            SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)&arg0->unknown_f0_, 0, 0);
            AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)&arg0->unknown_f0_, &arg0->unknown_14_);
            AllocateBGScreenBlocks_0204af38((BGLayer_0204af38*)&arg0->unknown_f0_, 1, &arg0->unknown_14_);
            InitBGLayer_0204af64(&arg0->unknown_110_);
            SetBGScreenSize_0204b11c((unsigned char*)&arg0->unknown_110_, 0);
            arg0->unknown_110_.isSubScreen_1c_0_ = 1;
            arg0->unknown_110_.bgIndex_1c_4_ = 1;
            SetBGPriority_0204b5b4(&arg0->unknown_110_, 0);
            SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)&arg0->unknown_110_, 0, 0);
            AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)&arg0->unknown_110_, &arg0->unknown_14_);
            void* var9;
            void* var10;
            unsigned int var11;
            var1->GetLoadedFileByID(arg0->unknown_b20_, &var10, &var11);
            int var12 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var10);
            int var13;
            for (int var14 = 0; var14 < var12; ++var14) {
                void* var15 = GetPacEntryData_020467f0((PacEntry_02020aec*)var10, var14, &var9, &var13);
                if (var15) {
                    if (var14 == var12 - 1) LoadBGBlock_0204b174(&arg0->unknown_110_, var15, &arg0->unknown_14_, var13);
                    else LoadBGBlock_0204b174(&arg0->unknown_f0_, var15, &arg0->unknown_14_, var13);
                }
            }
            var1->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)&arg0->unknown_f0_, 0, 0, 0, 0, 0, 32, 24, 0xffff);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_f0_, 0);
            FillBGScreenRect_0204bc74(&arg0->unknown_110_, 0, 0, 0, 32, 25, 0);
            LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)&arg0->unknown_110_, 0);
            Struct_ov006_02158478* var16;
            for (int var17 = 0; var17 < 6; ++var17) {
                var16 = &arg0->unknown_1ec_[var17];
                SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var16, &arg0->unknown_14_, arg0->unknown_72c_, 512);
                var16->unknown_4_ = &arg0->unknown_110_;
            }
            arg0->unknown_130_.unknown_98_ = &arg0->unknown_110_;
            arg0->unknown_130_.unknown_b2_ = 1;
            SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)&arg0->unknown_130_, (TextWindow_0205cf78_2*)arg0->unknown_1ec_, 6);
            arg0->unknown_b12_ = 0;
            return 1;
        }
    }
    return 0;
}
