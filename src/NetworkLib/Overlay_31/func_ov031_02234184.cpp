#include <globaldefs.h>

extern "C" void StartBrightnessFade_ov031_0223c078(int mode, int useSubScreen, int layerMask, int duration);
extern "C" void ShowScreenLayers_ov031_0223cb68(int isSubScreen, int layerMask);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" ARM void func_ov031_022341d8(void);

// USA: func_ov031_02234184
extern "C" ARM void func_ov031_02234184(void) {
    StartBrightnessFade_ov031_0223c078(2, 1, 1, 8);
    StartBrightnessFade_ov031_0223c078(2, 0, 0x14, 8);
    ShowScreenLayers_ov031_0223cb68(1, 1);
    ShowScreenLayers_ov031_0223cb68(0, 0x14);
    SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_022341d8);
}
