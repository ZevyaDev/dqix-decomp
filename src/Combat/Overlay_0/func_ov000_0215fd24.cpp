#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int GetLeaderObjectIndex_020546a8(void* companion);
extern "C" GameObject* GetCompanionByIndex_0200ff58(GameState* gameState, int index);

// USA: func_ov000_0215fd24
extern "C" ARM int func_ov000_0215fd24(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    if (arg1 == GetProtagonistObjectIndex_020100a8(var0)) return 1;
    GameObject* var1 = GetCompanionByIndex_0200ff58(var0, arg1);
    if (var1 != NULL) {
        int var2 = GetLeaderObjectIndex_020546a8(var1);
        if (var2 == GetProtagonistObjectIndex_020100a8(var0)) return 1;
    }
    return 0;
}
