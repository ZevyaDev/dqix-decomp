#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

// USA: func_ov000_021536f8
extern "C" ARM GameObject* func_ov000_021536f8(int arg0, int arg1) {
	return GetEnemyByIndex_0200fea4(GameState::GetInstance(), arg1);
}
