#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Queue_02038598_5;
struct Struct_02046a8c;
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);
extern "C" void func_02046a8c(struct Queue_02038598_5* arg0, Struct_02046a8c* arg1);
extern "C" void func_020d9ab0(void* arg0);

// USA: func_020d9a58
extern "C" ARM void func_020d9a58(void* arg0) {
    GameResources* var0 = GetGameResources();
    struct Queue_02038598_5* var1 = static_cast<Queue_02038598_5*>(var0->unknown_ptr_array_36fc[0]);
    if (IsTypeInQueue_02046b60(var1, 0x1c)) {
        func_02046a8c(var1, static_cast<Struct_02046a8c*>(var0->unknown_ptr_array_3afc[6]));
        func_02046a8c(var1, static_cast<Struct_02046a8c*>(var0->unknown_ptr_array_36fc[4]));
    }
    func_020d9ab0(arg0);
}
