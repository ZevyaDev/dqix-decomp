#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void _ZN8Vector3iaSERKS_(int* dst, int* src);

// USA: func_ov017_021bd3d4
ARM void SetFlagAndSyncVec3_021bd3d4(void* self, int index) {
	unsigned char* base = (unsigned char*)self;
	unsigned char mask = 1 << index;
	base[0x174] |= mask;
	base[0x175] &= ~mask;
	GameObject* combatant = GameState::GetInstance()->GetPartyMemberByIndex(index);
	if (combatant) {
		_ZN8Vector3iaSERKS_((int*)(base + 0x188 + index * 0xc), (int*)((char*)combatant + 0x44));
		*(int*)(base + 0x1b8 + index * 4) = *(int*)((char*)combatant + 0x54);
	}
}
