#include <globaldefs.h>

extern "C" double ComputeSine_02009424(double angle);

struct QuestDisplay_0208bb78 {
    char unknown_0_[0xc8];
    float unknown_c8_;
    char unknown_cc_[0xd7 - 0xcc];
    unsigned char unknown_d7_;
    char unknown_d8_[0xda - 0xd8];
    unsigned short displayFlags_da_;
};

// USA: UpdateQuestDisplayShake_0208ca00
extern "C" ARM int UpdateQuestDisplayShake_0208ca00(struct QuestDisplay_0208bb78* display, int ticks) {
    unsigned short var0 = display->displayFlags_da_;
    if (!(var0 & 0x80)) goto ret_zero;
    if (display->unknown_d7_ > 10) {
        display->displayFlags_da_ = var0 & ~0x80;
        *(volatile int*)0x4001010 = 0;
        display->unknown_d7_ = 0;
        goto ret_zero;
    }
    {
        float var1 = 5.0f - 0.3f * (float)(unsigned int)display->unknown_d7_;
        display->unknown_c8_ = display->unknown_c8_ + 1.8f * (float)ticks;
        display->unknown_d7_ = display->unknown_d7_ + ticks;
        if (3.14f < display->unknown_c8_) {
            display->unknown_c8_ = display->unknown_c8_ - 6.28f;
        }
        int var2 = (int)(var1 * (float)ComputeSine_02009424((double)(display->unknown_c8_)));
        *(volatile int*)0x4001010 = var2 & 0x1ff;
        return var2;
    }
ret_zero:
    return 0;
}
