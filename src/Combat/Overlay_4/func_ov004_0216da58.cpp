#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" unsigned char GetGameMode_0200fb9c(char* gameState);
void SetBrightness(GameResources*, int, int);
struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);
extern int gMusicManager_02109bf4;
extern "C" int _s32_div_f(int a, int b);

// USA: func_ov004_0216da58
extern "C" ARM int func_ov004_0216da58() {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    int var2 = _s32_div_f(1000, 0x22);
    if (GetGameMode_0200fb9c((char*)var0) == 8) {
        SetBrightness(var1, 0x10, var2);
    } else {
        SetBrightness(var1, -16, var2);
    }
    if (GetGameMode_0200fb9c((char*)var0) != 2) {
        StopMusic_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0x10);
    }
    return 0;
}
