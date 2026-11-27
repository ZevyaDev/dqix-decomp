#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: GetPartyMemberHPColor_020dcc98
extern "C" ARM int GetPartyMemberHPColor_020dcc98(int partyMemberIndex) {
    int color = 15;
    GameState* gameState = GameState::GetInstance();
    GameObject* member = gameState->GetPartyMemberByIndex(partyMemberIndex);
    if (member != 0) {
        float hpRatio;
        int maxHP = member->baseStats_->primaryStats.maxHP;
        if ((float)maxHP == 0.0f) {
            hpRatio = 0.0f;
        } else {
            int* status = *(int**)((char*)member + 0x130);
            int hp = *(unsigned short*)((char*)status + 4);
            hpRatio = (float)hp / (float)maxHP;
        }

        if (hpRatio <= 0.25f) {
            color = 13;
        }
        if (hpRatio <= 0.08f) {
            color = 11;
        }
        if (hpRatio == 0.0f) {
            color = 9;
        }
    }
    return color;
}
