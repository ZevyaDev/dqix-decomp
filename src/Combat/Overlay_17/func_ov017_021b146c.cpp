#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x924
#define REGION_FIELD_1 0x4ec
#else
#define REGION_FIELD_0 0xb44
#define REGION_FIELD_1 0x6fc
#endif


struct Struct_ov017_021b146c;
extern "C" void func_ov017_021b14a0(struct Struct_ov017_021b146c* arg0);
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

// USA: func_ov017_021b146c
extern "C" ARM void func_ov017_021b146c(void* arg0, unsigned char arg1) {
	func_ov017_021b14a0((struct Struct_ov017_021b146c*)*(void**)((char*)arg0 + 0x3000 + REGION_FIELD_0));
	*(unsigned char*)((char*)*(void**)((char*)arg0 + 0x3000 + REGION_FIELD_0) + 0x49) = arg1;
	AppendToQueue_020469b4((struct Queue_0201bdac_2*)*(void**)((char*)arg0 + 0x3000 + REGION_FIELD_1),
	                 (struct QueueNode_0201bdac*)*(void**)((char*)arg0 + 0x3000 + REGION_FIELD_0));
}
