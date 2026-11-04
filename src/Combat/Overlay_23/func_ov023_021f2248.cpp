#include <globaldefs.h>
#if defined(jpn)
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Resource/MonsterDefinition.h"

struct Struct_ov023_021edc08_5 {
    unsigned int unknown_0_, unknown_4_, unknown_8_;
};
struct Struct_02072a68_2 {
    int unknown_0_[4];
};
struct Struct_ov023_021ed7e0 {
    unsigned int unknown_0_0_ : 11;
    unsigned int unknown_1_3_ : 7;
    unsigned int unknown_2_2_ : 7;
    unsigned int unknown_3_1_ : 7;
};
struct Struct_02108760;
struct Struct_ov023_021f2248_5 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
    unsigned char unknown_4_;
    signed char unknown_5_;
};
struct Struct_020a95a4_8 {
    char unknown_0_[0x678];
    Struct_0206f01c_2 unknown_678_;
};
struct Struct_ov023_021f2248_6 {
    char unknown_0_[0x21c];
    Struct_020a95a4_8* unknown_21c_;
    char unknown_220_[0xe28 - 0x220];
    int unknown_e28_;
    char unknown_e2c_[0x5ac0 - 0xe2c];
    Struct_ov023_021f2248_5 unknown_5ac0_[8];
    unsigned char unknown_5af0_;
    char unknown_5af1_[3];
    Struct_02072a68_2 unknown_5af4_;
};
struct Struct_ov023_021f2248_7 {
    int unknown_0_;
    char unknown_4_[0xe4 - 4];
    signed char unknown_e4_;
};
struct Struct_ov023_021f2248_8 {
    Struct_ov023_021f2248_7* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
struct Struct_02081870 {
    char unknown_0_[0x868];
    int unknown_868_;
    char unknown_86c_[0x17e2 - 0x86c];
    unsigned char unknown_17e2_;
};
struct Struct_ov023_021f2248_3 {
    char* unknown_0_;
    char unknown_4_[0xc];
    unsigned short unknown_10_;
};
struct Struct_ov023_021f2248 {
    char unknown_0_[0x134];
    char* unknown_134_;
};
extern "C" Struct_ov023_021f2248_8 _ZZ21inline_ov023_021f4c04vE1s;
extern Struct_02108760 data_02108760;
extern "C" Struct_02081870* func_020421a0();
extern "C" void func_020de968(int, char*);
extern "C" int func_020ac020(void*, short*, int*, int);
extern "C" void func_020abe84(void*, short*, Struct_ov023_021ed7e0*, int);
extern "C" Struct_ov023_021f2248_3* func_0206f4f0(Struct_0206f01c_2*, int);
extern "C" const char* func_02072a68(Struct_02072a68_2*, int);
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" void func_0204500c(Struct_02081870*, const char*, int);
extern "C" void func_ov023_021ed7e0(Struct_ov023_021ed7e0*);
extern "C" int func_ov023_021f4fc8();

// JPN: func_ov023_021f2248
extern "C" ARM int func_ov023_021f2248(Struct_ov023_021f2248_6* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov023_021f2248_7* var1 = _ZZ21inline_ov023_021f4c04vE1s.unknown_0_;
    Struct_02081870* var2 = func_020421a0();
    if (var1->unknown_0_ == 0) {
        ++var1->unknown_e4_;
        if (arg0->unknown_5af0_ <= var1->unknown_e4_) return 14;
        Struct_ov023_021f2248_5* var3 = &arg0->unknown_5ac0_[var1->unknown_e4_];
        unsigned short var4 = var3->unknown_2_0_;
        int var5 = var3->unknown_0_;
        int var6 = var3->unknown_3_7_;
        signed char var7 = var3->unknown_5_;
        Struct_ov023_021f2248_3* var10;
        GameObject* var8 = var0->GetProtagonist();
        if (!var8) return arg0->unknown_e28_;
        char* var9 = ((Struct_ov023_021f2248*)var8)->unknown_134_;
        var10 = func_0206f4f0(&arg0->unknown_21c_->unknown_678_, (short)var4);
        if (!var10) return arg0->unknown_e28_;
        char* var19 = var10->unknown_0_;
        char var11[0x40] = {0};
        func_020de968((short)var5, var11);
        char* var20 = var11;
        char var12[0x100] = {0};
        if (var7 >= 0) {
            Struct_ov023_021f2248* var13 = (Struct_ov023_021f2248*)func_0200ff1c(var0, var7);
            if (var13) var9 = var13->unknown_134_;
            sprintf(var12, func_02072a68(&arg0->unknown_5af4_, 0x25), var9, var20);
        } else {
            char var14[0xc4] = {0};
            sprintf(var12, func_02072a68(&arg0->unknown_5af4_, 0x11), var19, var9);
            if (!var6) sprintf(var14, func_02072a68(&arg0->unknown_5af4_, 0x12), var20, var9, var20);
            else sprintf(var14, func_02072a68(&arg0->unknown_5af4_, 0x13), var20, var20);
            strcat(var12, var14);
            if (var1->unknown_e4_ < arg0->unknown_5af0_ - 1) strcat(var12, func_02072a68(&arg0->unknown_5af4_, 0x22));
        }
        func_0205eaa0(&data_02108760, 0x15, 0);
        func_0204500c(var2, var12, 1);
        var2->unknown_17e2_ = 0;
        var2->unknown_868_ = 1;
        if (arg0->unknown_5ac0_[var1->unknown_e4_].unknown_4_) {
            Struct_ov023_021ed7e0 var15;
            func_ov023_021ed7e0(&var15);
            short var16 = var10->unknown_10_;
            if (func_020ac020(0, &var16, (int*)&var15, 1)) {
                switch (arg0->unknown_5ac0_[var1->unknown_e4_].unknown_4_) {
                case 1: { unsigned int var17 = var15.unknown_1_3_ + 1; if (var17 > 99) var17 = 99; var15.unknown_1_3_ = var17; break; }
                case 2: { unsigned int var18 = var15.unknown_2_2_ + 1; if (var18 > 99) var18 = 99; var15.unknown_2_2_ = var18; break; }
                }
                func_020abe84(0, &var16, &var15, 1);
            }
        }
        ++var1->unknown_0_;
    } else if (var1->unknown_0_ == 1) {
        if (func_ov023_021f4fc8()) var1->unknown_0_ = 0;
    }
    return arg0->unknown_e28_;
}
#endif
