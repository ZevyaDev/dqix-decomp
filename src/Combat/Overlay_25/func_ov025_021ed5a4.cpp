#include <globaldefs.h>

#if defined(jpn)

#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" GameObject* func_0200ff94(GameState* arg0, int arg1);
extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);

// JPN: func_ov025_021ed5a4
extern "C" ARM int func_ov025_021ed5a4(int arg0, char* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff94(var0, arg0);
    if (var1 != NULL) {
        int var3 = arg0 >= 0 && arg0 <= 3;
        if (var3) {
            strcpy(arg1, *(char**)((char*)var1 + 0x134));
            return 1;
        }
        GameObject* var2 = GetEnemyByIndex_0200fea4(var0, arg0);
        if (var2 != NULL) {
            strcpy(arg1, (char*)var2 + 0x14c);
            return 1;
        }
    }
    return 0;
}

#endif
