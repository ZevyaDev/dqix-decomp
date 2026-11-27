#include <globaldefs.h>

extern "C" void func_0203acc8(void* arg0, void* arg1, int arg2);

// USA: StopSoundEffect_0205eabc
extern "C" ARM void StopSoundEffect_0205eabc(void* manager, void* handle, int fadeDuration) {
    func_0203acc8(manager, handle, fadeDuration);
}
