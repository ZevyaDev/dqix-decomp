#include <globaldefs.h>

extern "C" void DC_FlushRange(const void* addr, unsigned int size);
extern int data_021052b4;
extern int data_021056b4;

// USA: func_0203bd88
extern "C" ARM void func_0203bd88(void*) {
    DC_FlushRange((const void*)((int)&data_021052b4), 0x400);
    DC_FlushRange((const void*)((int)&data_021056b4), 0x400);
}
