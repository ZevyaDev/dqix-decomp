#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
struct Struct_ov017_021a65c4;

extern "C" void func_ov017_021a6608(Struct_ov017_021a65c4* arg0);
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

#if defined(jpn)
static const int kList=0x4ec, kNode=0x96c;
#else
static const int kList=0x6fc, kNode=0xb8c;
#endif

// USA: func_ov017_021a65c4
extern "C" ARM void func_ov017_021a65c4(void* arg0, unsigned char arg1, int arg2) {
	GameResources* var0 = GetGameResources();
	char* var1 = (char*)var0 + 0x3000;
	Queue_0201bdac_2* var2 = *(Queue_0201bdac_2**)(var1 + kList);
	Struct_ov017_021a65c4* var3 = *(Struct_ov017_021a65c4**)(var1 + kNode);
	func_ov017_021a6608(var3);
	*((unsigned char*)var3 + 0xc) = arg1;
	if (arg2 != 0) {
		*((unsigned char*)var3 + 0xb) = 1;
	}
	AppendToQueue_020469b4(var2, (QueueNode_0201bdac*)var3);
}
