#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov017_021c16a8
extern "C" ARM void func_ov017_021c16a8(unsigned char* arg0) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x30;
	arg0[8] = 0;
	arg0[9] = 0;
}
