#include <globaldefs.h>

extern "C" int HasEnemyTrait_ov000_02156068(void *battle, int combatantIndex, int kind, int traitType);

// USA: func_ov024_021d91c0
extern "C" ARM int func_ov024_021d91c0(void **arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	if (HasEnemyTrait_ov000_02156068(*arg0, (short)arg2, 10, 0) == 0)
		return arg5;
	return (int)((float)arg5 * 1.5f);
}
