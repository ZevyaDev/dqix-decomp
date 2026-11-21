#include <globaldefs.h>

struct SoundEffectManager_0205e8ec;
extern "C" void ResetSoundEffects_0205e8ec(struct SoundEffectManager_0205e8ec*);
extern "C" void CloseSoundArchive_0203a950(void*);

// USA: func_0205e92c
extern "C" ARM void func_0205e92c(void* arg0) {
    ResetSoundEffects_0205e8ec((struct SoundEffectManager_0205e8ec*)arg0);
    CloseSoundArchive_0203a950(arg0);
}
