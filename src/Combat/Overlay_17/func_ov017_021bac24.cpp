#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x518
#define REGION_FIELD_1 0x4ec
#else
#define REGION_FIELD_0 0x728
#define REGION_FIELD_1 0x6fc
#endif

#include "GameState/GameState.h"

extern "C" int GetMessageWindow_020421a0();

extern "C" void func_ov017_021bac58(unsigned char* arg0);

struct QueueNode_0201bdac { unsigned char unknown_0_[2]; unsigned char isQueued_2_; unsigned char unknown_3_; void* pNext_4_; };
struct Queue_0201bdac_2 { void* pHead_0_; void* pTail_4_; };
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_021bac24
extern "C" ARM void func_ov017_021bac24(unsigned char* arg0) {
    GameState::GetInstance()->GetUnknownGameObject();
    GetMessageWindow_020421a0();
    func_ov017_021bac58(*(unsigned char**)(arg0 + 0x3000 + REGION_FIELD_0));
    Queue_0201bdac_2* var0 = *(Queue_0201bdac_2**)(arg0 + 0x3000 + REGION_FIELD_1);
    QueueNode_0201bdac* var1 = *(QueueNode_0201bdac**)(arg0 + 0x3000 + REGION_FIELD_0);
    AppendToQueue_020469b4(var0, var1);
}
