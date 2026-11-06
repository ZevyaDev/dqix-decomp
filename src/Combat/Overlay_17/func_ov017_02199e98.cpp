#include <globaldefs.h>
#include "GameState/GameState.h"

struct GlobalFlags_02038598_4;
struct QueueNode_02015438;
struct Struct_02018300_3;

extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" int GetQueueHeadType_02046b24(struct QueueNode_02015438** queue);
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);
extern "C" void func_ov017_02199780(void* arg0);

#if defined(jpn)
static const int kActive=0x3e60, kList=0x4ec;
#else
static const int kActive=0x4080, kList=0x6fc;
#endif

// USA: func_ov017_02199e98
extern "C" ARM void func_ov017_02199e98(void* arg0) {
    if (*(int*)((char*)arg0 + kActive) == 0) return;
    GameObject* var0 = GameState::GetInstance()->GetUnknownGameObject();
    EnablePlayerControl_020397c0(var0);
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0x400);
    func_ov017_02199780(arg0);
    struct QueueNode_02015438** var1 = *(struct QueueNode_02015438***)((char*)arg0 + 0x3000 + kList);
    int var2 = GetQueueHeadType_02046b24(var1);
    if (var2 != 0xa && var2 != 4 && var2 != 3 && var2 != 0x21 && var2 != 0x24) return;
    DisablePlayerControl_020397cc((struct Struct_02018300_3*)var0, 1);
}
