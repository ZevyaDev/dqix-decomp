#include <globaldefs.h>



#if defined(jpn)
enum { Enum_ov020_0218d7ac_1256 = 0x478 };
#else
enum { Enum_ov020_0218d7ac_1256 = 0x4e8 };
#endif

extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);
extern "C" int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg);

struct Struct_ov020_0218d7ac {
    float unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov020_0218b710 {
    char unknown_0_[Enum_ov020_0218d7ac_1256];
    Struct_ov020_0218d7ac unknown_4e8_;
};

// USA: SetSceneMainBrightnessWithDurationMs_ov020_0218d7ac
extern "C" ARM void SetSceneMainBrightnessWithDurationMs_ov020_0218d7ac(struct Struct_ov020_0218b710* scene, int brightness, int durationMs) {
    if (durationMs == 0) {
        WriteBrightnessRegister_020c39a0((short*)0x400006c, brightness);
        scene->unknown_4e8_.unknown_0_ = (float)brightness;
        scene->unknown_4e8_.unknown_4_ = brightness;
        scene->unknown_4e8_.unknown_8_ = 0;
    } else {
        int currentBrightness = ReadBrightnessRegister_020c39c8((volatile unsigned short*)0x400006c);
        scene->unknown_4e8_.unknown_0_ = (float)currentBrightness;
        scene->unknown_4e8_.unknown_4_ = brightness;
        scene->unknown_4e8_.unknown_8_ = durationMs;
    }
}
