#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216dc58_4800 = 0x1150 };
enum { Enum_ov003_0216dc58_4900 = 0x11b4 };
#else
enum { Enum_ov003_0216dc58_4800 = 0x12c0 };
enum { Enum_ov003_0216dc58_4900 = 0x1324 };
#endif

extern "C" void __clear(void* arg0, int arg1);

struct Struct_0205c570;
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570* windowManager);

extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);

extern "C" int AppendText_02042058(char* buffer, const char* text);

struct TextWindowManager_0205d5d0;
#if defined(jpn)
#endif
// USA: func_ov003_0216dc58
extern "C" ARM void func_ov003_0216dc58(char* arg0) {
	char var0[0x100];
	char var1[0x40];
	int var2;
	__clear(var0, 0x100);
	__clear(var1, 0x40);
	if (*(int*)(arg0 + 0x10) == 2) {
		int var3 = GetCursorIndex_0205d794(*(struct Struct_0205c570**)(arg0 + Enum_ov003_0216dc58_4800));
		AppendFrameTag_02041c08(var0, var3, 8, 5, 5, 5);
	}
	var2 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + Enum_ov003_0216dc58_4900), 0x5c);
	AppendText_02042058(var0, (const char*)var2);
#if defined(jpn)
	SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0*)(*(void**)(arg0 + Enum_ov003_0216dc58_4800)), 0, (int)var0, 1);
#else
	SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0*)(*(void**)(arg0 + Enum_ov003_0216dc58_4800)), 0, (int)var0, 1, 0);
#endif
}
