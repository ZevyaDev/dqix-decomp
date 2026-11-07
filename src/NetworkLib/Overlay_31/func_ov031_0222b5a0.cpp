#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int);
extern "C" ARM void* CloseScreenTextLayer_ov031_0223c7c4(int isSubScreen);
extern "C" ARM int CloseSubScreenMessage_ov031_02223440(void);
extern "C" int HideScreenLayers_ov031_0223cbbc(int, int);
extern "C" ARM void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode);
extern "C" ARM void func_ov031_0222750c(int arg0, int arg1);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" ARM void func_ov031_022340c0(void);

// USA: func_ov031_0222b5a0
extern "C" ARM void func_ov031_0222b5a0(void) {
    if (IsBrightnessFadeActive_ov031_0223c054(1) != 0) return;
    if (IsBrightnessFadeActive_ov031_0223c054(0) != 0) return;
    CloseScreenTextLayer_ov031_0223c7c4(0);
    CloseSubScreenMessage_ov031_02223440();
    HideScreenLayers_ov031_0223cbbc(1, 1);
    HideScreenLayers_ov031_0223cbbc(0, 0x15);
    SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 0);
    func_ov031_0222750c(0, 1);
    SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_022340c0);
}
