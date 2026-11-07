#include <globaldefs.h>

extern "C" int GetButtonBarChoice_ov031_02222e0c(void);
extern "C" void* AddTask_ov031_0223e218(void* listIndex, void* callback, void* callbackData, int priority);
extern "C" void func_ov031_0222b36c(void);
extern "C" void SetWifiSetupFrameHandler_ov031_022274c0(int handler);
extern "C" void func_ov031_0222b094(void);

extern char data_ov031_02290c80;

// USA: func_ov031_0222b04c
extern "C" ARM void func_ov031_0222b04c(void) {
	if (GetButtonBarChoice_ov031_02222e0c() == -2) return;
	void* var0 = AddTask_ov031_0223e218((void*)1, (void*)func_ov031_0222b36c, (void*)0, 0x78);
	*(int*)((&data_ov031_02290c80) + 4) = (int)var0;
	SetWifiSetupFrameHandler_ov031_022274c0((int)func_ov031_0222b094);
}
