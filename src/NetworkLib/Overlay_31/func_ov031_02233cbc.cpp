#include <globaldefs.h>

extern "C" int IsBrightnessFadeActive_ov031_0223c054(int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02233ce0(void);

// USA: func_ov031_02233cbc
extern "C" ARM void func_ov031_02233cbc(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(0) != 0) return;
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02233ce0);
}
