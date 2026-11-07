#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetGameObjectByIndex_0200ff94(GameState* gameState, int index);

// USA: func_02010890
extern "C" ARM void func_02010890(GameState* arg0, int* arg1, int* arg2) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        if (GetGameObjectByIndex_0200ff94(arg0, var1)) {
            arg1[var0] = var1;
            var0++;
        }
    }
    *arg2 = var0;
}
