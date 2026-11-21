#include <globaldefs.h>
#if defined(jpn)
#define data_020e8bec data_020e8d06
#endif
#include "GameState/GameState.h"

extern short data_020e8bec[];

extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);
extern "C" int func_0201137c(char* arg0, int arg1);

// USA: GetSkillMaxHPBonus_020862a8
extern "C" ARM int GetSkillMaxHPBonus_020862a8(unsigned char* memberData) {
    GameState* gameState = GameState::GetInstance();
    int bonus = 0;
    unsigned char i;
    short skillEntryId;
    for (i = 0; (skillEntryId = data_020e8bec[i]) != -1; i++) {
        if (HasLearnedSkillEntry_02083b00(memberData, skillEntryId)) {
            bonus += func_0201137c((char*)gameState, skillEntryId);
        }
    }
    return bonus;
}
