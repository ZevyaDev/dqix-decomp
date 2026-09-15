#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x1000(GameState* battleStruct, int combatantId);
int GetSignedByte0x2d0(void* obj);
int GetSignedByte0x2d1(void* obj);

#pragma optimize_for_size off
// USA: func_ov017_02191764
ARM int FindUnusedSlot_02191764(int a, int b) {
	GameState* battleStruct = GameState::GetInstance();
	int bitmask = 0;
	for (int i = 0; i < 4; i++) {
		GameObject* combatant = GetCombatantWithFlag0x1000(battleStruct, i);
		if (!combatant || i == a) continue;
		if (b != GetSignedByte0x2d0(combatant)) continue;
		bitmask |= 1 << GetSignedByte0x2d1(combatant);
	}
	int result = 0;
	for (int j = 0; j < 4; ++j) {
		if ((bitmask & (1 << j)) == 0) {
			result = j;
			break;
		}
	}
	return result;
}
