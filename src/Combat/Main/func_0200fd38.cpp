#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0200fd38 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: SetGameObjectByIndex_0200fd38
extern "C" ARM void SetGameObjectByIndex_0200fd38(GameState* gameState, int index, GameObject* object) {
    gameState->objects_[index] = object;
    ((struct Struct_0200fd38*)object)->unknown_4_ = index;
}
