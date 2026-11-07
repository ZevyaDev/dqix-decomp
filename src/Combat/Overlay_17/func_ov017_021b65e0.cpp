#if defined(jpn)
enum { Enum_ov017_021b65e0_2816 = 0x8e0, Enum_ov017_021b65e0_1788 = 0x4ec };
#else
enum { Enum_ov017_021b65e0_2816 = 0xb00, Enum_ov017_021b65e0_1788 = 0x6fc };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
struct LocalWireless_0202b2f0;
extern "C" int func_0202bd34(struct LocalWireless_0202b2f0* arg0, int arg1);

struct Struct_ov017_021b65e0;
extern "C" void func_ov017_021b6790(Struct_ov017_021b65e0* arg0);

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

// USA: func_ov017_021b65e0
extern "C" ARM void func_ov017_021b65e0(unsigned char* arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	void* var1 = GetLocalWireless_0202ae18();
	bool var2 = true;
	if (arg1 == 0 && IsLocalWirelessOn_0202b7d8((int*)var1) && IsNotLocalWirelessGuest_0202c508(var1) != 0) {
		for (int var3 = 0; var3 < 4; var3++) {
			if (func_0202bd34((struct LocalWireless_0202b2f0*)var1, var3)) {
				if (var0->GetGameObjectByIndex(var3) == NULL) {
					var2 = false;
				}
			}
		}
	}
	if (!var2) {
		return;
	}
	func_ov017_021b6790(*(Struct_ov017_021b65e0**)(arg0 + 0x3000 + Enum_ov017_021b65e0_2816));
	*(unsigned char*)((char*)(*(Struct_ov017_021b65e0**)(arg0 + 0x3000 + Enum_ov017_021b65e0_2816)) + 0x1c) = arg1;
	AppendToQueue_020469b4(*(struct Queue_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_021b65e0_1788), (struct QueueNode_0201bdac*)(*(Struct_ov017_021b65e0**)(arg0 + 0x3000 + Enum_ov017_021b65e0_2816)));
	var1 = GetLocalWireless_0202ae18();
	if (IsNotLocalWirelessGuest_0202c508(var1) == 0) {
		return;
	}
	if (arg1 == 0) {
		*(unsigned char*)((char*)var1 + 0x1000 + 0x11) = 0;
	}
}
