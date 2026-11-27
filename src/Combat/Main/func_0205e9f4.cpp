#include <globaldefs.h>

extern "C" void SetSoundEffectVolume_0205e944(void*, int);

struct SoundEffectManager_02108760_2 {
    char unknown_0_[0xc8];
    int volume_c8_;
    unsigned char volumeLevel_cc_;
};

// USA: SetSoundEffectVolumeLevel_0205e9f4
extern "C" ARM void SetSoundEffectVolumeLevel_0205e9f4(struct SoundEffectManager_02108760_2* manager, int volumeLevel) {
    if (volumeLevel < 1) return;
    if (volumeLevel > 5) return;
    manager->volumeLevel_cc_ = (unsigned char)volumeLevel;
    SetSoundEffectVolume_0205e944(manager, manager->volume_c8_);
}
