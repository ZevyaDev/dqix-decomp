#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* FindFieldMonsterById_ov017_021a278c(void* gameResources, int fieldMonsterId);
extern "C" void InitFieldMonster_02076a8c(void* monster);

// USA: DespawnFieldMonster_ov017_021a23b0
extern "C" ARM void DespawnFieldMonster_ov017_021a23b0(void* gameResources, int arg1) {
	GameState::GetInstance();
	GameObject* monster = FindFieldMonsterById_ov017_021a278c(gameResources, arg1);
	if (!monster) return;
	InitFieldMonster_02076a8c(monster);
	((Object3D*)((unsigned char*)monster))->MakeHidden();
}
