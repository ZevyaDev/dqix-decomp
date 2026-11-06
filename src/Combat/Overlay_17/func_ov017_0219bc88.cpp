#include <globaldefs.h>

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

struct QueueNode_0201bdac { unsigned char unknown_0_[2]; unsigned char isQueued_2_; unsigned char unknown_3_; void* pNext_4_; };
struct Queue_0201bdac_2 { void* pHead_0_; void* pTail_4_; };
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_0219bc88
extern "C" ARM void func_ov017_0219bc88(unsigned char* arg0, void* arg1) {
	arg0 += 0x3000;
	QueueNode_0201bdac* var0 = *(QueueNode_0201bdac**)(arg0 + RG(0xbb4, 0x994));
	if (var0->isQueued_2_ == 0) {
		Queue_0201bdac_2* var1 = *(Queue_0201bdac_2**)(arg0 + RG(0x6fc, 0x4ec));
		AppendToQueue_020469b4(var1, var0);
	}
}
