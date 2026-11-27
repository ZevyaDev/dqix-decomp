#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
struct Struct_020a3578;
extern "C" void func_020a3578(struct Struct_020a3578* arg0);

// USA: ResetBattleManager_ov017_021b6f18
extern "C" ARM void ResetBattleManager_ov017_021b6f18(char* battleManager) {
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)battleManager);
	battleManager[0] = 0xa;
	((SafeAllocator*)(battleManager + 8))->ResetAllocatorPointer();
	func_020a3578((struct Struct_020a3578*)(battleManager + 0x1c));

	*(int*)(battleManager + 0x6ac) = 0;
	*(int*)(battleManager + 0x6b0) = 0;
	*(unsigned short*)(battleManager + 0x600 + 0xb4) = 1;
	*(unsigned short*)(battleManager + 0x600 + 0xb6) = 0;
	*(int*)(battleManager + 0x6b8) = 0;
	*(unsigned char*)(battleManager + 0x6bd) = 0xff;
	*(unsigned char*)(battleManager + 0x6bc) = 0xff;
	*(signed char*)(battleManager + 0x6be) = -1;

	memset(battleManager + 0x6c0, 0, 3);

	battleManager[0x6c3] = 0;
	*(unsigned short*)(battleManager + 0x600 + 0xc4) = 0;
	battleManager[0x6c7] = 0;
	*(unsigned short*)(battleManager + 0x600 + 0xc8) = 0;
	battleManager[0x6c6] = 0;
}
