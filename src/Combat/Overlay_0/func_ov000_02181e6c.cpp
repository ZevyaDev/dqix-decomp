#include <globaldefs.h>

extern "C" int CollectActionCombatantIndex_ov000_021818e0(int mode, int index, void* record, int* indices);

// USA: func_ov000_02181e6c
extern "C" ARM int func_ov000_02181e6c(int arg0, void* arg1, int* arg2) {
    return CollectActionCombatantIndex_ov000_021818e0(0, 2, arg1, arg2);
}
