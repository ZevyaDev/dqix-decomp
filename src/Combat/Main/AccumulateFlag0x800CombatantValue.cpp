#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_02069120
ARM void AccumulateFlag0x800CombatantValue(void* unused, int* accum) {
    GameState* battleStruct = GameState::GetInstance();
    GameObject* combatant = battleStruct->GetPartyMemberByIndex(0);
    void* stats;
    if (combatant == NULL) {
        return;
    }
    stats = *(void* volatile*)&combatant->baseStats_;
    *accum += sprintf((char*)(*accum), (const char*)stats);
}
