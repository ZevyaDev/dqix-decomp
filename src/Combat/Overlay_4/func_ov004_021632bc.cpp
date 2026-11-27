#include <globaldefs.h>

extern "C" void* FindMenuObject_ov004_0215e47c(void* menu, int id);
extern "C" void* GetMenuCallbacks_ov011_02184a30(void* menu, unsigned int* outCallbackCount);

struct Struct_ov004_021632bc {
    char unknown_0_[0x1868];
    void* unknown_1868_;
    void* unknown_186c_;
};

// USA: func_ov004_021632bc
extern "C" ARM int func_ov004_021632bc(void* arg0) {
    Struct_ov004_021632bc* var0 = (Struct_ov004_021632bc*)FindMenuObject_ov004_0215e47c(arg0, 0x82);
    if (var0 == NULL) return 0;
    unsigned int var1 = 0;
    char* var2 = (char*)GetMenuCallbacks_ov011_02184a30(arg0, &var1);
    var0->unknown_1868_ = var2 + 0x2c;
    var0->unknown_186c_ = var2 + 0x30;
    return 0;
}
