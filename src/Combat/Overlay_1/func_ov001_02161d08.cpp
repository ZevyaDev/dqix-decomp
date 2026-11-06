#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);

// USA: func_ov001_02161d08
extern "C" ARM int func_ov001_02161d08(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = GetOwnPartyLeaderObjectIndex_020100b0(var0);
    SetScriptRefInt_ov017_021d6134(arg0, var1);
    return 1;
}
