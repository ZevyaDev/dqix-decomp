#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

// USA: GetEnemyByID_ov000_021536f8
extern "C" ARM GameObject* GetEnemyByID_ov000_021536f8(int battle, int index) {
	return GetEnemyByIndex_0200fea4(GameState::GetInstance(), index);
}
