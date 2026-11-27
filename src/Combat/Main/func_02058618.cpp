#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: CountActiveEffectSlots_02058618
extern "C" ARM int CountActiveEffectSlots_02058618(void*) {
    GameState* gameState = GameState::GetInstance();
    int count = 0;
    int slot;
    for (slot = 0; slot < 0x10; slot++) {
        if (gameState->GetGameObjectByIndex(slot + 0xd0)) {
            count++;
        }
    }
    return count;
}
