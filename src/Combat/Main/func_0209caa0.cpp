#include <globaldefs.h>

struct Struct_0209caa0 {
    unsigned char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 6;
    unsigned char unknown_c9_[4];
    unsigned char unknown_cd_;
};

extern "C" void SetMusicVolume_0209c2e0(struct Struct_0209caa0* manager, int volume, int fadeDuration);

// USA: SetMusicVolumeHalved_0209caa0
extern "C" ARM void SetMusicVolumeHalved_0209caa0(struct Struct_0209caa0* manager, int isHalved) {
    if (manager->unknown_c8_1_ == isHalved) {
        return;
    }
    manager->unknown_c8_1_ = (isHalved != 0);
    SetMusicVolume_0209c2e0(manager, manager->unknown_cd_, 0x1e);
}
