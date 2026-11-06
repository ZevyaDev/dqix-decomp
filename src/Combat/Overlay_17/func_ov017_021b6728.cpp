#include <globaldefs.h>

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;

extern "C" void func_ov017_021b6790(void* arg0);
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

// USA: func_ov017_021b6728
extern "C" ARM void func_ov017_021b6728(char* arg0, int arg1, unsigned char arg2) {
#if defined(jpn)
 enum {Enum_ov017_021b6728_2816=0x8e0, Enum_ov017_021b6728_1788=0x4ec};
#else
 enum {Enum_ov017_021b6728_2816=0xb00, Enum_ov017_021b6728_1788=0x6fc};
#endif
	func_ov017_021b6790(*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_2816));
	AppendToQueue_020469b4((struct Queue_0201bdac_2*)*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_1788),
	                 (struct QueueNode_0201bdac*)*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_2816));
	if (arg1 == 1) {
		((unsigned char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_2816)))[0x1f] = 4;
		((unsigned char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_2816)))[0x20] = arg2;
	} else if (arg1 == 0) {
		((unsigned char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_021b6728_2816)))[0x1f] = 3;
	}
}
