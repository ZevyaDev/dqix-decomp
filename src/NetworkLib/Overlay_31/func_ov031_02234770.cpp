#include <globaldefs.h>

extern "C" ARM void DisableButtonBarInput_ov031_02222e98(void);
extern "C" void StartBrightnessFadeDelay_ov031_0223c278(int);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_02234790(void);

// USA: func_ov031_02234770
extern "C" ARM void func_ov031_02234770(void) {
	DisableButtonBarInput_ov031_02222e98();
	StartBrightnessFadeDelay_ov031_0223c278(8);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02234790);
}
