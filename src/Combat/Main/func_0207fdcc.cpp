#include <globaldefs.h>
extern "C" void func_0204c804(void*);

struct TextWindow_0207fdcc;

struct MenuLayout_0207fdcc_2 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    struct TextWindow_0207fdcc* unknown_30_;
};

extern "C" struct TextWindow_0207fdcc* func_02081da8(struct MenuLayout_0207fdcc_2* arg0, int arg1);

// USA: CloseMenuLayoutWindow_0207fdcc
extern "C" ARM void CloseMenuLayoutWindow_0207fdcc(struct MenuLayout_0207fdcc_2* menuLayout, int windowId) {
    struct TextWindow_0207fdcc* window;
    if (menuLayout->unknown_30_ == NULL) return;
    window = func_02081da8(menuLayout, windowId);
    if (window == NULL) return;
    func_0204c804((void*)(window));
}
