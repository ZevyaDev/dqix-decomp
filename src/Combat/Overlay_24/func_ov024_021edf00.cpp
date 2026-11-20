#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" GameObject* GetEnemyByID_ov000_021536f8(int battle, int index);

struct Struct_ov024_021e05e4 { char unknown_0_[0x18]; int unknown_18_; };
struct Struct_ov024_021e04e0 { char unknown_0_[0x138]; struct Struct_ov024_021e05e4* unknown_138_; };
extern "C" int func_ov024_021e05e4(struct Struct_ov024_021e04e0* arg0);

struct Struct_02010088_2 { char unknown_0_[0x14]; int statusFlags_14_; };
struct Struct_02010088 { char unknown_0_[0x138]; struct Struct_02010088_2* pCurrentStats_138_; };
extern "C" int IsDead_02010088(struct Struct_02010088* object);

// USA: GetEnragedTarget_ov024_021edf00
extern "C" ARM int GetEnragedTarget_ov024_021edf00(int* targetSelector, int actorIndex, short* targetIndices) {
	GameObject* enemy = (GameObject*)GetEnemyByID_ov000_021536f8(*targetSelector, actorIndex);
	if (!enemy) return 0;
	if (!func_ov024_021e05e4((struct Struct_ov024_021e04e0*)enemy)) return 0;
	short targetIndex = *(short*)((char*)enemy->currentStats_ + 0x2e);
	GameObject* target = GetCombatantByID(*targetSelector, targetIndex);
	if (!target) goto fail;
	if (!IsDead_02010088((struct Struct_02010088*)target)) {
		*targetIndices = *(short*)((char*)enemy->currentStats_ + 0x2e);
		return 1;
	}
fail:
	return 0;
}
