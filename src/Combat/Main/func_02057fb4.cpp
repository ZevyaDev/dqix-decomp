#include <globaldefs.h>

extern "C" void* FindEffectResource_02057f8c(void* effectManager, int effectId);
extern "C" void func_02057fd8(void* arg0, void* arg1, void* arg2);

// USA: PlayEffect_02057fb4
extern "C" ARM void PlayEffect_02057fb4(void* effectManager, int effectId, void* params) {
    void* effect = FindEffectResource_02057f8c(effectManager, effectId);
    func_02057fd8(effectManager, effect, params);
}
