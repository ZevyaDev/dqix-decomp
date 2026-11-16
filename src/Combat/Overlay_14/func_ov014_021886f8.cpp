#include <globaldefs.h>

#if defined(jpn)
#define func_ov014_021886f8 func_ov014_021895c8
#endif
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

struct Struct_ov003_021594c4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov006_02158478 {
    Struct_ov006_02158478* unknown_0_;
    Struct_ov003_021594c4* unknown_4_;
    char unknown_8_[0xd8];
};

struct Struct_ov014_02184f78;

struct Struct_020974b0 {
    char unknown_0_[0x10];
};

struct Struct_ov014_02186bc8 {
    char unknown_0_[0xa4];
    Struct_020974b0 unknown_a4_;
    SafeAllocator* unknown_b4_;
    Struct_ov014_02184f78* unknown_b8_;
    Struct_ov014_02184f78* unknown_bc_;
    void* unknown_c0_;
    Struct_ov003_021594c4* unknown_c4_;
    Struct_ov006_02158478* unknown_c8_;
    void* unknown_cc_;
    short* unknown_d0_;
    void* unknown_d4_;
    void* unknown_d8_;
    void* unknown_dc_;
    char unknown_e0_[0x18];
    char unknown_f8_[0x54];
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

struct PacEntry_02020cb8_4;
struct BGLayer_02020cb8;
struct BGLayer_0204b12c;
struct BGLayer_02020cb8_5;
struct BGLayer_0204af38;
struct PacEntry_02020aec;
struct Struct_02000c9c_8;
struct BGLayer_0204b010;
struct BGLayer_0204b988;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;
struct TextWindow_0204c7a8;

extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8*, SafeAllocator*, int, unsigned int);

extern "C" {
void InitTextWindow_0204c684(Struct_ov006_02158478* textWindow);
}

extern const char data_ov014_02189795[];
extern const char data_ov014_021897ac[];

// USA: func_ov014_021886f8
extern "C" ARM void func_ov014_021886f8(Struct_ov014_02186bc8* arg0)
{
    SafeAllocator* var0;
#if !defined(jpn)
    GameState* var1 = GameState::GetInstance();
#endif
    if (!(arg0->unknown_17e_ & 0x10))
        return;

    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    if (arg0->unknown_17c_ == 0)
    {
        const char* var3 = data_ov014_02189795;
        if (arg0->unknown_17a_ == 4)
            var3 = data_ov014_021897ac;
        arg0->unknown_16c_ = var2->QueueLoadFile(var3, NULL);
        arg0->unknown_17c_++;
    }
    else if (arg0->unknown_17c_ == 1)
    {
        if (!var2->GetTaskStatus(arg0->unknown_16c_))
            return;

        Struct_ov003_021594c4 var4;
        void* var5;
        void* var6;
        unsigned int var7;
        unsigned int var8;
        int var9;
        var2->GetLoadedFileByID(arg0->unknown_16c_, &var6, &var7);
        var9 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var6));
        var0 = arg0->unknown_b4_;
        var0[1].Reset();
        ((BGLayer*)((BGLayer_02020cb8*)&var4))->Reset();
        ((BGLayer*)((unsigned char*)&var4))->ConfigureTextMode(0);
        var4.unknown_1c_0_ = 1;
        var4.unknown_1c_4_ = 2;
        ((BGLayer*)(&var4))->SetPriority(2);
        ((BGLayer*)((BGLayer_0204b12c*)&var4))->AllocateIndexBuffer((SafeAllocator*)(&var0[1]));
        ((BGLayer*)((BGLayer_02020cb8_5*)&var4))->SetOffset(0, 0);
#if defined(jpn)
        ((BGLayer*)((BGLayer_0204af38*)&var4))->AllocateSprites(1, (SafeAllocator*)(&var0[1]));
#else
        ((BGLayer*)((BGLayer_0204af38*)&var4))->AllocateSprites(5, (SafeAllocator*)(&var0[1]));
#endif
        for (int var10 = 1; var10 < var9; var10++)
        {
            void* var11 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var6), var10, (const char**)(&var5), (unsigned int*)((int*)&var8));
            if (var11 != NULL)
                ((BGLayer*)(&var4))->ProcessGraphicsFile((const void*)var11, (SafeAllocator*)(&var0[1]), var8);
        }
        var2->RemoveTask(arg0->unknown_16c_);
        arg0->unknown_16c_ = -1;

#if !defined(jpn)
        int var12 = func_0200fb08((Struct_02000c9c_8*)var1);
        int var13 = 0;
        switch (var12)
        {
        case 2:
            var13 = 1;
            break;
        case 4:
            var13 = 2;
            break;
        case 3:
            var13 = 3;
            break;
        case 5:
            var13 = 4;
            break;
        }
#endif
        ((BGLayer*)((BGLayer_0204b010*)&var4))->PrepareIndexBuffer((void*)(0));
        ((BGLayer*)((BGLayer_0204b988*)&var4))->BlitSpriteByIndex(0, 0, 0, 0xffff);

#if !defined(jpn)
        if (var13 != 0)
            ((BGLayer*)((BGLayer_0204b8d0*)&var4))->BlitSpriteByIndex(var13, 0, 0, 0x16, 2, 9, 2, 0xffff);
#endif
        ((BGLayer*)((BGLayer_02020cb8_2*)&var4))->CleanCacheAndUploadIndexBuffer((const void*)(0));

        var0[1].Reset();
        for (unsigned char var14 = 0; var14 < 2; var14++)
        {
            Struct_ov003_021594c4* var15 = &arg0->unknown_c4_[var14];
            ((BGLayer*)((BGLayer_02020cb8*)var15))->Reset();
            var15->unknown_1c_0_ = 1;
            var15->unknown_1c_4_ = var14;
            ((BGLayer*)((unsigned char*)var15))->ConfigureTextMode(0);
            ((BGLayer*)(var15))->SetPriority(var14);
            ((BGLayer*)((BGLayer_0204b12c*)var15))->AllocateIndexBuffer((SafeAllocator*)(&var0[1]));
            ((BGLayer*)((BGLayer_02020cb8_5*)var15))->SetOffset(0, 0);
        }
        void* var16 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var6), 0, (const char**)(&var5), (unsigned int*)((int*)&var8));
        if (var16 != NULL)
            ((BGLayer*)arg0->unknown_c4_)->ProcessGraphicsFile((const void*)var16, (SafeAllocator*)(&var0[1]), var8);
        for (unsigned char var17 = 0; var17 < 2; var17++)
        {
            Struct_ov003_021594c4* var18 = &arg0->unknown_c4_[var17];
            ((BGLayer*)((BGLayer_0204b010*)var18))->PrepareIndexBuffer((void*)(0));
            ((BGLayer*)((BGLayer_02020cb8_2*)var18))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        }
        for (unsigned char var19 = 0; var19 < 4; var19++)
        {
            Struct_ov006_02158478* var20 = &arg0->unknown_c8_[var19];
            InitTextWindow_0204c684(var20);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var20, &var0[1], (int)arg0->unknown_cc_, 0x600);
            var20->unknown_4_ = arg0->unknown_c4_;
        }
        arg0->unknown_17c_ = 0;
        arg0->unknown_17e_ &= ~0x10;
    }
}
