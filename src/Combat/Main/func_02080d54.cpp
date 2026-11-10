#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;

struct TextWindow_02080d54 {
    char unknown_0_[0xa8];
    short width_a8_;
    short height_aa_;
    short tileX_ac_;
    short tileY_ae_;
};

extern "C" struct TextWindow_02080d54* func_02081da8(struct MenuLayout_0207fdcc_2* arg0, int arg1);

// USA: IsPointInMenuLayoutWindow_02080d54
extern "C" ARM int IsPointInMenuLayoutWindow_02080d54(struct MenuLayout_0207fdcc_2* menuLayout, int windowId, int x, int y) {
    struct TextWindow_02080d54* window = func_02081da8(menuLayout, windowId);
    short tileRight, tileBottom;
    if (window == NULL) {
        return 0;
    }
    tileRight = window->tileX_ac_ + window->width_a8_;
    tileBottom = window->tileY_ae_ + window->height_aa_;
    if (x >= (short)(window->tileX_ac_ * 8)) {
        if (x < (short)(tileRight * 8)) {
            if (y >= (short)(window->tileY_ae_ * 8)) {
                if (y < (short)(tileBottom * 8)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
