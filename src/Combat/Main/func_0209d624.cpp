#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void func_0209f774(void*, int);
extern "C" void* GetQuestBattleScript_0209dccc();

// USA: func_0209d624
extern "C" ARM int func_0209d624(void* arg0) {
    void* var0 = GetQuestBattleScript_0209dccc();
    if (var0 == NULL) return 0;
    func_0209f774(var0, GetScriptValueAsInt_ov017_021d60f4(arg0));
    return 1;
}
