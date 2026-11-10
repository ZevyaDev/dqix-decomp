#include <globaldefs.h>

struct MenuLayout_02081164;

extern "C" void SetMenuLayoutTextStringId_0208103c(void* menuLayout, int textId, int stringId);
extern "C" void func_0208108c(void* arg0, int arg1);
extern "C" void SetMenuLayoutWindowFrameless_02081164(struct MenuLayout_02081164* menuLayout, int windowId, int isFrameless);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov014_021884cc
extern "C" ARM void func_ov014_021884cc(void* arg0) {
    short var0 = *(short*)((char*)arg0 + 0x172);
    short var1 = var0 + 0x10;
    if (var0 == 9) {
        short var2 = *(short*)((char*)arg0 + 0x174);
        if (var2 >= 0) {
            var1 = var2 - 4;
        }
    }
    SetMenuLayoutTextStringId_0208103c(*(void**)((char*)arg0 + 0xc0), 0x19, var1);
    func_0208108c(*(void**)((char*)arg0 + 0xc0), 0x19);
    SetMenuLayoutWindowFrameless_02081164(*(struct MenuLayout_02081164**)((char*)arg0 + 0xc0), 3, 1);
    SetMenuLayoutWindowPalette_02080c68(*(void**)((char*)arg0 + 0xc0), 3, 1);
    OpenMenuLayoutWindow_020813ec(*(void**)((char*)arg0 + 0xc0), 3);
}
