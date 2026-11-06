#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x960
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0xb80
#endif


struct Struct_ov017_021a93f0;
extern "C" void func_ov017_021a942c(Struct_ov017_021a93f0* arg0);
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_021a93f0
extern "C" ARM void func_ov017_021a93f0(void* arg0, int arg1, int arg2) {
	char* var0 = (char*)GetGameResources() + 0x3000;
	Queue_0201bdac_2* var1 = *(Queue_0201bdac_2**)(var0 + REGION_FIELD_0);
	Struct_ov017_021a93f0* var2 = *(Struct_ov017_021a93f0**)(var0 + REGION_FIELD_1);
	func_ov017_021a942c(var2);
	*(int*)((char*)var2 + 0xc) = arg1;
	*(int*)((char*)var2 + 0x10) = arg2;
	AppendToQueue_020469b4(var1, (QueueNode_0201bdac*)var2);
}
