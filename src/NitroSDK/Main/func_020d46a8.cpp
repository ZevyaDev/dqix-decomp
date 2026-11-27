#include <globaldefs.h>

extern "C" int func_020d41e8(void);
extern void* gWirelessIPC_021142e0[];

// USA: func_020d46a8
extern "C" ARM int func_020d46a8(void) {
    if (func_020d41e8()) return 0;
    return *(int*)((char*)gWirelessIPC_021142e0[1] + 4);
}
