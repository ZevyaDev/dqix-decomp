#include <globaldefs.h>

struct FlagManager_0205faf4_3;
extern "C" int GetQuestState_0206e120(struct FlagManager_0205faf4_3* flagManager, int questId);

// USA: func_02095ae0
extern "C" ARM int func_02095ae0(struct FlagManager_0205faf4_3* arg0, int arg1) {
    int var0 = 1;
    int var1 = (GetQuestState_0206e120(arg0, arg1) == 0);
    if (!var1) {
        var1 = (GetQuestState_0206e120(arg0, arg1) == 1);
        if (!var1) {
            var0 = 0;
        }
    }
    return var0;
}
