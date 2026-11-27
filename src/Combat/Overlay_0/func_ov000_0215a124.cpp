#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: ReduceCombatantMP_ov000_0215a124
extern "C" ARM int ReduceCombatantMP_ov000_0215a124(void* battle, int combatantIndex, int amount) {
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantIndex);
    if (combatant == 0) {
        return 0;
    }
    int newMP;
    struct ModifiableCombatStats* stats = combatant->currentStats_;
    newMP = stats->primaryStats.currMP - amount;
    if (newMP <= 0) {
        newMP = 0;
    }
    stats->primaryStats.currMP = (unsigned short)newMP;
    return (short)newMP;
}
