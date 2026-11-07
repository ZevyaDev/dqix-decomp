#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int LoadToSubBG1ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" void func_ov031_0223b710(void* arg0);
extern "C" void QueueTaskRemoval_ov031_0223e2c0(int listIndex, void* task);

struct Struct_ov031_02290d04_17 { void* unknown_0_; };
extern Struct_ov031_02290d04_17 data_ov031_02290d04;

// USA: func_ov031_022373fc
extern "C" ARM void func_ov031_022373fc(void* arg0) {
	DC_FlushRange(data_ov031_02290d04.unknown_0_, 0x600);
	LoadToSubBG1ScreenData((int)data_ov031_02290d04.unknown_0_, 0, 0x600);
	func_ov031_0223b710(data_ov031_02290d04.unknown_0_);
	QueueTaskRemoval_ov031_0223e2c0(1, arg0);
}
