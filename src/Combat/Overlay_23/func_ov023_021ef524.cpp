#include <globaldefs.h>
#if defined(jpn)
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "World/Object3D.h"

struct Struct_ov023_021eeaac_2 {
    int unknown_0_;
};
struct Struct_0202c1a4;
struct Struct_02049b54_2;
struct Struct_02072a68_2 {
    int unknown_0_[2];
};
struct Struct_ov000_0217964c_2 : Object3D {
    char unknown_ac_[0x138 - sizeof(Object3D)];
    void* unknown_138_;
};
struct Struct_ov003_02162f40 {
    char unknown_0_[0x2a];
    signed char unknown_2a_;
};
struct Struct_0202ea4c {
    int unknown_0_;
    Vector3fix unknown_4_, unknown_10_;
    char unknown_1c_[0x40 - 0x1c];
};
struct Struct_ov023_021ef524_3 {
    char unknown_0_[0x21c];
    Struct_ov003_02162f40* unknown_21c_;
    char unknown_220_[0xb94 - 0x220];
    Struct_0202ea4c unknown_b94_;
    char unknown_bd4_[0xe28 - 0xbd4];
    int unknown_e28_;
    char unknown_e2c_[0x595c - 0xe2c];
    unsigned char unknown_595c_;
    char unknown_595d_[0x5ab0 - 0x595d];
    int unknown_5ab0_;
    char unknown_5ab4_[8];
    unsigned short unknown_5abc_;
    char unknown_5abe_[0x5af4 - 0x5abe];
    Struct_02072a68_2 unknown_5af4_;
    char unknown_5afc_[0x701e - 0x5afc];
    unsigned char unknown_701e_;
    char unknown_701f_;
    unsigned short unknown_7020_[3];
};
struct Struct_020465c0 {
    char unknown_0_[0x20];
    void* unknown_20_;
    char unknown_24_[0x218 - 0x24];
    int unknown_218_;
    char unknown_21c_[0x868 - 0x21c];
    int unknown_868_;
    int unknown_86c_;
    int unknown_870_;
    char unknown_874_[0x17e2 - 0x874];
    unsigned char unknown_17e2_;
};
struct Struct_ov023_021ef524 {
    char unknown_0_[0x134];
    char* unknown_134_;
};
struct Struct_ov023_021ef524_4 {
    char unknown_0_[0x240c];
    ActiveGrottoClass unknown_240c_;
};
struct Struct_ov023_021ef524_2 {
    char* unknown_0_;
};
extern "C" Struct_ov023_021eeaac_2* _ZZ21inline_ov023_021f4c04vE1s;
extern char data_02109bf4[];
extern char data_ov023_021fd511[];
extern "C" Struct_020465c0* GetMessageWindow_020421a0();
extern "C" int func_0202b7d8(int*);
extern "C" signed char func_0202c1a4(Struct_0202c1a4*);
extern "C" void func_ov000_02163b60(void*);
extern "C" void func_ov023_021eefac(Struct_ov023_021eeaac_2*);
extern "C" Struct_ov000_0217964c_2* func_0200fea4(GameState*, int);
extern "C" const char* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_0209ca2c(void*);
extern "C" void func_ov023_021f00f4(int*, int, int, int);
extern "C" Vector3fix func_02049b54(Struct_02049b54_2*);
extern "C" void func_02049f28(unsigned char*);
extern "C" void func_0202ea4c(Struct_0202ea4c*);
extern "C" void func_ov000_0216d50c(void*);
extern "C" int func_020100a8(GameState*);
extern "C" void func_0209c6d8(void*, int);
extern "C" void func_020117cc(char*, DetailedTreasureMapData*);
extern "C" void func_ov023_021ed988(char*, int);
extern "C" Struct_ov023_021ef524_2* func_02079e2c(char*, int);
extern "C" {
void* func_0202ae18();
Struct_ov023_021ef524_4* GetZone3D_02012fe4();
void __clear(void*, unsigned int);
void StartMessage_0204500c(Struct_020465c0*, const char*, int);
int func_ov023_021f4fc8();
void func_ov000_0216d370(void*, int, int, int);
void func_ov000_02163b90(Struct_ov023_021ef524_3*, int);
int func_020457e0(Struct_020465c0*);
void func_02011744(GameState*);
}

static inline int inline_ov023_021ef524(int arg0, int arg1) { return FIX32_MULTIPLY(arg0, arg1); }

// JPN: func_ov023_021ef524
extern "C" ARM int func_ov023_021ef524(Struct_ov023_021ef524_3* arg0) {
    DetailedTreasureMapData* var4;
    GameState* var0 = GameState::GetInstance();
    Struct_ov023_021eeaac_2* var1 = _ZZ21inline_ov023_021f4c04vE1s;
    Struct_020465c0* var2 = GetMessageWindow_020421a0();
    void* var3 = func_0202ae18();
    var4 = GetZone3D_02012fe4()->unknown_240c_.GetDetailedData();
    char var5[0x100];
    __clear(var5, sizeof(var5));
    if (var1->unknown_0_ == 0) {
        if (!func_0202b7d8((int*)var3) || arg0->unknown_21c_->unknown_2a_ == func_0202c1a4((Struct_0202c1a4*)var3)) {
            func_ov000_02163b60(arg0);
            var1->unknown_0_ = 1;
        } else { func_ov023_021eefac(var1); return 5; }
    } else if (var1->unknown_0_ == 1) {
        unsigned short var6;
        if ((!var4->legacy_.minTurns_ || arg0->unknown_5abc_ < var4->legacy_.minTurns_) && (var6 = arg0->unknown_5abc_) < 1000) {
            sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x23), var6, var4->legacy_.bossName_, var4->legacy_.level_);
            StartMessage_0204500c(var2, var5, 1);
            var2->unknown_17e2_ = 0;
            var2->unknown_868_ = 1;
            var1->unknown_0_ = 2;
        } else var1->unknown_0_ = 3;
    } else if (var1->unknown_0_ == 2) {
        if (!func_0209ca2c(data_02109bf4) && func_ov023_021f4fc8()) var1->unknown_0_ = 3;
    } else if (var1->unknown_0_ == 3) {
        func_ov000_0216d370(&arg0->unknown_b94_, 1, 1, 1);
        int var11 = 0x3000;
        int var7 = 1;
        if (var4->legacy_.bossID_ == 9) {
            var11 = 0x2333;
            var7 = 3;
        }
        for (int var8 = 0; var8 < var7; ++var8) {
            Struct_ov000_0217964c_2* var9 = func_0200fea4(var0, var8 + 0xc0);
            if (var9 && var9->unknown_138_) {
                arg0->unknown_7020_[arg0->unknown_701e_] = var9->unknown_4_;
                ++arg0->unknown_701e_;
            }
        }
        int var12 = 0;
        int var13 = 0;
        Vector3fix var14;
        func_ov023_021f00f4(&var14.x, 0, 0, 0);
        for (int var15 = 0; var15 < arg0->unknown_701e_; ++var15) {
            Struct_ov000_0217964c_2* var16 = func_0200fea4(var0, arg0->unknown_7020_[var15]);
            var16->position_ = func_02049b54((Struct_02049b54_2*)var16);
            var16->rotation_.x = 0;
            var16->rotation_.y = 0;
            var16->rotation_.z = 0;
            Vector3fix_Add(&var14, &var16->position_, &var14);
            var12 += var16->GetRadius();
            if (var13 < var16->GetHeight()) var13 = var16->GetHeight();
            var16->MaybeSetRegularAnimation(data_ov023_021fd511, 8);
            var16->TransitionInheritedAlpha(31, 200);
            var16->MakeVisible();
            func_02049f28((unsigned char*)var16);
        }
        var14.x = fix32_Divide(var14.x, arg0->unknown_701e_ << 12);
        var14.y = fix32_Divide(var14.y, arg0->unknown_701e_ << 12);
        var14.z = fix32_Divide(var14.z, arg0->unknown_701e_ << 12);
        func_ov000_02163b90(arg0, 0);
        Vector3fix var18;
        func_ov023_021f00f4(&var18.x, var14.x, var14.y + fix32_Divide(var13, 0x2000), var14.z);
        int var19 = inline_ov023_021ef524(var12, var11);
        Vector3fix var20;
        func_ov023_021f00f4(&var20.x, var18.x, var18.y, var18.z + var19);
        arg0->unknown_b94_.unknown_10_ = var18;
        arg0->unknown_b94_.unknown_4_ = var20;
        func_0202ea4c(&arg0->unknown_b94_);
        func_ov000_0216d50c(&arg0->unknown_b94_);
        sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x1b), var4->legacy_.bossName_);
        StartMessage_0204500c(var2, var5, 1);
        var2->unknown_17e2_ = 0;
        var2->unknown_868_ = 1;
        var1->unknown_0_ = 4;
    } else if (var1->unknown_0_ == 4) {
        if (func_ov023_021f4fc8()) {
            if (var4->legacy_.level_ >= 99) {
                sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x1d), var4->legacy_.bossName_);
                StartMessage_0204500c(var2, var5, 1);
                var2->unknown_17e2_ = 0;
                var2->unknown_868_ = 1;
                var1->unknown_0_ = 8;
            } else {
                sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x1c), var4->legacy_.bossName_);
                StartMessage_0204500c(var2, var5, 1);
                var2->unknown_17e2_ = 0;
                var2->unknown_868_ = 1;
                var1->unknown_0_ = 5;
            }
        }
    } else if (var1->unknown_0_ == 5) {
        if (func_ov023_021f4fc8()) {
            char* var23 = ((Struct_ov023_021ef524*)func_0200ff1c(var0, func_020100a8(var0)))->unknown_134_;
            int var22 = arg0->unknown_5ab0_;
            sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x1e), var22, var4->legacy_.bossName_, var23, var22, var4->legacy_.bossName_, var4->legacy_.bossName_);
            StartMessage_0204500c(var2, var5, 1);
            var2->unknown_17e2_ = 0;
            var2->unknown_868_ = 1;
            var2->unknown_218_ = 1;
            var1->unknown_0_ = 6;
        }
    } else if (var1->unknown_0_ == 6) {
        if (var2->unknown_870_ != 3) return arg0->unknown_e28_;
        if (!func_020457e0(var2)) var1->unknown_0_ = 7; else var1->unknown_0_ = 8;
    } else if (var1->unknown_0_ == 7) {
        if (func_ov023_021f4fc8()) {
            arg0->unknown_595c_ = 1;
            sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x1f), var4->legacy_.bossName_, var4->legacy_.level_ + 1, var4->legacy_.bossName_);
            StartMessage_0204500c(var2, var5, 1);
            var2->unknown_17e2_ = 0;
            var2->unknown_868_ = 1;
            func_0209c6d8(data_02109bf4, 0x35);
            var4->UpdateFollowingCompletion(true, 0);
            func_020117cc((char*)var0, var4);
            func_02011744(var0);
            if (var4->legacy_.GetLearnedMove(var4->legacy_.level_, -1)) var1->unknown_0_ = 9;
            else var1->unknown_0_ = 11;
        }
    } else if (var1->unknown_0_ == 8) {
        func_ov023_021ed988((char*)arg0, 1500);
        var4->UpdateFollowingCompletion(false, arg0->unknown_5abc_);
        func_020117cc((char*)var0, var4);
        func_02011744(var0);
        var1->unknown_0_ = 10;
    } else if (var1->unknown_0_ == 9) {
        if (func_ov023_021f4fc8()) {
            int var26 = var4->legacy_.GetLearnedMove(var4->legacy_.level_, 1);
            if (var26) {
                Struct_ov023_021ef524_2* var27 = func_02079e2c((char*)func_020797dc(), (short)var26);
                sprintf(var5, func_02072a68(&arg0->unknown_5af4_, 0x20), var4->legacy_.bossName_, var27->unknown_0_);
                StartMessage_0204500c(var2, var5, 1);
                var2->unknown_17e2_ = 0;
                var2->unknown_868_ = 1;
            }
            var1->unknown_0_ = 11;
        }
    } else if (var1->unknown_0_ == 10) {
        if (!func_0200fea4(var0, arg0->unknown_7020_[0])->GetInheritedAlpha() || !arg0->unknown_701e_) var1->unknown_0_ = 11;
    } else if (var1->unknown_0_ == 11) {
        if (func_ov023_021f4fc8()) { func_ov023_021eefac(var1); return 5; }
    }
    return arg0->unknown_e28_;
}
#endif
