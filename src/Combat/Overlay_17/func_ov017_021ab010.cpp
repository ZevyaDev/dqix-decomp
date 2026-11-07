#include <globaldefs.h>

extern "C" void func_ov017_021aaf08(void* arg0);
extern "C" int func_0209c6bc(void* arg0);
extern "C" void func_0209c5e8(void* arg0);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);

extern int gMusicManager_02109bf4;

struct Struct_ov017_021ab010 {
    unsigned char unknown_0_[1];
    unsigned char unknown_1_;
};

// USA: func_ov017_021ab010
extern "C" ARM void func_ov017_021ab010(void* arg0, int arg1) {
    func_ov017_021aaf08(arg0);
    if (arg1) {
        if (!func_0209c6bc(&gMusicManager_02109bf4)) {
            func_0209c5e8(&gMusicManager_02109bf4);
            SetMusicVolume_0209c2e0(&gMusicManager_02109bf4, 0x7f, 0);
        }
    }
    ((Struct_ov017_021ab010*)arg0)->unknown_1_ = 1;
}
