#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x50c
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0x71c
#endif

#include "GameState/GameState.h"

struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);

extern "C" void func_ov017_021a5568(void* arg0);
struct Queue_02046a3c_2;
struct QueueNode_02046a3c;
extern "C" void InsertAfterQueueHead_02046a3c(Queue_02046a3c_2*, QueueNode_02046a3c*);

// USA: func_ov017_021a5530
extern "C" ARM void func_ov017_021a5530(char* arg0) {
	DisablePlayerControl_020397cc((struct Struct_02018300_3*)GameState::GetInstance()->GetUnknownGameObject(), 1);
	func_ov017_021a5568(*(void**)(arg0 + 0x3000 + REGION_FIELD_1));
	void* var0 = *(void**)(arg0 + 0x3000 + REGION_FIELD_0);
	InsertAfterQueueHead_02046a3c((Queue_02046a3c_2*)var0, (QueueNode_02046a3c*)(*(void**)(arg0 + 0x3000 + REGION_FIELD_1)));
}
