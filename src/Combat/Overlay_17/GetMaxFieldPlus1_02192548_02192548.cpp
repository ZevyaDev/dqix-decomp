#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x1000(GameState* battleStruct, int combatantId);

// USA: func_ov017_02192548
ARM int GetMaxFieldPlus1_02192548_02192548(void) {
	GameState* battle = GameState::GetInstance();
	int max = 0;
	int i;
	for (i = 1; i < 4; i++) {
		GameObject* c = GetCombatantWithFlag0x1000(battle, i);
		if (c) {
			unsigned char b = *((unsigned char*)c + 0x2d2);
			if (max < b) max = b;
		}
	}
	return max + 1;
}
