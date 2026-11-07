#include <globaldefs.h>

extern "C" int HasEnemyTrait_ov000_02156068(int battle, int combatantIndex, int kind, int traitType);

// USA: func_ov024_021d8c90
extern "C" ARM int func_ov024_021d8c90(int* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    int var0 = HasEnemyTrait_ov000_02156068(*arg0, (short)arg2, 1, 0);
    if (var0 == 0) return arg5;
    return (int)((float)arg5 * 1.5f);
}
