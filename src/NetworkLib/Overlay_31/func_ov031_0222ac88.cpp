#include <globaldefs.h>

extern "C" void DisableButtonBarInput_ov031_02222e98(void);
extern "C" void StartBrightnessFadeDelay_ov031_0223c278(int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void *func_ov031_022277e4(void);
extern unsigned char data_ov031_02290c7c;
extern "C" void func_ov031_0222acc0(void);

// USA: func_ov031_0222ac88
extern "C" ARM void func_ov031_0222ac88(void) {
    if (data_ov031_02290c7c == 0) {
        func_ov031_022277e4();
    }
    DisableButtonBarInput_ov031_02222e98();
    StartBrightnessFadeDelay_ov031_0223c278(8);
    SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222acc0);
}
