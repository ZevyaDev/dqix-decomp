#include <globaldefs.h>
#include "GameState/GameState.h"

struct ActionResult_ov000_021584e8;

extern "C" void SetActionResult_ov000_0215ccbc(int battle, struct ActionResult_ov000_021584e8* result, GameObject* combatant,
                            short amount, short currHP, short currMP, unsigned long long flags, unsigned char isCriticalHit);

static inline short inline_ov000_0215cd44(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_0215cd44_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov000_0215cd44
extern "C" ARM void func_ov000_0215cd44(int arg0, struct ActionResult_ov000_021584e8* arg1, GameObject* arg2,
                                        short arg3, unsigned long long arg4, unsigned char arg5) {
    SetActionResult_ov000_0215ccbc(arg0, arg1, arg2, arg3, inline_ov000_0215cd44(arg2), inline_ov000_0215cd44_2(arg2), arg4, arg5);
}
