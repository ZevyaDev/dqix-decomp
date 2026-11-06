#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" int func_ov011_02184c30(ScriptValue_ov011_02184c30*);

extern "C" int GetCurrentMenu_ov017_021b2164(void);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);

struct Struct_ov011_02186f74 { char unknown_0_[0xc]; unsigned char unknown_c_; };
extern "C" struct Struct_ov011_02186f74* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: func_ov011_02186f74
extern "C" ARM int func_ov011_02186f74(ScriptValue_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((ScriptValue_ov011_02184c30*)((char*)arg0 + 8));
    struct Struct_ov011_02186f74* var2 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8((void*)GetCurrentMenu_ov017_021b2164()), var0);
    if (!var2) return 0;
    if (var1 != 0) var2->unknown_c_ |= 0x1;
    else var2->unknown_c_ &= ~0x1;
    return 1;
}
