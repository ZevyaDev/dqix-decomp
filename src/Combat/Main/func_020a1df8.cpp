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
extern signed char data_020f1962[];

// USA: PushOverlay_020a1df8
extern "C" ARM void PushOverlay_020a1df8(int overlayEntry) {
    if (data_02109da4.overlayCount_0_ >= 8) HaltForever_020c9be0();
    if ((unsigned int)overlayEntry >= 7) return;
    LoadOverlay_020a1940(data_020f1962[overlayEntry]);
    data_02109da4.overlayEntries_a_[data_02109da4.overlayCount_0_] = overlayEntry;
    data_02109da4.overlayCount_0_++;
}
