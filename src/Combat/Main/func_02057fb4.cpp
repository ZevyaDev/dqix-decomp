#include <globaldefs.h>

extern "C" void* func_02057f8c(void* arg0, int arg1);
extern "C" void func_02057fd8(void* arg0, void* arg1, void* arg2);

// USA: PlayEffect_02057fb4
extern "C" ARM void PlayEffect_02057fb4(void* effectManager, int effectId, void* params) {
    void* var0 = func_02057f8c(effectManager, effectId);
    func_02057fd8(effectManager, var0, params);
}
