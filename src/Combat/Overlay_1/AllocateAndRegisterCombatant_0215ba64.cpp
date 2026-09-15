#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_ov017_021d60f4(void*);
extern int AbsPlus159IfNegative0215ad2c(int x);
extern SafeAllocator* data_ov001_021658b8[8];
extern "C" void _ZN8Object3D10InitializeEv(void* obj);
extern "C" void _ZN8Object3D14ShallowCloneToEPS_(void* node, void* buf);
void RegisterCombatantSlot(GameState* battleStruct, int id, GameObject* combatant);
struct Shorts5c_374e0;
extern "C" void _ZN8Object3D8SetScaleEiii(struct Shorts5c_374e0* obj, short a, short b, short c);
extern "C" void _ZN8Object3D21MaybeSetBCFGAnimationEii(void* self, int a, int b);

// USA: func_ov001_0215ba64
ARM int AllocateAndRegisterCombatant_0215ba64(char* self, int type) {
	GameState* bs = GameState::GetInstance();
	(int)BackgroundLoader::GetInstance();

	int id1 = AbsPlus159IfNegative0215ad2c(func_ov017_021d60f4(self));
	int id2 = AbsPlus159IfNegative0215ad2c(func_ov017_021d60f4(self + 0x8));

	int sel = 0;
	if (type >= 3) {
		sel = func_ov017_021d60f4(self + 0x10);
	}

	SafeAllocator* allocator = data_ov001_021658b8[sel];

	GameObject* combatant = bs->GetGameObjectByIndex(id1);
	if (combatant == NULL) return 0;

	void* newObj = allocator->Allocate(0xac);
	if (newObj == NULL) return 0;

	_ZN8Object3D10InitializeEv(newObj);
	_ZN8Object3D14ShallowCloneToEPS_(combatant, newObj);
	RegisterCombatantSlot(bs, id2, (GameObject*)newObj);
	_ZN8Object3D8SetScaleEiii((struct Shorts5c_374e0*)newObj, 0x10a, 0x10a, 0x10a);
	_ZN8Object3D21MaybeSetBCFGAnimationEii(newObj, 0, 0);
	return 1;
}
