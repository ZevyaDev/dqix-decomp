#include <globaldefs.h>
#include "GameState/GameState.h"

int TestBitAt0x34(unsigned char* obj, unsigned int index);
extern "C" void func_02049d6c(GameObject* combatant);
void ClearSubstructFlag0x4(unsigned char* obj);

// USA: func_ov000_02167e6c
ARM void RunFlaglearAndSetMode02167e6c_02167e6c(unsigned char* obj) {
    GameState* battle = GameState::GetInstance();
    for (int i = 0; i < 4; i++) {
        if (TestBitAt0x34(*(unsigned char**)(obj + 0x2a0), (unsigned char)i)) {
            GameObject* c = battle->GetCombatantByIndex(i);
            if (c) {
                func_02049d6c(c);
                ClearSubstructFlag0x4((unsigned char*)c);
            }
        }
    }
    for (int i = 0xc0; i < 0xc8; i++) {
        GameObject* c = battle->GetCombatantByIndex(i);
        if (c) {
            func_02049d6c(c);
            ClearSubstructFlag0x4((unsigned char*)c);
        }
    }
    unsigned char b = *(unsigned char*)(obj + 0x5000 + 0x951);
    b = (b & ~3) | 1;
    *(unsigned char*)(obj + 0x5000 + 0x951) = b;
}
