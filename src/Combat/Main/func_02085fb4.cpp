#include <globaldefs.h>
#if defined(jpn)
#define data_020e8ab6 data_020e8bd0
#endif
#include "GameState/GameState.h"

extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);
extern "C" int func_0201137c(char* arg0, int arg1);
extern short data_020e8ab6[];

// USA: GetSkillStrengthBonus_02085fb4
extern "C" ARM int GetSkillStrengthBonus_02085fb4(unsigned char* memberData) {
    short* skillEntryIds;
    GameState* gameState = GameState::GetInstance();
    int bonus = 0;
    unsigned char i = 0;
    skillEntryIds = data_020e8ab6;
    short skillEntryId;
    while ((skillEntryId = skillEntryIds[i]) != -1) {
        if (HasLearnedSkillEntry_02083b00(memberData, skillEntryId)) {
            bonus += func_0201137c((char*)gameState, skillEntryId);
        }
        i = (i + 1) & 0xff;
    }
    return bonus;
}
