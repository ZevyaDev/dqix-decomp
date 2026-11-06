#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov004_0216fa08
extern "C" ARM void func_ov004_0216fa08(void* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    unsigned char* var0 = (unsigned char*)arg0;
    var0[0] = 0x36;
    *(short*)(var0 + 8) = 0;
    var0[0xa] = 0;
    *(short*)(var0 + 0xc) = -1;
    var0[0xe] = 0;
    var0[0xf] = 0;
}
