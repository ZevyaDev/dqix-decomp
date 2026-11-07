#include <globaldefs.h>

extern "C" void StartBrightnessFade_ov031_0223c078(int, int, int, int);
extern "C" void ShowScreenLayers_ov031_0223cb68(int, int);
extern unsigned char data_ov031_02290c74[];
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_0222a480(void);

// USA: func_ov031_0222a418
extern "C" ARM void func_ov031_0222a418(void) {
	StartBrightnessFade_ov031_0223c078(2, 0, 0x15, 8);
	ShowScreenLayers_ov031_0223cb68(0, 0x15);
	if (data_ov031_02290c74[0] != 0) {
		StartBrightnessFade_ov031_0223c078(2, 1, 1, 8);
		ShowScreenLayers_ov031_0223cb68(1, 1);
	}
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222a480);
}
