#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"

// USA: SetMenuLayoutWindowArray_0207f7f0
extern "C" ARM void SetMenuLayoutWindowArray_0207f7f0(MenuLayout_0207f7f0* menuLayout, TextWindow_0207f7f0_2* windows, int windowCount) {
    unsigned char i;
    menuLayout->pWindows_30_ = windows;
    menuLayout->windowCount_39_ = (unsigned char)windowCount;
    if (menuLayout->pWindows_30_ != NULL && menuLayout->windowCount_39_ != 0) {
        for (i = 1; i < menuLayout->windowCount_39_; i++)
            menuLayout->pWindows_30_[i].pPreviousTextWindow_0_ = &menuLayout->pWindows_30_[i - 1];
    }
}
