#include <globaldefs.h>

#if defined(jpn)
extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);

// JPN: func_ov004_02168eac
extern "C" ARM void func_ov004_02168eac(void* arg0, int arg1, int arg2) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    if (var1 != NULL) {
        *((unsigned char*)var1 + 0xc) |= arg2;
    }
}

// JPN: func_ov004_02168ed8
extern "C" ARM void func_ov004_02168ed8(void* arg0, int arg1, int arg2) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    if (var1 != NULL) {
        *((unsigned char*)var1 + 0xc) &= ~arg2;
    }
}
#endif
