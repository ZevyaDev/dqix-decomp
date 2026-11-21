#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02053f7c_178 = 0xa6 };
#else
enum { Enum_02053f7c_178 = 0xb2 };
#endif

#include "GameState/GameState.h"

struct Party_02053f7c {
    char unknown_0_[0xf78];
    unsigned char memberObjectIndices_f78_[4];
    unsigned char memberCount_f7c_;
};

struct Struct_02053f7c_2 {
    char unknown_0_[Enum_02053f7c_178];
    short battleId_b2_;
};

struct PartyMember_02053f7c_3 {
    char unknown_0_[4];
    short objectIndex_4_;
    char unknown_6_[0x100 - 6];
    struct Struct_02053f7c_2 unknown_100_;
};

extern "C" void* GetParty_02010828(GameState* gameState);

// USA: SetPartyMemberBattleId_02053f7c
extern "C" ARM void SetPartyMemberBattleId_02053f7c(PartyMember_02053f7c_3* member, unsigned short battleId, int isForced) {
    struct Party_02053f7c* party = (struct Party_02053f7c*)GetParty_02010828(GameState::GetInstance());
    int isInParty = 0;
    int i;
    if (party != NULL) {
        for (i = 0; i < party->memberCount_f7c_; i++) {
            unsigned char memberObjectIndex = party->memberObjectIndices_f78_[i];
            if (memberObjectIndex == member->objectIndex_4_) {
                isInParty = 1;
                break;
            }
        }
    }
    if (isForced != 0 || isInParty != 0) {
        member->unknown_100_.battleId_b2_ = battleId;
    }
}
