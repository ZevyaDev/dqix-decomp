#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
struct Struct_02000c9c_13;
extern "C" void SetRequestedMovie_020115b4(struct Struct_02000c9c_13* gameState, unsigned char movie);

// USA: func_ov001_021618d0
extern "C" ARM int func_ov001_021618d0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    SetRequestedMovie_020115b4((struct Struct_02000c9c_13*)var0, (unsigned char)var1);
    return 1;
}
