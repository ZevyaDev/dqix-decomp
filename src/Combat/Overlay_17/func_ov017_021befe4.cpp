#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct StringList_020727d8 { void* unknown_0_; short unknown_4_; short unknown_6_; };
extern "C" void ResetStringList_020727d8(StringList_020727d8* stringList);

struct Struct_ov017_021befe4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	int unknown_8_;
	StringList_020727d8 unknown_c_;
	SafeAllocator unknown_14_;
};

// USA: func_ov017_021befe4
extern "C" ARM void func_ov017_021befe4(Struct_ov017_021befe4* arg0) {
	ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
	arg0->unknown_0_ = 0x35;
	arg0->unknown_8_ = 0;
	ResetStringList_020727d8(&arg0->unknown_c_);
	arg0->unknown_14_.ResetAllocatorPointer();
}
