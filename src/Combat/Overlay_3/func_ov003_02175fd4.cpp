#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
enum { Enum_ov003_02175fd4_4088 = 0xf74 };
enum { Enum_ov003_02175fd4_4094 = 0xf7a };
enum { Enum_ov003_02175fd4_2204 = 0x818 };
enum { Enum_ov003_02175fd4_4064 = 0xf5c };
enum { Enum_ov003_02175fd4_2008 = 0x754 };
#else
enum { Enum_ov003_02175fd4_4088 = 0xff8 };
enum { Enum_ov003_02175fd4_4094 = 0xffe };
enum { Enum_ov003_02175fd4_2204 = 0x89c };
enum { Enum_ov003_02175fd4_4064 = 0xfe0 };
enum { Enum_ov003_02175fd4_2008 = 0x7d8 };
#endif

struct MenuLayout_0207fdcc_2;
struct TextWindow_0207fdcc;
extern "C" TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(MenuLayout_0207fdcc_2* menuLayout, int windowId);

extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);

struct YesNoWindow_020e28dc;
extern "C" int IsYesNoWindowOpen_020e28dc(struct YesNoWindow_020e28dc* yesNoWindow);

extern "C" void GetMenuLayoutTextPosition_020809c4(void* menuLayout, int windowId, int textId, short* outX, short* outY);

struct YesNoWindow_020e263c_2;
extern "C" void UpdateYesNoWindow_020e263c(struct YesNoWindow_020e263c_2* yesNoWindow, int ticks);

struct YesNoWindow_020e28f0;
extern "C" void SetYesNoWindowCursorPosition_020e28f0(struct YesNoWindow_020e28f0* yesNoWindow, short x, short y);


// USA: func_ov003_02175fd4
extern "C" ARM void func_ov003_02175fd4(unsigned char* arg0) {
    if (*(void**)(arg0 + Enum_ov003_02175fd4_4088) == NULL) {
        return;
    }
    if (*(short*)(arg0 + Enum_ov003_02175fd4_4094) < 0) {
        return;
    }
    TextWindow_0207fdcc* var0 = FindMenuLayoutWindow_02081da8(*(MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02175fd4_2204), *(short*)(arg0 + Enum_ov003_02175fd4_4094));
    if (var0 == NULL) {
        return;
    }
    if (IsTextWindowOpen_0204c7e0((unsigned char*)var0) == 0 || *(void**)(arg0 + 0x0) == NULL) {
        return;
    }
    if (IsYesNoWindowOpen_020e28dc(*(YesNoWindow_020e28dc**)(arg0 + 0x0)) != 0) {
        return;
    }
    short var1, var2;
    GetMenuLayoutTextPosition_020809c4(*(MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02175fd4_2204), *(short*)(arg0 + Enum_ov003_02175fd4_4094), *(short*)*(void**)(arg0 + Enum_ov003_02175fd4_4088), &var1, &var2);
    UpdateYesNoWindow_020e263c(*(YesNoWindow_020e263c_2**)(arg0 + 0x0), *(int*)(arg0 + Enum_ov003_02175fd4_4064));
    var1 = var1 - 0x10;
    var2 = var2 - 3;
    SetYesNoWindowCursorPosition_020e28f0(*(YesNoWindow_020e28f0**)(arg0 + 0x0), var1, var2);
    ((OBJSpriteSet*)(arg0 + Enum_ov003_02175fd4_2008))->DrawAll();
}
