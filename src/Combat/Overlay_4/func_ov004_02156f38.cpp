#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: FindMenuNumber_ov004_02156f38
extern "C" ARM void* FindMenuNumber_ov004_02156f38(void* menu, int id) {
    void* objectList = GetMenuObjectList_ov011_021849c8(menu);
    void* object = FindMenuObjectById_ov023_021f6880(objectList, id);
    if (object) {
        if (func_ov023_021f6f10(object) == 0xf) {
            return object;
        }
    }
    return 0;
}
