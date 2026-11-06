#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217e5dc_2456 = 0x868 };
enum { Enum_ov003_0217e5dc_14076 = 0x34ec };
enum { Enum_ov003_0217e5dc_15108 = 0x38e4 };
#else
enum { Enum_ov003_0217e5dc_2456 = 0x998 };
enum { Enum_ov003_0217e5dc_14076 = 0x36fc };
enum { Enum_ov003_0217e5dc_15108 = 0x3b04 };
#endif

#include "GameState/GameState.h"

extern "C" int GetMessageWindow_020421a0(void);

extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);

struct QueueNode_0201bdac;
struct Queue_0201bdac_2;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

extern "C" void func_ov003_0217e630(void* arg0, signed char arg1);

struct Struct_ov003_02162f40_3 {
	char unknown_0_[Enum_ov003_0217e5dc_14076];
	struct Queue_0201bdac_2* unknown_36fc_;
	char unknown_3700_[Enum_ov003_0217e5dc_15108 - Enum_ov003_0217e5dc_14076 - 4];
	void* unknown_3b04_;
};

// USA: func_ov003_0217e5dc
extern "C" ARM void func_ov003_0217e5dc(struct Struct_ov003_02162f40_3* arg0, signed char arg1) {
	GameState::GetInstance();
	int* var0 = (int*)(int)GetMessageWindow_020421a0();
	if (*(int*)((char*)var0 + Enum_ov003_0217e5dc_2456) != 0) {
		ResetMessageWindow_02043204((char*)var0);
		CloseMessageWindow_02043124((char*)var0);
	}
	func_ov003_0217e630(arg0->unknown_3b04_, arg1);
	AppendToQueue_020469b4(arg0->unknown_36fc_, (struct QueueNode_0201bdac*)arg0->unknown_3b04_);
}
