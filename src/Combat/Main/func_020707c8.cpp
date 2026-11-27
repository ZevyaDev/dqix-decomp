#include <globaldefs.h>
#include "GameState/GameState.h"


extern "C" void func_0207051c(void* arg0, unsigned short arg1, int arg2);

struct Struct_020707c8 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
    float unknown_c_;
    int unknown_10_;
};

// USA: UpdateColorFade_020707c8
extern "C" ARM void UpdateColorFade_020707c8(struct Struct_020707c8* colorFade) {
    int var0 = GameState::GetInstance()->GetEffectiveDeltaTime();
    int var1 = colorFade->unknown_8_;
    if (var1 > 0) {
        colorFade->unknown_c_ += (float)var0 * (((float)colorFade->unknown_4_ - colorFade->unknown_c_) / (float)var1);
    }
    colorFade->unknown_8_ -= var0;
    if (colorFade->unknown_8_ <= 0) {
        colorFade->unknown_c_ = (float)colorFade->unknown_4_;
        colorFade->unknown_8_ = 0;
        if (colorFade->unknown_4_ == 1) colorFade->unknown_0_ = 0;
    }
    func_0207051c(colorFade, colorFade->unknown_2_, (int)colorFade->unknown_c_);
    if (colorFade->unknown_8_ > 0) return;
    if (colorFade->unknown_10_ <= 0) return;
    colorFade->unknown_8_ = (int)((float)colorFade->unknown_10_ * 16.66699981689453f);
    colorFade->unknown_4_ = 1;
    colorFade->unknown_10_ = 0;
}
