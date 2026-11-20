#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByID_ov000_021536f8(int battle, int index);

// USA: func_ov024_021f2d4c
extern "C" ARM int func_ov024_021f2d4c(int* arg0, short arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = GetEnemyByID_ov000_021536f8(*arg0, arg1);
	if (!var0) return 0;
	if (var0->currentStats_->magicalMendingBuff >= 2) {
		return 0;
	} else {
		*arg4 = arg1;
		*arg3 = 1;
		return 1;
	}
}
