#include <globaldefs.h>

struct ScriptValue_ov011_02184c30 {
    int type_0_;
    union { int unknown_0_; float unknown1_0_; } value_4_;
};

extern "C" int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0);
extern "C" int func_ov023_021f6eb8(void* arg0, int arg1);
extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* GetCurrentMenu_ov017_021b2164(void);

// USA: func_ov011_02188384
extern "C" ARM int func_ov011_02188384(struct ScriptValue_ov011_02184c30* arg0, int arg1) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    func_ov023_021f6eb8(GetMenuObjectList_ov011_021849c8(GetCurrentMenu_ov017_021b2164()), var0);
    return 1;
}
