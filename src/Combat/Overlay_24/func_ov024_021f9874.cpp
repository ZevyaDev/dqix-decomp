#include <globaldefs.h>

#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

struct Struct_ov024_021f9874_4 {
    unsigned char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021f9874_6 {
    float unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    struct Struct_ov024_021f9874_4 unknown_9_;
    char unknown_a_[2];
};

struct RankedAction_ov024_021f9874_7 {
    unsigned short actionId_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    float score_4_;
    unsigned short mpCost_8_;
    unsigned char targetGroup_a_;
    unsigned char targetIndex_b_;
};

struct Struct_ov024_021f9874_8 {
    struct Struct_ov024_021f9874_6 unknown_0_[16];
    int unknown_c0_;
    float unknown_c4_;
};

struct ActionData_ov024_021f9874_9 {
    char unknown_0_[4];
    unsigned int id_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0xc];
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
};

struct ActionListEntry_ov024_021f9874 {
    unsigned short actionId_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov024_021f9874_2 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 5;
    unsigned int unknown_1_1_ : 23;
};

struct TacticAI_ov024_021f9874_3 {
    int unknown_0_;
    char unknown_4_[2];
    unsigned char tactic_6_;
    char unknown_7_[1];
    GameObject* pMember_8_;
    char unknown_c_[8];
    unsigned char unknown_14_;
    char unknown_15_[0x17];
    unsigned char unknown_2c_;
    char unknown_2d_[3];
    float unknown_30_;
    unsigned char unknown_34_;
    char unknown_35_[3];
    int option_38_;
    int unknown_3c_;
    unsigned char unknown_40_;
    char unknown_41_[3];
    float unknown_44_[4];
    unsigned char optionWeights_54_[0x28];
    GameObject* enemies_7c_[8];
    int enemyCount_9c_;
    char unknown_a0_[0x24];
    int estimatedEnemyHP_c4_[25];
    int lowestHPMemberIndex_128_;
    char unknown_12c_[4];
    int unknown_130_;
    char unknown_134_[5];
    unsigned char unknown_139_;
    char unknown_13a_[0x32];
    int unknown_16c_;
    char unknown_170_[0x238];
    struct RankedAction_ov024_021f9874_7 totalRanking_3a8_[4];
    struct RankedAction_ov024_021f9874_7 unknown_3d8_[4];
    struct RankedAction_ov024_021f9874_7 damageRanking_408_[4];
    struct RankedAction_ov024_021f9874_7 costFreeDamageRanking_438_[4];
    char unknown_468_[0x30];
    struct RankedAction_ov024_021f9874_7 reviveRanking_498_[4];
    struct RankedAction_ov024_021f9874_7 healRanking_4c8_[4];
    char unknown_4f8_[0x30];
    struct RankedAction_ov024_021f9874_7 cureRanking_528_[4];
    struct RankedAction_ov024_021f9874_7 unknown_558_[4];
    struct RankedAction_ov024_021f9874_7 unknown_588_[4];
    struct RankedAction_ov024_021f9874_7 unknown_5b8_[4];
    char unknown_5e8_[0x60];
    struct ActionListEntry_ov024_021f9874* pCandidate_648_;
    struct ActionData_ov024_021f9874_9* pAction_64c_;
    int mpCost_650_;
    char unknown_654_[1];
    unsigned char unknown_655_;
};

struct Struct_ov024_021f9874_5 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_[2];
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    char unknown_c_[2];
};

extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_ov024_021f6830(void* arg0, struct RankedAction_ov024_021f9874_7* arg1);
extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" int func_ov024_021eadfc(GameObject* arg0);

static inline unsigned short inline_ov024_021dc700(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxHP; }
static inline unsigned short inline_ov024_021dc540_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.maxMP; }
static inline unsigned short inline_ov000_0215cd44_2(GameObject* arg0) { return arg0->currentStats_->primaryStats.currMP; }
static inline unsigned int inline_ov024_021f9874(GameObject* arg0) { return arg0->baseStats_->primaryStats.defense; }

extern unsigned char data_ov024_021ffc98[12];
extern unsigned char data_ov024_021ffca4[33];
extern unsigned char data_ov024_021ffcc5[39];

// USA: RankCandidateAction_ov024_021f9874
extern "C" ARM void RankCandidateAction_ov024_021f9874(struct TacticAI_ov024_021f9874_3* tacticAI, struct Struct_ov024_021f9874_8* arg1, unsigned char targetGroup, unsigned char targetIndex) {
    char var0[0x38];
    int isEnemyDefeated[8];
    float enemyDamage[8];
    struct Struct_ov024_021f9874_5 var3;
    float scores[14];
    float deathChance[8];
    int healAmounts[4];
    int var7[4];
    float categoryWeights[4];
    struct RankedAction_ov024_021f9874_7 rankEntry;
    float damageScore;
    float totalScore;
    float var12;
    float var13;
    float costWeight;
    float var15;
    float mpRatio;
    int var17;
    float optionWeight;
    int hasDeathEffect;

    memset(var0, 0, 0x38);
    __clear(isEnemyDefeated, 0x20);
    __clear(enemyDamage, 0x20);
    __clear(&var3, 0xe);
    __clear(scores, 0x38);
    __clear(deathChance, 0x20);
    __clear(healAmounts, 0x10);
    __clear(var7, 0x10);

    var17 = 0;

    for (int i = 0; i < arg1->unknown_c0_; i++) {
        struct Struct_ov024_021f9874_6* effect = &arg1->unknown_0_[i];
        if (effect->unknown_8_ != 0) continue;
        if (effect->unknown_5_ == 0) continue;
        {
            int enemyIndex = effect->unknown_6_;
            float damage = effect->unknown_0_ * effect->unknown_9_.unknown_0_0_;
            if (tacticAI->unknown_34_ != 0) damage *= 1.2f;
            enemyDamage[enemyIndex] += damage;
            if (enemyDamage[enemyIndex] >= tacticAI->estimatedEnemyHP_c4_[enemyIndex]) isEnemyDefeated[enemyIndex] = 10;
            var3.unknown_2_ = 1;
            if (effect->unknown_9_.unknown_0_6_) var17 = 1;
        }
    }

    hasDeathEffect = 0;
    if (tacticAI->unknown_14_ != 0) {
        for (int i = 0; i < arg1->unknown_c0_; i++) {
            struct Struct_ov024_021f9874_6* effect = &arg1->unknown_0_[i];
            if (effect->unknown_8_ != 2) continue;
            if (effect->unknown_5_ == 0) continue;
            deathChance[effect->unknown_6_] = 0.01f * effect->unknown_7_;
            var3.unknown_2_ = 1;
            hasDeathEffect = 1;
            if (effect->unknown_9_.unknown_0_6_) var17 = 1;
        }
        if (hasDeathEffect) {
            float remainingHP;
            int i;
            for (i = 0; i < arg1->unknown_c0_; i++) {
                float enemyHP;
                var3.unknown_2_ = 1;
                enemyHP = tacticAI->estimatedEnemyHP_c4_[i];
                remainingHP = enemyHP - enemyDamage[i];
                if (remainingHP <= 0.0f) continue;
                {
                    float chance = deathChance[i];
                    if (tacticAI->tactic_6_ != 0) {
                        double chanceAsDouble = chance;
                        double costPenalty = 0.005 * (double)tacticAI->mpCost_650_;
                        chance = (float)(chanceAsDouble - costPenalty);
                    }
                    {
                        float squaredChance = chance * chance;
                        float killChance = squaredChance;
                        if (squaredChance > 0.9f) killChance = 0.9f;
                        enemyDamage[i] += remainingHP * killChance;
                    }
                }
            }
        }
    }

    for (int i = 0; i < arg1->unknown_c0_; i++) {
        struct Struct_ov024_021f9874_6* effect = &arg1->unknown_0_[i];
        if (effect->unknown_8_ == 3) {
            if (effect->unknown_5_ != 0) continue;
            healAmounts[effect->unknown_6_] += effect->unknown_0_;
            var3.unknown_6_ = 1;
        }
        if (effect->unknown_8_ == 4 && effect->unknown_5_ == 0) {
            var7[effect->unknown_6_] += effect->unknown_0_;
            var3.unknown_7_ = 1;
        }
    }

    scores[13] = tacticAI->mpCost_650_;
    if (tacticAI->pCandidate_648_->unknown_3_ != 0) scores[13] += 30.0f;

    if (var3.unknown_2_ != 0) {
        float* var36 = enemyDamage;
        for (int i = 0; i < tacticAI->enemyCount_9c_; i++) {
            float damage = var36[i];
            int enemyHP;
            if (damage <= 0.0f) continue;
            enemyHP = tacticAI->estimatedEnemyHP_c4_[i];
            if (damage >= enemyHP) damage = enemyHP;
            scores[2] += 100.0f * damage / inline_ov024_021dc700(tacticAI->enemies_7c_[i]);
        }
        if (tacticAI->pCandidate_648_->unknown_3_ != 0 && tacticAI->tactic_6_ != 0) scores[2] = 0.0f;
    }

    if (var3.unknown_6_ != 0) {
        for (int memberIndex = 0; memberIndex < 4; memberIndex++) {
            int healAmount = healAmounts[memberIndex];
            if (healAmount == 0) continue;
            {
                float healScore = 100.0f * healAmount / inline_ov024_021dc700(GetCombatantByID(tacticAI->unknown_0_, (short)memberIndex));
                if (memberIndex == tacticAI->lowestHPMemberIndex_128_) healScore *= 2.0f;
                scores[6] += healScore;
            }
        }
        if (tacticAI->mpCost_650_ != 0) {
            if (tacticAI->pCandidate_648_->actionId_0_ == 0x310) {
                if (tacticAI->unknown_130_ >= 2) scores[6] *= 0.66f;
                else scores[6] *= 0.55f;
                if (tacticAI->unknown_139_ == 0) scores[6] = 0.0f;
            } else if (tacticAI->pCandidate_648_->actionId_0_ == 0x21) {
                scores[6] *= 0.9f;
            }
        }
    }

    for (int i = 0; i < arg1->unknown_c0_; i++) {
        struct Struct_ov024_021f9874_6* effect = &arg1->unknown_0_[i];
        if (effect->unknown_8_ == 5 && effect->unknown_5_ == 0) {
            scores[5] += effect->unknown_7_;
            var3.unknown_5_ = 1;
        }
    }

    if (tacticAI->pCandidate_648_->actionId_0_ == 0x28) {
        var3.unknown_6_ = 1;
        scores[6] = 400.0f;
    }

    for (int i = 0; i < arg1->unknown_c0_; i++) {
        struct Struct_ov024_021f9874_6* effect = &arg1->unknown_0_[i];
        int isOptionEnabled;

        isOptionEnabled = 1;
        if (effect->unknown_9_.unknown_0_7_) {
            optionWeight = 0.01f * tacticAI->optionWeights_54_[tacticAI->unknown_3c_];
            isOptionEnabled = tacticAI->unknown_40_;
        } else {
            optionWeight = 0.01f * tacticAI->optionWeights_54_[tacticAI->option_38_];
        }
        __clear(categoryWeights, 0x10);

        if (effect->unknown_8_ == 8) {
            if (effect->unknown_5_ != 0) continue;
            categoryWeights[0] = 10.0f;
            {
                int j;
                for (j = 0; j < 6; j++) {
                    unsigned int weight = data_ov024_021ffc98[j * 2 + 1];
                    if (effect->unknown_4_ == data_ov024_021ffc98[j * 2]) categoryWeights[0] = weight;
                }
            }
        } else if (effect->unknown_8_ == 7) {
            int memberIndex;
            if (effect->unknown_5_ != 0) continue;
            memberIndex = effect->unknown_6_;
            if (effect->unknown_4_ == 0xd) {
                categoryWeights[1] = tacticAI->unknown_16c_ * 13 / 100;
                if (effect->unknown_4_ == 0x11 && tacticAI->pAction_64c_->unknown_17_4_ == 2) {
                    if (memberIndex >= 0 && memberIndex < 4) categoryWeights[1] *= tacticAI->unknown_44_[memberIndex];
                }
            } else {
                int j;
                for (j = 0; j < 0xb; j++) {
                    int category = data_ov024_021ffca4[j * 3 + 1];
                    unsigned int weight = data_ov024_021ffca4[j * 3 + 2];
                    if (effect->unknown_4_ != data_ov024_021ffca4[j * 3]) continue;
                    {
                        categoryWeights[category] = weight;
                        if (isOptionEnabled == 0) categoryWeights[category] = 0.0f;
                        if (effect->unknown_4_ == 0x11 && tacticAI->pAction_64c_->unknown_17_4_ == 2) {
                            if (memberIndex >= 0 && memberIndex < 4) categoryWeights[category] *= tacticAI->unknown_44_[memberIndex];
                        }
                        if (effect->unknown_0_ < 0.0f) {
                            categoryWeights[category] = -3.0f * weight;
                        }
                        break;
                    }
                }
            }
        } else if (effect->unknown_8_ == 6) {
            if (effect->unknown_5_ == 0) continue;
            categoryWeights[3] += effect->unknown_0_;
        } else if (effect->unknown_8_ == 5) {
            int enemyIndex;
            if (effect->unknown_5_ == 0) continue;
            enemyIndex = effect->unknown_6_;
            if (isEnemyDefeated[enemyIndex] != 0) continue;
            if (effect->unknown_4_ == 0x12) {
                GameObject* enemy = tacticAI->enemies_7c_[enemyIndex];
                if (enemy != 0) {
                    unsigned int defense = inline_ov024_021f9874(enemy);
                    unsigned short maxHP = inline_ov024_021dc700(enemy);
                    float defenseWeight = 100.0f * (int)(defense >> 2);
                    defenseWeight = defenseWeight / maxHP;
                    if (defenseWeight > 29.0f) defenseWeight = 29.0f;
                    categoryWeights[2] = defenseWeight;
                }
            } else {
                int j;
                for (j = 0; j < 0xd; j++) {
                    int category = data_ov024_021ffcc5[j * 3 + 1];
                    unsigned int weight = data_ov024_021ffcc5[j * 3 + 2];
                    if (effect->unknown_4_ != data_ov024_021ffcc5[j * 3]) continue;
                    categoryWeights[category] = weight;
                    if (isOptionEnabled == 0) categoryWeights[category] = 0.0f;
                }
            }
        }

        if (categoryWeights[0]) {
            float entryCureScore = categoryWeights[0] * effect->unknown_7_;
            entryCureScore = 0.01f * entryCureScore;
            scores[8] += entryCureScore;
            var3.unknown_8_ = 1;
        }
        if (categoryWeights[1]) {
            float var63 = categoryWeights[1] * effect->unknown_7_;
            var63 = 0.01f * var63;
            var63 = optionWeight * var63;
            scores[9] += var63;
            var3.unknown_9_ = 1;
        }
        if (categoryWeights[2]) {
            float var64 = categoryWeights[2] * effect->unknown_7_;
            var64 = 0.01f * var64;
            var64 = optionWeight * var64;
            scores[10] += var64;
            var3.unknown_a_ = 1;
        }
        if (categoryWeights[3]) {
            float var65 = categoryWeights[3] * effect->unknown_7_;
            var65 = 0.01f * var65;
            var65 = optionWeight * var65;
            scores[11] += var65;
            var3.unknown_b_ = 1;
        }
    }

    {
        struct ActionListEntry_ov024_021f9874* candidate = tacticAI->pCandidate_648_;
        rankEntry.actionId_0_ = candidate->actionId_0_;
        rankEntry.unknown_2_ = candidate->unknown_2_;
        rankEntry.unknown_3_ = candidate->unknown_3_;
        rankEntry.targetGroup_a_ = targetGroup;
        rankEntry.targetIndex_b_ = targetIndex;
        rankEntry.mpCost_8_ = (unsigned short)tacticAI->mpCost_650_;
    }

    damageScore = 0.0f;
    if (var3.unknown_2_ != 0) {
        damageScore = scores[2];
        if (tacticAI->unknown_2c_ != 0) damageScore += scores[11];
        if (var17 != 0) damageScore *= tacticAI->unknown_30_;
        rankEntry.score_4_ = damageScore - 0.01f * scores[13];
        func_ov024_021f6830(tacticAI->damageRanking_408_, &rankEntry);
        if (0.0f == scores[13]) {
            func_ov024_021f6830(tacticAI->costFreeDamageRanking_438_, &rankEntry);
        }
    }

    if (var3.unknown_5_ != 0) {
        rankEntry.score_4_ = scores[5] - 0.1f * scores[13];
        func_ov024_021f6830(tacticAI->reviveRanking_498_, &rankEntry);
    }
    if (tacticAI->unknown_655_ != 0 && var3.unknown_6_ != 0) {
        rankEntry.score_4_ = scores[6] - 0.1f * scores[13];
        func_ov024_021f6830(tacticAI->healRanking_4c8_, &rankEntry);
    }

    costWeight = 0.1f;
    if (tacticAI->tactic_6_ == 0) costWeight = 0.01f;
    var15 = 0.0f; var12 = 0.0f; var13 = 0.0f;

    if (var3.unknown_8_ != 0) {
        float cureScore = scores[8] - 0.1f * scores[13];
        cureScore += 0.01f * scores[6];
        rankEntry.score_4_ = cureScore;
        func_ov024_021f6830(tacticAI->cureRanking_528_, &rankEntry);
    }
    if (tacticAI->tactic_6_ == 2 && tacticAI->pAction_64c_->id_4_0_ != 0x1f9) {
        damageScore *= 0.3f;
    }
    if (var3.unknown_9_ != 0) {
        var15 = scores[9] - scores[13] * costWeight;
        rankEntry.score_4_ = var15;
        func_ov024_021f6830(tacticAI->unknown_558_, &rankEntry);
    }
    if (var3.unknown_a_ != 0) {
        var12 = scores[10] - scores[13] * costWeight;
        rankEntry.score_4_ = var12;
        func_ov024_021f6830(tacticAI->unknown_588_, &rankEntry);
    }
    if (var3.unknown_b_ != 0) {
        var13 = scores[11] - scores[13] * costWeight;
        rankEntry.score_4_ = var13;
        func_ov024_021f6830(tacticAI->unknown_5b8_, &rankEntry);
    }

    if (tacticAI->tactic_6_ != 0 && tacticAI->pAction_64c_->id_4_0_ == 1) {
        unsigned char* var68 = (unsigned char*)func_02053c6c((unsigned char*)tacticAI->pMember_8_);
        int firstTargetIndex;
        int targetMP;
        if (var68 != 0 && *(short*)(var68 + 0x2ac) > 0 &&
            ((struct Struct_ov024_021f9874_2*)(var68 + 0x29c))->unknown_0_4_ == 3 &&
            !func_ov024_021eadfc(tacticAI->pMember_8_) &&
            (firstTargetIndex = arg1->unknown_0_[0].unknown_6_, firstTargetIndex >= 0) && firstTargetIndex < 8 &&
            tacticAI->enemies_7c_[firstTargetIndex] != 0 &&
            (targetMP = tacticAI->enemies_7c_[firstTargetIndex]->currentStats_->primaryStats.currMP, targetMP > 0)) {
            mpRatio = (float)inline_ov000_0215cd44_2(tacticAI->pMember_8_) / inline_ov024_021dc540_2(tacticAI->pMember_8_);
            if (mpRatio <= 0.1f) arg1->unknown_c4_ += 50.0f;
            if (mpRatio <= 0.3f) arg1->unknown_c4_ += 30.0f;
            if (mpRatio <= 0.5f) arg1->unknown_c4_ += 10.0f;
        }
    }

    totalScore = arg1->unknown_c4_ + var15;
    totalScore = var12 + totalScore;
    totalScore = var13 + totalScore;
    totalScore = damageScore + totalScore;
    rankEntry.score_4_ = totalScore - scores[13] * costWeight;
    func_ov024_021f6830(tacticAI->totalRanking_3a8_, &rankEntry);

    if (!(damageScore > 0.0f) || tacticAI->mpCost_650_ <= 0) {
        func_ov024_021f6830(tacticAI->unknown_3d8_, &rankEntry);
    }
}
