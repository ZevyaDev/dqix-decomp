#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov017_021baedc_0 = -0x4 };
#else
enum { Enum_ov017_021baedc_0 = 0x0 };
#endif

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct Struct_ov017_021baedc;
extern "C" void func_ov017_021bb088(struct Struct_ov017_021baedc* arg0);

struct Struct_ov017_021baedc_2 { unsigned char unknown_0_0_:1; unsigned char unknown_0_1_:7; };

// USA: ResetEventTask_ov017_021baedc
extern "C" ARM void ResetEventTask_ov017_021baedc(void* node, int isRestart) {
	char* eventTask = (char*)node;
	ResetQueueNode_0204693c((struct QueueNode_0204693c*)eventTask);
	*(signed char*)(eventTask + 0x0) = 4;
	*(short*)(eventTask + 0x8) = 0;
	*(short*)(eventTask + 0xa) = 0;
	*(int*)(eventTask + 0x90 + Enum_ov017_021baedc_0) = 0;
	*(unsigned short*)(eventTask + 0x11a + Enum_ov017_021baedc_0) = 0;
	*(short*)(eventTask + 0x14e + Enum_ov017_021baedc_0) = -1;
	*(unsigned char*)(eventTask + 0x9c + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x98 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x99 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x9a + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x9b + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0xcc + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0xcd + Enum_ov017_021baedc_0) = 0;
	*(signed char*)(eventTask + 0xa0 + Enum_ov017_021baedc_0) = -1;
	*(int*)(eventTask + 0x110 + Enum_ov017_021baedc_0) = -1;
	*(unsigned char*)(eventTask + 0xfe + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x100 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x101 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x102 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x103 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x104 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x106 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x107 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x108 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x109 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x10a + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x10b + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x10c + Enum_ov017_021baedc_0) = 0;
	if (isRestart == 0) {
		*(unsigned char*)(eventTask + 0x105 + Enum_ov017_021baedc_0) = 0;
	}
	if (isRestart == 0) {
		*(unsigned short*)(eventTask + 0x11c + Enum_ov017_021baedc_0) = 0;
	}
	memset(eventTask + 0xc, 0, 0x68);
	*(unsigned short*)(eventTask + 0x114 + Enum_ov017_021baedc_0) = 0;
	func_ov017_021bb088((struct Struct_ov017_021baedc*)(eventTask + 0xd0 + Enum_ov017_021baedc_0));
	if (TestFlags00(GetGameResources(), 0x1000) == 0) {
		((SafeAllocator*)(eventTask + 0x7c + Enum_ov017_021baedc_0))->ResetAllocatorPointer();
	}
	*(int*)(eventTask + 0x120 + Enum_ov017_021baedc_0) = 0;
	((SafeAllocator*)(eventTask + 0x124 + Enum_ov017_021baedc_0))->ResetAllocatorPointer();
	memset(eventTask + 0x13c + Enum_ov017_021baedc_0, 0, 0x12);
	memset(eventTask + 0x150 + Enum_ov017_021baedc_0, 0, 0xa);
	*(int*)(eventTask + 0x15c + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0xfd + Enum_ov017_021baedc_0) = 0;
	*(signed char*)(eventTask + 0x116 + Enum_ov017_021baedc_0) = -1;
	*(int*)(eventTask + 0x160 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x164 + Enum_ov017_021baedc_0) = 1;
	*(int*)(eventTask + 0x170 + Enum_ov017_021baedc_0) = 0;
	*(int*)(eventTask + 0x168 + Enum_ov017_021baedc_0) = 0;
	*(int*)(eventTask + 0x16c + Enum_ov017_021baedc_0) = 0;
	*(int*)(eventTask + 0x138 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0xff + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x174 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x175 + Enum_ov017_021baedc_0) = 0;
	((Struct_ov017_021baedc_2*)(eventTask + 0x178 + Enum_ov017_021baedc_0))->unknown_0_0_ = 0;
	((Struct_ov017_021baedc_2*)(eventTask + 0x178 + Enum_ov017_021baedc_0))->unknown_0_1_ = 0;
	*(unsigned char*)(eventTask + 0x179 + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x17a + Enum_ov017_021baedc_0) = 0;
	*(unsigned char*)(eventTask + 0x17b + Enum_ov017_021baedc_0) = 0;
	*(float*)(eventTask + 0x17c + Enum_ov017_021baedc_0) = -1.0f;
	*(unsigned short*)(eventTask + 0x184 + Enum_ov017_021baedc_0) = 0;
	memset(eventTask + 0x188 + Enum_ov017_021baedc_0, 0, 0x30);
	memset(eventTask + 0x1b8 + Enum_ov017_021baedc_0, 0, 0x10);
}
