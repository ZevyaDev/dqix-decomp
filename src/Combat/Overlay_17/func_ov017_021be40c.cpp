#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory.h"

struct QueueNode_0204693c { signed char type_0_, isFinished_1_, isQueued_2_, isRunning_3_; };
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_021be40c {
	QueueNode_0204693c unknown_0_;  // 0x0
	unsigned char unknown_4_[4];      // 0x4
	int unknown_8_;                     // 0x8
	int unknown_c_;                     // 0xc
	int unknown_10_;                    // 0x10
	int unknown_14_;                    // 0x14
	int unknown_18_;                    // 0x18
	int unknown_1c_;                    // 0x1c
	int unknown_20_;                    // 0x20
	SafeAllocator unknown_24_;    // 0x24
	unsigned char unknown_38_;          // 0x38
	unsigned char unknown_39_;          // 0x39
	unsigned char unknown_3a_[0x10];    // 0x3a
};

// USA: func_ov017_021be40c
extern "C" ARM void func_ov017_021be40c(Struct_ov017_021be40c* arg0) {
	ResetQueueNode_0204693c(&arg0->unknown_0_);
	arg0->unknown_0_.type_0_ = 0x4e;
	arg0->unknown_8_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_20_ = -1;
	arg0->unknown_1c_ = 0;
	arg0->unknown_38_ = 0;
	arg0->unknown_24_.ResetAllocatorPointer();
	arg0->unknown_10_ = 0;
	arg0->unknown_14_ = 0;
	arg0->unknown_18_ = 0;
	arg0->unknown_39_ = 0;
	VectorizedMemset(arg0->unknown_3a_, 0, 0x10);
}
