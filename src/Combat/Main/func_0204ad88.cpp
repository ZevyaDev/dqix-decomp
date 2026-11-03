#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void DC_FlushRange(const void* addr, unsigned int size);

// USA: func_0204ad88
extern "C" ARM void func_0204ad88(void* arg0, void* arg1) {
    memcpy((char*)arg0 + 8, (char*)arg1 + 0xc, 4);
    DC_FlushRange((const void*)((int)((char*)arg1 + 0x10)), *(int*)((char*)arg0 + 8));
}
