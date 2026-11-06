#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: GetCompanionByIndex_0200ff58
extern "C" ARM GameObject* GetCompanionByIndex_0200ff58(GameState* gameState, int index) {
    GameObject* object;
    if (index < 0) {
        return 0;
    }
    if (index >= 0xE9) {
        return 0;
    }
    object = gameState->objects_[index];
    if (object == 0) {
        return 0;
    }
    if ((object->obj3D_.classFlags_0_ & 0x1000) == 0) {
        object = 0;
    }
    return object;
}
