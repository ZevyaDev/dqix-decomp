#include <globaldefs.h>

extern "C" unsigned char IsBrightnessFadeActive_ov031_0223c054(int);
extern "C" void StartBrightnessFade_ov031_0223c078(int, int, int, int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_0222f6f8(void);

// USA: func_ov031_0222f6ac
extern "C" ARM void func_ov031_0222f6ac(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(1) != 0) return;
	StartBrightnessFade_ov031_0223c078(3, 1, 1, 8);
	StartBrightnessFade_ov031_0223c078(3, 0, 0x1d, 8);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222f6f8);
}
