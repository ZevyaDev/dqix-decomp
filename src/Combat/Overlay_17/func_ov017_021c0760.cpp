#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov017_021c0760
extern "C" ARM void func_ov017_021c0760(unsigned char* arg0, unsigned char arg1) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x29;
	arg0[0xbc] = arg1;
	*(int*)(arg0 + 0x20) = 0;
	arg0[0x24] = 0;
	*(int*)(arg0 + 0x1c) = 0;
	((SafeAllocator*)(arg0 + 0x8))->ResetAllocatorPointer();
	if (arg0[0xbc] == 0) {
		return;
	}
	arg0[0x25] = 0;
	arg0[0x26] = 0;
	*(short*)(arg0 + 0x28) = -1;
	*(short*)(arg0 + 0x2a) = -1;
	*(short*)(arg0 + 0xa8) = 0;
	*(int*)(arg0 + 0xac) = 0;
	*(int*)(arg0 + 0xb0) = 0;
	*(int*)(arg0 + 0xb4) = 0;
	*(int*)(arg0 + 0xb8) = 0;
}
