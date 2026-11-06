#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021a7328(char* arg0);
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_021a72f4
extern "C" ARM void func_ov017_021a72f4(void* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    Queue_0201bdac_2* var1 = (Queue_0201bdac_2*)var0->unknown_ptr_array_36fc[0];
    char* var2 = (char*)var0->unknown_ptr_array_3afc[38];
    func_ov017_021a7328(var2);
    *(int*)(var2 + 0xc) = arg1;
    AppendToQueue_020469b4(var1, (QueueNode_0201bdac*)var2);
}
