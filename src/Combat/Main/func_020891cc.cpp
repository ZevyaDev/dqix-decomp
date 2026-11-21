#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020891cc_4 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 8;
    unsigned int unknown_3_4_ : 2;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_020891cc {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_020891cc_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 2;
};

struct ModifiableCombatStats_020891cc_3 {
    unsigned short currHP_0_;
    unsigned short currMP_2_;
    unsigned short maxHP_4_;
    unsigned short maxMP_6_;
    unsigned short attack_8_;
    unsigned short defense_a_;
    unsigned short agility_c_;
    struct Struct_020891cc_4 unknown_10_;
    unsigned int statusFlags_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    unsigned short unknown_22_;
    unsigned char unknown_24_;
    unsigned char unknown_25_;
    unsigned char unknown_26_;
    unsigned char unknown_27_;
    short unknown_28_;
    short unknown_2a_;
    short unknown_2c_;
    short unknown_2e_;
    unsigned short unknown_30_;
    short unknown_32_;
    short unknown_34_;
    unsigned short unknown_36_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    struct Struct_020891cc unknown_3b_;
    struct Struct_020891cc_2 unknown_3c_;
    unsigned char unknown_3d_;
    unsigned char unknown_3e_[0x16];
    unsigned char unknown_54_[4];
    unsigned int unknown_58_;
    unsigned char unknown_5c_[0x23];
    unsigned char unknown_7f_[0x23];
};

// USA: InitModifiableCombatStats_020891cc
extern "C" ARM void InitModifiableCombatStats_020891cc(struct ModifiableCombatStats_020891cc_3* stats) {
    stats->currHP_0_ = 0;
    stats->currMP_2_ = 0;
    stats->maxHP_4_ = 0;
    stats->maxMP_6_ = 0;
    stats->agility_c_ = 0;
    stats->attack_8_ = 0;
    stats->defense_a_ = 0;
    stats->unknown_10_.unknown_0_0_ = 0;
    *(unsigned int*)&stats->unknown_10_ &= 0xfff003ff;
    *(unsigned int*)&stats->unknown_10_ &= 0xc00fffff;
    memset(&stats->unknown_3e_, 0x64, sizeof(stats->unknown_3e_));
    stats->statusFlags_14_ = 0;
    stats->unknown_18_ = 0;
    stats->unknown_1c_ = 0;
    stats->unknown_20_ = 0;
    stats->unknown_21_ = 0;
    stats->unknown_22_ &= ~3;
    stats->unknown_22_ &= ~0xe00;
    stats->unknown_22_ &= ~0x3c;
    stats->unknown_22_ &= ~0x1c0;
    stats->unknown_22_ &= ~0x3000;
    stats->unknown_24_ = 0;
    stats->unknown_22_ &= ~0x4000;
    stats->unknown_25_ = 0;
    stats->unknown_26_ = 0;
    stats->unknown_28_ = -1;
    stats->unknown_2a_ = -1;
    stats->unknown_2c_ = -1;
    stats->unknown_2e_ = -1;
    stats->unknown_30_ = 0;
    stats->unknown_32_ = -1;
    stats->unknown_34_ = -1;
    stats->unknown_36_ = 0;
    stats->unknown_38_ = 0;
    stats->unknown_39_ = 0;
    stats->unknown_3a_ = 0;
    stats->unknown_3b_.unknown_0_0_ = 0;
    stats->unknown_3b_.unknown_0_1_ = 0;
    stats->unknown_3b_.unknown_0_2_ = 0;
    stats->unknown_3b_.unknown_0_3_ = 0;
    stats->unknown_3b_.unknown_0_4_ = 0;
    stats->unknown_3c_.unknown_0_0_ = 0;
    stats->unknown_3c_.unknown_0_1_ = 0;
    stats->unknown_3c_.unknown_0_2_ = 0;
    stats->unknown_3c_.unknown_0_3_ = 0;
    stats->unknown_3c_.unknown_0_4_ = 0;
    stats->unknown_3c_.unknown_0_5_ = 0;
    stats->unknown_3d_ = 0;
    memset(&stats->unknown_58_, 0, sizeof(stats->unknown_58_));
    memset(&stats->unknown_5c_, 0, sizeof(stats->unknown_5c_));
    memset(&stats->unknown_7f_, 0, sizeof(stats->unknown_7f_));
}