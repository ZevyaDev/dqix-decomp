#include <globaldefs.h>

extern "C" void func_020bbf34(int arg0, int arg1);
extern float data_020e7dd4[];

struct SoundEffectManager_0205e944 {
    unsigned char unknown_0_[0xc8];
    int volume_c8_;
    unsigned char volumeLevel_cc_;
};

// USA: SetSoundEffectVolume_0205e944
extern "C" ARM void SetSoundEffectVolume_0205e944(SoundEffectManager_0205e944* manager, int volume) {
    float scaledVolume;
    int groupVolume;
    manager->volume_c8_ = volume;
    scaledVolume = (float)volume;
    scaledVolume = scaledVolume * data_020e7dd4[manager->volumeLevel_cc_ - 1];
    groupVolume = (int)scaledVolume;
    func_020bbf34(0xa, groupVolume);
    func_020bbf34(0xb, groupVolume);
    func_020bbf34(0xc, groupVolume);
    func_020bbf34(0xd, groupVolume);
    func_020bbf34(0xe, groupVolume);
    func_020bbf34(0xf, groupVolume);
    func_020bbf34(0xa, groupVolume);
    func_020bbf34(0xc, groupVolume);
    func_020bbf34(0xd, groupVolume);
    func_020bbf34(0x10, groupVolume);
}
