#include <globaldefs.h>

extern "C" void func_ov017_021b6790(void* arg0);

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

#if defined(jpn)
static const int kListOffset=0x4ec, kNodeOffset=0x8e0;
#else
static const int kListOffset=0x6fc, kNodeOffset=0xb00;
#endif

struct Struct_ov017_021b66f0 {
    unsigned char unknown_0_[kListOffset];
    Queue_0201bdac_2* unknown_6fc_;
    unsigned char unknown_700_[kNodeOffset - kListOffset - 4];
    QueueNode_0201bdac* unknown_b00_;
};

// USA: func_ov017_021b66f0
extern "C" ARM void func_ov017_021b66f0(unsigned char* arg0) {
    func_ov017_021b6790(((Struct_ov017_021b66f0*)(arg0 + 0x3000))->unknown_b00_);
    AppendToQueue_020469b4(((Struct_ov017_021b66f0*)(arg0 + 0x3000))->unknown_6fc_, ((Struct_ov017_021b66f0*)(arg0 + 0x3000))->unknown_b00_);
    *((unsigned char*)((Struct_ov017_021b66f0*)(arg0 + 0x3000))->unknown_b00_ + 0x1f) = 2;
}
