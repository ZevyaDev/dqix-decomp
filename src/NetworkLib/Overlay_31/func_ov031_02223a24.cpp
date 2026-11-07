#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" void LoadToMainBG1ScreenData(void *p, int a, unsigned int size);
extern "C" void QueueTaskRemoval_ov031_0223e2c0(int listIndex, int task);

extern void* data_ov031_02250bf4;

// USA: func_ov031_02223a24
extern "C" ARM void func_ov031_02223a24(int arg0) {
	DC_FlushRange(data_ov031_02250bf4, 0xc0);
	LoadToMainBG1ScreenData(data_ov031_02250bf4, 0, 0xc0);
	QueueTaskRemoval_ov031_0223e2c0(1, arg0);
}
