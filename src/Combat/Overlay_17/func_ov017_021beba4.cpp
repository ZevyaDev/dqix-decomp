#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
struct StringTable_0201099c_14;
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

// USA: func_ov017_021beba4
extern "C" ARM void func_ov017_021beba4(char* arg0) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x34;
	for (int var0 = 0; var0 < 0xb; var0++) {
		*(int*)(arg0 + var0 * 4 + 0x8) = -1;
	}
	arg0[0x34] = 0;
	*(int*)(arg0 + 0x38) = 0;
	*(int*)(arg0 + 0x40) = -1;
	((SafeAllocator*)(arg0 + 0x44))->ResetAllocatorPointer();
	InitStringTable_020dfc40((struct StringTable_0201099c_14*)(arg0 + 0x58));
}
