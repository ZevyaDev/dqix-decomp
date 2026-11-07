#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int CollectObjectIndicesBySelector_ov000_021820bc(void* battle, int action, int selector, int indices);

// USA: func_ov025_021e6f44
extern "C" ARM int func_ov025_021e6f44(void* arg0, int arg1, int arg2, void* arg3) {
    int var0[12];
    GameState* var1 = GameState::GetInstance();
    CollectObjectIndicesBySelector_ov000_021820bc(arg3, arg1, 0x17, (int)&var0[0]);
    int var2 = var0[0];
    GameObject* var3 = var1->GetGameObjectByIndex(var2);
    if (var3 == NULL) {
        return 1;
    }
    int var4 = (var2 >= 0 && var2 <= 3);
    if (var4) {
        if (var3->obj3D_.normalizedAnimationTime_ < 0xb33) {
            return 0;
        }
    } else if (!var3->obj3D_.HasAnimationStopped() && !var3->obj3D_.HasAnimationReachedEnd()) {
        return 0;
    }
    return 1;
}
