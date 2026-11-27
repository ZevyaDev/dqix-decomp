#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02083e28_10 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_02083e28_4 {
    int unknown_0_0_ : 10;
    int unknown_1_2_ : 10;
    int unknown_2_4_ : 10;
    int : 2;
};

struct Struct_02083e28_7 {
    int unknown_0_0_ : 10;
    int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_02083e28_8 {
    int unknown_0_0_ : 8;
    int unknown_1_0_ : 8;
    int unknown_2_0_ : 8;
    int unknown_3_0_ : 8;
};

struct EquipData_02083e28_9 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_02083e28_7 unknown_8_;
    struct Struct_02083e28_10 unknown_c_;
    struct Struct_02083e28_4 unknown_10_;
    struct Struct_02083e28_4 unknown_14_;
    struct Struct_02083e28_4 unknown_18_;
    struct Struct_02083e28_4 unknown_1c_;
};

struct ItemData_0208358c_2 {
    struct EquipData_02083e28_9* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int : 23;
    char unknown_c_[0xc];
    short unknown_18_;
    char unknown_1a_[6];
};

struct Struct_02083e28_11 {
    char unknown_0_[0x14];
    struct Struct_02083e28_8 unknown_14_[5];
    short unknown_28_;
    char unknown_2a_[2];
};

struct Struct_02083e28 {
    unsigned char unknown_0_[0x18];
};

struct Struct_02083e28_2 {
    struct Struct_02083e28_10 unknown_0_[3];
};

struct PartyMemberData_02083e28_3 {
    struct Struct_02083e28_10 stats_0_[3];
    struct Struct_02083e28_10 styles_c_[3];
    char unknown_18_[4];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    char unknown_20_;
    unsigned char unknown_21_[0x18];
    char unknown_39_[0x33];
    unsigned short maxHP_6c_;
    unsigned short maxMP_6e_;
    unsigned short attack_70_;
    unsigned short defense_72_;
    unsigned short agility_74_;
    char unknown_76_[2];
    struct Struct_02083e28_10 unknown_78_;
    unsigned char unknown_7c_[0x18];
    char unknown_94_[0x100];
    struct ItemData_0208358c_2 equipment_194_[11];
    struct Struct_02083e28_11 unknown_2f4_[8];
#if defined(jpn)
    char unknown_454_[0x7b8 - 0x454];
#else
    char unknown1_454_[0x850 - 0x454];
#endif
    struct Struct_02083e28_2 seedBonuses_850_[17];
    struct Struct_02083e28_10 levelStats_91c_[3];
    char unknown_928_[0xc];
    unsigned char unknown_934_[0x16];
    char unknown_94a_[6];
    int vocation_950_;
};

struct Struct_02083e28_5 {
    struct ItemData_0208358c_2* pCandidateItem_0_;
    short* pAttack_4_;
    short* pDefense_8_;
    float* unknown_c_;
    float* pBlockChance_10_;
    float* unknown_14_;
    float* unknown_18_;
    short* pDeftness_1c_;
    short* pAgility_20_;
    short* pMagicalMight_24_;
    short* pMagicalMending_28_;
    short* pMaxHP_2c_;
    short* pMaxMP_30_;
    unsigned char unknown_34_;
};

extern "C" int GetSkillStrengthBonus_02085fb4(unsigned char*);
extern "C" int GetSkillAgilityBonus_02086020(unsigned char*);
extern "C" int GetSkillResilienceBonus_0208608c(unsigned char*);
extern "C" int GetSkillDeftnessBonus_020860f8(unsigned char*);
extern "C" int GetSkillCharmBonus_02086164(unsigned char*);
extern "C" int GetSkillMagicalMendingBonus_020861d0(unsigned char*);
extern "C" int GetSkillMagicalMightBonus_0208623c(unsigned char*);
extern "C" int GetSkillMaxHPBonus_020862a8(unsigned char*);
extern "C" int GetSkillMaxMPBonus_02086314(unsigned char*);
extern "C" int func_02085cd0(unsigned char*, int);
extern "C" int func_02085f1c(unsigned char*, int);
extern "C" int func_02085b88(unsigned char*);
struct Struct_02083e28_6;
extern "C" void ClampHPAndMPToMax_020863e0(Struct_02083e28_6*);
extern "C" void func_020836e4(struct ItemData_0208358c_2*, struct ItemData_0208358c_2*);

static inline void inline_02083e28(unsigned char* arg0, struct Struct_02083e28 arg1) {
    memcpy(arg0, &arg1, sizeof(arg1));
}

static inline void inline_02083e28_2(struct PartyMemberData_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_0_0_ = arg1;
}

static inline void inline_02083e28_3(struct PartyMemberData_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_1_2_ = arg1;
}

static inline void inline_02083e28_4(struct PartyMemberData_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_2_4_ = arg1;
}

// USA: CalculatePartyMemberStats_02083e28
extern "C" ARM void CalculatePartyMemberStats_02083e28(struct PartyMemberData_02083e28_3* memberData, struct Struct_02083e28_5* outStats) {
    int strength = GetSkillStrengthBonus_02085fb4((unsigned char*)memberData) + memberData->levelStats_91c_[0].unknown_0_0_;
    int agility = GetSkillAgilityBonus_02086020((unsigned char*)memberData) + memberData->levelStats_91c_[0].unknown_1_2_;
    int resilience = GetSkillResilienceBonus_0208608c((unsigned char*)memberData) + memberData->levelStats_91c_[0].unknown_2_4_;
    int deftness = GetSkillDeftnessBonus_020860f8((unsigned char*)memberData) + memberData->levelStats_91c_[1].unknown_0_0_;
    int charm = GetSkillCharmBonus_02086164((unsigned char*)memberData) + memberData->levelStats_91c_[1].unknown_1_2_;
    int magicalMending = GetSkillMagicalMendingBonus_020861d0((unsigned char*)memberData) + memberData->levelStats_91c_[1].unknown_2_4_;
    int magicalMight = GetSkillMagicalMightBonus_0208623c((unsigned char*)memberData) + memberData->levelStats_91c_[2].unknown_0_0_;
    int maxHP = GetSkillMaxHPBonus_020862a8((unsigned char*)memberData) + memberData->levelStats_91c_[2].unknown_1_2_;
    int maxMP = GetSkillMaxMPBonus_02086314((unsigned char*)memberData) + memberData->levelStats_91c_[2].unknown_2_4_;
    float var9;
    float blockChance;
    float var11;
    float var12;
    var12 = var11 = blockChance = var9 = 0.0f;
    struct Struct_02083e28_2* seedBonus = &memberData->seedBonuses_850_[memberData->vocation_950_];
    strength += seedBonus->unknown_0_[0].unknown_0_0_;
    agility += seedBonus->unknown_0_[0].unknown_1_2_;
    resilience += seedBonus->unknown_0_[0].unknown_2_4_;
    deftness += seedBonus->unknown_0_[1].unknown_0_0_;
    charm += seedBonus->unknown_0_[1].unknown_1_2_;
    magicalMending += seedBonus->unknown_0_[1].unknown_2_4_;
    magicalMight += seedBonus->unknown_0_[2].unknown_0_0_;
    maxHP += seedBonus->unknown_0_[2].unknown_1_2_;
    maxMP += seedBonus->unknown_0_[2].unknown_2_4_;
    if (strength > 999) strength = 999;
    if (resilience > 999) resilience = 999;
    if (charm > 999) charm = 999;
    if (strength < 0) strength = 0;
    if (resilience < 0) resilience = 0;
    if (charm < 0) charm = 0;

    int styles[6] = {0};
    for (int i = 0; i < 6; i++) {
        styles[i] = charm;
    }
    struct ItemData_0208358c_2* items[11];
    for (int i = 0; i < 11; i++) {
        items[i] = &memberData->equipment_194_[i];
    }
    struct ItemData_0208358c_2* candidateItem;
    if (outStats != NULL && (candidateItem = outStats->pCandidateItem_0_) != NULL) {
        switch (candidateItem->unknown_8_0_) {
        case 0: items[8] = candidateItem; break;
        case 1: items[9] = candidateItem; break;
        case 4: items[7] = candidateItem; break;
        case 2: items[0] = candidateItem; break;
        case 5: items[5] = candidateItem; break;
        case 3: items[1] = candidateItem; break;
        case 6: items[6] = candidateItem; break;
        case 7: items[10] = candidateItem; break;
        }
    }
    for (int i = 0; i < 11; i++) {
        struct ItemData_0208358c_2* item = items[i];
        struct EquipData_02083e28_9* equipData;
        if (item != NULL && item->unknown_18_ > 0 && (equipData = item->unknown_0_) != NULL) {
            agility += equipData->unknown_10_.unknown_1_2_;
            deftness += equipData->unknown_10_.unknown_0_0_;
            magicalMight += equipData->unknown_10_.unknown_2_4_;
            magicalMending += equipData->unknown_14_.unknown_0_0_;
            maxHP += equipData->unknown_14_.unknown_1_2_;
            maxMP += equipData->unknown_14_.unknown_2_4_;
            var9 += equipData->unknown_8_.unknown_2_4_ / 10.0f;
            blockChance += equipData->unknown_c_.unknown_0_0_ / 10.0f;
            var11 += equipData->unknown_c_.unknown_1_2_ / 10.0f;
            var12 += equipData->unknown_c_.unknown_2_4_ / 10.0f;
            styles[0] += equipData->unknown_18_.unknown_1_2_;
            styles[1] += equipData->unknown_18_.unknown_2_4_;
            styles[2] += equipData->unknown_1c_.unknown_0_0_;
            styles[3] += equipData->unknown_1c_.unknown_1_2_;
            styles[4] += equipData->unknown_1c_.unknown_2_4_;
            styles[5] += equipData->unknown_18_.unknown_0_0_;
        }
    }
    if (agility > 999) agility = 999;
    if (deftness > 999) deftness = 999;
    if (magicalMending > 999) magicalMending = 999;
    if (magicalMight > 999) magicalMight = 999;
    if (maxHP > 999) maxHP = 999;
    if (maxMP > 999) maxMP = 999;
    if (agility < 0) agility = 0;
    if (deftness < 0) deftness = 0;
    if (magicalMending < 0) magicalMending = 0;
    if (magicalMight < 0) magicalMight = 0;
    if (maxHP < 1) maxHP = 1;
    if (maxMP < 0) maxMP = 0;
    int style = 0;
    for (int i = 0; i < 6; i++) {
        if (styles[i] > 999) {
            styles[i] = 999;
        } else if (styles[i] < 0) {
            styles[i] = 0;
        }
        if (style < styles[i]) style = styles[i];
    }

    if (outStats == NULL) {
        memberData->stats_0_[0].unknown_0_0_ = strength;
        memberData->stats_0_[0].unknown_1_2_ = agility;
        memberData->stats_0_[0].unknown_2_4_ = resilience;
        memberData->stats_0_[1].unknown_0_0_ = deftness;
        memberData->stats_0_[1].unknown_1_2_ = charm;
        memberData->stats_0_[1].unknown_2_4_ = magicalMending;
        memberData->stats_0_[2].unknown_0_0_ = magicalMight;
        memberData->stats_0_[2].unknown_1_2_ = maxHP;
        memberData->stats_0_[2].unknown_2_4_ = maxMP;
        memberData->styles_c_[0].unknown_0_0_ = style;
        memberData->styles_c_[0].unknown_1_2_ = styles[0];
        memberData->styles_c_[0].unknown_2_4_ = styles[1];
        memberData->styles_c_[1].unknown_0_0_ = styles[2];
        memberData->styles_c_[1].unknown_1_2_ = styles[3];
        memberData->styles_c_[1].unknown_2_4_ = styles[4];
        memberData->styles_c_[2].unknown_0_0_ = styles[5];

        int attack = memberData->stats_0_[0].unknown_0_0_;
        int defense = memberData->stats_0_[0].unknown_2_4_;
        int var26 = memberData->stats_0_[0].unknown_1_2_;
        int var27 = memberData->stats_0_[1].unknown_1_2_;
        int var28 = memberData->stats_0_[1].unknown_2_4_;
        int var29 = memberData->stats_0_[2].unknown_0_0_;
        int var30 = memberData->stats_0_[2].unknown_1_2_;
        int var31 = memberData->stats_0_[2].unknown_2_4_;
        for (int i = 0; i < 11; i++) {
            struct ItemData_0208358c_2* item = &memberData->equipment_194_[i];
            if (item != NULL && item->unknown_18_ > 0 && item->unknown_0_ != NULL) {
                attack += item->unknown_0_->unknown_8_.unknown_0_0_;
                defense += item->unknown_0_->unknown_8_.unknown_1_2_;
            }
        }
        attack += func_02085cd0((unsigned char*)memberData, -1);
        int var34 = func_02085f1c((unsigned char*)memberData, -1) + var31;
        if (attack > 999) attack = 999;
        if (defense > 999) defense = 999;
        if (var34 > 999) var34 = 999;
        if (attack < 0) attack = 0;
        if (defense < 0) defense = 0;
        if (var34 < 0) var34 = 0;
        memberData->attack_70_ = attack;
        memberData->defense_72_ = defense;
        memberData->agility_74_ = var26;
        inline_02083e28_2(memberData, var27);
        inline_02083e28_4(memberData, var28);
        inline_02083e28_3(memberData, var29);
        memberData->maxHP_6c_ = var30;
        memberData->maxMP_6e_ = var34;
        ClampHPAndMPToMax_020863e0((Struct_02083e28_6*)memberData);

        short var35[0x16] = {0};
        for (int i = 0; i < 0x16; i++) {
            var35[i] = memberData->unknown_934_[i];
        }
        for (int i = 0; i < 8; i++) {
            struct Struct_02083e28_11* var38 = &memberData->unknown_2f4_[i];
            if (var38->unknown_28_ > 0) {
                var35[0] += var38->unknown_14_[0].unknown_0_0_;
                var35[1] += var38->unknown_14_[0].unknown_1_0_;
                var35[2] += var38->unknown_14_[0].unknown_2_0_;
                var35[3] += var38->unknown_14_[0].unknown_3_0_;
                var35[4] += var38->unknown_14_[1].unknown_0_0_;
                var35[5] += var38->unknown_14_[1].unknown_1_0_;
                var35[6] += var38->unknown_14_[1].unknown_2_0_;
                var35[8] += var38->unknown_14_[1].unknown_3_0_;
                var35[9] += var38->unknown_14_[2].unknown_0_0_;
                var35[10] += var38->unknown_14_[2].unknown_1_0_;
                var35[11] += var38->unknown_14_[2].unknown_2_0_;
                var35[12] += var38->unknown_14_[2].unknown_3_0_;
                var35[13] += var38->unknown_14_[3].unknown_0_0_;
                var35[14] += var38->unknown_14_[3].unknown_1_0_;
                var35[15] += var38->unknown_14_[3].unknown_2_0_;
                var35[16] += var38->unknown_14_[3].unknown_3_0_;
                var35[17] += var38->unknown_14_[4].unknown_0_0_;
                var35[18] += var38->unknown_14_[4].unknown_1_0_;
                var35[19] += var38->unknown_14_[4].unknown_2_0_;
                var35[20] += var38->unknown_14_[4].unknown_3_0_;
            }
        }
        struct Struct_02083e28 var39;
        memset(&var39, 100, 0x16);
        for (int i = 0; i < 0x16; i++) {
            if (var35[i] < 0) var35[i] = 0;
            var39.unknown_0_[i] = var35[i];
        }
        inline_02083e28(memberData->unknown_7c_, var39);
        inline_02083e28(memberData->unknown_21_, var39);
    } else {
        *outStats->unknown_c_ = var9;
        *outStats->unknown_14_ = var11;
        *outStats->unknown_18_ = var12;
        *outStats->pDeftness_1c_ = deftness;
        *outStats->pAgility_20_ = agility;
        *outStats->pMagicalMight_24_ = magicalMight;
        *outStats->pMagicalMending_28_ = magicalMending;
        *outStats->pMaxHP_2c_ = maxHP;
        int attack = strength;
        int defense = resilience;
        for (int i = 0; i < 11; i++) {
            struct ItemData_0208358c_2* item = items[i];
            if (item != NULL && item->unknown_18_ > 0 && item->unknown_0_ != NULL) {
                attack += item->unknown_0_->unknown_8_.unknown_0_0_;
                defense += item->unknown_0_->unknown_8_.unknown_1_2_;
            }
        }
        unsigned char weaponType = 0x21;
        if (items[8]->unknown_18_ > 0) weaponType = items[8]->unknown_8_4_;
        signed char var46 = weaponType;
        attack += func_02085cd0((unsigned char*)memberData, var46);
        if (outStats->unknown_34_ == 0) {
            maxMP += func_02085f1c((unsigned char*)memberData, var46);
        }
        struct ItemData_0208358c_2* shield;
        if (outStats->unknown_34_ != 0 && (shield = items[9]) != NULL && shield->unknown_18_ > 0) {
            struct ItemData_0208358c_2 savedShield = memberData->equipment_194_[9];
            func_020836e4(&memberData->equipment_194_[9], shield);
            blockChance += func_02085b88((unsigned char*)memberData);
            func_020836e4(&memberData->equipment_194_[9], &savedShield);
        }
        if (attack > 999) attack = 999;
        if (defense > 999) defense = 999;
        if (maxMP > 999) maxMP = 999;
        if (attack < 0) attack = 0;
        *outStats->pAttack_4_ = attack;
        if (defense < 0) defense = 0;
        *outStats->pDefense_8_ = defense;
        if (maxMP < 0) maxMP = 0;
        *outStats->pMaxMP_30_ = maxMP;
        *outStats->pBlockChance_10_ = blockChance;
    }
}
