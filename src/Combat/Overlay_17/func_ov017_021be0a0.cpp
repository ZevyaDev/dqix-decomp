#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov017_021be0a0
extern "C" ARM void func_ov017_021be0a0(unsigned char* arg0) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x33;
	*(int*)(arg0 + 8) = 0;
	*(int*)(arg0 + 0xc) = 0;
}
