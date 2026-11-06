#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct Struct_02046c98;
extern "C" void func_02046c98(struct Struct_02046c98* arg0);

extern "C" void func_02046e70(void* arg0, int arg1, int arg2);

// USA: func_ov017_021b621c
extern "C" ARM void func_ov017_021b621c(unsigned char* arg0, int arg1, int arg2) {
	(int)GetGameResources();
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x16;
	func_02046e70(arg0 + 0xc, arg1, arg2);
	func_02046c98((struct Struct_02046c98*)(arg0 + 0xc));
	arg0[0xfc] = 0;
	*(short*)(arg0 + 0xfe) = -1;
	if (arg1 == 0) arg0[0xfd] = 0xf;
	else arg0[0xfd] = 0;
	arg0[8] = 1;
	*(short*)(arg0 + 0x100) = -1;
}
