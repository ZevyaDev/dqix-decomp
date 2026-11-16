#include <globaldefs.h>
#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "NitroSDK/Graphics.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

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

extern "C" int func_0200fb08(Struct_02000c9c_8* gameState);
extern "C" void func_ov023_021da274(void* arg0);
extern "C" void func_ov023_021d9d34(char* arg0);
extern "C" void func_ov023_021d9e60(char* arg0);

extern const unsigned char data_ov009_0218a95d[];
extern const unsigned char data_ov009_0218a95f[];
extern const signed char data_ov009_0218a961[];
extern const unsigned char data_ov009_0218a963[];
extern const signed char data_ov009_0218a966[];
extern const signed char data_ov009_0218a969[];
extern const signed char data_ov009_0218aa54[];
extern char data_ov009_0218aca6[];
extern char data_ov009_0218acab[];

struct Struct_ov009_021842a0_2 {
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

#if defined(jpn)
extern const unsigned char data_ov009_0218b93b[];
extern const signed char data_ov009_0218b939[];
extern const unsigned char data_ov009_0218b93d[];
extern const signed char data_ov009_0218b943[];
extern const signed char data_ov009_0218b946[];
extern const signed char data_ov009_0218ba30[];
extern char data_ov009_0218bc20[];

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

// USA: func_ov009_02184e58
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
            ((BGLayer*)((BGLayer_02020cb8*)var5))->Reset();
            ((BGLayer*)((unsigned char*)var5))->ConfigureTextMode(0);
            var5->unknown_1c_0_ = 0;
            var5->unknown_1c_4_ = data_ov009_0218b93d[var4];
            ((BGLayer*)(var5))->SetPriority(data_ov009_0218b946[var4]);
            ((BGLayer*)((BGLayer_02020cb8_5*)var5))->SetOffset(0, 0);
            ((BGLayer*)((BGLayer_0204b12c*)var5))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_0_[0]));
            if (data_ov009_0218b943[var4] > 0)
                ((BGLayer*)((BGLayer_0204af38*)var5))->AllocateSprites((unsigned char)data_ov009_0218b943[var4], (SafeAllocator*)(&arg0->unknown_0_[0]));
        }
        char var6[4];
        void* var7;
        unsigned int var8;
        var2->GetLoadedFileByID(arg0->unknown_d54_, &var7, &var8);
        int var9 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var7));
        if (arg0->unknown_d59_ == 1)
            var9--;
        for (int var10 = 0; var10 < var9; var10++)
        {
            unsigned int var11;
            void* var12 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var7), var10, (const char**)((void**)var6), (unsigned int*)((int*)&var11));
            if (var12 != NULL)
            {
                if (var10 == 2)
                {
                    ((BGLayer*)(&arg0->unknown_fc_[1]))->ProcessGraphicsFile((const void*)var12, (SafeAllocator*)(&arg0->unknown_0_[0]), var11);
                    ((BGLayer*)(&arg0->unknown_fc_[2]))->ProcessGraphicsFile((const void*)var12, (SafeAllocator*)(&arg0->unknown_0_[0]), var11);
                }
                else
                {
                    ((BGLayer*)(&arg0->unknown_fc_[0]))->ProcessGraphicsFile((const void*)var12, (SafeAllocator*)(&arg0->unknown_0_[0]), var11);
                }
            }
        }
        var2->RemoveTask(arg0->unknown_d54_);
        arg0->unknown_d54_ = -1;
        ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_fc_[0]))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_fc_[0]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        ((BGLayer*)(&arg0->unknown_fc_[1]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_fc_[1]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        ((BGLayer*)(&arg0->unknown_fc_[2]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_fc_[2]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
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
        ((BGLayer*)((BGLayer_02020cb8*)var15))->Reset();
        ((BGLayer*)((unsigned char*)var15))->ConfigureTextMode(0);
        var15->unknown_1c_0_ = 1;
        var15->unknown_1c_4_ = data_ov009_0218b93b[var14];
        ((BGLayer*)(var15))->SetPriority(data_ov009_0218b939[var14]);
        ((BGLayer*)((BGLayer_02020cb8_5*)var15))->SetOffset(0, 0);
        ((BGLayer*)((BGLayer_0204b12c*)var15))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_0_[1]));
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
            ((BGLayer*)((BGLayer_0204af38*)var15))->AllocateSprites(var16, (SafeAllocator*)(&arg0->unknown_0_[1]));
    }

    char var18[4];
    void* var19;
    unsigned int var20;
    unsigned int var21;
    var2->GetLoadedFileByID(arg0->unknown_d54_, &var19, &var20);
    void* var22;
    int var23 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var19));
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
        var22 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var19), var25, (const char**)((void**)var18), (unsigned int*)((int*)&var21));
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
                ((BGLayer*)(var26))->ProcessGraphicsFileMetadata((const void*)((char*)var22));
            }
            else
            {
                char var27[5] = {};
                memcpy(var27, var22, 4);
                ((BGLayer*)((BGLayer_02020cb8_6*)var26))->StageGraphicsFileBuffer((const void*)((char*)var22));
                if (memcmp(var27, data_ov009_0218bc20, 4) == 0)
                    ((BGLayer*)var26)->ProcessGraphicsFile((const void*)var22, (SafeAllocator*)(&arg0->unknown_0_[1]), var21);
            }
        }
        else if (var25 < var1)
        {
            ((BGLayer*)(&arg0->unknown_fc_[3]))->ProcessGraphicsFile((const void*)var22, (SafeAllocator*)(&arg0->unknown_0_[1]), var21);
        }
        else
        {
            ((BGLayer*)(&arg0->unknown_fc_[4]))->ProcessGraphicsFile((const void*)var22, (SafeAllocator*)(&arg0->unknown_0_[1]), var21);
        }
    }

    if (arg0->unknown_d8f_ != 0)
        return;
    var2->RemoveTask(arg0->unknown_d54_);
    arg0->unknown_d54_ = -1;
    int var28 = 0;
    if (arg0->unknown_d59_ == 0 && arg0->unknown_c1c_ == 1)
        var28 = 1;
    ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_fc_[3]))->BlitSpriteByIndex(var28, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    ((BGLayer*)(&arg0->unknown_fc_[4]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
    arg0->unknown_d60_ |= 0x2000;
    if (arg0->unknown_fc_[4].unknown_1d_ != 0)
        func_ov023_021da274(arg0);
    arg0->unknown_d60_ &= ~0x2000;
    ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_fc_[3]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_fc_[4]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
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
#else
// USA: func_ov009_02184e58
extern "C" ARM void func_ov009_02184e58(Struct_ov009_021842a0_2* arg0)
{
    int var29;
    BackgroundLoader* var30 = BackgroundLoader::GetInstance();
    int var31;
    int var32;
    signed char var33 = arg0->unknown_c58_;
    if (arg0->unknown_d94_ != 2)
        return;

    if (var33 == 10)
    {
        arg0->unknown_0_[0].Reset();
        Struct_ov003_021594c4* var34[] = {&arg0->unknown_138_[0], &arg0->unknown_138_[1], &arg0->unknown_138_[2]};
        for (int var35 = 0; var35 < 3; var35++)
        {
            Struct_ov003_021594c4* var36 = var34[var35];
            ((BGLayer*)((BGLayer_02020cb8*)var36))->Reset();
            ((BGLayer*)((unsigned char*)var36))->ConfigureTextMode(0);
            var36->unknown_1c_0_ = 0;
            var36->unknown_1c_4_ = data_ov009_0218a963[var35];
            ((BGLayer*)(var36))->SetPriority(data_ov009_0218a969[var35]);
            ((BGLayer*)((BGLayer_02020cb8_5*)var36))->SetOffset(0, 0);
            ((BGLayer*)((BGLayer_0204b12c*)var36))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_0_[0]));
            if (data_ov009_0218a966[var35] > 0)
                ((BGLayer*)((BGLayer_0204af38*)var36))->AllocateSprites((unsigned char)data_ov009_0218a966[var35], (SafeAllocator*)(&arg0->unknown_0_[0]));
        }
        char var37[4];
        void* var38;
        unsigned int var39;
        var30->GetLoadedFileByID(arg0->unknown_d90_, &var38, &var39);
        int var40 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var38));
        if (arg0->unknown_d95_ == 1)
            var40--;
        for (int var41 = 0; var41 < var40; var41++)
        {
            unsigned int var42;
            void* var43 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var38), var41, (const char**)((void**)var37), (unsigned int*)((int*)&var42));
            if (var43 != NULL)
            {
                if (var41 == 2)
                {
                    ((BGLayer*)(&arg0->unknown_138_[1]))->ProcessGraphicsFile((const void*)var43, (SafeAllocator*)(&arg0->unknown_0_[0]), var42);
                    ((BGLayer*)(&arg0->unknown_138_[2]))->ProcessGraphicsFile((const void*)var43, (SafeAllocator*)(&arg0->unknown_0_[0]), var42);
                }
                else
                {
                    ((BGLayer*)(&arg0->unknown_138_[0]))->ProcessGraphicsFile((const void*)var43, (SafeAllocator*)(&arg0->unknown_0_[0]), var42);
                }
            }
        }
        var30->RemoveTask(arg0->unknown_d90_);
        arg0->unknown_d90_ = -1;
        ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_138_[0]))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_138_[0]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        ((BGLayer*)(&arg0->unknown_138_[1]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_138_[1]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        ((BGLayer*)(&arg0->unknown_138_[2]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
        ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_138_[2]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
        arg0->unknown_d9c_ &= ~0x80;
        arg0->unknown_d94_ = 0;
        return;
    }

    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1500;
    arg0->unknown_0_[1].Reset();
    var31 = 0;
    Struct_ov003_021594c4* var44[] = {&arg0->unknown_138_[3], &arg0->unknown_138_[4]};
    for (int var45 = 0; var45 < 2; var45++)
    {
        Struct_ov003_021594c4* var46 = var44[var45];
        ((BGLayer*)((BGLayer_02020cb8*)var46))->Reset();
        ((BGLayer*)((unsigned char*)var46))->ConfigureTextMode(0);
        var46->unknown_1c_0_ = 1;
        var46->unknown_1c_4_ = data_ov009_0218a95f[var45];
        ((BGLayer*)(var46))->SetPriority(data_ov009_0218a961[var45]);
        ((BGLayer*)((BGLayer_02020cb8_5*)var46))->SetOffset(0, 0);
        ((BGLayer*)((BGLayer_0204b12c*)var46))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_0_[1]));
        unsigned char var47 = 0;
        for (int var48 = 0; data_ov009_0218aa54[var48] >= 0; var48 += 3)
        {
            if (var33 == data_ov009_0218aa54[var48])
            {
                var47 = data_ov009_0218aa54[var48 + var45 + 1];
                if (var45 == 0)
                    var31 = var47;
                break;
            }
        }
        if (var47 != 0)
            ((BGLayer*)((BGLayer_0204af38*)var46))->AllocateSprites(var47, (SafeAllocator*)(&arg0->unknown_0_[1]));
    }

    char var49[4];
    void* var50;
    unsigned int var51;
    unsigned int var52;
    var30->GetLoadedFileByID(arg0->unknown_d90_, &var50, &var51);
    int var53 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var50));
    if (var33 == 8)
        arg0->unknown_db6_ = arg0->unknown_db6_ == 0 ? 1 : 0;
    unsigned char var54 = 0;
    var32 = var53 - 1;
    var29 = var31 + 1;
    void* var55;
    for (int var56 = 0; var56 < var53; var56++)
    {
        var55 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var50), var56, (const char**)((void**)var49), (unsigned int*)((int*)&var52));
        if (var55 == NULL)
            continue;
        char var57[5] = {};
        memcpy(var57, var55, 4);
        if (memcmp(var57, data_ov009_0218aca6, 4) == 0 && data_ov009_0218a95d[var54++] == arg0->unknown_d95_)
            continue;
        if (var33 == 8)
        {
            Struct_ov003_021594c4* var58 = &arg0->unknown_138_[4];
            if (var56 < var31)
                var58 = &arg0->unknown_138_[3];
            if (var56 == var32)
                var58 = &arg0->unknown_138_[3];
            if (arg0->unknown_db6_ != 0)
            {
                if (var56 != var32)
                    ((BGLayer*)(var58))->ProcessGraphicsFileMetadata((const void*)((char*)var55));
            }
            else
            {
                if (var56 != var32)
                    ((BGLayer*)((BGLayer_02020cb8_6*)var58))->StageGraphicsFileBuffer((const void*)((char*)var55));
                if (memcmp(var57, data_ov009_0218acab, 4) == 0)
                    ((BGLayer*)var58)->ProcessGraphicsFile((const void*)var55, (SafeAllocator*)(&arg0->unknown_0_[1]), var52);
            }
        }
        else if (var56 < var29)
        {
            ((BGLayer*)(&arg0->unknown_138_[3]))->ProcessGraphicsFile((const void*)var55, (SafeAllocator*)(&arg0->unknown_0_[1]), var52);
        }
        else
        {
            ((BGLayer*)(&arg0->unknown_138_[4]))->ProcessGraphicsFile((const void*)var55, (SafeAllocator*)(&arg0->unknown_0_[1]), var52);
        }
    }

    if (arg0->unknown_db6_ != 0)
        return;
    var30->RemoveTask(arg0->unknown_d90_);
    arg0->unknown_d90_ = -1;
    int var59 = 0;
    if (arg0->unknown_d95_ == 0 && var33 == 1)
        var59 = 1;
    if (var33 == 8 && arg0->unknown_d95_ == 1)
    {
        void* var60 = ((void*)((BGLayer*)((BGLayer_0204af14*)&arg0->unknown_138_[3]))->GetSprite(4));
        for (int var61 = 0; var61 < 4; var61++)
        {
            Struct_ov009_02184e58* var62 = (Struct_ov009_02184e58*)((void*)((BGLayer*)((BGLayer_0204af14*)&arg0->unknown_138_[3]))->GetSprite((unsigned char)var61));
            Struct_ov003_021594c4 var63;
            ((BGLayer*)((BGLayer_02020cb8*)&var63))->Reset();
            ((BGLayer*)(&var63))->BlitSpriteToBuffer((unsigned short*)(var62->unknown_c_), (const BGLayer::Sprite*)(var60), 0, 0, 0x13, 0x11, 4, 2, 1);
        }
    }
    ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_138_[3]))->BlitSpriteByIndex(var59, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    if (arg0->unknown_138_[3].unknown_1d_ == 5)
    {
        int var64 = func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance());
        int var65 = 0;
        switch (var64)
        {
        case 2:
            var65 = 1;
            break;
        case 4:
            var65 = 2;
            break;
        case 3:
            var65 = 3;
            break;
        case 5:
            var65 = 4;
            break;
        }
        if (var65 != 0)
            ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_138_[3]))->BlitSpriteByIndex(var65, 0, 0, 1, 1, 0xd, 3, 0xffff);
    }
    ((BGLayer*)(&arg0->unknown_138_[4]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
    arg0->unknown_d9c_ |= 0x2000;
    if (arg0->unknown_138_[4].unknown_1d_ != 0)
        func_ov023_021da274(arg0);
    arg0->unknown_d9c_ &= ~0x2000;
    ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_138_[3]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_138_[4]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
    arg0->unknown_d9c_ |= 0x4000;
    func_ov023_021d9d34((char*)arg0);
    arg0->unknown_d9c_ &= ~0x4000;
    arg0->unknown_d9c_ |= 0x8000;
    func_ov023_021d9e60((char*)arg0);
    arg0->unknown_d9c_ &= ~0x8000;
    arg0->unknown_d9c_ &= ~0x80;
    arg0->unknown_d94_ = 0;
    DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | 0x1700;
}
#endif
