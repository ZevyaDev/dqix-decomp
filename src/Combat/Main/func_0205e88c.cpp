#include <globaldefs.h>

struct Struct_02108760_2;

extern "C" void func_0203a914(void* arg0);
extern "C" void SetSoundEffectVolumeLevel_0205e9f4(struct Struct_02108760_2* manager, int volumeLevel);
extern "C" void SetSoundEffectVolume_0205e944(void*, int);

struct SoundEffectManager_02000c9c_17 {
    char unknown_0_[0xb0];
    int unknown_b0_;
    short loadedSoundSet_b4_;
    char unknown_b6_[0xb8 - 0xb6];
    int baseSetHeapState_b8_;
    short unknown_bc_;
    char unknown_be_[0xc0 - 0xbe];
    int unknown_c0_;
    short extraSoundSet_c4_;
};

// USA: InitSoundEffectManager_0205e88c
extern "C" ARM void InitSoundEffectManager_0205e88c(struct SoundEffectManager_02000c9c_17* manager) {
    func_0203a914(manager);
    manager->unknown_b0_ = 0;
    manager->loadedSoundSet_b4_ = -1;
    manager->baseSetHeapState_b8_ = 0;
    manager->unknown_bc_ = -1;
    manager->unknown_c0_ = 0;
    manager->extraSoundSet_c4_ = -1;
    SetSoundEffectVolume_0205e944(manager, 0x7f);
    SetSoundEffectVolumeLevel_0205e9f4((struct Struct_02108760_2*)manager, 3);
}
