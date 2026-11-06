#include <globaldefs.h>

extern "C" int CollectPartyCombatantIndices_ov000_0215e9fc(void* battle, short* indices, int maxCount, int filterFlags);
extern "C" int CollectEnemyCombatantIndices_ov000_0215eb1c(void* battle, short* indices, int maxCount, int filterFlags);

// USA: func_ov000_02153e40
extern "C" ARM int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3) {
    int var0 = 0;
    var0 = var0 + CollectPartyCombatantIndices_ov000_0215e9fc(arg0, arg1, arg2, arg3);
    return var0 + CollectEnemyCombatantIndices_ov000_0215eb1c(arg0, arg1 + var0, arg2 - var0, arg3);
}
