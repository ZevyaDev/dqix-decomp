#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_0219bfb4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	SafeAllocator unknown_8_;
	int unknown_1c_;
	unsigned char unknown_20_;
	unsigned char unknown_21_;
	unsigned char unknown_22_;
	unsigned char unknown_23_;
};

// USA: func_ov017_021ba90c
extern "C" ARM void func_ov017_021ba90c(Struct_ov017_0219bfb4* arg0) {
	ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
	arg0->unknown_0_ = 0x10;
	arg0->unknown_22_ = 0;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1c_ = 0;
	arg0->unknown_20_ = 0;
	arg0->unknown_21_ = 0;
	arg0->unknown_23_ = 0xff;
}
