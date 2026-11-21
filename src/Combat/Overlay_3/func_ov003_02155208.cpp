#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov003_02155208_486 = 0x1e2 };
#else
enum { Enum_ov003_02155208_486 = 0x1e6 };
#endif

struct YesNoWindow_020e28dc;
struct MenuLayout_0207fdcc_2;

extern "C" int IsYesNoWindowOpen_020e28dc(struct YesNoWindow_020e28dc* yesNoWindow);
extern "C" int IsYesNoWindowCancelPressed_020e2984(struct YesNoWindow_020e28dc* yesNoWindow);
extern "C" int IsPointInMenuLayoutWindow_02080d54(struct MenuLayout_0207fdcc_2* menuLayout, int windowId, int x, int y);

struct Struct_ov003_02155208 {
    char unknown_0_[0x18];
    struct MenuLayout_0207fdcc_2* unknown_18_;
    struct YesNoWindow_020e28dc* unknown_1c_;
    char unknown_20_[Enum_ov003_02155208_486 - 0x20];
    short unknown_1e6_;
};

// USA: func_ov003_02155208
extern "C" ARM int func_ov003_02155208(struct Struct_ov003_02155208* arg0) {
    int var0 = 0;
    if (g_keyManager.TestKeysPressed(2)) var0 = 1;

    if (arg0->unknown_1c_ != NULL && IsYesNoWindowOpen_020e28dc(arg0->unknown_1c_)) {
        if (IsYesNoWindowCancelPressed_020e2984(arg0->unknown_1c_)) {
            var0 = 1;
        }
    } else if (g_touchInput.pressed_ != 0) {
        int var1, var2;
        g_touchInput.GetTouchPoint(&var1, &var2);
        if (!IsPointInMenuLayoutWindow_02080d54(arg0->unknown_18_, arg0->unknown_1e6_, (short)var1, (short)var2)) {
            var0 = 1;
        }
    }
    return var0;
}
