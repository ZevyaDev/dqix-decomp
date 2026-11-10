#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#if defined(jpn)
#define func_ov014_0218854c func_ov014_0218942c
#endif

struct MenuLayout_02081164;

extern "C" void SetMenuLayoutTextStringId_0208103c(void* menuLayout, int textId, int stringId);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);
extern "C" void SetMenuLayoutWindowFrameless_02081164(struct MenuLayout_02081164* menuLayout, int windowId, int isFrameless);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov014_0218854c
extern "C" ARM void func_ov014_0218854c(void* arg0) {
    int var0 = (*((unsigned char*)arg0 + 0x17e) & 8) ? 1 : 0;
    short var1 = 0x1b + var0;
    SetMenuLayoutTextStringId_0208103c(*(void**)((char*)arg0 + 0xc0), 0x1a, var1);
#if !defined(jpn)
    func_02080798(*(void**)((char*)arg0 + 0xc0), 0x1a, 1);
#endif
    SetMenuLayoutWindowFrameless_02081164(*(struct MenuLayout_02081164**)((char*)arg0 + 0xc0), 4, 1);
    SetMenuLayoutWindowPalette_02080c68(*(void**)((char*)arg0 + 0xc0), 4, 1);
    OpenMenuLayoutWindow_020813ec(*(void**)((char*)arg0 + 0xc0), 4);
}
