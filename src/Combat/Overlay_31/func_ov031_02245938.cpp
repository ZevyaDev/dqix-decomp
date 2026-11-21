#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

bool IsContextInactive(ProcessorContext *context);
extern "C" void EnqueueValue_020c7e0c(void *queue, int value, int flags);

struct Struct_ov031_02291f24_2 {
	int unknown_0_;
	int unknown_4_;
};

extern ProcessorContext data_ov031_02291f80;
extern struct Struct_ov031_02291f24_2 data_ov031_02291f24;
extern int data_ov031_02291f60;

// USA: func_ov031_02245938
extern "C" ARM void func_ov031_02245938(void) {
	if (data_ov031_02291f80.uniqueID == 0) {
		return;
	}
	if (IsContextInactive(&data_ov031_02291f80) == 0) {
		if (data_ov031_02291f24.unknown_4_ == 0) {
			data_ov031_02291f24.unknown_4_ = 1;
			EnqueueValue_020c7e0c(&data_ov031_02291f60, 0, 0);
		}
	}
}
