#include <globaldefs.h>



#if defined(jpn)
enum { Enum_ov020_0218d800_1268 = 0x484 };
#else
enum { Enum_ov020_0218d800_1268 = 0x4f4 };
#endif

extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);
extern "C" int ReadBrightnessRegister_020c39c8(volatile unsigned short* reg);

struct Struct_ov020_0218d7ac {
    float unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov020_0218b710_2 {
    char unknown_0_[Enum_ov020_0218d800_1268];
    Struct_ov020_0218d7ac unknown_4f4_;
};

// USA: SetSceneSubBrightnessWithDurationMs_ov020_0218d800
extern "C" ARM void SetSceneSubBrightnessWithDurationMs_ov020_0218d800(struct Struct_ov020_0218b710_2* scene, int brightness, int durationMs) {
    if (durationMs == 0) {
        WriteBrightnessRegister_020c39a0((short*)0x400106c, brightness);
        scene->unknown_4f4_.unknown_0_ = (float)brightness;
        scene->unknown_4f4_.unknown_4_ = brightness;
        scene->unknown_4f4_.unknown_8_ = 0;
    } else {
        int currentBrightness = ReadBrightnessRegister_020c39c8((volatile unsigned short*)0x400106c);
        scene->unknown_4f4_.unknown_0_ = (float)currentBrightness;
        scene->unknown_4f4_.unknown_4_ = brightness;
        scene->unknown_4f4_.unknown_8_ = durationMs;
    }
}
