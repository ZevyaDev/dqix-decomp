#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov017_02190818
ARM int IsCombatantField2InMonsterRange_02190818(int id) {
	GameState* bs = GameState::GetInstance();
	if (bs->GetPartyMemberByIndex(id) == NULL)
		goto zero;
	{
	GameObject* c = bs->GetGameObjectByIndex(id * 0xc + 0x14);
	if (c == NULL)
		goto zero;
	{
	short v = *(short*)((char*)c + 2);
	if (v != 0x2347) {
		if (v != 0x2348) {
			if (v != 0x2349) {
				goto zero;
			}
		}
	}
	return 1;
	}
	}
zero:
	return 0;
}
