#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02057930;
extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);
extern "C" void func_02057930(Struct_02057930* arg0);

// USA: func_02057978
extern "C" ARM void func_02057978(Struct_02057930* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    for (var1 = 0; var1 < 16; var1++) {
        ClearGameObjectByIndex_0200fd48(var0, var1 + 0xd0);
    }
    func_02057930(arg0);
}
