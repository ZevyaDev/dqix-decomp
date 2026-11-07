#include <globaldefs.h>

#if defined(jpn)
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "std_library_functions.h"

struct Struct_ov026_021ddf78_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0xd];
};

struct Struct_ov026_021ddf78_3 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[4];
};

struct Struct_ov026_021ddf78_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov026_021ddf78_2 unknown_4_[3];
    Struct_ov026_021ddf78_3 unknown_4c_[4];
};

struct Struct_ov026_021ddf78_5 {
    char unknown_0_[0x81b0];
    Struct_ov026_021ddf78_4 unknown_81b0_;
    char unknown_821c_[0xc74 - sizeof(Struct_ov026_021ddf78_4)];
    int unknown_8e24_;
    char unknown_8e28_[0x21];
    unsigned char unknown_8e49_;
};

struct Struct_ov026_021ddf78_6 {
    char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov026_021ddf78_7 {
    char unknown_0_[0x868];
    int unknown_868_;
    char unknown_86c_[0x1730 - 0x86c];
    int unknown_1730_;
    int unknown_1734_;
    char unknown_1738_[0x1789 - 0x1738];
    unsigned char unknown_1789_;
    char unknown_178a_[0x17e1 - 0x178a];
    unsigned char unknown_17e1_;
    unsigned char unknown_17e2_;
};

struct Struct_ov026_021ddf78_8 {
    char unknown_0_[0x148];
    char* unknown_148_;
};

struct Struct_ov026_021ddf78_9 {
    char unknown_0_[0xc];
    int unknown_c_;
};

struct Struct_ov026_021ddf78_10 {
    char unknown_0_[0x1c];
    const char* unknown_1c_[2];
    const char* unknown_24_[2];
    char unknown_2c_[0x20];
};

struct Struct_ov026_021ddf78_11 {
    char unknown_0_[0x955];
    unsigned char unknown_955_;
};

struct Struct_02010088;
struct Struct_ov026_021d8ba0_10;

extern "C" Struct_ov026_021ddf78_7* GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(Struct_ov026_021ddf78_7*);
extern "C" Struct_ov026_021ddf78_8* GetEnemyByIndex_0200fea4(GameState*, int);
extern "C" int IsDead_02010088(Struct_02010088*);
extern "C" int func_ov026_021dd3c4(Struct_ov026_021d8ba0_10*);
extern "C" void SetMessageString_02046574(Struct_ov026_021ddf78_7*, int, char*);
extern "C" Struct_ov026_021ddf78_9* GetBattleSetup_ov017_021b8478(void*);
extern "C" void* GetBattleScene_ov017_021b8468(void*);
extern "C" void* GetBattleUI_ov000_02160f08(void*);
extern "C" int func_02070094();
extern "C" const char** FindMonsterData_0206f4f0(int, int);
extern "C" int func_ov000_0215ec1c(Struct_ov026_021ddf78_5*, short*, int, int);
extern "C" void StartMessage_0204500c(Struct_ov026_021ddf78_7*, const char*, int);
extern "C" void func_02043270(Struct_ov026_021ddf78_7*, int, int, int, int);
extern "C" void __clear(void*, int);

extern "C" const Struct_ov026_021ddf78_10 _ZZ23inline_ov026_021d8ba0_2vE1s;
extern const char data_ov026_021df56b[];
extern const char data_ov026_021df587[];
extern const char data_ov026_021df5bc[];
extern const char data_ov026_021df5db[];
extern const char data_ov026_021df5fa[];
extern const char data_ov026_021df601[];
extern const char data_ov026_021df60e[];
extern const char data_ov026_021df61b[];
extern const char data_ov026_021df62e[];
extern const char data_ov026_021df639[];
extern const char data_ov026_021df64a[];

// JPN: func_ov026_021ddf78
extern "C" ARM void func_ov026_021ddf78(Struct_ov026_021ddf78_5* arg0, Struct_ov026_021ddf78_6* arg1) {
    char var0[0xc8];
    char var1[0x28];
    short var2[8];
    unsigned short var3[3];
    GameState* var4 = GameState::GetInstance();
    Struct_ov026_021ddf78_7* var5 = GetMessageWindow_020421a0();
    if (arg0->unknown_8e24_ != 0) {
        return;
    }
    ClearMessageParams_02046380(var5);
    Struct_ov026_021ddf78_4* var6 = &arg0->unknown_81b0_;
    int var7 = 0;
    Struct_ov026_021ddf78_2* var8 = var6->unknown_4_;
    for (int var9 = 0; var9 < var6->unknown_1_4_; var8++, var9++) {
        int var10 = 0;
        for (int var11 = 0; var11 < var7; var11++) {
            if (var8->unknown_0_ == var3[var11] || var8->unknown_0_ == 0) {
                var10 = 1;
                break;
            }
        }
        if (var10) {
            continue;
        }
        var3[var7] = var8->unknown_0_;
        for (int var12 = 0; var12 < var8->unknown_a_0_; var12++) {
            Struct_ov026_021ddf78_8* var13 = GetEnemyByIndex_0200fea4(var4, var8->unknown_2_[var12] + 0xc0);
            if (var13 == 0 || IsDead_02010088((Struct_02010088*)var13) || func_ov026_021dd3c4((Struct_ov026_021d8ba0_10*)var13)) {
                continue;
            }
            if (var13->unknown_148_ == 0) {
                continue;
            }
            SetMessageString_02046574(var5, var7, var13->unknown_148_ + 0x2c);
            var7++;
            break;
        }
    }

    GameResources* var14 = GetGameResources();
    void* var15 = 0;
    Struct_ov026_021ddf78_9* var16 = 0;
    int var18 = -1;
    if (var14 != 0) {
        var15 = var14->unknown_ptr_3718;
    }
    if (var15 != 0) {
        var16 = GetBattleSetup_ov017_021b8478(var15);
    }
    if (var16 != 0) {
        var18 = var16->unknown_c_;
    }

    switch (var7) {
    case 1:
        strcpy(var0, data_ov026_021df56b);
        break;
    case 2:
        strcpy(var0, data_ov026_021df587);
        break;
    default:
        if (var18 == 0x36 || var18 == 0x43 || var18 == 0x50) {
            strcpy(var0, data_ov026_021df5bc);
        } else {
            strcpy(var0, data_ov026_021df5db);
        }
        break;
    }

    __clear(var1, 0x28);
    Struct_ov026_021ddf78_4* var19 = &arg0->unknown_81b0_;
    int var20 = func_02070094();
    if (var19->unknown_1_6_ == 1) {
        int var22 = 0;
        Struct_ov026_021ddf78_3* var21 = var19->unknown_4c_;
        for (; var22 < 4; var21++, var22++) {
            const char** var23 = FindMonsterData_0206f4f0(var20, var21->unknown_2_);
            if (var23 != 0) {
                if (func_ov000_0215ec1c(arg0, var2, 8, 0) <= 1) {
                    strcpy(var1, *var23);
                } else {
                    sprintf(var1, data_ov026_021df5fa, *var23);
                }
                break;
            }
        }
    } else {
        GameResources* var24 = GetGameResources();
        Struct_ov026_021ddf78_9* var26;
        void* var25;
        var25 = 0;
        var26 = 0;
        int var28 = -1;
        if (var24 != 0) {
            var25 = var24->unknown_ptr_3718;
        }
        if (var25 != 0) {
            var26 = GetBattleSetup_ov017_021b8478(var25);
        }
        if (var26 != 0) {
            var28 = var26->unknown_c_;
        }
        if (var28 == 0x36 || var28 == 0x43 || var28 == 0x50) {
            strcpy(var1, data_ov026_021df601);
        } else {
            strcpy(var1, data_ov026_021df60e);
        }
    }

    if (arg0->unknown_8e49_ == 1) {
        strcat(var0, data_ov026_021df61b);
        strcat(var0, var1);
        Struct_ov026_021ddf78_11* var29 = (Struct_ov026_021ddf78_11*)GetBattleUI_ov000_02160f08(GetBattleScene_ov017_021b8468(var15));
        unsigned char var30 = arg1->unknown_8_ % 2;
        if (var29 != 0) {
            var29->unknown_955_ = var30;
        }
        strcat(var0, _ZZ23inline_ov026_021d8ba0_2vE1s.unknown_24_[var30]);
    } else if (arg0->unknown_8e49_ == 2) {
        strcat(var0, data_ov026_021df62e);
        strcat(var0, var1);
        strcat(var0, _ZZ23inline_ov026_021d8ba0_2vE1s.unknown_1c_[arg1->unknown_8_ % 2]);
    }
    if (arg0->unknown_8e49_ != 0) {
        strcat(var0, data_ov026_021df639);
    } else {
        strcat(var0, data_ov026_021df64a);
    }
    StartMessage_0204500c(var5, var0, 0);
    var5->unknown_17e1_ = 0;
    var5->unknown_1730_ = 0xc;
    var5->unknown_1734_ = 0x12;
    func_02043270(var5, 0xc, 0x80, 0x100, 0x40);
    var5->unknown_17e2_ = 0;
    var5->unknown_1789_ |= 2;
    var5->unknown_868_ = 1;
}
#endif
