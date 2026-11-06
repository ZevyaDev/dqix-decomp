#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int);
extern "C" void StartBrightnessFade_ov031_0223c078(int, int, int, int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02228b78(void);

// USA: func_ov031_02228b2c
extern "C" ARM void func_ov031_02228b2c(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(1) != 0) return;
	StartBrightnessFade_ov031_0223c078(3, 1, 0x3f, 0x40);
	StartBrightnessFade_ov031_0223c078(3, 0, 0x3f, 0x40);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02228b78);
}
