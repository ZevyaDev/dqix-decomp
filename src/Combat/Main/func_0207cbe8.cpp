#include <globaldefs.h>

#if defined(jpn)
#define func_020de848 func_020e01c4
#endif

extern "C" void func_020de848(void* itemTable);

// USA: ResetItemContext_0207cbe8
extern "C" ARM void ResetItemContext_0207cbe8(char* itemContext) {
    func_020de848(itemContext + 0x14);
    *(int*)(itemContext + 0x2c) = 0;
    *(int*)(itemContext + 0x30) = 0;
    *(int*)(itemContext + 0x34) = 0;
}
