#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x400ByID(int unused, int id);

// USA: func_ov024_021f2d4c  (semantic: CheckMagicalMendingBuffBelow2_021f2d4c)
extern "C" ARM int func_ov024_021f2d4c(int* p0, short id, int unused2, int* outFlag, short* out5) {
	GameObject* c = GetCombatantWithFlag0x400ByID(*p0, id);
	if (!c) return 0;
	if (c->currentStats_->magicalMendingBuff >= 2) {
		return 0;
	} else {
		*out5 = id;
		*outFlag = 1;
		return 1;
	}
}
