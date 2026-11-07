#include <globaldefs.h>
#if defined(jpn)
#define ALLOC_OFFSET 0x1f4
#define RESET_OFFSET 0x208
#else
#define ALLOC_OFFSET 0x264
#define RESET_OFFSET 0x278
#endif
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
extern "C" void InitChoiceList_0205c790(char* choiceList);
struct StringTable_0201099c_14;
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

// USA: func_ov017_021a8670
extern "C" ARM void func_ov017_021a8670(char* arg0) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
	arg0[0] = 0x38;
	*(int*)(arg0 + 0x8) = 0;
	*(int*)(arg0 + 0x28) = -1;
	*(int*)(arg0 + 0xc) = 0;
	*(int*)(arg0 + 0x10) = 0;
	*(int*)(arg0 + 0x14) = 0;
	memset(arg0 + 0x18, 0, 5);
	*(int*)(arg0 + 0x20) = 0;
	InitChoiceList_0205c790(arg0 + 0x2c);
	((SafeAllocator*)(arg0 + ALLOC_OFFSET))->ResetAllocatorPointer();
	InitStringTable_020dfc40((struct StringTable_0201099c_14*)(arg0 + RESET_OFFSET));
}
