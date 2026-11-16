#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Cache.h>
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"
#include "Resource/StringList.h"

#define REG_DISPCNT_SUB (*(volatile unsigned int*)0x04001000)
#define REG_BG0CNT_SUB (*(volatile unsigned short*)0x04001008)
#define REG_BG1CNT_SUB (*(volatile unsigned short*)0x0400100a)
#define REG_BG0OFS_SUB (*(volatile unsigned int*)0x04001010)
#define REG_BG1OFS_SUB (*(volatile unsigned int*)0x04001014)
#define REG_BLDCNT_SUB (*(volatile unsigned short*)0x04001050)

struct Struct_ov023_021e76c4_4 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_;
    char unknown_1e_[2];
};

struct Struct_ov023_021e76c4_5 {
    Struct_ov023_021e76c4_5* unknown_0_;
    Struct_ov023_021e76c4_4* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov023_021e76c4_6 {
    char unknown_0_[0x98];
    Struct_ov023_021e76c4_4* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};

struct Struct_ov023_021e76c4 {
    char unknown_0_[8];
    unsigned int unknown_8_;
    void* unknown_c_;
};

struct Struct_ov023_021e76c4_2 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    void* unknown_5c_;
};

struct Struct_ov023_021e76c4_3 {
    SafeAllocator unknown_0_[3];
    int unknown_3c_;
    unsigned int unknown_40_;
    unsigned int unknown_44_;
    unsigned int unknown_48_;
    char unknown_4c_[0x18];
    char unknown_64_[0x10];
    unsigned char unknown_74_;
    unsigned char unknown_75_;
    char unknown_76_[2];
    Struct_ov023_021e76c4_6 unknown_78_;
    Struct_ov023_021e76c4_4 unknown_134_[2];
    Struct_ov023_021e76c4_5 unknown_174_[5];
    void* unknown_5d4_;
    char* unknown_5d8_;
    int unknown_5dc_;
    int unknown_5e0_;
    int unknown_5e4_;
};

struct BGLayer_0204b12c;
struct BGLayer_02020cb8_5;
struct BGLayer_0204af38;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_02020cb8_2;
struct BGLayer_0204af14;
struct TextWindow_0204c7a8;
struct TextWindowManager_0205cf78;
struct TextWindow_0205cf78_2;

extern "C" Struct_ov023_021e76c4_2* GetMessageWindow_020421a0();
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8* window, SafeAllocator* allocator, int characterData, unsigned int screenDataSize);
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78* windowManager, TextWindow_0205cf78_2* textWindows, unsigned char textWindowCapacity);

extern "C" {
void __clear(void* arg0, unsigned long arg1);
void DisableSubBGVRAMBanks();
void MapVRAMBanksToSubBG(int banks);
void LoadPartyMemberColors_020dc7e8(int destination, int partyMemberIndex);
}

extern const char data_ov023_021fdd6e[];
#if defined(jpn)
extern const char data_ov023_021fd018[];
#endif
extern const char data_ov023_021fdd88[];
extern const char data_ov023_021fdd99[];
extern const unsigned short data_ov023_021fd760;

// USA: func_ov023_021e76c4
extern "C" ARM int func_ov023_021e76c4(Struct_ov023_021e76c4_3* arg0)
{
    void* var0[4];
    unsigned int var1[4];
    void* var2;
    unsigned int var3;
    int var4[2];
    char var5[4];
    void* var6;
    unsigned int var7;
    if (arg0->unknown_5dc_ != 0)
        return 1;
    int var8 = 1;
    BackgroundLoader* var9 = BackgroundLoader::GetInstance();
    if (arg0->unknown_5e0_ == 0)
    {
        REG_BG0OFS_SUB = 0;
        REG_BG1OFS_SUB = 0;
#if defined(jpn)
        arg0->unknown_5e4_ = var9->QueueLoadFile(data_ov023_021fd018, NULL);
#else
        arg0->unknown_5e4_ = var9->QueueLoadFileInGP2(data_ov023_021fdd6e, data_ov023_021fdd88, NULL);
#endif
        var8 = 0;
        arg0->unknown_5e0_++;
    }
    else if (arg0->unknown_5e0_ == 1)
    {
        if (var9->GetTaskStatus(arg0->unknown_5e4_))
        {
            var9->GetLoadedFileByID(arg0->unknown_5e4_, &var2, &var3);
            arg0->unknown_0_[2].Reset();
            ((StringList*)(arg0->unknown_4c_))->LoadFromMemory((SafeAllocator*)(&arg0->unknown_0_[2]), (const void*)(var2), var3);
            var9->RemoveTask(arg0->unknown_5e4_);
            arg0->unknown_5e4_ = -1;
            arg0->unknown_5e0_++;
        }
        var8 = 0;
    }
    else if (arg0->unknown_5e0_ == 2)
    {
        arg0->unknown_0_[0].Reset();
        arg0->unknown_5d8_ = (char*)GetMessageWindow_020421a0()->unknown_5c_;
        __clear(var4, sizeof(var4));
        Struct_ov023_021e76c4_4* var10;
        int var11;
        for (var11 = 0; var11 < 2; var11++)
        {
            var10 = &arg0->unknown_134_[var11];
            ((BGLayer*)((unsigned char*)var10))->ConfigureTextMode(var4[var11]);
            var10->unknown_1c_0_ = 1;
            var10->unknown_1c_4_ = var11;
            ((BGLayer*)(var10))->SetPriority(var11);
            ((BGLayer*)((BGLayer_0204b12c*)var10))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_0_[1]));
            ((BGLayer*)((BGLayer_02020cb8_5*)var10))->SetOffset(0, 0);
        }
        ((BGLayer*)((BGLayer_0204af38*)&arg0->unknown_134_[1]))->AllocateSprites(1, (SafeAllocator*)(&arg0->unknown_0_[1]));
        DisableSubBGVRAMBanks();
        MapVRAMBanksToSubBG(0x80);
        REG_BG0CNT_SUB = (REG_BG0CNT_SUB & 0x43) | 0xe00;
        REG_BG1CNT_SUB = (REG_BG1CNT_SUB & 0x43) | 0xf00;
        REG_BLDCNT_SUB = 0;
        var9->MaybeFreeAllocations();
        arg0->unknown_5e4_ = var9->QueueLoadFile(data_ov023_021fdd99, NULL);
        var8 = 0;
        arg0->unknown_5e0_++;
    }
    else if (arg0->unknown_5e0_ == 3)
    {
        if (var9->GetTaskStatus(arg0->unknown_5e4_))
        {
            var9->GetLoadedFileByID(arg0->unknown_5e4_, &var6, &var7);
            int var12 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var6));
            for (int var13 = 0; var13 < var12; var13++)
                var0[var13] = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var6), var13, (const char**)((void**)var5), (unsigned int*)((int*)&var1[var13]));
            Struct_ov023_021e76c4_4* var14 = &arg0->unknown_134_[0];
            for (int var15 = 0; var15 < var12; var15++)
            {
                if (var0[var15] != NULL)
                    ((BGLayer*)var14)->ProcessGraphicsFile((const void*)var0[var15], (SafeAllocator*)(&arg0->unknown_0_[1]), var1[var15]);
                var14 = &arg0->unknown_134_[1];
            }
            var9->RemoveTask(arg0->unknown_5e4_);
            arg0->unknown_5e4_ = -1;
            ((BGLayer*)(&arg0->unknown_134_[0]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
            ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_134_[0]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
            Struct_ov023_021e76c4* var16 = ((Struct_ov023_021e76c4*)((BGLayer*)((BGLayer_0204af14*)&arg0->unknown_134_[1]))->GetSprite(0));
            if (var16 != NULL)
            {
                void* var17;
                unsigned int var18;
                var18 = var16->unknown_8_;
                var17 = var16->unknown_c_;
                CleanInvalidateCacheRange((const void*)(var17), var18);
                LoadToSubBG1ScreenData(var17, 0, var18);
            }
            arg0->unknown_5d4_ = arg0->unknown_0_[0].Allocate(0x4e00);
            Struct_ov023_021e76c4_5* var19;
            int var20;
            for (var20 = 0; var20 < 4; var20++)
            {
                var19 = &arg0->unknown_174_[var20];
                SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var19, &arg0->unknown_0_[1], (int)arg0->unknown_5d4_, 0x600);
                var19->unknown_4_ = &arg0->unknown_134_[0];
            }
            var19 = &arg0->unknown_174_[4];
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)var19, &arg0->unknown_0_[1], (int)arg0->unknown_5d4_, 0x40);
            var19->unknown_4_ = &arg0->unknown_134_[0];
            arg0->unknown_78_.unknown_98_ = &arg0->unknown_134_[0];
            arg0->unknown_78_.unknown_b2_ = 1;
            SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)&arg0->unknown_78_, (TextWindow_0205cf78_2*)arg0->unknown_174_, 5);
            arg0->unknown_5e0_++;
        }
        var8 = 0;
    }
    else if (arg0->unknown_5e0_ == 4)
    {
        REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1f00) | 0x1300;
        arg0->unknown_5dc_ = var8;
        arg0->unknown_5e0_ = 0;
        LoadPartyMemberColors_020dc7e8(2, -1);
        CleanInvalidateCacheRange((const void*)(&data_ov023_021fd760), 2);
        LoadToSubBGStandardPalette(&data_ov023_021fd760, 2, 2);
        CleanCacheRange(&data_ov023_021fd760, 2);
        CleanInvalidateCacheRange((const void*)(&data_ov023_021fd760), 2);
        LoadToSubBGStandardPalette(&data_ov023_021fd760, 0x22, 2);
        CleanCacheRange(&data_ov023_021fd760, 2);
    }
    return var8;
}
