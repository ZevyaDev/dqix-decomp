#include <globaldefs.h>

extern "C" ARM int GetButtonBarChoice_ov031_02222e0c(void);
extern "C" void PlayWifiSetupSoundEffect_ov031_02236878(int);
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" ARM void func_ov031_02228f7c(void);

// USA: func_ov031_02228f54
extern "C" ARM void func_ov031_02228f54(void) {
	if (GetButtonBarChoice_ov031_02222e0c() != 0) {
		return;
	}
	PlayWifiSetupSoundEffect_ov031_02236878(7);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_02228f7c);
}
