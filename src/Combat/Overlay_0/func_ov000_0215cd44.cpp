#include <globaldefs.h>
#include "GameState/GameState.h"

struct ActionResult_ov000_021584e8;

extern "C" void SetActionResult_ov000_0215ccbc(int battle, struct ActionResult_ov000_021584e8* result, GameObject* combatant,
                            short amount, short currHP, short currMP, unsigned long long flags, unsigned char isCriticalHit);

static inline short inline_ov000_0215cd44(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_0215cd44_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: SetActionResultFromCombatant_ov000_0215cd44
extern "C" ARM void SetActionResultFromCombatant_ov000_0215cd44(int battle, struct ActionResult_ov000_021584e8* result, GameObject* combatant,
                                        short amount, unsigned long long flags, unsigned char isCriticalHit) {
    SetActionResult_ov000_0215ccbc(battle, result, combatant, amount, inline_ov000_0215cd44(combatant), inline_ov000_0215cd44_2(combatant), flags, isCriticalHit);
}
