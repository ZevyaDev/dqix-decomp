#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetHPRatio_ov024_021db358
extern "C" ARM float GetHPRatio_ov024_021db358(GameObject* combatant) {
	unsigned short currHP = combatant->currentStats_->primaryStats.currHP;
	if ((float)currHP == 0.0f) return 0.0f;
	unsigned short maxHP = combatant->currentStats_->primaryStats.maxHP;
	return (float)currHP / (float)maxHP;
}
