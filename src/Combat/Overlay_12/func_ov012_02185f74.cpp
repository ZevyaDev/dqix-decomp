#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/ColorEffects.h"

#if defined(jpn)
#define data_ov012_0218af75 data_ov012_0218bcec
#define data_ov012_0218af78 data_ov012_0218bcef
enum { Enum_ov012_02185f74_4988 = 0x134c, Enum_ov012_02185f74_5004 = 0x1358 };
#else
enum { Enum_ov012_02185f74_4988 = 0x137c, Enum_ov012_02185f74_5004 = 0x138c };
#endif

struct Struct_ov012_02185f74_3
{
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov012_02185f74_4
{
    void* unknown_0_;
    Struct_ov012_02185f74_3* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_02000c9c_44
{
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned char unknown_10_;
    int unknown_14_, unknown_18_, unknown_1c_, unknown_20_, unknown_24_, unknown_28_, unknown_2c_;
};

struct Struct_02000c9c_45
{
    Struct_02000c9c_44 unknown_0_;
    int unknown_30_, unknown_34_;
    short unknown_38_, unknown_3a_;
    int unknown_3c_, unknown_40_, unknown_44_, unknown_48_;
    unsigned char unknown_4c_, unknown_4d_, unknown_4e_;
};

struct Struct_02000c9c_42
{
    Struct_02000c9c_44 unknown_0_;
    int unknown_30_;
    short unknown_34_;
    unsigned char unknown_36_, unknown_37_, unknown_38_, unknown_39_, unknown_3a_;
    unsigned char unknown_3b_, unknown_3c_, unknown_3d_;
};

struct Struct_ov012_02185f74
{
    unsigned int unknown_0_;
    Struct_02000c9c_45 unknown_4_;
    Struct_02000c9c_42 unknown_54_;
    unsigned char unknown_94_, unknown_95_;
    Struct_ov012_02185f74_3* unknown_98_;
    Struct_ov012_02185f74_4* unknown_9c_;
    unsigned short unknown_a0_, unknown_a2_, unknown_a4_, unknown_a6_;
    unsigned short unknown_a8_, unknown_aa_, unknown_ac_, unknown_ae_;
    unsigned char unknown_b0_, unknown_b1_, unknown_b2_, unknown_b3_;
    unsigned char unknown_b4_, unknown_b5_, unknown_b6_, unknown_b7_, unknown_b8_;
};

struct Struct_ov012_02185f74_2
{
#if !defined(jpn)
    void* unknown_0_;
    void* unknown_4_;
#endif
    struct Struct_02000c9c_43 {
        unsigned short unknown_0_;
        unsigned short unknown_2_;
    } unknown_8_[4];
    unsigned char unknown_18_;
    unsigned char unknown_19_;
    unsigned short unknown_1a_;
    unsigned int unknown_1c_;
#if defined(jpn)
    SafeAllocator unknown_20_[6];
#else
    SafeAllocator unknown_20_[7];
#endif
    Struct_ov012_02185f74 unknown_ac_;
    Struct_ov012_02185f74_3 unknown_168_[3];
    Struct_ov012_02185f74_4 unknown_1c8_[13];
};

struct BGLayer_0204b12c;
struct BGLayer_02020cb8_5;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_02020cb8_2;
struct TextWindow_0204c7a8;
struct TextWindowManager_0205cf78;
struct TextWindow_0205cf78_2;

extern "C" void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize);
extern "C" void SetBGPriority_0204b5b4(Struct_ov012_02185f74_3* layer, int priority);
extern "C" void AllocateBGScreenData_0204b12c(BGLayer_0204b12c* layer, SafeAllocator* allocator);
extern "C" void SetBGScroll_0204b5e8(BGLayer_02020cb8_5* layer, int scrollX, int scrollY);
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4* pac);
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec* pac, int index, void** outEntry, int* outSize);
extern "C" void LoadBGBlock_0204b174(Struct_ov012_02185f74_3* layer, void* block, SafeAllocator* allocator, unsigned int arg3);
extern "C" void FillBGScreenRect_0204bc74(Struct_ov012_02185f74_3* layer, int screenEntry, int x, int y, int width, int height, int palette);
extern "C" void LoadBGScreenData_0204b0e8(BGLayer_02020cb8_2* layer, void* screenData);
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8* window, SafeAllocator* allocator, int characterData, unsigned int screenDataSize);
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78* windowManager, TextWindow_0205cf78_2* textWindows, unsigned char textWindowCapacity);

extern "C" const unsigned char data_ov012_0218af75[3];
extern "C" const unsigned char data_ov012_0218af78[3];

// USA: func_ov012_02185f74
extern "C" ARM void func_ov012_02185f74(Struct_ov012_02185f74_2* arg0)
{
    Struct_ov012_02185f74_3* var0;
    int var1;
    BackgroundLoader* var2;
    Struct_ov012_02185f74_4* var3;
    void* var4;
    void* var5;
    unsigned int var6;
    int var7;
    var2 = BackgroundLoader::GetInstance();
    arg0->unknown_20_[0].Reset();
    for (int var8 = 0; var8 < 3; var8++)
    {
        var0 = &arg0->unknown_168_[var8];
        SetBGScreenSize_0204b11c((unsigned char*)var0, 0);
        var0->unknown_1c_0_ = 0;
        var0->unknown_1c_4_ = data_ov012_0218af75[var8];
        SetBGPriority_0204b5b4(var0, data_ov012_0218af78[var8]);
        AllocateBGScreenData_0204b12c((BGLayer_0204b12c*)var0, &arg0->unknown_20_[0]);
        SetBGScroll_0204b5e8((BGLayer_02020cb8_5*)var0, 0, 0);
    }
    BG1CNT = (BG1CNT & 0x43) | 0x1d00;
    BG2CNT = (BG2CNT & 0x43) | 0x1e00;
    BG3CNT = (BG3CNT & 0x43) | 0x1f08;
    ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);

    var2->GetLoadedFileByID(*(int*)((char*)arg0 + Enum_ov012_02185f74_5004), &var5, &var6);
    var1 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var5);
    for (int var9 = 0; var9 < var1; var9++)
    {
        void* var10 = GetPacEntryData_020467f0((PacEntry_02020aec*)var5, var9, &var4, &var7);
        if (var10 != 0)
        {
            LoadBGBlock_0204b174(&arg0->unknown_168_[1], var10, &arg0->unknown_20_[0], var7);
            LoadBGBlock_0204b174(&arg0->unknown_168_[2], var10, &arg0->unknown_20_[0], var7);
        }
    }
    for (int var11 = 0; var11 < 3; var11++)
    {
        var0 = &arg0->unknown_168_[var11];
        FillBGScreenRect_0204bc74(var0, 0, 0, 0, 0x20, 0x19, 0);
        LoadBGScreenData_0204b0e8((BGLayer_02020cb8_2*)var0, 0);
    }
    char* var12 = (char*)arg0;
    *(void**)(var12 + Enum_ov012_02185f74_4988) = arg0->unknown_20_[0].Allocate(0x7800);
    for (int var13 = 0; var13 < 13; var13++)
    {
        var3 = &arg0->unknown_1c8_[var13];
        SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var3, &arg0->unknown_20_[0], (int)*(void**)(var12 + Enum_ov012_02185f74_4988), 0x800);
        var3->unknown_4_ = &arg0->unknown_168_[1];
    }
    arg0->unknown_ac_.unknown_98_ = arg0->unknown_168_;
    arg0->unknown_ac_.unknown_b2_ = 3;
    SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)&arg0->unknown_ac_, (TextWindow_0205cf78_2*)arg0->unknown_1c8_, 13);
    var2->RemoveTask(*(int*)((char*)arg0 + Enum_ov012_02185f74_5004));
    *(int*)((char*)arg0 + Enum_ov012_02185f74_5004) = -1;
}
