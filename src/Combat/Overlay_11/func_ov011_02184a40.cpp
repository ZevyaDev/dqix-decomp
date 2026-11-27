#include <globaldefs.h>

struct Struct_ov011_02184a40_2 {
    char unknown_0_[0xbc];
    unsigned short runningCallback_bc_;
};

struct Struct_ov011_02184a40 {
    char unknown_0_[0x1b4];
    int (**pCallbacks_1b4_)(void*);
    unsigned int callbackCount_1b8_;
};

// USA: StartMenuCallback_ov011_02184a40
extern "C" ARM void* StartMenuCallback_ov011_02184a40(struct Struct_ov011_02184a40* menu, unsigned int callbackIndex) {
    if (menu->pCallbacks_1b4_ == 0) return menu;
    if (callbackIndex == 0) return menu;
    if (menu->callbackCount_1b8_ <= callbackIndex) return menu;
    void* callbackResult = (void*)menu->pCallbacks_1b4_[callbackIndex](menu);
    if (callbackResult != 0) {
        struct Struct_ov011_02184a40_2* var1 = (struct Struct_ov011_02184a40_2*)((char*)menu + 0x100);
        var1->runningCallback_bc_ = (unsigned short)callbackIndex;
        callbackResult = var1;
    }
    return callbackResult;
}
