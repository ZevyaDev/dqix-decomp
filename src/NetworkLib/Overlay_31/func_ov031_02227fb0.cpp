#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int useSubScreen);
extern "C" unsigned int func_ov031_02227558(void);
extern "C" void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02228024(void);
extern "C" void func_ov031_02232508(void);

// USA: func_ov031_02227fb0
extern "C" ARM void func_ov031_02227fb0(void) {
    if (IsBrightnessFadeActive_ov031_0223c054(1)) return;
    if (IsBrightnessFadeActive_ov031_0223c054(0)) return;
    unsigned int var0 = func_ov031_02227558();
    switch (var0) {
    case 0:
        SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 1);
        SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02228024);
        break;
    case 1:
        SetStepIndicatorAndButtonBarModes_ov031_022274d0(1, 1);
        SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02232508);
        break;
    }
}
