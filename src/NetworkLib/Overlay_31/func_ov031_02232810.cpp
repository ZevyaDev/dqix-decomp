#include <globaldefs.h>

extern "C" ARM int GetButtonBarChoice_ov031_02222e0c(void);
extern "C" ARM int func_ov031_02236f68(void);
extern "C" ARM void EnableButtonBarInput_ov031_02222e80(void);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" ARM int func_ov031_02232844(void);

// USA: func_ov031_02232810
extern "C" ARM void func_ov031_02232810(void) {
	if (GetButtonBarChoice_ov031_02222e0c() == -2) {
		return;
	}
	if (func_ov031_02236f68() == 1) {
		return;
	}
	EnableButtonBarInput_ov031_02222e80();
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02232844);
}
