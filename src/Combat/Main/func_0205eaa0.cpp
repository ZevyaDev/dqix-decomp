#include <globaldefs.h>

#if defined(jpn)
#endif
extern "C" void func_0203ac40(void*, int, int, int);

struct SoundEffectManager_02108760 {
    char unknown_0_[0xb4];
    short loadedSoundSet_b4_;
};

// USA: PlaySoundEffect_0205eaa0
extern "C" ARM void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle) {
    func_0203ac40(manager, manager->loadedSoundSet_b4_, soundEffectIndex, handle);
}
