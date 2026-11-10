#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void SetGameMode_0200fb94(char* gameState, unsigned char mode);
extern "C" void SetTitleIdleTimeoutEnabled_02012028(void* gameState, unsigned char isEnabled);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216d6a0
extern "C" ARM int func_ov004_0216d6a0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    SetGameMode_0200fb94((char*)var0, 8);
    SetTitleIdleTimeoutEnabled_02012028(var0, 0);
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0x3e7);
    return 0;
}
