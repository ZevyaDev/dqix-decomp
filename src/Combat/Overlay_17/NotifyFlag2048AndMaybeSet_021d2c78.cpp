#include <globaldefs.h>
#include "GameState/GameState.h"

struct S02037418;
extern "C" void _ZN8Object3D17SetInheritedAlphaEi(struct S02037418* obj, int val);
void SetFlag0x1ceBit0x4(unsigned char* obj);

struct Src021d2c78 {
	unsigned char pad0[4];
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
};

// USA: func_ov017_021d2c78
ARM void NotifyFlag2048AndMaybeSet_021d2c78(void* unused, Src021d2c78* src) {
	GameState* bs = GameState::GetInstance();
	GameObject* c = bs->GetPartyMemberByIndex(src->field4);
	if (c == NULL) return;

	_ZN8Object3D17SetInheritedAlphaEi((struct S02037418*)c, src->field5);
	if (src->field5 != 0) return;
	if (src->field6 == 0) return;

	SetFlag0x1ceBit0x4((unsigned char*)c);
}
