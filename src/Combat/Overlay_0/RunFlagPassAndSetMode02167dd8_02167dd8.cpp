#include <globaldefs.h>
#include "GameState/GameState.h"

int TestBitAt0x34(unsigned char* obj, unsigned int index);
extern "C" void func_02049e00(void);

// USA: func_ov000_02167dd8
ARM void RunFlagPassAndSetMode02167dd8_02167dd8(unsigned char* obj) {
    GameState* battle = GameState::GetInstance();
    for (int i = 0; i < 4; i++) {
        if (TestBitAt0x34(*(unsigned char**)(obj + 0x2a0), (unsigned char)i)) {
            if (battle->GetCombatantByIndex(i)) func_02049e00();
        }
    }
    for (int i = 0xc0; i < 0xc8; i++) {
        if (battle->GetCombatantByIndex(i)) func_02049e00();
    }
    unsigned char b = *(unsigned char*)(obj + 0x5000 + 0x951);
    b = (b & ~3) | 2;
    *(unsigned char*)(obj + 0x5000 + 0x951) = b;
}
