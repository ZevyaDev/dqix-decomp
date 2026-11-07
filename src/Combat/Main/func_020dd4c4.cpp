#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02052df8;
extern "C" int GetEquippedItem_02052df8(Struct_02052df8*, int);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState*);
extern "C" int func_020dd200(int, int);
extern "C" int func_020dd154(int, int);
struct EquipData_020dd4c4_2 {
    unsigned int : 7;
    unsigned int unknown_0_7_ : 4;
    unsigned int : 18;
    unsigned int isHeroOnly_3_5_ : 1;
    unsigned int requiredRevocations_3_6_ : 2;
    unsigned int vocationMask_4_0_ : 12;
    unsigned int : 15;
    unsigned int unknown_7_3_ : 1;
    unsigned int unknown_7_4_ : 1;
    unsigned int unknown_7_5_ : 1;
    unsigned int : 2;
};
struct ItemData_020dd4c4_3 {
    EquipData_020dd4c4_2* pEquipData_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int : 28;
    char unknown_c_[0xc];
    short itemId_18_;
};
struct Struct_020dd4c4_4 {
    char unknown_0_[0x186];
    unsigned char revocationCounts_186_[13];
    char unknown_193_[0x49c - 0x193];
    unsigned char gender_49c_0_ : 1;
    unsigned char : 7;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif
    int vocation_950_;
    unsigned short inline_020dd4c4(int arg0) const {
        return revocationCounts_186_[arg0];
    }
};
struct Struct_020dd4c4 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_020dd4c4_4* pPartyMemberData_150_;
};
static inline Struct_020dd4c4* inline_020dd4c4_2(int arg0) {
    return (Struct_020dd4c4*)GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), arg0);
}

// USA: GetEquipRestrictions_020dd4c4
extern "C" ARM int GetEquipRestrictions_020dd4c4(int memberIndex, ItemData_020dd4c4_3* item) {
    if (!item) return 0x200;
    if (item->itemId_18_ <= 0) return 0x200;
    Struct_020dd4c4* member = inline_020dd4c4_2(memberIndex);
    if (!member) return 0x20;
    if (!member->pPartyMemberData_150_->vocation_950_) return 0;
    int isEquipment = item->unknown_8_0_ <= 7;
    if (!isEquipment) return 8;
    if (!item->pEquipData_0_) return 8;
    int restrictions = 0;
    GameState* gameState = GameState::GetInstance();
    restrictions |= (item->pEquipData_0_->isHeroOnly_3_5_ && memberIndex != GetProtagonistObjectIndex_020100a8(gameState)) ? 0x100 : 0;
    int skillFlag;
    if (item->unknown_8_0_ != 0 && item->unknown_8_0_ != 1) skillFlag = 0;
    else if (func_020dd200(memberIndex & 0xff, item->pEquipData_0_->unknown_0_7_ & 0xff)) skillFlag = 0;
    else {
        if (func_020dd154(memberIndex, item->pEquipData_0_->unknown_0_7_ & 0xff)) skillFlag = 0;
        else skillFlag = 1;
    }
    restrictions |= skillFlag;
    int vocationFlag;
    if (item->unknown_8_0_ == 0) vocationFlag = 0;
    else if (item->unknown_8_0_ == 1) vocationFlag = 0;
    else {
        int vocation = inline_020dd4c4_2(memberIndex)->pPartyMemberData_150_->vocation_950_;
        if (vocation == 0) vocationFlag = 2;
        else {
            int vocationBit = 1 << (vocation - 1);
            vocationFlag = (item->pEquipData_0_->vocationMask_4_0_ & vocationBit) ? 0 : 2;
        }
    }
    restrictions |= vocationFlag;
    Struct_020dd4c4_4* memberData = inline_020dd4c4_2(memberIndex)->pPartyMemberData_150_;
    int revocationCount = memberData->inline_020dd4c4(memberData->vocation_950_);
    restrictions |= item->pEquipData_0_->requiredRevocations_3_6_ <= (unsigned short)revocationCount ? 0 : 0x10;
    member = inline_020dd4c4_2(memberIndex);
    EquipData_020dd4c4_2* equipData = item->pEquipData_0_;
    unsigned int gender = member->pPartyMemberData_150_->gender_49c_0_;
    int genderFlag;
    if (GetEquippedItem_02052df8((Struct_02052df8*)member, 9) == 0x4680 && !equipData->unknown_7_5_) genderFlag = 0;
    else {
        unsigned int allowedByGender[2] = { equipData->unknown_7_3_, equipData->unknown_7_4_ };
        genderFlag = allowedByGender[gender] ? 0 : 0x80;
    }
    restrictions |= genderFlag;
    return restrictions;
}
