#include <globaldefs.h>

struct Struct_ov023_021f6600 { char unknown_0_[0xc]; unsigned char unknown_c_; };

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" Struct_ov023_021f6600* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: func_ov023_021f6600
extern "C" ARM void func_ov023_021f6600(void* arg0, int arg1, int arg2) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    Struct_ov023_021f6600* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    if (var1 != NULL) {
        var1->unknown_c_ &= ~arg2;
    }
}
