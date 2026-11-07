#include <globaldefs.h>

struct Struct_0209c2e0_2;
extern "C" void func_020bc180(Struct_0209c2e0_2*, int, int);
extern "C" void func_020bbf34(int, int);

extern float data_020e8ec4[];

struct Struct_0209c2e0 {
    char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char isVolumeHalved_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 6;
    char unknown_c9_[3];
    unsigned char volumeLevel_cc_;
    unsigned char volume_cd_;
};

// USA: SetMusicVolume_0209c2e0
extern "C" ARM void SetMusicVolume_0209c2e0(Struct_0209c2e0* manager, int volume, int fadeDuration) {
    manager->volume_cd_ = (unsigned char)volume;
    int volumeLevel = manager->volumeLevel_cc_;
    float levelScale = ((float)volumeLevel - 1.0f) / 4.0f;
    int trackVolume = (int)((float)manager->volume_cd_ * levelScale);
    if (manager->isVolumeHalved_c8_1_) {
        trackVolume = trackVolume / 2;
    }
    func_020bc180((Struct_0209c2e0_2*)((char*)manager + 0xbc), trackVolume, fadeDuration);
    func_020bc180((Struct_0209c2e0_2*)((char*)manager + 0xc0), trackVolume, fadeDuration);
    int groupVolume = (int)((float)manager->volume_cd_ * data_020e8ec4[manager->volumeLevel_cc_ - 1]);
    func_020bbf34(5, groupVolume);
    func_020bbf34(7, groupVolume);
    func_020bbf34(6, groupVolume);
}
