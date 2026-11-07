#include <globaldefs.h>


extern "C" void HaltForever_020c9be0(void);
extern "C" void LoadOverlay_020a1940(int);
struct OverlayStacks_02109da4 {
    unsigned char overlayCount_0_;
    unsigned char subOverlayCount_1_;
    signed char subOverlayEntries_2_[8];
    signed char overlayEntries_a_[8];
};
extern OverlayStacks_02109da4 data_02109da4;
extern signed char data_020f1977[];

// USA: PushSubOverlay_020a1ef0
extern "C" ARM void PushSubOverlay_020a1ef0(int subOverlayEntry) {
    if (data_02109da4.subOverlayCount_1_ >= 8) HaltForever_020c9be0();
    if ((unsigned int)subOverlayEntry >= 7) return;
    LoadOverlay_020a1940(data_020f1977[subOverlayEntry]);
    data_02109da4.subOverlayEntries_2_[data_02109da4.subOverlayCount_1_] = subOverlayEntry;
    data_02109da4.subOverlayCount_1_++;
}
