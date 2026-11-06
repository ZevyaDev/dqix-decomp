#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState* gameState);

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, int number);

// USA: func_ov023_021eaa00
extern "C" ARM int func_ov023_021eaa00(void* arg0) {
    struct Struct_02053f7c* var0 = (struct Struct_02053f7c*)GetParty_02010828(GameState::GetInstance());
    int var1 = 0;
    var1 = var1 + func_02086aec(var0, 0x5619);
    var1 = var1 + func_02086aec(var0, 0x561d);
    var1 = var1 + func_02086aec(var0, 0x561e);
    var1 = var1 + func_02086aec(var0, 0x561f);
    var1 = var1 + func_02086aec(var0, 0x5620);
    var1 = var1 + func_02086aec(var0, 0x5621);
    var1 = var1 + func_02086aec(var0, 0x5622);
    var1 = var1 + func_02086aec(var0, 0x5623);
    var1 = var1 + func_02086aec(var0, 0x5624);
    var1 = var1 + func_02086aec(var0, 0x5625);
    SetScriptRefInt_ov017_021d6134(arg0, var1);
    return 1;
}
