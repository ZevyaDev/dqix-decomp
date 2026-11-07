#include "Combat/MenuNodeChain.h"
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"
#include "Resource/Brightness.h"

struct Struct_ov014_02184f78 {
    Struct_ov014_02184f78* unknown_0_;
    const char* unknown_4_;
    const char* unknown_8_;
    short unknown_c_;
    char unknown_e_[4];
    signed char unknown_12_;
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
    char unknown_14_[6];
    short unknown_1a_;
    char unknown_1c_[4];
};

struct BGLayer_02020cb8;
struct Struct_0207f7f0_2;

struct Struct_020974b0 {
    char unknown_0_[0x10];
};

struct Struct_01ff8b48_13 {
    char unknown_0_[0x18];
};

struct Struct_ov008_02188d74 {
    char unknown_0_[0x3c];
    void* unknown_3c_;
    void* unknown_40_;
    char unknown_44_[4];
    unsigned int unknown_48_;
    short unknown_4c_;
    unsigned short unknown_4e_;
    unsigned char unknown_50_;
    char unknown_51_[3];

    void inline_ov008_02188d74(void* arg0, short arg1)
    {
        unknown_40_ = arg0;
        unknown_4c_ = arg1;
    }
};

struct Struct_ov014_02186bc8 {
    char unknown_0_[0xa4];
    Struct_020974b0 unknown_a4_;
    SafeAllocator* unknown_b4_;
    Struct_ov014_02184f78* unknown_b8_;
    Struct_ov014_02184f78* unknown_bc_;
    MenuLayout_0207f7f0* unknown_c0_;
    BGLayer_02020cb8* unknown_c4_;
    Struct_0207f7f0_2* unknown_c8_;
    void* unknown_cc_;
    short* unknown_d0_;
    void* unknown_d4_;
    void* unknown_d8_;
    void* unknown_dc_;
    Struct_01ff8b48_13 unknown_e0_;
    Struct_ov008_02188d74 unknown_f8_;
    char unknown_14c_[0xc];
    unsigned short unknown_158_;
    unsigned char unknown_15a_;
    char unknown_15b_;
    int unknown_15c_;
    int unknown_160_;
    int unknown_164_;
    int unknown_168_;
    int unknown_16c_;
    short unknown_170_;
    short unknown_172_;
    short unknown_174_;
    short unknown_176_;
    short unknown_178_;
    unsigned char unknown_17a_;
    unsigned char unknown_17b_;
    unsigned char unknown_17c_;
    signed char unknown_17d_;
    unsigned char unknown_17e_;
    bool unknown_17f_;
    short unknown_180_;
    short unknown_182_[8];
};

struct Struct_02097420;
struct Struct_02097418;
struct Struct_0207f914;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct StringTable_0201099c_14;
struct MenuLayout_0207f7f0;
struct Struct_0207f7f0_2;

extern "C" int* GetResources_0200fb8c(int*);
extern "C" void Set3DFog_020c54a4(int, unsigned int, unsigned int, unsigned short);
extern "C" void Set3DClearColorAndDepth_020c5588(int, int, int, int, int);
extern "C" int func_02097420(Struct_02097420*);
extern "C" Struct_ov014_02184f78* func_02097418(Struct_02097418*);
extern "C" void CopyCapitalizedText_0206819c(const char*, char*, int);
#if defined(jpn)
extern "C" void func_02080654(Struct_0207f914*, int, int);
#else
extern "C" void func_0207f914(Struct_0207f914*, int, int, int);
extern "C" void func_02080798(void*, int, int);
#endif
extern "C" int CountPacEntries_02046900(PacEntry_02020cb8_4*);
extern "C" void* GetPacEntryData_020467f0(PacEntry_02020aec*, int, void**, int*);
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14*);
extern "C" void func_020abf38(void*);
extern "C" void func_0207f7f0(MenuLayout_0207f7f0*, Struct_0207f7f0_2*, int);

extern "C" {
void func_020972e0(Struct_020974b0* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3);
int func_0207f9f4(MenuLayout_0207f7f0* arg0);
void LoadSpriteSetFile_0205a528(Struct_ov008_02188d74* spriteSet, void* fileData, unsigned int size, SafeAllocator* allocator);
void LoadStringTable_020dfec0(Struct_01ff8b48_13* stringTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize);
void func_020abf60(Struct_020974b0* arg0);
void func_ov014_02187488(Struct_ov014_02186bc8* arg0);
Struct_ov014_02184f78* func_020974b0(Struct_020974b0* arg0, int arg1, int, bool arg3, int, short* arg5);
}

#if defined(jpn)
extern const char data_ov014_0218a51c[];
extern const char data_ov014_0218a534[];
extern const char data_ov014_0218a551[];
extern const char data_ov014_0218a567[];
#else
extern const char data_ov014_0218970c[];
extern const char data_ov014_02189722[];
extern const char data_ov014_02189734[];
extern const char data_ov014_0218974d[];
extern const char data_ov014_02189754[];
extern const char data_ov014_0218976a[];
extern const char data_ov014_02189784[];
#endif

// USA: func_ov014_02187568
extern "C" ARM void func_ov014_02187568(Struct_ov014_02186bc8* arg0)
{
    SafeAllocator* var15;
    int* var0 = GetResources_0200fb8c((int*)GameState::GetInstance());
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (arg0->unknown_17b_ == 0)
    {
        SetFlags04(GetGameResources(), 0x609fe);
        Set3DFog_020c54a4(0, 0, 0, 0);
        Set3DClearColorAndDepth_020c5588(0, 0, 0x7fff, 0, 0);
        FontLoader_0208cb08* var2 = GetFontLoader_02094a00();
        CancelFontLoad_02094ab0(var2);
        ClearLoadedFontSets_02094b40(var2);
        RequestSingleFontLoad_02094b30(var2, 0x6a, 0);
        arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 1)
    {
        if (UpdateFontLoad_02094b4c(GetFontLoader_02094a00()))
            arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 2)
    {
#if defined(jpn)
        arg0->unknown_168_ = var1->QueueLoadFile(data_ov014_0218a51c, NULL);
#else
        arg0->unknown_168_ = var1->QueueLoadFileInGP2(data_ov014_0218970c, data_ov014_02189722, NULL);
#endif
        arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 3)
    {
        if (var1->GetTaskStatus(arg0->unknown_168_))
        {
            void* var3;
            unsigned int var4;
            var1->GetLoadedFileByID(arg0->unknown_168_, &var3, &var4);
            if (var3 != NULL)
            {
                arg0->unknown_b4_[0].Reset();
                func_020972e0(&arg0->unknown_a4_, &arg0->unknown_b4_[0], var3, var4);
            }
            var1->RemoveTask(arg0->unknown_168_);
            arg0->unknown_168_ = -1;
            arg0->unknown_17b_++;
        }
    }
    else if (arg0->unknown_17b_ == 4)
    {
#if !defined(jpn)
        int var5 = func_02097420((Struct_02097420*)&arg0->unknown_a4_);
        Struct_ov014_02184f78* var6 = func_02097418((Struct_02097418*)&arg0->unknown_a4_);
        for (int var7 = 0; var7 < var5; var7++, var6++)
        {
            char var8[0x80] = {};
            CopyCapitalizedText_0206819c(var6->unknown_8_, var8, 0);
            sprintf((char*)var6->unknown_8_, var8);
        }
#endif
        BG0CNTSUB = (BG0CNTSUB & (3 | 0x40)) | (0x1d << 8);
        BG1CNTSUB = (BG1CNTSUB & (3 | 0x40)) | (0x1e << 8);
        BG2CNTSUB = (BG2CNTSUB & (3 | 0x40)) | (0x1f << 8) | (2 << 2);
        arg0->unknown_17e_ |= 0x10;
        arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 5)
    {
        if (!(arg0->unknown_17e_ & 0x10))
        {
            SafeAllocator* var9 = arg0->unknown_b4_;
            var9[2].Reset();
#if defined(jpn)
            func_02080654((Struct_0207f914*)arg0->unknown_c0_, (int)&var9[2], (int)data_ov014_0218a534);
#else
            func_0207f914((Struct_0207f914*)arg0->unknown_c0_, (int)&var9[2], (int)data_ov014_02189734, (int)data_ov014_0218974d);
#endif
            arg0->unknown_17b_++;
        }
    }
    else if (arg0->unknown_17b_ == 6)
    {
        int var10 = func_0207f9f4(arg0->unknown_c0_);
        if (var10 == 0)
            arg0->unknown_17b_++;
        if (var10 < 0)
            arg0->unknown_17a_ = 6;
    }
    else if (arg0->unknown_17b_ == 7)
    {
#if !defined(jpn)
        func_02080798(arg0->unknown_c0_, 6, 1);
#endif
        arg0->unknown_f8_.unknown_50_ = 1;
        arg0->unknown_f8_.inline_ov008_02188d74(arg0->unknown_d4_, 8);
        arg0->unknown_f8_.unknown_3c_ = arg0->unknown_d8_;
#if defined(jpn)
        arg0->unknown_168_ = var1->QueueLoadFile(data_ov014_0218a551, NULL);
#else
        arg0->unknown_168_ = var1->QueueLoadFile(data_ov014_02189754, NULL);
#endif
        arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 8)
    {
        if (var1->GetTaskStatus(arg0->unknown_168_))
        {
            void* var11;
            void* var12;
            unsigned int var13;
            unsigned int var14;
            int var16;
            var1->GetLoadedFileByID(arg0->unknown_168_, &var12, &var13);
            var16 = CountPacEntries_02046900((PacEntry_02020cb8_4*)var12);
            var15 = arg0->unknown_b4_;
            var15[3].Reset();
            for (int var17 = 0; var17 < var16; var17++)
            {
                void* var18 = GetPacEntryData_020467f0((PacEntry_02020aec*)var12, var17, &var11, (int*)&var14);
                if (var18 != NULL)
                    LoadSpriteSetFile_0205a528(&arg0->unknown_f8_, var18, var14, &var15[3]);
            }
            var1->RemoveTask(arg0->unknown_168_);
            arg0->unknown_168_ = -1;
            arg0->unknown_17b_++;
        }
    }
    else if (arg0->unknown_17b_ == 9)
    {
        InitStringTable_020dfc40((StringTable_0201099c_14*)&arg0->unknown_e0_);
#if defined(jpn)
        arg0->unknown_168_ = var1->QueueLoadFile(data_ov014_0218a567, NULL);
#else
        arg0->unknown_168_ = var1->QueueLoadFileInGP2(data_ov014_0218976a, data_ov014_02189784, NULL);
#endif
        arg0->unknown_17b_++;
    }
    else if (arg0->unknown_17b_ == 10)
    {
        if (var1->GetTaskStatus(arg0->unknown_168_))
        {
            void* var19;
            unsigned int var20;
            var1->GetLoadedFileByID(arg0->unknown_168_, &var19, &var20);
            if (var19 != NULL)
            {
                SafeAllocator* var21 = arg0->unknown_b4_;
                var21[4].Reset();
                LoadStringTable_020dfec0(&arg0->unknown_e0_, &var21[4], var19, var20);
            }
            var1->RemoveTask(arg0->unknown_168_);
            arg0->unknown_168_ = -1;
            arg0->unknown_17b_ += 3;
        }
    }
    else if (arg0->unknown_17b_ == 11)
        arg0->unknown_17b_++;
    else if (arg0->unknown_17b_ == 12)
        arg0->unknown_17b_++;
    else if (arg0->unknown_17b_ == 13)
    {
        func_020abf60(&arg0->unknown_a4_);
        func_020abf38(arg0->unknown_dc_);
        func_ov014_02187488(arg0);
        BG0CNTSUB = (BG0CNTSUB & ~3);
        BG1CNTSUB = (BG1CNTSUB & ~3) | 1;
        BG2CNTSUB = (BG2CNTSUB & ~3) | 2;
        BG3CNTSUB = (BG3CNTSUB & ~3) | 3;
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | (0x17 << 8);
        ColorEffect_ConfigureAlphaBlend(0x04001050, BLEND_TARGET_BG1, 4, 10, 6);
        MenuLayout_0207f7f0* var22 = arg0->unknown_c0_;
        var22->unknown_2c_ = arg0->unknown_c4_;
        var22->unknown_38_ = 2;
        func_0207f7f0(arg0->unknown_c0_, arg0->unknown_c8_, 4);
        arg0->unknown_c0_->unknown_3a_ = 0;
        func_020974b0(&arg0->unknown_a4_, -1, -1, false, 0, &arg0->unknown_180_);
        short var23 = 0;
        arg0->unknown_b8_ = func_020974b0(&arg0->unknown_a4_, arg0->unknown_17d_, -1, (arg0->unknown_17e_ & 8) != 0, 0x10, &var23);
        arg0->unknown_bc_ = arg0->unknown_b8_;
        arg0->unknown_17a_ = 1;
        arg0->unknown_17b_ = 0;
    }
}
