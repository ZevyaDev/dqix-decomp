#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_0219931c {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	int unknown_8_;
	int unknown_c_;
	SafeAllocator unknown_10_;
	int unknown_24_;
	unsigned char unknown_28_;
	unsigned char unknown_29_;
};

// USA: func_ov017_021ac2ec
extern "C" ARM void func_ov017_021ac2ec(Struct_ov017_0219931c* arg0) {
	ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
	arg0->unknown_0_ = 0x1e;
	arg0->unknown_8_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_10_.ResetAllocatorPointer();
	arg0->unknown_24_ = -1;
	arg0->unknown_28_ = 0;
	arg0->unknown_29_ = 0;
}
