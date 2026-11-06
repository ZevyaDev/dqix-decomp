#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

struct Struct_02010088;
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" int func_02010088(struct Struct_02010088* arg0);

struct Struct_ov000_0215e9fc {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct Struct_ov000_0215e9fc_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x144];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct Struct_ov000_0215e9fc* pPartyMemberData_150_;
};

// USA: CollectPartyCombatantIndices_ov000_0215e9fc
extern "C" ARM int CollectPartyCombatantIndices_ov000_0215e9fc(char* battle, short* indices, int maxCount, unsigned int filterFlags) {
    GameState* gameState = GameState::GetInstance();
    unsigned char partyOrder[4];
    int partyCount = func_020114ec((char*)gameState, partyOrder);
    int skipMarkedData;
    int skipFlaggedStats;
    int i;
    int memberIndex;
    GameObject* member;
    int count = 0;
    skipFlaggedStats = filterFlags & 1;
    i = 0;
    skipMarkedData = filterFlags & 8;
    for (; i < partyCount; i++) {
        memberIndex = partyOrder[i];
        if (func_ov000_0215fc60(battle) != 0 && memberIndex != 0) continue;
        if (!func_020a35e0(*(unsigned char**)(battle + 0x8e18), memberIndex)) continue;
        member = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
        if (member == NULL) continue;
        if (func_ov000_02153c0c(member)) continue;
        if (skipFlaggedStats && func_02010088((struct Struct_02010088*)member)) continue;
        if (skipMarkedData) {
            int isMarked;
            struct Struct_ov000_0215e9fc* memberData = ((struct Struct_ov000_0215e9fc_2*)member)->pPartyMemberData_150_;
            if (memberData != NULL) {
                isMarked = memberData->unknown_56b_0_ != 0;
            } else {
                isMarked = 0;
            }
            if (isMarked) continue;
        }
        indices[count] = memberIndex;
        count++;
        if (count == maxCount) return count;
    }
    return count;
}
