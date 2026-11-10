#include <globaldefs.h>

extern "C" int GetButtonBarChoice_ov031_02222e0c(void);
extern "C" void EnableButtonBarInput_ov031_02222e80(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02229afc(void);

// USA: func_ov031_02229ad4
extern "C" ARM void func_ov031_02229ad4(void) {
	if (GetButtonBarChoice_ov031_02222e0c() == -2) return;
	EnableButtonBarInput_ov031_02222e80();
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02229afc);
}
