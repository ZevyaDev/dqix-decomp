#include <globaldefs.h>

struct BrightnessFade_ov031_0223c278 {
    unsigned char unknown_0_[4];
    short elapsedTime_4_;
    unsigned short duration_6_;
    unsigned char unknown_8_;
    unsigned char isActive_9_;
};

extern void* data_ov031_02290d34;
extern "C" void* AddTask_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_0223c2d0(void*, BrightnessFade_ov031_0223c278*);

// USA: StartBrightnessFadeDelay_ov031_0223c278
extern "C" ARM int StartBrightnessFadeDelay_ov031_0223c278(int duration) {
    BrightnessFade_ov031_0223c278* fade = (BrightnessFade_ov031_0223c278*)data_ov031_02290d34;
    if (fade->isActive_9_ != 0) return 0;
    void* task = AddTask_ov031_0223e218((void*)1, (void*)func_ov031_0223c2d0, fade, 0xc8);
    *(void**)fade = task;
    fade->elapsedTime_4_ = 0;
    fade->duration_6_ = (unsigned short)duration;
    fade->isActive_9_ = 1;
    return 1;
}
