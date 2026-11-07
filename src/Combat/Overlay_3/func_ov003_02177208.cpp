#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02177208_2204 = 0x818 };
enum { Enum_ov003_02177208_4156 = 0xfb8 };
#else
enum { Enum_ov003_02177208_2204 = 0x89c };
enum { Enum_ov003_02177208_4156 = 0x103c };
#endif

struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov003_02177208
extern "C" ARM void func_ov003_02177208(char* arg0) {
    struct MenuLayout_0207fdcc_2* var0 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02177208_2204);
    ShowMenuLayoutWindow_02080c20(var0, 9);
    SetMenuLayoutWindowPalette_02080c68(var0, 9, 0);
    SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var0, 0x57, *(unsigned char*)(arg0 + Enum_ov003_02177208_4156));
    func_02080b2c(var0, 0x58);
    func_02080b2c(var0, 0x59);
    OpenMenuLayoutWindow_020813ec(var0, 9);
}
