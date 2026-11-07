#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int useSubScreen);
extern "C" int func_ov031_02222e54(void);
extern "C" void func_ov031_02222bdc(void);
extern "C" void* func_ov031_0223c7c4(int arg0);
extern "C" int func_ov031_02223440(void);
extern "C" void HideScreenLayers_ov031_0223cbbc(int isSubScreen, int layerMask);
extern "C" int func_ov031_02227ba4(void);
extern "C" void SetStepIndicatorAndButtonBarModes_ov031_022274d0(int stepIndicatorMode, int buttonBarMode);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02233248(void);
extern "C" void func_ov031_02231140(void);

extern unsigned char data_ov031_02290cb8;

// USA: func_ov031_02231e8c
extern "C" ARM void func_ov031_02231e8c(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(0) != 0) return;
	if (data_ov031_02290cb8 == 0) {
		if (IsBrightnessFadeActive_ov031_0223c054(1) != 0) return;
	}
	if (func_ov031_02222e54() == 0) return;

	func_ov031_02222bdc();
	func_ov031_0223c7c4(0);
	if (data_ov031_02290cb8 == 0) {
		func_ov031_02223440();
		HideScreenLayers_ov031_0223cbbc(1, 1);
	}
	HideScreenLayers_ov031_0223cbbc(0, 0x15);

	if (data_ov031_02290cb8 == 0) {
		func_ov031_02227ba4();
		SetStepIndicatorAndButtonBarModes_ov031_022274d0(2, 1);
		SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02233248);
		return;
	}
	SetStepIndicatorAndButtonBarModes_ov031_022274d0(0, 0);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02231140);
}
