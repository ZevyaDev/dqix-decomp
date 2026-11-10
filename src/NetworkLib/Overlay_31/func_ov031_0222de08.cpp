#include <globaldefs.h>

extern "C" void StartBrightnessFadeDelay_ov031_0223c278(int);
extern "C" void func_ov031_0222de24(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);

// USA: func_ov031_0222de08
extern "C" ARM void func_ov031_0222de08(void) {
    StartBrightnessFadeDelay_ov031_0223c278(8);
    SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222de24);
}
