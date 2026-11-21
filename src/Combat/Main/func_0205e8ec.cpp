#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" void SetSoundEffectVolume_0205e944(void*, int);
extern "C" void UpdateSound_020bbd9c(void);

struct SoundEffectManager_0205e8ec {
    char unknown_0_[0xb8];
    int baseSetHeapState_b8_;
    short unknown_bc_;
    char unknown_be_[0xc0 - 0xbe];
    int unknown_c0_;
    short extraSoundSet_c4_;
};

// USA: ResetSoundEffects_0205e8ec
extern "C" ARM void ResetSoundEffects_0205e8ec(struct SoundEffectManager_0205e8ec* manager) {
    if (manager->baseSetHeapState_b8_ != 0) {
        func_0203aa80(manager, manager->baseSetHeapState_b8_);
        manager->unknown_c0_ = manager->baseSetHeapState_b8_;
        manager->unknown_bc_ = -1;
        manager->extraSoundSet_c4_ = -1;
    }
    SetSoundEffectVolume_0205e944(manager, 0x7f);
    UpdateSound_020bbd9c();
}
