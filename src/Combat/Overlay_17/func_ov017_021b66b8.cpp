#include <globaldefs.h>

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;

extern "C" void func_ov017_021b6790(void* arg0);
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

#if defined(jpn)
static const int kListOffset=0x4ec, kNodeOffset=0x8e0;
#else
static const int kListOffset=0x6fc, kNodeOffset=0xb00;
#endif

// USA: func_ov017_021b66b8
extern "C" ARM void func_ov017_021b66b8(char* arg0) {
	func_ov017_021b6790(*(void**)(arg0 + 0x3000 + kNodeOffset));
	AppendToQueue_020469b4((struct Queue_0201bdac_2*)*(void**)(arg0 + 0x3000 + kListOffset),
	                 (struct QueueNode_0201bdac*)*(void**)(arg0 + 0x3000 + kNodeOffset));
	((unsigned char*)(*(void**)(arg0 + 0x3000 + kNodeOffset)))[0x1f] = 1;
}
