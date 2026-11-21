#include <globaldefs.h>

extern "C" void func_ov031_0223429c(void);
extern "C" void func_ov031_022342a0(void);
extern "C" signed char GetDialogChoice_ov031_02237e9c(void);
extern "C" void PlayWifiSetupSoundEffect_ov031_02236878(int);
extern "C" void CloseDialog_ov031_02237e58(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int);
extern "C" void func_ov031_022342a4(void);

// USA: func_ov031_02234260
extern "C" ARM void func_ov031_02234260(void) {
	func_ov031_0223429c();
	func_ov031_022342a0();
	if (GetDialogChoice_ov031_02237e9c() != 0) return;
	PlayWifiSetupSoundEffect_ov031_02236878(6);
	CloseDialog_ov031_02237e58();
	PlayWifiSetupSoundEffect_ov031_02236878(6);
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_022342a4);
}
