#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217726c_4100 = 0xf80 };
enum { Enum_ov003_0217726c_4154 = 0xfb6 };
enum { Enum_ov003_0217726c_4156 = 0xfb8 };
enum { Enum_ov003_0217726c_2164 = 0x7f0 };
enum { Enum_ov003_0217726c_2204 = 0x818 };
#else
enum { Enum_ov003_0217726c_4100 = 0x1004 };
enum { Enum_ov003_0217726c_4154 = 0x103a };
enum { Enum_ov003_0217726c_4156 = 0x103c };
enum { Enum_ov003_0217726c_2164 = 0x874 };
enum { Enum_ov003_0217726c_2204 = 0x89c };
#endif

#include "Combat/Main/BattleList.h"

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);
extern "C" unsigned int func_ov003_02175898(char* arg0, void* arg1);
struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov003_0217726c
extern "C" ARM void func_ov003_0217726c(char* arg0) {
	int var0 = *(short*)(arg0 + Enum_ov003_0217726c_4154);
	struct ItemTable_0201099c_10* var1 = (struct ItemTable_0201099c_10*)(arg0 + Enum_ov003_0217726c_2164);
	struct MenuLayout_0207fdcc_2* var2 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_0217726c_2204);
	struct ItemData_0201099c_9* var3 = FindItemData_020dedd0(var1, var0);
	int var4 = *(short*)(arg0 + Enum_ov003_0217726c_4100);
	int var5 = 0;
	int var6;
	if (var4 != 4) {
		if (var4 == 5) var5 = *(unsigned short*)((char*)var3 + 0x1a);
	} else {
		var5 = func_ov003_02175898(arg0, var3);
	}
	var6 = var5 * (*(unsigned char*)(arg0 + Enum_ov003_0217726c_4156));
	ShowMenuLayoutWindow_02080c20(var2, 10);
	SetMenuLayoutWindowPalette_02080c68(var2, 10, 0);
	SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var2, 0x5b, var6);
	OpenMenuLayoutWindow_020813ec(var2, 10);
}
