#include <globaldefs.h>

extern "C" unsigned char IsBrightnessFadeActive_ov031_0223c054(int useSubScreen);
extern "C" int func_ov031_02223568(void* arg0);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02231674(void);

// USA: func_ov031_02231648
extern "C" ARM void func_ov031_02231648(void) {
	if (IsBrightnessFadeActive_ov031_0223c054(0) != 0) return;
	func_ov031_02223568((void*)1);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02231674);
}
