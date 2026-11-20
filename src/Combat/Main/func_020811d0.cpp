#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;
struct TextWindow_0207fdcc;

extern "C" struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);

// USA: func_020811d0
extern "C" ARM int func_020811d0(struct MenuLayout_0207fdcc_2* arg0, int arg1) {
    return FindMenuLayoutWindow_02081da8(arg0, arg1) != NULL;
}
