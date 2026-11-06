#include <globaldefs.h>
#include "Grotto/Main/DetailedTreasureMapData.h"
extern unsigned char gFileScratchSpace_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Filesystem/GPC.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "World/ZoneTerrain.h"
#include "World/Zone3D.h"

#if defined(jpn)
#define func_ov000_02165490 func_ov000_02166bdc
#define func_020a93d0 func_020ab154
#define data_ov000_021839ee data_ov000_02184b2e
#define data_ov000_02183070 data_ov000_0218411c
#define data_ov000_02183010 data_ov000_021840c8
#define data_ov000_02183014 data_ov000_021840cc
#endif

struct Struct_02001a40 {
    int unknown_0_[3];
};

struct Struct_ov000_02165490_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    char unknown_a_[6];
    char unknown_10_[0x18];
};

struct Struct_ov000_02165490_11 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[4];
    int unknown_8_;
    short unknown_c_;
    char unknown_e_[2];
    unsigned int unknown_10_0_ : 3;
    unsigned int unknown_10_3_ : 2;
    unsigned int unknown_10_5_ : 3;
    unsigned int unknown_11_0_ : 3;
    unsigned int unknown_11_3_ : 2;
    unsigned int unknown_11_5_ : 3;
    unsigned int unknown_12_0_ : 3;
    unsigned int unknown_12_3_ : 1;
    unsigned int unknown_12_4_ : 6;
    char unknown_14_[4];
    short unknown_18_[6];
    char unknown_24_[6];
    unsigned short unknown_2a_;
    char unknown_2c_[0x30];
    Struct_ov000_02165490_2 unknown_5c_;
};

struct Struct_ov000_02165490_13 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    char unknown_1a_[0x14];
    short unknown_2e_;
};

struct Struct_ov000_02165490 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_0_ : 3;
    unsigned int unknown_c_3_ : 6;
    unsigned int unknown_d_1_ : 3;
    unsigned int unknown_d_4_ : 2;
    unsigned int unknown_d_6_ : 3;
    unsigned int unknown_e_1_ : 3;
    unsigned int unknown_e_4_ : 2;
    char unknown_f_[0x18];
    int unknown_28_;
    int unknown_2c_;
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    short unknown_32_[6];
};

struct Struct_ov000_02165490_3 {
    unsigned short unknown_0_;
    char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    char unknown_b_[13];
};

struct Struct_ov000_02165490_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    int unknown_4_;
};

struct Struct_ov000_02165490_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned short unknown_2_;
    Struct_ov000_02165490_3 unknown_4_[3];
    Struct_ov000_02165490_4 unknown_4c_[4];
};

struct Struct_ov000_02165490_6 {
    char unknown_0_[0x400];
    Struct_02001a40 unknown_400_;
};

struct Struct_ov000_02165490_8 {
    int unknown_0_[2];
};

struct Struct_ov000_02165490_9 {
    char unknown_0_[0x2a];
    signed char unknown_2a_;
    char unknown_2b_[0x678 - 0x2b];
    Struct_02001a40 unknown_678_;
    Struct_02001a40 unknown_684_;
};

struct Struct_ov000_02165490_14 {
    char unknown_0_[0x81b0];
    Struct_ov000_02165490_5 unknown_81b0_;
};

struct Struct_ov000_02165490_10 {
    char unknown_0_[0x44];
    SafeAllocator unknown_44_;
#if defined(jpn)
    char unknown_58_[0x1d4 - sizeof(SafeAllocator)];
#else
    char unknown_58_[0x258 - sizeof(SafeAllocator)];
#endif
    Struct_ov000_02165490_14* unknown_29c_;
    Struct_ov000_02165490_9* unknown_2a0_;
};


extern "C" int* GetLocalWireless_0202ae18(GameResources*);
extern "C" int func_ov000_0215ed34(Struct_ov000_02165490_14* arg0, short* arg1, int arg2);
extern "C" void func_020709d8(void*);
extern "C" void func_02070b6c(void*, void*, void*, unsigned int, short*, short);
extern "C" Struct_ov000_02165490_11* func_02070fd0(void*, int);
extern "C" char* GetActionTables_020797dc();
extern "C" Struct_ov000_02165490_13* FindActionData_02079e2c(char*, int);
extern "C" int func_ov000_0215fb54(Struct_ov000_02165490_14*, int, int*);
extern "C" int func_020a3694(void*);
extern "C" void func_ov000_02165f90(void*, void*);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" int func_ov000_02167484(short*, int);
extern "C" char* GetActiveZones_02027ca4();
extern "C" char* FindActiveZone_02028bd0(char*, int);
extern "C" Struct_ov000_02165490* func_020a939c(char*, int);
extern "C" int func_020a93d0(char*);
extern "C" void* ExtractFileFromGP2(const char*, const char*, unsigned int*);
extern "C" void func_0206efc4(void*);
#if defined(jpn)
extern "C" void func_0206f230(void*, void*, void*, unsigned int, short*, short);
#else
extern "C" void func_0206f230(void*, void*, void*, unsigned int, short*, short, int, int);
#endif
extern "C" int func_0201b5d8(int);

extern "C" int GetProtagonistObjectIndex_020100a8(void*);
extern "C" void func_ov000_0215ed8c(Struct_ov000_02165490_14*);
extern "C" void SetBattleSceneFlags_ov000_02160fa8(void*, int);
extern "C" int IsLocalWirelessOn_0202b7d8(int*);
extern "C" void func_ov017_021cdf80(Struct_ov000_02165490_14*, int);
extern "C" void func_02079a3c(void*);
extern "C" unsigned int func_ov000_02166008(void*, void*, int);
extern "C" void func_ov000_02166070(void*, void*, int, int, int, unsigned int);

static inline char* inline_ov000_02165490(Struct_ov000_02165490_2* arg0) {
    SDK_NULL_ASSERT(arg0);
    return arg0->unknown_10_;
}

static inline char* inline_ov000_02165490_2(Struct_ov000_02165490* arg0) {
    SDK_NULL_ASSERT(arg0);
    return arg0->unknown_f_;
}

static inline Struct_ov000_02165490_5* inline_ov000_02165490_3(Struct_ov000_02165490_14* arg0) {
    SDK_NULL_ASSERT(arg0);
    return &arg0->unknown_81b0_;
}

struct Struct_ov000_02165490_12 {
    char unknown_0_[0x50];
};

extern char data_ov000_021839ee[];
extern int data_ov000_02183070[4][4];
extern char data_ov000_02183a07[];
extern char data_ov000_02183a1d[];
#if defined(jpn)
extern char data_ov000_02184b4a[];
#endif

extern const int data_ov000_02183010[1] = {1};
extern const unsigned char data_ov000_02183014[4] = {0, 1, 2, 3};
extern const short data_ov000_02183018[4] = {0x129, 0x126, 0x127, 0x128};

// USA: func_ov000_02165490
extern "C" ARM void func_ov000_02165490(Struct_ov000_02165490_10* arg0) {
    GPCReadPair var0;
    int var1[18];
    short var2[8];
    Struct_ov000_02165490_3 var3;
    unsigned int var4;
    short var5[4];
    Struct_ov000_02165490_8 var6;
    short var7[4];
    int var8;
    int var9;

    char* var10;
    Struct_ov000_02165490_6* var11;
    GameState* var12;
    int* var13;
    Struct_ov000_02165490_6* var14;
    Struct_ov000_02165490_9* var15;

    var12 = GameState::GetInstance();
    var13 = GetLocalWireless_0202ae18(GetGameResources());
    var15 = arg0->unknown_2a0_;
    var11 = (Struct_ov000_02165490_6*)((char*)var15 + 0x278);
    var14 = (Struct_ov000_02165490_6*)((char*)var15 + 0x284);

    var8 = func_ov000_0215ed34(arg0->unknown_29c_, var2, 3);
    BackgroundLoader::AddLockGlobal();
    if (LoadFileIntoMemory(data_ov000_021839ee, gFileScratchSpace_0211e33c, &var4)) {
        func_020709d8(&var14->unknown_400_);
        func_02070b6c(&var14->unknown_400_, &arg0->unknown_44_, gFileScratchSpace_0211e33c, var4, var2, var8);

        {
            Struct_ov000_02165490_14* var16 = arg0->unknown_29c_;
            var9 = 0;
            var10 = (char*)arg0->unknown_2a0_;
            int var17 = 0;
            int var18 = func_ov000_0215ed34(var16, var7, 3);
            int var19;
            for (int var20 = 0; var20 < var18; var20++) {
                for (var19 = 0; var19 < var9; var19++) {
                    if (var7[var20] == var5[var19]) break;
                }
                if (var19 == var9) {
                    var5[var9++] = var7[var20];
                }
            }

            int var21 = 0;
            for (int var22 = 0; var22 < var9; var22++) {
                int var23 = var5[var22];
                Struct_ov000_02165490_11* var24 = func_02070fd0(&((Struct_ov000_02165490_9*)var10)->unknown_684_, var23);
                if (var24 != 0) {
                    int var25;
                    for (int var26 = 0; var26 < 6; var26++) {
                        for (var25 = 0; var25 < var21; var25++) {
                            if ((unsigned short)var24->unknown_18_[var26] == var1[var25]) break;
                        }
                        if (var25 == var21) {
                            var23 = (unsigned short)var24->unknown_18_[var26];
                            int* var27 = &var1[var21];
                            var21++;
                            *var27 = var23;
                        }
                    }
                }
            }

            char* var28 = GetActionTables_020797dc();
            for (int var29 = 0; var29 < var21; var29++) {
                Struct_ov000_02165490_13* var30 = FindActionData_02079e2c(var28, (short)var1[var29]);
                if (var30 != 0 && var30->unknown_18_5_ == 0xc) {
                    static const Struct_ov000_02165490_8 def = {-1, 0};
                    var6 = def;
                    int var31 = func_ov000_0215fb54(var16, var1[var29], var6.unknown_0_);
                    int var32;
                    int* var33;
                    int var34;
                    int var35;
                    for (var35 = 0; var35 < var31; var35++) {
                        var33 = var6.unknown_0_;
                        var32 = var33[var35];
                        if (var32 > -1) {
                            for (var34 = 0; var34 < var9; var34++) {
                                short var36 = var5[var34];
                                if (var36 == var32) break;
                            }
                            if (var34 == var9) {
                                var5[var9++] = var33[var35];
                                var17++;
                            }
                        }
                    }
                }
            }

            {
                int* var37;
                int (*var38)[4];
                short* var39;
                int var40;
                int var41;
                short var42;
                int var43;
                var38 = data_ov000_02183070;
                var39 = var5;
                for (var43 = 0; var43 < var9; var43++) {
                    var42 = var39[var43];
                    for (var41 = 0; var41 < 4; var41++) {
                        if (var42 == var38[var41][0]) {
                            var37 = var38[var41];
                            for (var40 = 0; var40 < var37[1]; var40++) {
                                var39[var9] = var37[var40 + 2];
                                var9++;
                            }
                        }
                    }
                }
            }
        }

        {
            unsigned short var44 = inline_ov000_02165490_3(arg0->unknown_29c_)->unknown_2_;
            if (!func_020a3694(arg0->unknown_2a0_)) {
                for (int var45 = 0; var45 < var9; var45++) {
                    if (var44 == var5[var45]) {
                        var5[var45] = var5[0];
                        var5[0] = var44;
                        Struct_ov000_02165490_5* var46;
                        int var47 = -1;
                        var46 = inline_ov000_02165490_3(arg0->unknown_29c_);
                        int var48 = -1;
                        for (int var49 = 0; var49 < 3; var49++) {
                            if (var44 == var46->unknown_4_[var49].unknown_0_ && var47 == -1) var47 = var49;
                            if (var46->unknown_4_[var49].unknown_0_ == var5[var45] && var48 == -1) var48 = var49;
                        }
                        func_ov000_02165f90(&var3, &var46->unknown_4_[var47]);
                        func_ov000_02165f90(&var46->unknown_4_[var47], &var46->unknown_4_[var48]);
                        func_ov000_02165f90(&var46->unknown_4_[var48], &var3);
                        break;
                    }
                }
            }
        }

        arg0->unknown_44_.Reset();
        func_020709d8(&var14->unknown_400_);
        func_02070b6c(&var14->unknown_400_, &arg0->unknown_44_, gFileScratchSpace_0211e33c, var4, var5, var9);
        memcpy(var2, var5, var9 * 2);

        {
            var8 = var9;
            var10 = (char*)arg0->unknown_2a0_ + 0x284;
            unsigned int var50 = var4;
            Struct_ov000_02165490_11* var51;
            int var52;
            char* var53 = GetActionTables_020797dc();
            int var54;
            for (int var55 = 0; var55 < var8; var55++) {
                var52 = 0;
                var51 = func_02070fd0(&((Struct_ov000_02165490_6*)var10)->unknown_400_, var2[var55]);
                for (var54 = 0; var54 < 6; var54++) {
                    Struct_ov000_02165490_13* var56 = FindActionData_02079e2c(var53, var51->unknown_18_[var54]);
                    if (var56 != 0 && var56->unknown_18_5_ == 0x22 && var56->unknown_2e_ > 0 &&
                        func_02070fd0(&((Struct_ov000_02165490_6*)var10)->unknown_400_, var56->unknown_2e_) == 0) {
                        var2[var8++] = var56->unknown_2e_;
                        var52 = 1;
                    }
                }
                if (var52) {
                    arg0->unknown_44_.Reset();
                    func_020709d8(&((Struct_ov000_02165490_6*)var10)->unknown_400_);
                    func_02070b6c(&((Struct_ov000_02165490_6*)var10)->unknown_400_, &arg0->unknown_44_, gFileScratchSpace_0211e33c, var50, var2, var8);
                }
            }
        }

        var8 = func_ov000_02167484(var2, var8);
        arg0->unknown_44_.Reset();
        func_020709d8(&var14->unknown_400_);
        func_02070b6c(&var14->unknown_400_, &arg0->unknown_44_, gFileScratchSpace_0211e33c, var4, var2, var8);
    }

    Zone3D* var57 = GetZone3D_02012fe4();
    char* var58 = FindActiveZone_02028bd0(GetActiveZones_02027ca4(), var57->currentZoneID_);
    if (var58 != 0) {
#if defined(jpn)
        for (int var59 = 0; var59 < func_020a93d0(var58 + 0x308); var59++) {
            Struct_ov000_02165490* var60 = func_020a939c(var58 + 0x308, var59);
#else
        for (int var59 = 0; var59 < func_020a93d0(var58 + 0x30c); var59++) {
            Struct_ov000_02165490* var60 = func_020a939c(var58 + 0x30c, var59);
#endif
            if (var60 != 0) {
                Struct_ov000_02165490_11* var61 = func_02070fd0(&var14->unknown_400_, var60->unknown_0_);
                if (var61 != 0) {
                    var61->unknown_5c_.unknown_0_ = var60->unknown_2_;
                    var61->unknown_5c_.unknown_2_ = var60->unknown_4_;
                    var61->unknown_5c_.unknown_8_ = var60->unknown_6_;
                    var61->unknown_5c_.unknown_4_ = var60->unknown_8_;
                    var61->unknown_5c_.unknown_6_ = var60->unknown_a_;
                    var61->unknown_10_3_ = var60->unknown_e_4_;
                    var61->unknown_10_5_ = var60->unknown_c_0_;
                    memcpy(var61->unknown_18_, var60->unknown_32_, 0xc);
                    var61->unknown_12_4_ = var60->unknown_c_3_;
                    var61->unknown_11_0_ = var60->unknown_d_1_;
                    var61->unknown_11_3_ = var60->unknown_d_4_;
                    var61->unknown_11_5_ = var60->unknown_d_6_;
                    var61->unknown_12_0_ = var60->unknown_e_1_;
                    memcpy(inline_ov000_02165490(&var61->unknown_5c_), inline_ov000_02165490_2(var60), 0x18);
                    var61->unknown_8_ = var60->unknown_28_;
                    var61->unknown_c_ = var60->unknown_2c_;
                    var61->unknown_2_ = var60->unknown_30_;
                    var61->unknown_3_ = var60->unknown_31_;
                }
            }
        }
    }

#if defined(jpn)
    if (LoadFileIntoMemory(data_ov000_02184b4a, gFileScratchSpace_0211e33c, &var4)) {
        func_0206efc4(&var11->unknown_400_);
        func_0206f230(&var11->unknown_400_, &arg0->unknown_44_, gFileScratchSpace_0211e33c, var4, var2, var8);
#else
    void* var62 = ExtractFileFromGP2(data_ov000_02183a07, data_ov000_02183a1d, &var4);
    if (var62 != 0) {
        func_0206efc4(&var11->unknown_400_);
        func_0206f230(&var11->unknown_400_, &arg0->unknown_44_, var62, var4, var2, var8, 0, 0);
#endif
        unsigned int var63 = arg0->unknown_44_.GetMaxPossibleAllocation();
        int var64 = var9;
        for (int var65 = 0; var65 < var9; var65++) {
            Struct_ov000_02165490_11* var66 = func_02070fd0(&var14->unknown_400_, var5[var65]);
            if (var66 != 0) {
                if (var63 < (var66->unknown_2a_ << 10)) {
                    var64 = var65;
                    break;
                }
                var63 -= var66->unknown_2a_ << 10;
                Zone3D* var67 = GetZone3D_02012fe4();
                if (func_0201b5d8(var67->currentZoneID_)) {
                    DetailedTreasureMapData* var68 = var67->grotto_.GetDetailedData();
                    if (var68->mapType_ == 2) {
                        if (IsMonsterIDLegacyBoss(var5[var65])) {
                            const DetailedTreasureMapData::LegacyBossMapData* var69 = &var68->legacy_;
                            const LegacyBossStats* var70 = &var69->stats_;
                            var66->unknown_5c_.unknown_0_ = var70->maxHP;
                            var66->unknown_5c_.unknown_2_ = var70->maxMP;
                            var66->unknown_5c_.unknown_8_ = var70->agility;
                            var66->unknown_5c_.unknown_4_ = var70->attack;
                            var66->unknown_5c_.unknown_6_ = var70->defense;
                            var66->unknown_8_ = var70->rewardExp;
                            var66->unknown_c_ = var70->rewardGold;
                        }
                    }
                }
            }
        }

        if (var64 < var9) {
            Struct_ov000_02165490_5* var71 = inline_ov000_02165490_3(arg0->unknown_29c_);
            for (int var72 = var64; var72 < var9; var72++) {
                short var73 = var5[var72];
                for (int var74 = 0; var74 < var71->unknown_1_4_; var74++) {
                    if (var73 == var71->unknown_4_[var74].unknown_0_) {
                        memset(&var71->unknown_4_[var74], 0, 0x18);
                    }
                }
                for (int var75 = 0; var75 < var71->unknown_1_6_; var75++) {
                    if (var73 == var71->unknown_4c_[var75].unknown_2_) {
                        var71->unknown_4c_[var75].unknown_2_ = 0;
                        var71->unknown_4c_[var75].unknown_0_ = 0;
                        var71->unknown_4c_[var75].unknown_1_ = 0;
                        var71->unknown_4c_[var75].unknown_4_ = 0;
                    }
                }
            }
            var71->unknown_0_ = 0;
            var71->unknown_1_0_ = 0;
            var71->unknown_1_4_ = 0;
            var71->unknown_1_6_ = 0;
            for (int var76 = 0; var76 < 3; var76++) {
                if (var71->unknown_4_[var76].unknown_0_ != 0) {
                    var71->unknown_1_4_++;
                    var71->unknown_0_ += var71->unknown_4_[var76].unknown_a_0_;
                    var71->unknown_1_0_ += var71->unknown_4_[var76].unknown_a_4_;
                }
            }
            for (int var77 = 0; var77 < 4; var77++) {
                if (var71->unknown_4c_[var77].unknown_2_ != 0) {
                    var71->unknown_1_6_++;
                }
            }
            var9 = var64;
        }

        if (arg0->unknown_2a0_->unknown_2a_ == GetProtagonistObjectIndex_020100a8(var12)) {
            func_ov000_0215ed8c(arg0->unknown_29c_);
            SetBattleSceneFlags_ov000_02160fa8(arg0, 4);
            if (IsLocalWirelessOn_0202b7d8(var13)) {
                func_ov017_021cdf80(arg0->unknown_29c_, 0);
            }
        }
    }

    func_02079a3c(&var0);
    unsigned int var78 = func_ov000_02166008(arg0, &var0, 0);
    for (int var79 = 0; var79 < var9; var79++) {
        func_ov000_02166070(arg0, &var0, var79, var5[var79], 0, var78);
    }
    var0.Reset();
    BackgroundLoader::RemoveLockGlobal();
    BackgroundLoader::RemoveLockGlobal();
    var0.Reset();
    ZeroDestroyGPCPointer(&var0.pGPCFile);
}
