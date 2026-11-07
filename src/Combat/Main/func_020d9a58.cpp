#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Queue_02038598_5;
struct QueueNode_02046a8c;
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);
extern "C" void RemoveFromQueue_02046a8c(struct Queue_02038598_5* queue, QueueNode_02046a8c* node);
extern "C" void func_020d9ab0(void* arg0);

// USA: func_020d9a58
extern "C" ARM void func_020d9a58(void* arg0) {
    GameResources* var0 = GetGameResources();
    struct Queue_02038598_5* var1 = static_cast<Queue_02038598_5*>(var0->unknown_ptr_array_36fc[0]);
    if (IsTypeInQueue_02046b60(var1, 0x1c)) {
        RemoveFromQueue_02046a8c(var1, static_cast<QueueNode_02046a8c*>(var0->unknown_ptr_array_3afc[6]));
        RemoveFromQueue_02046a8c(var1, static_cast<QueueNode_02046a8c*>(var0->unknown_ptr_array_36fc[4]));
    }
    func_020d9ab0(arg0);
}
