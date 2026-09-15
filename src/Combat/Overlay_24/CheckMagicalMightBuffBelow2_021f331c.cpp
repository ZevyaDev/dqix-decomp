#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x400ByID(int unused, int id);

// USA: func_ov024_021f331c  (semantic: CheckMagicalMightBuffBelow2_021f331c)
extern "C" ARM int func_ov024_021f331c(int* p0, short id, int unused2, int* outFlag, short* out5) {
	GameObject* c = GetCombatantWithFlag0x400ByID(*p0, id);
	if (!c) return 0;
	if (c->currentStats_->magicalMightBuff >= 2) {
		return 0;
	} else {
		*outFlag = 1;
		*out5 = id;
		return 1;
	}
}
