#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0219931c_1720 = 0x4a8, Enum_ov017_0219931c_2840 = 0x8f8, Enum_ov017_0219931c_1724 = 0x4ac, Enum_ov017_0219931c_1788 = 0x4ec };
#else
enum { Enum_ov017_0219931c_1720 = 0x6b8, Enum_ov017_0219931c_2840 = 0xb18, Enum_ov017_0219931c_1724 = 0x6bc, Enum_ov017_0219931c_1788 = 0x6fc };
#endif

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
struct Struct_ov017_0219931c;
struct Struct_ov017_0219931c_2;

extern "C" void func_ov017_021ac2ec(Struct_ov017_0219931c* arg0);
extern "C" void func_ov017_021aca14(Struct_ov017_0219931c_2* arg0, int arg1);
extern "C" void AppendToQueue_020469b4(Queue_0201bdac_2* queue, QueueNode_0201bdac* node);

// USA: func_ov017_0219931c
extern "C" ARM void func_ov017_0219931c(char* arg0) {
	if (*(unsigned char*)(arg0 + 0x3000 + Enum_ov017_0219931c_1720) == 0) {
		return;
	}
	char* var0 = arg0 + 0x3000;
	Struct_ov017_0219931c* var1 = *(Struct_ov017_0219931c**)(var0 + Enum_ov017_0219931c_2840);
	func_ov017_021ac2ec(var1);
	func_ov017_021aca14(*(Struct_ov017_0219931c_2**)(arg0 + 0x3000 + Enum_ov017_0219931c_2840), *(int*)(arg0 + 0x3000 + Enum_ov017_0219931c_1724));
	AppendToQueue_020469b4(*(Queue_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_0219931c_1788), *(QueueNode_0201bdac**)(arg0 + 0x3000 + Enum_ov017_0219931c_2840));
}
