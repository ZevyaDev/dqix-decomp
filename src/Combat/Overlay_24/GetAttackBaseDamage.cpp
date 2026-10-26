#include <globaldefs.h>
#include "Combat/Main/BattleList.h"
#include "Combat/Main/CombatCalculations.h"
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021e7bc0 {
    Random unknown_0_;
};

// param_1
struct Struct_ov024_021e7bc0_2 {
    char unknown_0_[0x10];
    Struct_ov024_021e7bc0* unknown_10_;
    char unknown_14_[8];
    float unknown_1c_;
};

// param_4
struct Struct_ov024_021e7bc0_3 {
    int unknown_0_;
    unsigned int unknown_4_0_:12, unknown_5_4_:10, unknown_6_6_:10;
    char unknown_8_[8];
    unsigned int unknown_10_;
    char unknown_14_[4];
    unsigned int unknown_18_0_:16, unknown_1a_0_:2;
};

// param_5: a damage range (variance, then base, minimum and maximum)
struct Struct_ov024_021e7bc0_4 {
    unsigned int unknown_0_0_:8, unknown_1_0_:10, unknown_2_2_:14;
    unsigned int unknown_4_0_:10, unknown_5_2_:10, unknown_6_4_:10;
};

// {skill, stat, lo, hi}: the stat thresholds between which a skill's damage scales from minimum to maximum
struct Struct_ov024_021e7bc0_5 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_ov024_021e7bc0_6 {
    Struct_ov024_021e7bc0_5 unknown_0_[7];
};

struct Struct_ov024_021e7bc0_7 {
    unsigned int unknown_0_0_:10, unknown_1_2_:22;
    unsigned int unknown_4_0_:10;
};

struct Struct_ov024_021e7bc0_8 {
    char unknown_0_[0x150];
    Struct_ov024_021e7bc0_7* unknown_150_;
};

extern "C" {
// Template of the local skill table: {skill, 0, lo, hi} x 6, then -1.
extern const Struct_ov024_021e7bc0_6 data_ov024_021fe8b6;
}

static inline unsigned short inline_ov024_021e7bc0(GameObject* arg0) {
    return arg0->currentStats_->primaryStats.magicalMight;
}

static inline unsigned short inline_ov024_021e7bc0_2(GameObject* arg0) {
    return ((Struct_ov024_021e7bc0_8*)arg0)->unknown_150_->unknown_0_0_;
}

static inline unsigned short inline_ov024_021e7bc0_3(GameObject* arg0) {
    return ((Struct_ov024_021e7bc0_8*)arg0)->unknown_150_->unknown_4_0_;
}

// Base damage of an attack. With a damage range (param_5) the result is a random value in that range, scaled
// between two stat thresholds for the skills in the local copy of data_ov024_021fe8b6; without one it is the
// physical damage formula. var0/var1 are declared first on purpose: locals get registers in declaration order.
#define ARG0 ((Struct_ov024_021e7bc0_2*)param_1)
#define ARG3 ((Struct_ov024_021e7bc0_3*)param_4)
#define ARG4 ((Struct_ov024_021e7bc0_4*)param_5)
ARM int GetAttackBaseDamage(int* param_1, int attackerId, int defenderId, int* param_4, int* param_5) {
    unsigned short var0;
    unsigned short var1;
    GameState* gameState = GameState::GetInstance();
    Struct_ov024_021e7bc0* RNG = ARG0->unknown_10_;
    float var4;
    if (ARG4 != NULL) {
        int var5;
        if (attackerId >= 0 && attackerId <= 3) {
            var5 = 1;
        } else {
            var5 = 0;
        }
        if (var5) {
            if (ARG3->unknown_1a_0_ == 2) {
                GameObject* var6 = func_0200ff1c(gameState, attackerId);
                if (var6 == NULL) {
                    return 0;
                }
                unsigned short var7 = var6->currentStats_->primaryStats.magicalMight;
                unsigned short var8 = var6->currentStats_->primaryStats.magicalMending;
                var0 = ARG3->unknown_5_4_;
                var1 = ARG3->unknown_6_6_;
                unsigned short var9 = 0;
                int var10 = 0;
                if (ARG3->unknown_10_ & 0x4000) {
                    var9 = var7;
                    var10 = 1;
                } else if (ARG3->unknown_10_ & 0x8000) {
                    var9 = var8;
                    var10 = 1;
                }
                Struct_ov024_021e7bc0_6 var11 = data_ov024_021fe8b6;
                var11.unknown_0_[0].unknown_2_ = inline_ov024_021e7bc0_2(var6) + inline_ov024_021e7bc0(var6);
                var11.unknown_0_[1].unknown_2_ = inline_ov024_021e7bc0_2(var6) + inline_ov024_021e7bc0(var6);
                var11.unknown_0_[2].unknown_2_ = inline_ov024_021e7bc0_2(var6) + inline_ov024_021e7bc0(var6);
                var11.unknown_0_[3].unknown_2_ = inline_ov024_021e7bc0_2(var6);
                var11.unknown_0_[4].unknown_2_ = inline_ov024_021e7bc0_2(var6);
                var11.unknown_0_[5].unknown_2_ = inline_ov024_021e7bc0_2(var6) + inline_ov024_021e7bc0_3(var6);
                for (int var12 = 0; var11.unknown_0_[var12].unknown_0_ != -1; var12++) {
                    if (var11.unknown_0_[var12].unknown_0_ == ARG3->unknown_4_0_) {
                        var9 = var11.unknown_0_[var12].unknown_2_;
                        var0 = var11.unknown_0_[var12].unknown_4_;
                        var1 = var11.unknown_0_[var12].unknown_6_;
                        var10 = 1;
                        break;
                    }
                }
                if (var10) {
                    if (var9 <= var0) {
                        unsigned int var13 = ARG4->unknown_1_0_;
                        var4 = (float)ARG4->unknown_5_2_ + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var13, (float)var13);
                    } else if (var9 >= var1) {
                        unsigned int var14 = ARG4->unknown_1_0_;
                        var4 = (float)ARG4->unknown_6_4_ + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var14, (float)var14);
                    } else {
                        unsigned int var15 = ARG4->unknown_5_2_;
                        float var16 = (float)((int)((float)(var9 - var0) * ((float)(ARG4->unknown_6_4_ - var15) / (float)(var1 - var0))) + var15);
                        unsigned int var17 = ARG4->unknown_1_0_;
                        var4 = var16 + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var17, (float)var17);
                    }
                } else {
                    float var18 = NextRandomFloatBetween(&RNG->unknown_0_, (float)ARG4->unknown_5_2_, (float)ARG4->unknown_6_4_);
                    unsigned int var19 = ARG4->unknown_1_0_;
                    var4 = var18 + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var19, (float)var19);
                }
            } else {
                float var20 = NextRandomFloatBetween(&RNG->unknown_0_, (float)ARG4->unknown_5_2_, (float)ARG4->unknown_6_4_);
                unsigned int var21 = ARG4->unknown_1_0_;
                var4 = var20 + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var21, (float)var21);
            }
        } else {
            unsigned int var22 = ARG4->unknown_1_0_;
            var4 = (float)ARG4->unknown_4_0_ + NextRandomFloatBetween(&RNG->unknown_0_, -1.0f * (float)var22, (float)var22);
        }
    } else {
        GameObject* attacker = GetCombatantByID((int)RNG, attackerId);
        GameObject* defender = GetCombatantByID((int)ARG0->unknown_10_, defenderId);
        if (attacker == NULL || defender == NULL) {
            return 0;
        }
        float var25 = attacker->baseStats_->primaryStats.attack;
        if (ARG3->unknown_10_ & 0x200) {
            var25 = attacker->currentStats_->primaryStats.attack;
        }
        var4 = CalculatePhysicalDamage(RoundUp(var25 * ARG0->unknown_1c_), defender->currentStats_->primaryStats.defense, &ARG0->unknown_10_->unknown_0_);
    }
    return (int)var4;
}
#undef ARG0
#undef ARG3
#undef ARG4
