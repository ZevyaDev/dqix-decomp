#include <globaldefs.h>

extern "C" int EnqueueValue_020c7e0c(void* queue, int value, int flags);
extern int data_ov031_0224f4e0;

// USA: func_ov031_0221e7a8
extern "C" THUMB int func_ov031_0221e7a8(int arg0) {
    return EnqueueValue_020c7e0c(&data_ov031_0224f4e0, arg0, 0);
}
