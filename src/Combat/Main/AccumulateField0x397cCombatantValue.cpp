#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_02069158
ARM void AccumulateField0x397cCombatantValue(void* unused, int* accum) {
    GameState* battleStruct = GameState::GetInstance();
    GameObject* combatant = battleStruct->GetUnknownGameObject();
    void* stats;
    if (combatant == NULL) {
        return;
    }
    stats = *(void* volatile*)&combatant->baseStats_;
    *accum += sprintf((char*)(*accum), (const char*)stats);
}
