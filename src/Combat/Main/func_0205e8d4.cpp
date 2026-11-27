#include <globaldefs.h>

extern "C" void CloseSoundArchive_0203a950(void* manager);
struct SoundEffectManager_02000c9c_17;
extern "C" void InitSoundEffectManager_0205e88c(struct SoundEffectManager_02000c9c_17*);

// USA: CloseSoundEffectArchive_0205e8d4
extern "C" ARM void CloseSoundEffectArchive_0205e8d4(void* manager) {
    CloseSoundArchive_0203a950(manager);
    InitSoundEffectManager_0205e88c((struct SoundEffectManager_02000c9c_17*)manager);
}
