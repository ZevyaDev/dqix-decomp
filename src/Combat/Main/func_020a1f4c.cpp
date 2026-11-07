#include <globaldefs.h>

extern "C" void LoadOverlay_020a1940(int);
struct OverlayStacks_02109da4 {
    unsigned char overlayCount_0_;
    unsigned char subOverlayCount_1_;
    signed char subOverlayEntries_2_[8];
    signed char overlayEntries_a_[8];
};
extern OverlayStacks_02109da4 data_02109da4;
extern signed char data_020f1977[];

static inline int inline_020a1f4c(const OverlayStacks_02109da4* arg0) { return arg0->subOverlayCount_1_; }

// USA: PopSubOverlay_020a1f4c
extern "C" ARM void PopSubOverlay_020a1f4c(int isPreviousReloaded) {
    if (inline_020a1f4c(&data_02109da4) == 0) return;
    data_02109da4.subOverlayCount_1_--;
    if (isPreviousReloaded == 0 || inline_020a1f4c(&data_02109da4) == 0) return;
    signed char subOverlayEntry = data_02109da4.subOverlayEntries_2_[data_02109da4.subOverlayCount_1_ - 1];
    LoadOverlay_020a1940(data_020f1977[subOverlayEntry]);
}
