#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByID_ov000_021536f8(int battle, int index);
extern "C" float GetHPRatio_ov024_021db358(GameObject* combatant);

struct Struct_ov024_021f3688 { int unknown_0_; };

// USA: func_ov024_021f3688
extern "C" ARM int func_ov024_021f3688(struct Struct_ov024_021f3688* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = GetEnemyByID_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	int var1;
	if (GetHPRatio_ov024_021db358(var0) >= 0.5f) {
		var1 = 0;
	} else {
		var1 = 1;
		*arg3 = var1;
		*arg4 = (short)arg1;
	}
	return var1;
}
