#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState* gameState);

struct Struct_020a0b8c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c* arg0);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
struct PartyMemberData_0207d300;
extern "C" int CountHeldItems_02083960(struct PartyMemberData_0207d300* memberData);

// USA: func_ov002_02157108
extern "C" ARM int func_ov002_02157108(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    if (arg1 == 5) {
        void* var2 = (char*)GetParty_02010828(var0) + 0xe04;
        var1 = func_020a0b8c((struct Struct_020a0b8c*)var2);
    } else if (arg1 == 4) {
        void* var3 = GetParty_02010828(var0);
        var1 = func_020a0b8c((struct Struct_020a0b8c*)var3);
    } else {
        GameObject* var4 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg1);
        if (var4 != NULL) {
            int var5 = GetPartyMemberData_02053c6c((unsigned char*)var4);
            var1 = CountHeldItems_02083960((struct PartyMemberData_0207d300*)var5);
        }
    }
    return var1;
}
