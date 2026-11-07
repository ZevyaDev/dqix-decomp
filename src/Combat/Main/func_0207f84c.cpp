#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"

struct Struct_0207f510;
struct Struct_0207ef60;
extern "C" void func_0207f510(Struct_0207f510*);
extern "C" void func_0207ef60(Struct_0207ef60*);

// USA: ResetMenuLayout_0207f84c
extern "C" ARM void ResetMenuLayout_0207f84c(MenuLayout_0207f7f0* menuLayout) {
    menuLayout->unknown_0_ = 0;
    func_0207f510((Struct_0207f510*)menuLayout->unknown_4_);
    func_0207ef60((Struct_0207ef60*)menuLayout->unknown_c_);
    menuLayout->unknown_14_ = 0;
    menuLayout->unknown_18_ = 0;
#if defined(jpn)
    menuLayout->unknown_1c_ = -1;
#else
    menuLayout->unknown_20_[0] = menuLayout->unknown_20_[1] = menuLayout->unknown_20_[2] = menuLayout->unknown_1c_ = -1;
#endif
    menuLayout->unknown_2c_ = 0;
    menuLayout->unknown_30_ = 0;
    menuLayout->unknown_34_ = 8;
    menuLayout->unknown_36_ = -1;
    menuLayout->unknown_38_ = 0;
    menuLayout->unknown_39_ = 0;
    menuLayout->unknown_3a_ = 0;
    menuLayout->unknown_3b_ = 0x10;
    menuLayout->unknown_3c_ = 0x10;
}
