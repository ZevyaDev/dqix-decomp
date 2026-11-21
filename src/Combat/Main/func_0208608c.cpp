#include <globaldefs.h>
#if defined(jpn)
#define data_020e8ae2 data_020e8c1c
#endif
#include "GameState/GameState.h"

extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);
extern "C" int GetSkillEntryBonus_0201137c(char* gameState, int skillEntryId);
extern short data_020e8ae2[];

// USA: GetSkillResilienceBonus_0208608c
extern "C" ARM int GetSkillResilienceBonus_0208608c(unsigned char* memberData) {
    short* skillEntryIds;
    GameState* gameState = GameState::GetInstance();
    int bonus = 0;
    unsigned char i = 0;
    skillEntryIds = data_020e8ae2;
    short skillEntryId;
    while ((skillEntryId = skillEntryIds[i]) != -1) {
        if (HasLearnedSkillEntry_02083b00(memberData, skillEntryId)) {
            bonus += GetSkillEntryBonus_0201137c((char*)gameState, skillEntryId);
        }
        i = (i + 1) & 0xff;
    }
    return bonus;
}
