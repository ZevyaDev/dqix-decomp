#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: FindMonsterModelTemplate_ov017_021a2738
extern "C" ARM GameObject* FindMonsterModelTemplate_ov017_021a2738(void* gameResources, int monsterId) {
    if (monsterId < 0) return NULL;
    GameState* gameState = GameState::GetInstance();
    int i;
    for (i = 0; i < 0xc; i++) {
        GameObject* object = gameState->GetGameObjectByIndex(i + 7);
        if (object) {
            if (monsterId == object->obj3D_.unknown_2_) return object;
        }
    }
    return NULL;
}
