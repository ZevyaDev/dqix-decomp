#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;
struct TextWindow_0207fdcc;
extern "C" struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" int func_02080c3c(struct MenuLayout_0207fdcc_2* arg0, int arg1);

// USA: func_ov006_02158080
extern "C" ARM int func_ov006_02158080(struct MenuLayout_0207fdcc_2* arg0, int arg1) {
    if (FindMenuLayoutWindow_02081da8(arg0, arg1) != NULL) {
        if (func_02080c3c(arg0, arg1) != 0) {
            return 1;
        }
    }
    return 0;
}
