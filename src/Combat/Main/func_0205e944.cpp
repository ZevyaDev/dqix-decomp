#include <globaldefs.h>

extern "C" void func_020bbf34(int arg0, int arg1);
extern float data_020e7dd4[];

struct SoundEffectManager_0205e944 {
    unsigned char unknown_0_[0xc8];
    int volume_c8_;
    unsigned char volumeLevel_cc_;
};

// USA: func_0205e944
extern "C" ARM void func_0205e944(SoundEffectManager_0205e944* arg0, int arg1) {
    float var0;
    int var1;
    arg0->volume_c8_ = arg1;
    var0 = (float)arg1;
    var0 = var0 * data_020e7dd4[arg0->volumeLevel_cc_ - 1];
    var1 = (int)var0;
    func_020bbf34(0xa, var1);
    func_020bbf34(0xb, var1);
    func_020bbf34(0xc, var1);
    func_020bbf34(0xd, var1);
    func_020bbf34(0xe, var1);
    func_020bbf34(0xf, var1);
    func_020bbf34(0xa, var1);
    func_020bbf34(0xc, var1);
    func_020bbf34(0xd, var1);
    func_020bbf34(0x10, var1);
}
