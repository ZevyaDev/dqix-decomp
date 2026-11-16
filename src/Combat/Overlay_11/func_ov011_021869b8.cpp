#if defined(jpn)
#define func_ov009_02184c30 func_ov011_02184c30
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/StringList.h"

struct ScriptValue_ov011_02184c30 {
    int type_0_;
    union { int unknown_0_; float unknown1_0_; } value_4_;
};

struct Struct_ov011_021869b8_5 {
    ScriptValue_ov011_02184c30 unknown_0_;
    ScriptValue_ov011_02184c30 unknown_8_;
    ScriptValue_ov011_02184c30 unknown_10_;
    ScriptValue_ov011_02184c30 unknown_18_;
    ScriptValue_ov011_02184c30 unknown_20_;
};

extern "C" int func_ov009_02184c30(struct ScriptValue_ov011_02184c30* arg0);
extern "C" ARM void* GetCurrentMenu_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" ARM void* GetMenuObjectList_ov011_021849c8(void* menu);

struct Struct_ov011_021869b8 {
    char unknown_0_[0xe8];
    int (*unknown_e8_)(void*);
};
struct Struct_ov011_021869b8_2 {
    struct Struct_ov011_021869b8* unknown_0_;
};
extern "C" ARM struct Struct_ov011_021869b8_2* FindMenuObjectById_ov023_021f6880(void* objectList, int id);

extern "C" ARM int func_ov023_021fbd00(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5,
                                       unsigned char arg6);

extern "C" void* func_020df80c(void* arg0);

struct MenuObjectList_ov004_0215c30c;
struct MenuObject_ov004_0215c30c_2;
extern "C" void AppendMenuObject_ov023_021f67ac(struct MenuObjectList_ov004_0215c30c* objectList, struct MenuObject_ov004_0215c30c_2* object);

extern int data_ov024_021ff17c;

struct Struct_ov011_021869b8_6 {
    char unknown_0_[0x10];

    Struct_ov011_021869b8_6() { func_020df80c(this); }
};

struct Struct_ov011_021869b8_7 : OBJSpriteSet {
    Struct_ov011_021869b8_7() { Reset(); }
    ~Struct_ov011_021869b8_7() { Destroy(); }
};

struct Struct_ov011_021869b8_3 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    char unknown_3c_[0x54 - 0x3c];
    StringList unknown_54_;
    Struct_ov011_021869b8_6 unknown_6c_;
    Struct_ov011_021869b8_6 unknown_7c_;
    StringList unknown_8c_;
    StringList unknown_a4_;
    char unknown_bc_[R(0x128 - 0xbc, 0x12c - 0xbc)];
    Struct_ov011_021869b8_7 unknown_12c_;
    char unknown_180_[R(0x718 - 0x17c, 0x79c - 0x180)];
};

struct Struct_ov011_021869b8_4 {
    void* unknown_0_;
    char unknown_4_[0x20 - 4];
    Struct_ov011_021869b8_3 unknown_20_;

    Struct_ov011_021869b8_4() : unknown_0_(&data_ov024_021ff17c) {}
};

// USA: func_ov011_021869b8
extern "C" ARM int func_ov011_021869b8(struct Struct_ov011_021869b8_5* arg0, int arg1) {
    unsigned char var1;
    void* var2;
    void* var3;
    void* var4;
    int var5;
    int var13[4];
    struct Struct_ov011_021869b8_2* var11;
    void* var12;

    var13[0] = func_ov009_02184c30(&arg0->unknown_0_);
    var13[1] = func_ov009_02184c30(&arg0->unknown_8_);
    var13[2] = func_ov009_02184c30(&arg0->unknown_10_);
    var13[3] = func_ov009_02184c30(&arg0->unknown_18_);

    var1 = 0;
    if (arg1 - 4) var1 = (unsigned char)func_ov009_02184c30(&arg0->unknown_20_);

    var2 = GetCurrentMenu_ov017_021b2164();
    var3 = func_ov011_021845f8(var2, var13[1]);
    if (var3 == 0) return 0;

    ((SafeAllocator*)((char*)var3 + 4))->GetSizeWithLargestBlockRemoved();
    var4 = ((SafeAllocator*)((char*)var3 + 4))->Allocate(R(0x738, 0x7bc));
    if (var4 == 0) return 0;

    var5 = 0;
    var12 = GetMenuObjectList_ov011_021849c8(var2);
    var11 = FindMenuObjectById_ov023_021f6880(var12, var13[3]);
    if (var11 != 0) var5 = var11->unknown_0_->unknown_e8_(var11);

    struct Struct_ov011_021869b8_4 var0;
    memcpy(var4, &var0, sizeof(Struct_ov011_021869b8_4));

    if (func_ov023_021fbd00(var4, var2, var13[0], var13[1], var13[2], var5, var1) == 0) return 0;
    AppendMenuObject_ov023_021f67ac((struct MenuObjectList_ov004_0215c30c*)var12, (struct MenuObject_ov004_0215c30c_2*)var4);
    return 1;
}
