#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: RestoreCombatantMP_ov000_0215a1d4
extern "C" ARM short RestoreCombatantMP_ov000_0215a1d4(void* battle, int combatantIndex, int amount, short* restoredAmount) {
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantIndex);
    if (combatant == 0) {
        return 0;
    }
    int currentMP = combatant->currentStats_->primaryStats.currMP;
    *restoredAmount = (short)amount;
    int newMP = currentMP + amount;
    if (newMP > combatant->currentStats_->primaryStats.maxMP) {
        int missingMP = combatant->currentStats_->primaryStats.maxMP - combatant->currentStats_->primaryStats.currMP;
        *restoredAmount = (short)missingMP;
        newMP = combatant->currentStats_->primaryStats.maxMP;
    }
    combatant->currentStats_->primaryStats.currMP = (unsigned short)newMP;
    return (short)newMP;
}
