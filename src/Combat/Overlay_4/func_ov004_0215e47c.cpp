#include <globaldefs.h>

extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: func_ov004_0215e47c
extern "C" ARM void* func_ov004_0215e47c(void* arg0, int arg1) {
    void* var0 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), arg1);
    return var0 ? var0 : 0;
}
