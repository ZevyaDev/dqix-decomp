#include <globaldefs.h>
extern "C" void DisableButtonBarInput_ov031_02222e98(void);
extern "C" void func_ov031_0223c278(int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_0222e910(void);
// USA: func_ov031_0222e8f0
extern "C" ARM void func_ov031_0222e8f0(void) {
	DisableButtonBarInput_ov031_02222e98();
	func_ov031_0223c278(8);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222e910);
}
