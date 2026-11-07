#include <globaldefs.h>

#include "GameState/GameState.h"

struct LocalWireless_0202b2f0;

extern "C" void* GetLocalWireless_0202ae18(void);

extern "C" int IsLocalWirelessPlayerJoined_0202c1c0(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" GameObject* GetCompanionByIndex_0200ff58(GameState* gameState, int index);
extern "C" void func_02079710(unsigned char* arg0, int arg1, int arg2);

// USA: func_0207973c
extern "C" ARM int func_0207973c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct LocalWireless_0202b2f0* var1 = (struct LocalWireless_0202b2f0*)GetLocalWireless_0202ae18();
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        if (!IsLocalWirelessPlayerJoined_0202c1c0(var1, var2) || GetCompanionByIndex_0200ff58(var0, var2) != 0) {
            func_02079710(arg0, var2, 1);
        }
    }
    return (arg0[0x17e] & 0xf) == 0xf ? 1 : 0;
}
