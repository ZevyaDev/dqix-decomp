#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);

struct PartyMemberData_0207d300;
extern "C" int CountHeldItems_02083960(struct PartyMemberData_0207d300* memberData);

// USA: func_02086d20
extern "C" ARM int func_02086d20(unsigned char* arg0) {
    short var0 = 0;
    GameState* var1 = GameState::GetInstance();
    int var2 = 0;
    while (var2 < arg0[0xf7c]) {
        unsigned char* var3 = arg0 + var2;
        GameObject* var4 = GetPartyMemberBaseByIndex_0200ff1c(var1, var3[0xf78]);
        if (var4 != 0) {
            int var5 = func_02053c6c((unsigned char*)var4);
            if (var5 != 0) {
                var0 = var0 + CountHeldItems_02083960((struct PartyMemberData_0207d300*)var5);
            }
        }
        var2++;
    }
    return var0;
}
