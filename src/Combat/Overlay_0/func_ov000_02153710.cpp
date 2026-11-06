#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);

// USA: func_ov000_02153710
extern "C" ARM int func_ov000_02153710(int arg0, int arg1) {
    int var0 = arg1 >= 0 && arg1 <= 3;
    if (!var0) return 0;
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), arg1);
    if (var1 == 0) return 0;
    return GetPartyMemberData_02053c6c((unsigned char*)var1);
}
