#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int useSubScreen);
extern "C" void HideScreenLayers_ov031_0223cbbc(int isSubScreen, int layerMask);
extern "C" void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02233a00(void);

// USA: func_ov031_022342d8
extern "C" ARM void func_ov031_022342d8(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(0) != 0) {
		return;
	}
	HideScreenLayers_ov031_0223cbbc(0, 0x14);
	SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 1);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02233a00);
}
