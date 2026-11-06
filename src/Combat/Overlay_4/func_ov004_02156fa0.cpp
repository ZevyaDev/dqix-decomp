#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: func_ov004_02156fa0
extern "C" ARM void* func_ov004_02156fa0(void* arg0, int arg1) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    if (var1) {
        if (func_ov023_021f6f10(var1) == 1) {
            return var1;
        }
    }
    return 0;
}
