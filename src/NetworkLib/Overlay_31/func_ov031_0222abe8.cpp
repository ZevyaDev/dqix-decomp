#include <globaldefs.h>

extern "C" int GetButtonBarChoice_ov031_02222e0c(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" int func_ov031_0222ac0c(void);

// USA: func_ov031_0222abe8
extern "C" ARM void func_ov031_0222abe8(void) {
	if (GetButtonBarChoice_ov031_02222e0c() == -2) return;
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222ac0c);
}
