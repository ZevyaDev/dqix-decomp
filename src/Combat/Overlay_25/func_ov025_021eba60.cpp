#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

extern "C" void* GetBattleScene_ov000_02160130(void);
extern "C" void* GetCurrentBattleAction_ov000_02160f20(void* battleScene);
extern "C" void* FindActionData_02079e2c(char* actionTables, int actionId);

// USA: func_ov025_021eba60
extern "C" ARM void func_ov025_021eba60(char* arg0) {
    void* var0 = GetCurrentBattleAction_ov000_02160f20(GetBattleScene_ov000_02160130());
    ActionTables_02108e10* var1 = GetActionTables_020797dc();
    short var2 = *(short*)var0;
    void* var3 = FindActionData_02079e2c((char*)var1, var2);
    if (var3 == 0) {
        return;
    }
    unsigned int var4 = *(unsigned int*)((char*)var3 + 0x14);
    var4 = var4 >> 0x1c;
    if (var4 == 2) {
        unsigned int var5 = *(unsigned int*)((char*)var3 + 8);
        var5 = var5 << 0x16;
        var5 = var5 >> 0x1e;
        if (var5 == 1) {
            unsigned int var6 = *(unsigned int*)(arg0 + 0x1c4);
            var6 |= 0x80;
            *(unsigned int*)(arg0 + 0x1c4) = var6;
        }
    }
}
