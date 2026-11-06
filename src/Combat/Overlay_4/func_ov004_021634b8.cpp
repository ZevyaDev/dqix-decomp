#include <globaldefs.h>

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);

// USA: func_ov004_021634b8
extern "C" ARM void func_ov004_021634b8(void* arg0, int arg1, int arg2) {
	void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
	void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
	if (var1 != NULL) {
		*((unsigned char*)var1 + 0x3a) = (unsigned char)arg2;
	}
}
