#include <globaldefs.h>

extern "C" void CloseSoundArchive_0203a950(void* manager);
struct SoundEffectManager_02000c9c_17;
extern "C" void InitSoundEffectManager_0205e88c(struct SoundEffectManager_02000c9c_17*);

// USA: func_0205e8d4
extern "C" ARM void func_0205e8d4(void* arg0) {
    CloseSoundArchive_0203a950(arg0);
    InitSoundEffectManager_0205e88c((struct SoundEffectManager_02000c9c_17*)arg0);
}
