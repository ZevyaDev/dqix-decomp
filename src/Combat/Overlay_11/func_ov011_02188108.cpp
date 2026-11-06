#include <globaldefs.h>

struct ScriptValue_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);

extern "C" void* GetCurrentMenu_ov017_021b2164(void);
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);

struct Struct_ov011_02188108 {
    char unknown_0_[0x7c];
    void (*unknown_7c_)(void*, int);
};
struct Struct_ov011_02188108_2 {
    struct Struct_ov011_02188108* unknown_0_;
};
extern "C" struct Struct_ov011_02188108_2* FindMenuObjectById_ov023_021f6880(void*, int);

// USA: func_ov011_02188108
extern "C" ARM int func_ov011_02188108(struct ScriptValue_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct ScriptValue_ov011_02184c30*)((char*)arg0 + 8));
    struct Struct_ov011_02188108_2* var2 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(GetCurrentMenu_ov017_021b2164()), var0);
    if (!var2) return 0;
    var2->unknown_0_->unknown_7c_(var2, var1);
    return 1;
}
