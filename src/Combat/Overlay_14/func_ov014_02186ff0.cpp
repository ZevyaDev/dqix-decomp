#include <globaldefs.h>
#include "Input/Input.h"

struct MenuLayout_0207fdcc_2;
extern "C" int IsPointInMenuLayoutWindow_02080d54(struct MenuLayout_0207fdcc_2* menuLayout, int windowId, int x, int y);

// USA: func_ov014_02186ff0
extern "C" ARM int func_ov014_02186ff0(char* arg0) {
	int var0 = 0;

	if (g_keyManager.TestKeysPressed(2)) {
		var0 = 1;
	}

	if (g_touchInput.pressed_ != 0) {
		int var1, var2;
		g_touchInput.GetTouchPoint(&var1, &var2);
		short var3 = *(short*)(arg0 + 0x170);
		struct MenuLayout_0207fdcc_2* var4 = *(struct MenuLayout_0207fdcc_2**)(arg0 + 0xc0);
		if (!IsPointInMenuLayoutWindow_02080d54(var4, var3, (short)var1, (short)var2)) {
			var0 = 1;
		}
	}

	return var0;
}
