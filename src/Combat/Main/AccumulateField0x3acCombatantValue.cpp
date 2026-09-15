#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_0206918c
ARM void AccumulateField0x3acCombatantValue(void* unused, int* accum) {
    GameState* battleStruct = GameState::GetInstance();
    GameObject* combatant = battleStruct->GetProtagonist();
    void* stats;
    if (combatant == NULL) {
        return;
    }
    stats = *(void* volatile*)&combatant->baseStats_;
    *accum += sprintf((char*)(*accum), (const char*)stats);
}
