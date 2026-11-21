#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByID_ov000_021536f8(int battle, int index);
struct Struct_ov024_021dd028_5;
extern "C" int HasSuperHighTension_ov024_021dd260(struct Struct_ov024_021dd028_5* combatant);

struct Struct_ov024_021f3524 { int unknown_0_; };

// USA: func_ov024_021f3524
extern "C" ARM int func_ov024_021f3524(struct Struct_ov024_021f3524* arg0, int arg1, int arg2, int* arg3, short* arg4) {
	GameObject* var0 = GetEnemyByID_ov000_021536f8(arg0->unknown_0_, arg1);
	if (!var0) return 0;
	int var1;
	if (HasSuperHighTension_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0)) {
		var1 = 0;
	} else {
		var1 = 1;
		*arg3 = var1;
		*arg4 = (short)arg1;
	}
	return var1;
}
