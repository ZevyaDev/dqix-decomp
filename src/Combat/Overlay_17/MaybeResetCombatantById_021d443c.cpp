#include <globaldefs.h>
#include "GameState/GameState.h"


struct Obj02039d84;
extern void ResetObjectState02039d84(struct Obj02039d84* obj);

// USA: func_ov017_021d443c
ARM void MaybeResetCombatantById_021d443c(int a, signed char* b, GameState* battle) {
	int id = a;
	signed char v = b[4];
	if (v != -1) {
		id = v;
	}
	GameObject* c = battle->GetPartyMemberByIndex(id);
	if (c) {
		ResetObjectState02039d84((struct Obj02039d84*)c);
	}
}
