#include <globaldefs.h>

extern "C" void* GetQuestBattleScript_0209dccc();
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void func_0209eaec(void*, int, int);

// USA: func_0209cfcc
extern "C" ARM int func_0209cfcc(void* arg0) {
    void* var0 = GetQuestBattleScript_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    int var2 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
    func_0209eaec(var0, var1, var2);
    return 1;
}
