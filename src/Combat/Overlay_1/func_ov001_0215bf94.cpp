#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void* GetEventActorState_ov001_0215ab20(int actorIndex);
extern "C" void func_ov001_02159ea8(void* arg0, int arg1);

// USA: func_ov001_0215bf94
extern "C" ARM int func_ov001_0215bf94(void* arg0) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    int var1 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 0x8);
    void* var2 = GetEventActorState_ov001_0215ab20(var0);
    if (var2 == NULL) return 0;
    func_ov001_02159ea8(var2, var1);
    return 1;
}
