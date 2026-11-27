#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);

struct PartyMemberStatus_02048350 {
    char unknown_0_[0x6];
    unsigned short currMP_6_;
};

struct PartyMember_02048350_2 {
    char unknown_0_[0x4];
    short objectIndex_4_;
    char unknown_6_[0x130 - 0x6];
    struct PartyMemberStatus_02048350* pStatus_130_;
};

// USA: SpendMP_02048350
extern "C" ARM int SpendMP_02048350(struct PartyMember_02048350_2* member, int mpCost) {
    struct PartyMemberStatus_02048350* status = member->pStatus_130_;
    unsigned short currMP = status->currMP_6_;
    GameState* gameState = GameState::GetInstance();
    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, member->objectIndex_4_);
    if (partyMemberBase != NULL && mpCost > 0) {
        unsigned char* memberData = (unsigned char*)func_02053c6c((unsigned char*)partyMemberBase);
        if (memberData != NULL && HasLearnedSkillEntry_02083b00(memberData, 0x106)) {
            mpCost = (int)(0.75f + 0.75f * (float)mpCost);
            if (mpCost <= 0) {
                mpCost = 0;
            }
        }
    }
    if (currMP <= mpCost) {
        member->pStatus_130_->currMP_6_ = 0;
        return currMP;
    }
    member->pStatus_130_->currMP_6_ = currMP - mpCost;
    return mpCost;
}
