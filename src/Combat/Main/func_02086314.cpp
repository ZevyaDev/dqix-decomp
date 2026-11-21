#include <globaldefs.h>
#if defined(jpn)
#define data_020e8a9e data_020e8bc4
#endif
#include "GameState/GameState.h"

extern short data_020e8a9e[];

extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);
extern "C" int func_0201137c(char* arg0, int arg1);

// USA: GetSkillMaxMPBonus_02086314
extern "C" ARM int GetSkillMaxMPBonus_02086314(unsigned char* memberData) {
    GameState* gameState = GameState::GetInstance();
    int bonus = 0;
    unsigned char i;
    short skillEntryId;
    for (i = 0; (skillEntryId = data_020e8a9e[i]) != -1; i++) {
        if (HasLearnedSkillEntry_02083b00(memberData, skillEntryId)) {
            bonus += func_0201137c((char*)gameState, skillEntryId);
        }
    }
    return bonus;
}
