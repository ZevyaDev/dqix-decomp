#include <globaldefs.h>

extern "C" void func_0209e4bc(void* arg0, int arg1, int arg2);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void* GetQuestBattleScript_0209dccc();

// USA: func_0209ce34
extern "C" ARM int func_0209ce34(void* arg0) {
    void* var0 = GetQuestBattleScript_0209dccc();
    if (var0 == NULL) return 0;
    func_0209e4bc(var0, GetScriptValueAsInt_ov017_021d60f4(arg0), GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8));
    return 1;
}
