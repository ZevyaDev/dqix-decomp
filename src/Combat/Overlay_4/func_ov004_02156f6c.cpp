#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: FindMenuWindow_ov004_02156f6c
extern "C" ARM void* FindMenuWindow_ov004_02156f6c(void* menu, int id) {
    void* objectList = GetMenuObjectList_ov011_021849c8(menu);
    void* object = FindMenuObjectById_ov023_021f6880(objectList, id);
    if (object) {
        if (func_ov023_021f6f10(object) == 6) {
            return object;
        }
    }
    return 0;
}
