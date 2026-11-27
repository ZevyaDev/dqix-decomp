#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);
extern "C" int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex);
struct Struct_02010088;
extern "C" int IsDead_02010088(struct Struct_02010088* object);
struct Struct_02088514;
extern "C" int IsEnvenomated_02088514(struct Struct_02088514* stats);
struct Struct_ov024_021da670_7;
extern "C" int IsParalysed_ov024_021da9b0(struct Struct_ov024_021da670_7* combatant);
extern "C" int IsAsleep_020882f8(unsigned char* currentStats);
struct Struct_ov024_021de124;
extern "C" int IsConfused_ov024_021de25c(struct Struct_ov024_021de124* combatant);
struct Struct_02088660;
extern "C" int func_02088660(struct Struct_02088660* arg0);
struct Struct_ov024_021fa7ec_5;
extern "C" int func_ov024_021fb430(struct Struct_ov024_021fa7ec_5* arg0);
struct Struct_ov024_021fa7ec_6;
extern "C" int func_ov024_021fb448(struct Struct_ov024_021fa7ec_6* arg0);
struct Struct_ov024_021fa7ec_8;
extern "C" int func_ov024_021fb478(struct Struct_ov024_021fa7ec_8* arg0);
struct Struct_ov024_021eda78_5;
extern "C" int func_ov024_021edc08(struct Struct_ov024_021eda78_5* arg0);
struct Struct_ov024_021e4604;
extern "C" int func_ov024_021e47dc(struct Struct_ov024_021e4604* arg0);
struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);
extern "C" void func_ov024_021f6a4c(void* arg0, void* arg1);
extern "C" void func_ov024_021fd858(void* arg0);
extern "C" void RankCandidateAction_ov024_021f9874(void* tacticAI, void* effects, int targetGroup, int targetIndex);

struct PartyMember_ov024_021fd954 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x138 - 0x6];
    struct ModifiableCombatStats* pCurrentStats_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    unsigned char* pPartyMemberData_150_;
};

struct PartyMember_ov024_021fd954* GetCombatantByID(int unused, int id);

struct ActionEffect_ov024_021fd954_2 {
    float amount_0_;
    unsigned char statusEffect_4_;
    unsigned char isEnemyTarget_5_;
    unsigned char targetIndex_6_;
    unsigned char chance_7_;
    unsigned char kind_8_;
};
struct ActionEffectList_ov024_021fd954_3 {
    char unknown_0_[0xc8];
    ActionEffectList_ov024_021fd954_3() { memset(this, 0, sizeof(*this)); }
};
struct ActionData_ov024_021fd954_4 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int targetSide_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[4];
    unsigned int flags_10_;
    unsigned int unknown_14_0_ : 28;
    unsigned int targetScope_17_4_ : 4;
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 27;
};
struct Struct_ov024_021fd954_5 {
    char unknown_0_[0x8e18];
    unsigned char* pBattleSetup_8e18_;
};
struct TacticAI_ov024_021fbec4 {
    struct Struct_ov024_021fd954_5* pBattle_0_;
    short memberIndex_4_;
    struct PartyMember_ov024_021fd954* pMember_8_;
    char unknown_c_[0x64c - 0xc];
    struct ActionData_ov024_021fd954_4* pAction_64c_;
    char unknown_650_[0x658 - 0x650];
    struct ActionEffectList_ov024_021fd954_3* pEffects_658_;
    struct ActionEffect_ov024_021fd954_2 effect_65c_;
    struct PartyMember_ov024_021fd954* pTarget_668_;
    int targetIndex_66c_;
};

// USA: EvaluatePartyStatusAction_ov024_021fd954
extern "C" ARM void EvaluatePartyStatusAction_ov024_021fd954(struct TacticAI_ov024_021fbec4* tacticAI, int statusEffect) {
    struct ActionData_ov024_021fd954_4* action;
    int targetScope;
    int memberIndex;
    struct PartyMember_ov024_021fd954* member;
    int hasNeededTarget;
    struct PartyMember_ov024_021fd954* actor;
    actor = tacticAI->pMember_8_;
    func_02053c6c((unsigned char*)actor);
    action = tacticAI->pAction_64c_;
    if (action->targetSide_9_0_ == 1) return;
    targetScope = action->targetScope_17_4_;
    if (targetScope == 6) {
        if (HasLearnedSkillEntry_02083b00(actor->pPartyMemberData_150_, 0xe6)) {
            targetScope = 3;
        } else {
            targetScope = 2;
        }
    }
    if (targetScope != 2 && targetScope != 1 && targetScope != 4 && targetScope != 3) return;

    struct ActionEffectList_ov024_021fd954_3 effects;
    memset(&effects, 0, sizeof(effects));
    hasNeededTarget = 0;
    for (memberIndex = 0; memberIndex < 4; memberIndex++) {
        if (targetScope == 1 && memberIndex != tacticAI->memberIndex_4_) continue;
        if (!IsPartyMemberInBattle_020a35e0(tacticAI->pBattle_0_->pBattleSetup_8e18_, memberIndex & 0xff)) continue;
        member = GetCombatantByID((int)tacticAI->pBattle_0_, (short)memberIndex);
        if (!member) continue;
        if (IsDead_02010088((struct Struct_02010088*)member)) continue;
        if ((action->flags_10_ & 0x400) && (*(unsigned int*)((char*)member->pCurrentStats_138_ + 0x14) & 0x200)) continue;

        bool isNeeded = false;
        int kind = 8;
        if (statusEffect == 2) {
            if (IsEnvenomated_02088514((struct Struct_02088514*)member->pCurrentStats_138_)) isNeeded = true;
        } else if (statusEffect == 3) {
            if (IsParalysed_ov024_021da9b0((struct Struct_ov024_021da670_7*)member)) isNeeded = true;
        } else if (statusEffect == 4) {
            if (IsAsleep_020882f8((unsigned char*)member->pCurrentStats_138_)) isNeeded = true;
        } else if (statusEffect == 7) {
            if (IsConfused_ov024_021de25c((struct Struct_ov024_021de124*)member)) isNeeded = true;
        } else if (statusEffect == 0x11) {
            struct ModifiableCombatStats* stats = member->pCurrentStats_138_;
            if (stats->attackBuff <= 0) isNeeded = true;
            if (stats->primaryStats.attack >= 999) isNeeded = false;
            kind = 7;
        } else if (statusEffect == 0x12) {
            struct ModifiableCombatStats* stats = member->pCurrentStats_138_;
            if (stats->defenseBuff <= 0) isNeeded = true;
            if (stats->primaryStats.defense >= 999) isNeeded = false;
            kind = 7;
        } else if (statusEffect == 0x13) {
            struct ModifiableCombatStats* stats = member->pCurrentStats_138_;
            if (stats->agilityBuff <= 0) isNeeded = true;
            if (stats->primaryStats.agility >= 999) isNeeded = false;
            kind = 7;
        } else if (statusEffect == 0x14) {
            struct ModifiableCombatStats* stats = member->pCurrentStats_138_;
            if (stats->magicalMightBuff <= 0) isNeeded = true;
            if ((unsigned short)stats->primaryStats.magicalMight >= 999) isNeeded = false;
            kind = 7;
        } else if (statusEffect == 0x15) {
            struct ModifiableCombatStats* stats = member->pCurrentStats_138_;
            if (stats->magicalMendingBuff <= 0) isNeeded = true;
            if ((unsigned short)stats->primaryStats.magicalMending >= 999) isNeeded = false;
            kind = 7;
        } else if (statusEffect == 0x16) {
            if (member->pCurrentStats_138_->unknown_5a_2_ <= 0) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0x17) {
            if ((((*(int*)((char*)member->pCurrentStats_138_ + 0x58)) << 8) >> 29) <= 0) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0xd) {
            if (!func_02088660((struct Struct_02088660*)member->pCurrentStats_138_)) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0xe) {
            if (!func_ov024_021fb430((struct Struct_ov024_021fa7ec_5*)member) && !func_ov024_021fb448((struct Struct_ov024_021fa7ec_6*)member)
                && !func_ov024_021fb478((struct Struct_ov024_021fa7ec_8*)member)) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0xf) {
            if (!func_ov024_021fb430((struct Struct_ov024_021fa7ec_5*)member) && !func_ov024_021fb448((struct Struct_ov024_021fa7ec_6*)member)
                && !func_ov024_021fb478((struct Struct_ov024_021fa7ec_8*)member)) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0x10) {
            if (!func_ov024_021edc08((struct Struct_ov024_021eda78_5*)member)) isNeeded = true;
            kind = 7;
        } else if (statusEffect == 0xb) {
            if (!func_ov024_021e47dc((struct Struct_ov024_021e4604*)member)) isNeeded = true;
            kind = 7;
        }

        struct ActionEffect_ov024_021fd954_2 effect;
        memset(&effect, 0, sizeof(effect));
        int chance = 50;
        if (isNeeded) {
            chance = 100;
            hasNeededTarget = 1;
        }
        effect.amount_0_ = 0.0f;
        effect.statusEffect_4_ = statusEffect;
        effect.isEnemyTarget_5_ = 0;
        effect.targetIndex_6_ = memberIndex;
        effect.chance_7_ = chance;
        effect.kind_8_ = kind;
        func_ov024_021f6a1c((struct Struct_ov024_021f6a1c*)&effects, &effect);
        if (action->unknown_18_0_ != 0) {
            tacticAI->pEffects_658_ = &effects;
            func_ov024_021f6a4c(&tacticAI->effect_65c_, &effect);
            tacticAI->pTarget_668_ = member;
            tacticAI->targetIndex_66c_ = member->unknown_4_;
            func_ov024_021fd858(tacticAI);
        }
        if (targetScope == 2 || targetScope == 1) {
            int targetIndex = (unsigned char)member->unknown_4_;
            if (hasNeededTarget) RankCandidateAction_ov024_021f9874(tacticAI, &effects, 0, targetIndex);
            memset(&effects, 0, sizeof(effects));
            hasNeededTarget = 0;
        }
    }
    if (targetScope == 4 || targetScope == 3) {
        GetCombatantByID((int)tacticAI->pBattle_0_, 0);
        int targetIndex = (unsigned char)actor->unknown_4_;
        if (targetScope == 3) targetIndex = 0xff;
        if (hasNeededTarget) RankCandidateAction_ov024_021f9874(tacticAI, &effects, 0, targetIndex);
    }
}
