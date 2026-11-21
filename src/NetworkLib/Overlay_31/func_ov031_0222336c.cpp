#include <globaldefs.h>

#include "Resource/UiArrayEntry.h"

extern "C" void LoadFileToVRAM_ov031_022234d8(int path, void* loadToVRAM);
extern "C" ARM int LoadToSubBG0ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" int func_ov031_0223c560(int arg0, int arg1);
extern "C" ARM int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" ARM void func_ov031_0223caec(void* arg0);

extern unsigned char data_ov031_02250bac;
extern int data_ov031_0224b1dc;
extern void* data_ov031_02290c4c;

// USA: ShowSubScreenMessage_ov031_0222336c
extern "C" ARM int ShowSubScreenMessage_ov031_0222336c(int messageIndex, int digitPosition, int digit) {
	if (data_ov031_02250bac != 0) {
		return 0;
	}
	LoadFileToVRAM_ov031_022234d8((int)&data_ov031_0224b1dc, (void*)LoadToSubBG0ScreenData);
	*(int*)0x4001010 = 0x1920000;
	int textLayer = func_ov031_0223c560(1, 0);
	int text = func_ov031_022276cc(data_ov031_02290c4c, messageIndex, digitPosition, digit);
	int drawFlags = func_ov031_022236d0();
	func_ov031_0223c980(textLayer, 0x14, 0, 0xd8, 0x40, 2, drawFlags, text);
	func_ov031_0223caec((void*)textLayer);
	data_ov031_02250bac = 1;
	return 1;
}
