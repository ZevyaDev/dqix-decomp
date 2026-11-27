#include <globaldefs.h>

struct Struct_0205d67c {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};

// USA: GetOpenTextWindowCount_0205d67c
extern "C" ARM int GetOpenTextWindowCount_0205d67c(struct Struct_0205d67c* windowManager) {
    if (windowManager->unknown_98_ == 0) return 0;
    return windowManager->unknown_9c_ != 0 ? windowManager->unknown_b4_ : 0;
}
