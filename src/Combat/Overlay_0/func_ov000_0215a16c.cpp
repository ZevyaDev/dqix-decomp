#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: HealCombatant_ov000_0215a16c
extern "C" ARM short HealCombatant_ov000_0215a16c(void* battle, int combatantIndex, int amount, short* healedAmount) {
    GameObject* combatant = GameState::GetInstance()->GetCombatantByIndex(combatantIndex);
    if (combatant == 0) {
        return 0;
    }
    int currentHP = combatant->currentStats_->primaryStats.currHP;
    *healedAmount = (short)amount;
    int newHP = currentHP + amount;
    if (newHP > combatant->currentStats_->primaryStats.maxHP) {
        int missingHP = combatant->currentStats_->primaryStats.maxHP - combatant->currentStats_->primaryStats.currHP;
        *healedAmount = (short)missingHP;
        newHP = combatant->currentStats_->primaryStats.maxHP;
    }
    combatant->currentStats_->primaryStats.currHP = (unsigned short)newHP;
    return (short)newHP;
}
