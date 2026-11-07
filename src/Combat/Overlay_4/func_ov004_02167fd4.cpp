#include <globaldefs.h>
#include "Resource/GameResources.h"


extern "C" void ResetEventTask_ov017_021baedc(void* node, int arg1);
extern "C" void* GetFlagManager_0205ec34(void);

struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);
extern "C" void func_0206e348(unsigned char* arg0, int arg1, int arg2);

// USA: func_ov004_02167fd4
extern "C" ARM int func_ov004_02167fd4(void) {
#if defined(jpn)
    enum { Enum_ov004_02167fd4_1844 = 0x524, Enum_ov004_02167fd4_1788 = 0x4ec };
#else
    enum { Enum_ov004_02167fd4_1844 = 0x734, Enum_ov004_02167fd4_1788 = 0x6fc };
#endif
	char* var0 = (char*)GetGameResources() + 0x3000;
	struct Queue_0201bdac_2* var1 = *(struct Queue_0201bdac_2**)(var0 + Enum_ov004_02167fd4_1788);
	struct QueueNode_0201bdac* var2 = *(struct QueueNode_0201bdac**)(var0 + Enum_ov004_02167fd4_1844);
	ResetEventTask_ov017_021baedc(var2, 1);
	*(short*)((char*)var2 + 0x8) = 0x6fae;
	AppendToQueue_020469b4(var1, var2);
	unsigned char* var3 = (unsigned char*)GetFlagManager_0205ec34();
	func_0206e348(var3, 0x17, 1);
	return 0;
}
