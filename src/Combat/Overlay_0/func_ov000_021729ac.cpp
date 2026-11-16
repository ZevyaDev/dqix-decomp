#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Graphics/BGLayer.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/GameStrings.h"
#include "Resource/PAC.h"
#include "Resource/StringList.h"

#if defined(jpn)
#define func_ov017_021b8478 func_ov017_021b8988
#endif

#if defined(jpn)
#define func_020de848 func_020e01c4
#endif

#if defined(jpn)
#define func_0203bd08 func_0203b760
#endif

extern "C" void* func_0203bd08(void);
extern "C" unsigned short GetSubBGVRAMBanks(void);
extern "C" void MapVRAMBanksToSubBG(int banks);
extern "C" char* GetSpriteTextManager_0203bd14();
struct StringTable_0201099c_14;
extern "C" void func_020de848(void* itemTable);
extern "C" void LoadItemTableByCategories_020dea64(void* itemTable, void* allocator, void* fileData, unsigned int fileSize, const void* categories, int categoryCount);
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" char* func_ov017_021b8478(void* battleManager);
struct Struct_02070f98_2;
extern "C" struct Struct_ov000_021729ac* func_02070f98(Struct_02070f98_2*, int);
struct Struct_02070fe4;
extern "C" int func_02070fe4(Struct_02070fe4*);
extern "C" int LoadItemTableByIds_020de9a4(void* itemTable, void* allocator, void* fileData, unsigned int fileSize, void* itemIds, unsigned short itemIdCount);
struct Struct_0201099c_3;
struct Struct_0203c108_3;
extern "C" void func_0203c108(Struct_0203c108_3*, char*);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void InitNoun_020e46c4(void* noun);
extern "C" void ClearMessageParams_02046380(void* window);
extern "C" void func_02046608(void* arg0, int arg1, char* arg2, void* arg3, int arg4, int arg5, unsigned char arg6);
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
extern "C" int* GetBGVRAMManager_0203b628();
extern "C" void func_0203b678(int* arg0, int arg1, int arg2);
extern "C" void func_0203b66c(char*);
extern "C" void func_0203b634(char*);
extern "C" void func_ov000_02172944(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov000_02172978(int arg0, int arg1, int arg2, int arg3, int arg4);
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
extern "C" void InitTextWindow_0204c684(void* textWindow);
extern "C" void FillTextWindowRect_0204f914(void* textWindow, int colorIndex, short left, short top, short right, short bottom);
extern "C" void func_0204f41c(void* arg0, short arg1, short arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;
struct TextWindow_0204c7a8;
extern "C" void SetTextWindowBuffers_0204c7a8(TextWindow_0204c7a8*, SafeAllocator*, int, unsigned int);
struct TextWindow_0205cf78_2;
struct TextWindowManager_0205cf78;
extern "C" void SetTextWindowArray_0205cf78(TextWindowManager_0205cf78*, TextWindow_0205cf78_2*, unsigned char);
extern "C" void LoadPartyMemberColors_020dc7e8(int destination, int partyMemberIndex);
struct Struct_0204c87c;
extern "C" void func_0204c964(Struct_0204c87c*);

struct Struct_ov000_021833ba {
    short unknown_0_;
    short unknown_2_[2];
};

extern char data_ov000_02183ff5[];
extern char data_ov000_0218400f[];
extern const char* gItemDataPath_020f2a38;
extern const char* data_020f2a30;
extern char data_ov000_02183302[];
extern const short data_ov000_02183418[];
extern char data_ov000_02184035[];
extern char data_ov000_02184020[];
extern char data_ov000_02184046[];
extern Struct_ov000_021833ba data_ov000_021833ba[];
extern Struct_ov000_021833ba data_ov000_021833bc[];
extern Struct_ov000_021833ba data_ov000_021833be[];

struct Struct_ov000_021729ac {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_ov000_021729ac_2 {
    char unknown_0_[0x684];
    char unknown_684_[4];
};

struct Struct_ov000_021729ac_3 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
    unsigned int unknown_b_2_ : 6;
};

struct Struct_ov000_021729ac_4 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 1;
    unsigned short unknown_0_7_ : 1;
    unsigned short unknown_1_0_ : 5;
    unsigned short unknown_1_5_ : 1;
    unsigned short unknown_1_6_ : 2;
};

struct Struct_ov000_021729ac_5 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};

struct Struct_ov000_021729ac_6 {
    char unknown_0_[8];
    char* unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[0xe0 - 0xac];
};

struct Struct_ov000_021729ac_7 {
    char unknown_0_[4];
    Struct_ov000_021729ac_5* unknown_4_;
    char unknown_8_[0xe0 - 8];
};

struct Struct_ov000_021729ac_8 {
    char unknown_0_[0xb8];
    char unknown_b8_[0x18];
    char unknown_d0_[2][0x18];
    char unknown_100_[0x11c - 0x100];
    char unknown_11c_[0x158 - 0x11c];
    char* unknown_158_;
    char* unknown_15c_;
    char unknown_160_[0x168 - 0x160];
    short unknown_168_;
    char unknown_16a_[2];
    unsigned char unknown_16c_;
    char unknown_16d_[3];
    char* unknown_170_;
    char* unknown_174_;
    void* unknown_178_;
    char unknown_17c_[4];
    Struct_ov000_021729ac_4 unknown_180_;
    Struct_ov000_021729ac_4 unknown_182_;
    int unknown_184_;
    char unknown_188_[0x220 - 0x188];
    Struct_ov000_021729ac_5* unknown_220_;
    char unknown_224_[0x23a - 0x224];
    unsigned char unknown_23a_;
    char unknown_23b_[0x284 - 0x23b];
    Struct_ov000_021729ac_7 unknown_284_[7];
    Struct_ov000_021729ac_5 unknown_8a4_[3];
    int unknown_904_;
    int unknown_908_;
    int unknown_90c_;

#if defined(jpn)
    char unknown_910_[0x1b78 - 0x910];
#else
    char unknown1_910_[0x1a78 - 0x910];
#endif

    SafeAllocator unknown_1a78_[6];

#if defined(jpn)
    char unknown_1bf0_[0x1c0c - 0x1bf0];
#else
    char unknown_1af0_[0x1b54 - 0x1af0];
#endif

#if defined(jpn)
    char unknown_1b54_[2][0x38];
#else
    char unknown_1b54_[2][0x18];
#endif

#if defined(jpn)
    char unknown_1c7c_[5][0x38];
#else
    char unknown_1b84_[9][0x18];
#endif

#if defined(jpn)
    char unknown_1d94_[0x1faa - 0x1d94];
#else
    char unknown_1c5c_[0x1d72 - 0x1c5c];
#endif

    unsigned short unknown_1d72_;
};

// USA: func_ov000_021729ac
extern "C" ARM int func_ov000_021729ac(Struct_ov000_021729ac_8* arg0) {
    unsigned short var0[0x28];
    char var1[0x80];
    Struct_ov000_021729ac_6 var2;
    Struct_ov000_021729ac_3 var3;
    void* var4;
    unsigned int var5;
    void* var6;
    unsigned int var7;
    void* var8;
    void* var9;
    unsigned int var10;
    int var11;
    void* var12;
    void* var13;
    unsigned int var14;
    int var15;
    short var16;
    short var17;

    GameState::GetInstance();
    BackgroundLoader* var18 = BackgroundLoader::GetInstance();
    func_0203bd08();

    if (arg0->unknown_908_ == 0) {
        arg0->unknown_904_ = (*(volatile unsigned int*)0x4001000 & 0x1f00) >> 8;
        arg0->unknown_184_ = GetSubBGVRAMBanks();
        MapVRAMBanksToSubBG(0x180);
        *(int*)func_0203bd08() = 0;

#if defined(jpn)
        *(int*)(GetSpriteTextManager_0203bd14() + 0x608) = 0x1d000;
#else
        *(int*)(GetSpriteTextManager_0203bd14() + 0x508) = 0x18000;
#endif

#if defined(jpn)
        arg0->unknown_90c_ = var18->QueueLoadFile(data_ov000_02183ff5, 0);
#else
        arg0->unknown_90c_ = var18->QueueLoadFileInGP2(data_ov000_02183ff5, data_ov000_0218400f, 0);
#endif

        arg0->unknown_908_++;
    } else if (arg0->unknown_908_ == 1) {
        if (var18->GetTaskStatus(arg0->unknown_90c_) != 0) {
            var18->GetLoadedFileByID(arg0->unknown_90c_, &var4, &var5);
            if (var4 != 0) {
                arg0->unknown_1a78_[1].Reset();
                ((StringList*)((StringTable_0201099c_14*)arg0->unknown_b8_))->Reset();
                ((StringList*)(arg0->unknown_b8_))->LoadFromMemory((SafeAllocator*)(&arg0->unknown_1a78_[1]), (const void*)(var4), var5);
            }
            var18->RemoveTask(arg0->unknown_90c_);
            arg0->unknown_90c_ = -1;

#if defined(jpn)
            arg0->unknown_90c_ = var18->QueueLoadGP1(gItemDataPath_020f2a38, 0);
#else
            arg0->unknown_90c_ = var18->QueueLoadFileInGP2(gItemDataPath_020f2a38, data_020f2a30, 0);
#endif

            arg0->unknown_908_++;
        }
    } else if (arg0->unknown_908_ == 2) {
        if (var18->GetTaskStatus(arg0->unknown_90c_) != 0) {
            var18->GetLoadedFileByID(arg0->unknown_90c_, &var6, &var7);
            if (var6 != 0) {
                arg0->unknown_1a78_[4].Reset();
                func_020de848(arg0->unknown_d0_[0]);
                LoadItemTableByCategories_020dea64(arg0->unknown_d0_[0], &arg0->unknown_1a78_[4], var6, var7, data_ov000_02183302, 3);
                arg0->unknown_1a78_[5].Reset();
                func_020de848(arg0->unknown_d0_[1]);
                __clear(var0, sizeof(var0));
                unsigned short var19 = 0;

#if defined(jpn)
                Struct_ov000_021729ac_2* var20 = (Struct_ov000_021729ac_2*)func_ov017_021b8478(*(void**)((char*)GetGameResources() + 0x3000 + 0x508));
#else
                Struct_ov000_021729ac_2* var20 = (Struct_ov000_021729ac_2*)func_ov017_021b8478(*(void**)((char*)GetGameResources() + 0x3000 + 0x718));
#endif

                if (var20 != 0) {
                    void* var21 = var20->unknown_684_;
                    for (int var22 = 0; var22 < func_02070fe4((Struct_02070fe4*)var21); var22++) {
                        if (var19 > sizeof(var0) / sizeof(var0[0])) {
                            break;
                        }
                        Struct_ov000_021729ac* var23 = func_02070f98((Struct_02070f98_2*)var21, var22);
                        if (var23 != 0) {
                            var0[var19++] = var23->unknown_4_;
                            var0[var19++] = var23->unknown_6_;
                        }
                    }
                }
                LoadItemTableByIds_020de9a4(arg0->unknown_d0_[1], &arg0->unknown_1a78_[5], var6, var7, var0, var19);
            }
            var18->RemoveTask(arg0->unknown_90c_);
            arg0->unknown_90c_ = -1;
            func_0203c108((Struct_0203c108_3*)arg0->unknown_1b54_[0], ((char*)((StringList*)((Struct_0201099c_3*)arg0->unknown_b8_))->GetString(0x754e)));
            func_0203c108((Struct_0203c108_3*)arg0->unknown_1b54_[1], ((char*)((StringList*)((Struct_0201099c_3*)arg0->unknown_b8_))->GetString(0x7550)));

#if defined(jpn)
            for (int var24 = 0; var24 < 5; var24++) {
                func_0203c108((Struct_0203c108_3*)arg0->unknown_1c7c_[var24], ((char*)((StringList*)((Struct_0201099c_3*)arg0->unknown_b8_))->GetString(data_ov000_02183418[var24])));
            }
#else
            void* var25 = GetMessageWindow_020421a0();
            for (int var26 = 0; var26 < 9; var26++) {
                __clear(var1, sizeof(var1));
                InitNoun_020e46c4(&var3);
                if (var26 >= 5) {
                    var3.unknown_b_0_ = 1;
                }
                ClearMessageParams_02046380(var25);
                int var27 = data_ov000_02183418[var26];
                *(void**)var25 = &var3;
                func_02046608(var25, 0xa, ((char*)((StringList*)((Struct_0201099c_3*)arg0->unknown_b8_))->GetString(var27)), var1, 0x100, 0, 0);
                func_0203c108((Struct_0203c108_3*)arg0->unknown_1b84_[var26], var1);
            }

#endif
            arg0->unknown_908_++;
        }
    } else if (arg0->unknown_908_ == 3) {
        if (arg0->unknown_174_ == 0 || arg0->unknown_170_ == 0) {
            arg0->unknown_908_ = 3;
        }

#if defined(jpn)

#else
        arg0->unknown_16c_ = 1;
#endif

        arg0->unknown_15c_ = arg0->unknown_170_;

#if defined(jpn)
        arg0->unknown_168_ = 0x20;
#else
        arg0->unknown_168_ = 0x28;
#endif

        arg0->unknown_158_ = arg0->unknown_174_;

#if defined(jpn)
        arg0->unknown_90c_ = var18->QueueLoadFile(data_ov000_02184020, 0);
#else
        arg0->unknown_90c_ = var18->QueueLoadFileInGP2(data_ov000_02184020, data_ov000_02184035, 0);
#endif

        arg0->unknown_908_++;
    } else if (arg0->unknown_908_ == 4) {
        if (var18->GetTaskStatus(arg0->unknown_90c_) != 0) {
            var18->GetLoadedFileByID(arg0->unknown_90c_, &var9, &var10);
            int var28 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var9));
            arg0->unknown_1a78_[0].Reset();
            for (int var29 = 0; var29 < var28; var29++) {
                void* var30 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var9), var29, (const char**)(&var8), (unsigned int*)(&var11));
                if (var30 != 0) {
                    ((OBJSpriteSet*)(arg0->unknown_11c_))->LoadFromNitroFile((void*)(var30), var11, (SafeAllocator*)(&arg0->unknown_1a78_[0]));
                }
            }

#if defined(jpn)
            ((OBJSpriteSet*)(arg0->unknown_11c_))->AssignOBJIndices((OBJSpriteSet::Metatile*)(arg0->unknown_170_), (unsigned short)var28, 0x40);
#else
            ((OBJSpriteSet*)(arg0->unknown_11c_))->AssignOBJIndices((OBJSpriteSet::Metatile*)(arg0->unknown_170_), (unsigned short)var28, 0x44);
#endif

            ((OBJSpriteSet*)((int)arg0->unknown_11c_))->SetMetatileTransformFlags((OBJSpriteSet::Metatile*)(arg0->unknown_170_ + 0x2a8), 1, 1);
            ((OBJSpriteSet*)((int)arg0->unknown_11c_))->SetMetatileTransformFlags((OBJSpriteSet::Metatile*)(arg0->unknown_170_ + 0x2d0), 1, 1);
            var18->RemoveTask(arg0->unknown_90c_);
            arg0->unknown_90c_ = -1;
            arg0->unknown_908_++;
        }
    } else if (arg0->unknown_908_ == 5) {
        int* var31 = GetBGVRAMManager_0203b628();
        func_0203b678(var31, 1, 0);
        func_0203b678(var31, 1, 1);
        func_0203b66c((char*)var31);
        func_0203b634((char*)var31);
        func_ov000_02172944(0, arg0->unknown_180_.unknown_0_7_, 5, arg0->unknown_180_.unknown_0_2_, arg0->unknown_182_.unknown_1_5_);
        func_ov000_02172978(0, arg0->unknown_182_.unknown_0_7_, 6, arg0->unknown_182_.unknown_0_2_, arg0->unknown_182_.unknown_1_5_);
        *(volatile unsigned short*)0x400100c = (*(volatile unsigned short*)0x400100c & 0x43) | 0x704;
        arg0->unknown_1a78_[3].Reset();

        Struct_ov000_021729ac_5* var32 = &arg0->unknown_8a4_[0];
        ((BGLayer*)((unsigned char*)var32))->ConfigureTextMode(0);
        var32->unknown_1c_0_ = 1;
        var32->unknown_1c_4_ = 0;
        ((BGLayer*)(var32))->SetPriority(2);
        ((BGLayer*)((BGLayer_0204b12c*)var32))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_1a78_[3]));

        var32 = &arg0->unknown_8a4_[1];
        ((BGLayer*)((unsigned char*)var32))->ConfigureTextMode(0);
        var32->unknown_1c_0_ = 1;
        var32->unknown_1c_4_ = 1;
        ((BGLayer*)(var32))->SetPriority(3);
        ((BGLayer*)((BGLayer_0204b12c*)var32))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_1a78_[3]));

#if defined(jpn)
        ((BGLayer*)((BGLayer_0204af38*)var32))->AllocateSprites(29, (SafeAllocator*)(&arg0->unknown_1a78_[3]));
#else
        ((BGLayer*)((BGLayer_0204af38*)var32))->AllocateSprites(10, (SafeAllocator*)(&arg0->unknown_1a78_[3]));
#endif

        var32 = &arg0->unknown_8a4_[2];
        ((BGLayer*)((unsigned char*)var32))->ConfigureTextMode(0);
        var32->unknown_1c_0_ = 1;
        var32->unknown_1c_4_ = 2;
        ((BGLayer*)(var32))->SetPriority(0);
        ((BGLayer*)((BGLayer_0204b12c*)var32))->AllocateIndexBuffer((SafeAllocator*)(&arg0->unknown_1a78_[3]));

        arg0->unknown_90c_ = var18->QueueLoadFile(data_ov000_02184046, 0);
        arg0->unknown_908_++;
    } else if (arg0->unknown_908_ == 6) {
        if (var18->GetTaskStatus(arg0->unknown_90c_) != 0) {
            var18->GetLoadedFileByID(arg0->unknown_90c_, &var13, &var14);
            int var33 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var13));
            for (int var34 = 0; var34 < var33; var34++) {
                void* var35 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var13), var34, (const char**)(&var12), (unsigned int*)(&var15));
                if (var35 != 0) {
#if !defined(jpn)
                    if (var34 == 0) {
                        InitTextWindow_0204c684(&var2);
                        var2.unknown_a8_ = 0x20;
                        var2.unknown_aa_ = 0x20;
                        var2.unknown_8_ = (char*)var35 + 0x10;
                        char* var36;
                        char* var37 = ((char*)GetGameString((eGameString)(0xc9)));
                        var36 = ((char*)GetGameString((eGameString)(0xca)));
                        short var38;
                        short var39;
                        short var40;
                        for (int var41 = 0; var41 < 2; var41++) {
                            var38 = data_ov000_021833ba[var41].unknown_0_;
                            var39 = data_ov000_021833bc[var41].unknown_0_;
                            var40 = data_ov000_021833be[var41].unknown_0_;
                            FillTextWindowRect_0204f914(&var2, 3, var38, var39, var38 + 0x10, var39 + 8);
                            func_0204f41c(&var2, var38 + 1, var39 - 2, var37, 8, 2, &var17, &var16, 0);
                            func_0204f41c(&var2, var38, var39 - 2, var37, 8, 0xa, &var17, &var16, 0);
                            FillTextWindowRect_0204f914(&var2, 3, var38, var40, var38 + 0x10, var40 + 8);
                            func_0204f41c(&var2, var38 + 1, var40 - 2, var36, 8, 2, &var17, &var16, 0);
                            func_0204f41c(&var2, var38, var40 - 2, var36, 8, 0xa, &var17, &var16, 0);
                        }
                    }
#endif
                    Struct_ov000_021729ac_5* var42 = &arg0->unknown_8a4_[1];
                    if (var34 == var33 - 1) {
                        var42 = &arg0->unknown_8a4_[2];
                    }
                    ((BGLayer*)var42)->ProcessGraphicsFile((const void*)var35, (SafeAllocator*)(&arg0->unknown_1a78_[3]), var15);
                }
            }
            ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_8a4_[1]))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x19, 0xffff);
            ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_8a4_[1]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
            ((BGLayer*)(&arg0->unknown_8a4_[0]))->SetTileInRectangle(0, 0, 0, 0x20, 0x19, 0);
            ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_8a4_[0]))->CleanCacheAndUploadIndexBuffer((const void*)(0));
            ((BGLayer*)((BGLayer_0204b8d0*)&arg0->unknown_8a4_[2]))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x19, 0xffff);
            ((BGLayer*)((BGLayer_02020cb8_2*)&arg0->unknown_8a4_[2]))->CleanCacheAndUploadIndexBuffer((const void*)(0));

            arg0->unknown_1a78_[2].Reset();
            arg0->unknown_178_ = arg0->unknown_1a78_[2].Allocate(0x5c00);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[0], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x30c);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[1], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x240);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[2], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x240);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[3], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x200);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[4], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x200);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[5], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x200);
            SetTextWindowBuffers_0204c7a8((TextWindow_0204c7a8*)&arg0->unknown_284_[6], &arg0->unknown_1a78_[2], (int)arg0->unknown_178_, 0x200);
            for (int var43 = 0; var43 < 7; var43++) {
                arg0->unknown_284_[var43].unknown_4_ = &arg0->unknown_8a4_[2];
            }
            var18->RemoveTask(arg0->unknown_90c_);
            arg0->unknown_90c_ = -1;
            arg0->unknown_220_ = &arg0->unknown_8a4_[2];
            arg0->unknown_23a_ = 1;
            SetTextWindowArray_0205cf78((TextWindowManager_0205cf78*)arg0->unknown_188_, (TextWindow_0205cf78_2*)arg0->unknown_284_, 7);
            arg0->unknown_908_++;
            arg0->unknown_1d72_ |= 0x40;
        }
    } else if (arg0->unknown_908_ == 7) {
        LoadPartyMemberColors_020dc7e8(0, -1);
        *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1700;
        *(volatile unsigned short*)0x4001050 = 0;
        func_0204c964((Struct_0204c87c*)&arg0->unknown_284_[0]);
        return 1;
    }
    return 0;
}
