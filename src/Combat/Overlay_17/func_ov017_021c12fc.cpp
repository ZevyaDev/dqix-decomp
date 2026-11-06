#include <globaldefs.h>

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
struct Struct_0204693c { signed char unknown_0_, unknown_1_, unknown_2_, unknown_3_; };
struct Struct_ov017_021c12fc;

extern "C" void func_ov017_021c1350(struct Struct_ov017_021c12fc* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);
extern "C" void func_ov017_021c12b0(unsigned char arg0);

#if defined(jpn)
#define NODE_OFFSET 0x3930
#define LIST_OFFSET 0x34ec
#else
#define NODE_OFFSET 0x3b50
#define LIST_OFFSET 0x36fc
#endif

// USA: func_ov017_021c12fc
extern "C" ARM void func_ov017_021c12fc(char* arg0, unsigned char arg1, unsigned char arg2) {
    struct Struct_ov017_021c12fc* var0 = *(struct Struct_ov017_021c12fc**)(arg0 + NODE_OFFSET);
    if (*((unsigned char*)var0 + 2) != 0) {
        return;
    }
    func_ov017_021c1350(var0, arg1, arg2);
    AppendToQueue_020469b4(*(Queue_0201bdac_2**)(arg0 + LIST_OFFSET), *(QueueNode_0201bdac**)(arg0 + NODE_OFFSET));
    if (arg1 == 0) return;
    if (arg2 != 0) return;
    func_ov017_021c12b0(1);
}
