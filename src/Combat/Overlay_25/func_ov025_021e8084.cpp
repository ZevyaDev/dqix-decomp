#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int SetCombatantAppearanceFlags_ov017_02191aac(int gameResources, int isSet, int combatantIndex, int flags);

extern "C" int CollectObjectIndicesBySelector_ov000_021820bc(void* battle, int action, int selector, int indices);

// USA: func_ov025_021e8084
extern "C" ARM int func_ov025_021e8084(int arg0, int arg1, int arg2, int arg3) {
    int var0[4];
    int var1 = (int)GetGameResources();
    if (CollectObjectIndicesBySelector_ov000_021820bc((void*)arg3, arg1, 7, (int)&var0[0])) {
        SetCombatantAppearanceFlags_ov017_02191aac(var1, 1, var0[0], 4);
    }
    return 1;
}
