#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02057930;
extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);
extern "C" void ResetEffectManager_02057930(Struct_02057930* effectManager);

// USA: ClearEffectManager_02057978
extern "C" ARM void ClearEffectManager_02057978(Struct_02057930* effectManager) {
    GameState* gameState = GameState::GetInstance();
    int slot;
    for (slot = 0; slot < 16; slot++) {
        ClearGameObjectByIndex_0200fd48(gameState, slot + 0xd0);
    }
    ResetEffectManager_02057930(effectManager);
}
