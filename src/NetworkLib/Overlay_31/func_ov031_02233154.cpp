#include <globaldefs.h>

extern "C" int func_ov031_02237eb0(void);
extern "C" void EnableButtonBarInput_ov031_02222e80(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02232844(void);

// USA: func_ov031_02233154
extern "C" ARM void func_ov031_02233154(void) {
	if (func_ov031_02237eb0() != 0) return;
	EnableButtonBarInput_ov031_02222e80();
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02232844);
}
