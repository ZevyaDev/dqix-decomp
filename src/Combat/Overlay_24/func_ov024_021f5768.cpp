#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetEnemyByID_ov000_021536f8(int battle, int index);
extern "C" int func_ov024_021edbd8(GameObject* arg0);

// USA: func_ov024_021f5768
extern "C" ARM int func_ov024_021f5768(int* arg0, short arg1, int arg2, int* arg3, short* arg4) {
    GameObject* var0 = GetEnemyByID_ov000_021536f8(*arg0, arg1);
    if (var0 == NULL) return 0;
    if (func_ov024_021edbd8(var0)) {
        return 0;
    }
    *arg3 = 1;
    *arg4 = arg1;
    return 1;
}
