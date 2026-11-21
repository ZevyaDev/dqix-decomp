#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: FindFieldMonsterById_ov017_021a278c
extern "C" ARM GameObject* FindFieldMonsterById_ov017_021a278c(void* gameResources, int fieldMonsterId) {
	if (fieldMonsterId <= 0) return NULL;
	GameState* gameState = GameState::GetInstance();
	for (int i = 0; i < 0x30; i++) {
		GameObject* monster = gameState->GetMaybeFieldMonsterByIndex(i + 0x70);
		if (monster) {
			unsigned short candidateId = *(unsigned short*)((char*)monster + 0x100 + 0x6a);
			if (fieldMonsterId == candidateId) return monster;
		}
	}
	return NULL;
}
