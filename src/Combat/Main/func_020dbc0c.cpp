#include <globaldefs.h>
#include "Resource/ResourceMutex.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

#if defined(jpn)
#define func_02046708 func_02047528
#endif

struct GlobalFlags_02012de8;
extern "C" int func_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);
extern "C" void* func_020d6c00(void);

extern "C" void func_020dbae0(void* arg0);

// USA: func_020dbc0c
extern "C" ARM void func_020dbc0c(void* arg0) {
    bool var0 = SetResourceMutexOperational(false);
    if (!func_02046708((struct GlobalFlags_02012de8*)func_020d6c00(), 0x100)) {
        func_020dbae0(arg0);
    }
    SetResourceMutexOperational(var0);
}
