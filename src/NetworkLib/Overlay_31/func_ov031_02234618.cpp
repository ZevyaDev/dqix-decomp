#include <globaldefs.h>

extern "C" void StartBrightnessFade_ov031_0223c078(int mode, int useSubScreen, int layerMask, int duration);
extern "C" void ShowScreenLayers_ov031_0223cb68(int isSubScreen, int layerMask);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" ARM void func_ov031_0223466c(void);

// USA: func_ov031_02234618
extern "C" ARM void func_ov031_02234618(void) {
    StartBrightnessFade_ov031_0223c078(2, 1, 1, 8);
    StartBrightnessFade_ov031_0223c078(2, 0, 0x15, 8);
    ShowScreenLayers_ov031_0223cb68(1, 1);
    ShowScreenLayers_ov031_0223cb68(0, 0x15);
    SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0223466c);
}
