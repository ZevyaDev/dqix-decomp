#include <globaldefs.h>

extern "C" void func_ov031_02227520(int*, int*);
extern "C" void func_ov031_02236e60(void);
extern "C" void StartBrightnessFade_ov031_0223c078(int, int, int, int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_02233fac(void);

// USA: func_ov031_02233f54
extern "C" ARM void func_ov031_02233f54(void) {
	int var0;
	func_ov031_02227520(NULL, &var0);
	if (var0 != 0) {
		func_ov031_02236e60();
	}
	StartBrightnessFade_ov031_0223c078(3, 1, 1, 8);
	StartBrightnessFade_ov031_0223c078(3, 0, 0x15, 8);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02233fac);
}
