#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void PlayWifiSetupSoundEffect_ov031_02236878(int);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_02229d7c(void);

// USA: func_ov031_02229d54
extern "C" ARM void func_ov031_02229d54(void) {
	if (func_ov031_02222e0c() != 0) return;
	PlayWifiSetupSoundEffect_ov031_02236878(6);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02229d7c);
}
