#include <globaldefs.h>

#if defined(jpn)
#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"

class Struct_ov004_0216bb1c {
public:
    virtual void inline_ov004_0216bb1c_19(); virtual void inline_ov004_0216bb1c_20(); virtual void inline_ov004_0216bb1c_21(); virtual void inline_ov004_0216bb1c_22();
    virtual void inline_ov004_0216bb1c_23(); virtual void inline_ov004_0216bb1c_24(); virtual void inline_ov004_0216bb1c_25();
    virtual void inline_ov004_0216bb1c_26(Vector3i* arg0);
    virtual Vector3i inline_ov004_0216bb1c_29();
    virtual void inline_ov004_0216bb1c_31(); virtual void inline_ov004_0216bb1c_33(); virtual void inline_ov004_0216bb1c_37();
    virtual void inline_ov004_0216bb1c_39(); virtual void inline_ov004_0216bb1c_40(); virtual void inline_ov004_0216bb1c_41(); virtual void inline_ov004_0216bb1c_42();
    virtual void inline_ov004_0216bb1c_43(); virtual void inline_ov004_0216bb1c_44(); virtual void inline_ov004_0216bb1c_45(); virtual void inline_ov004_0216bb1c_46();
    virtual void inline_ov004_0216bb1c_47(); virtual void inline_ov004_0216bb1c_48(); virtual void inline_ov004_0216bb1c_49(); virtual void inline_ov004_0216bb1c_50();
    virtual void inline_ov004_0216bb1c_51(); virtual void inline_ov004_0216bb1c_52(); virtual void inline_ov004_0216bb1c_53(); virtual void inline_ov004_0216bb1c_54();
    virtual void inline_ov004_0216bb1c_55(); virtual void inline_ov004_0216bb1c_56(); virtual void inline_ov004_0216bb1c_57(); virtual void inline_ov004_0216bb1c_58();
    virtual void inline_ov004_0216bb1c_59(); virtual void inline_ov004_0216bb1c_60(); virtual void inline_ov004_0216bb1c_61(); virtual void inline_ov004_0216bb1c_62();
    virtual void inline_ov004_0216bb1c_63(); virtual void inline_ov004_0216bb1c_64(); virtual void inline_ov004_0216bb1c_65(); virtual void inline_ov004_0216bb1c();
    virtual void inline_ov004_0216bb1c_2(); virtual void inline_ov004_0216bb1c_3(); virtual void inline_ov004_0216bb1c_4(); virtual void inline_ov004_0216bb1c_5();
    virtual void inline_ov004_0216bb1c_6(); virtual void inline_ov004_0216bb1c_7(); virtual void inline_ov004_0216bb1c_8(); virtual void inline_ov004_0216bb1c_9();
    virtual void inline_ov004_0216bb1c_10(); virtual void inline_ov004_0216bb1c_11(); virtual void inline_ov004_0216bb1c_12(); virtual void inline_ov004_0216bb1c_13();
    virtual void inline_ov004_0216bb1c_14(); virtual void inline_ov004_0216bb1c_15();
    virtual void inline_ov004_0216bb1c_16(int arg0);
    virtual void inline_ov004_0216bb1c_17();
    virtual void inline_ov004_0216bb1c_18(int arg0);
    char unknown_4_[0x1c];
    const char* unknown_20_;
    char unknown_24_[0x12];
    unsigned short unknown_36_;
    short unknown_38_;
    char unknown_3a_[0xa];
    unsigned char unknown_44_0_ : 4;
};

struct Struct_ov004_0216bb1c_2 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
};

struct Struct_ov004_0216bb1c_3 {
    Struct_ov004_0216bb1c_2 unknown_0_[4];
    int unknown_40_;
    unsigned char unknown_44_;
    unsigned char unknown_45_;
    unsigned char unknown_46_;
    unsigned char unknown_47_;
};

struct Struct_ov004_0216bb1c_4 {
    char unknown_0_[0x4000];
    Struct_ov004_0216bb1c_3 unknown_4000_;
};

struct Struct_ov004_0216bb1c_5 {
    char unknown_0_[0x3c40];
    Struct_ov004_0216bb1c_4 unknown_3c40_;
};

struct Struct_ov004_02171034 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_[1];
    unsigned char unknown_4_;
    char unknown_5_[5];
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
};

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" Struct_ov004_0216bb1c* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" int func_ov023_021f6f10(Struct_ov004_0216bb1c* arg0);
extern "C" void* func_ov023_021fa598(Struct_ov004_0216bb1c* arg0);
extern "C" const char* FindStringInList_02072a68(void* stringList, int stringId);
extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" void func_ov011_02184ad8(void* arg0);
extern "C" void* func_ov004_0216ae9c(void* arg0, int arg1);
extern "C" void func_ov023_021f8120(void* arg0);
extern "C" void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, unsigned char arg8);
extern "C" void func_ov004_0216b06c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov004_0216b120(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov004_0216b010(void* arg0, int arg1, int arg2);

extern Struct_ov004_02171034 data_ov004_02171034;

static inline Struct_ov004_0216bb1c_3* inline_ov004_0216bb1c_27(GameState* arg0) {
    return &((Struct_ov004_0216bb1c_5*)arg0)->unknown_3c40_.unknown_4000_;
}

// JPN: func_ov004_0216bb1c
extern "C" ARM int func_ov004_0216bb1c(void* arg0) {
    int var0;
    int var1;
    int var3;
    Struct_ov004_0216bb1c_3* var4;
    Struct_ov004_0216bb1c_3* var6;
    Vector3i var7;

    var4 = inline_ov004_0216bb1c_27(GameState::GetInstance());
    var0 = var4->unknown_44_;

    var6 = inline_ov004_0216bb1c_27(GameState::GetInstance());

    func_ov004_0216afb0(arg0, 0x37, 2, 0xd3, 6, 0x46, 4, 0xa, 1);

    if (var6->unknown_45_ != 0) {
        func_ov004_0216afb0(arg0, 0x5a, 2, 0xd3, 0x1f, 0x3c, 6, 8, 1);
        Struct_ov004_0216bb1c* var11 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x5a);
        if (var11) {
            var11->inline_ov004_0216bb1c_16(0xd);
        }
    }

    func_ov004_0216b120(arg0, 0x28, 2, 0xd3, 2, 0x10, 0xcb, 1);

    var3 = 0;

    func_ov004_0216afb0(arg0, 0x38, 2, 0xd3, 0x3e7, 7, var3 + 0x13, 0xa, 1);
    func_ov004_0216afb0(arg0, 0x39, 2, 0xd3, 0x3e7, 0x57, var3 + 0x13, 0xa, 1);
    func_ov004_0216afb0(arg0, 0x3a, 2, 0xd3, 0x15, 0xab, var3 + 0x12, 0xa, 1);
    func_ov004_0216afb0(arg0, 0x47, 2, 0xd3, 0x3e7, 0xa1, var3 + 0x15, 8, 1);
    func_ov004_0216b06c(arg0, 0x96, 2, 0xd3, 0xb6, var3 + 0x14, 8, 2);

    var3 += 0xc;
    if (var0 > 1) {
        switch (var0) {
        case 2: var3 += 2; break;
        case 3: var3 += 1; break;
        }

        for (var1 = 1; var1 < var0; var1++) {
            int var15 = var1 + var1 * 2;
            func_ov004_0216afb0(arg0, var15 + 0x38, 2, 0xd3, 0x3e7, 0x16, var3 + 0x13, 0xa, 1);
            func_ov004_0216afb0(arg0, var15 + 0x39, 2, 0xd3, 0x3e7, 0x57, var3 + 0x13, 0xa, 1);
            func_ov004_0216afb0(arg0, var15 + 0x3a, 2, 0xd3, 0x15, 0xab, var3 + 0x12, 0xa, 1);
            func_ov004_0216afb0(arg0, var1 + 0x47, 2, 0xd3, 0x3e7, 0xa1, var3 + 0x15, 8, 1);
            func_ov004_0216b06c(arg0, var1 + 0x96, 2, 0xd3, 0xb6, var3 + 0x14, 8, 2);
            var3 += 0xc;
        }
        if (var0 == 4) var3 -= 1;
    }

    func_ov004_0216b120(arg0, 0x29, 2, 0xd3, 2, var3 + 0x14, 0xcb, 1);
    func_ov004_0216afb0(arg0, 0x44, 2, 0xd3, 0x13, 7, var3 + 0x17, 0xa, 1);

    if (data_ov004_02171034.unknown_a_ != 0) {
        func_ov004_0216b06c(arg0, 0x9a, 2, 0xd3, 0x7f, var3 + 0x18, 8, 4);
        func_ov004_0216afb0(arg0, 0x4f, 2, 0xd3, 0x34, 0x9e, var3 + 0x19, 0xa, 1);
    }
    if (data_ov004_02171034.unknown_4_ < 0xa) {
        func_ov004_0216b06c(arg0, 0x9d, 2, 0xd3, 0xa4, var3 + 0x18, 8, 1);
    }
    func_ov004_0216b06c(arg0, 0x9b, 2, 0xd3, 0xa4, var3 + 0x18, 8, 2);
    func_ov004_0216afb0(arg0, 0x50, 2, 0xd3, 0x34, 0xb3, var3 + 0x19, 0xa, 1);
    if (data_ov004_02171034.unknown_2_ < 0xa) {
        func_ov004_0216b06c(arg0, 0x9e, 2, 0xd3, 0xb9, var3 + 0x18, 8, 1);
    }
    func_ov004_0216b06c(arg0, 0x9c, 2, 0xd3, 0xb9, var3 + 0x18, 8, 2);
    func_ov004_0216afb0(arg0, 0x45, 2, 0xd3, 0x14, 7, var3 + 0x22, 0xa, 1);
    func_ov004_0216afb0(arg0, 0x46, 2, 0xd3, 0x3e7, 0x6e, var3 + 0x22, 0xa, 1);

    for (int var17 = 0; var17 < var0; var17++) {
        void* var18 = GetMenuObjectList_ov011_021849c8(arg0);
        Struct_ov004_0216bb1c* var19 = FindMenuObjectById_ov023_021f6880(var18, var17 * 3 + 0x38);
        if (var19) {
            var19->unknown_20_ = var4->unknown_0_[var17].unknown_0_;
        }

        int var20 = var4->unknown_0_[var17].unknown_c_;
        if (var20 >= 0 && var20 < 0xd) {
            switch (var20) {
            case 0: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0x3e7); break;
            case 1: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 7); break;
            case 2: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 8); break;
            case 3: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 9); break;
            case 4: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xa); break;
            case 5: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xb); break;
            case 6: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xc); break;
            case 7: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xd); break;
            case 8: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xe); break;
            case 9: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0xf); break;
            case 10: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0x10); break;
            case 11: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0x11); break;
            case 12: func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0x12); break;
            }
            if (inline_ov004_0216bb1c_27(GameState::GetInstance())->unknown_46_ == 1) {
                func_ov004_0216b010(arg0, var17 * 3 + 0x39, 0x46);
            }
        }

        int var23 = var4->unknown_0_[var17].unknown_d_;
        if (var23 >= 0 && var23 <= 0xa) {
            switch (var23) {
            case 0: func_ov004_0216b010(arg0, var17 + 0x47, 0x3e7); break;
            case 1: func_ov004_0216b010(arg0, var17 + 0x47, 0x16); break;
            case 2: func_ov004_0216b010(arg0, var17 + 0x47, 0x17); break;
            case 3: func_ov004_0216b010(arg0, var17 + 0x47, 0x18); break;
            case 4: func_ov004_0216b010(arg0, var17 + 0x47, 0x19); break;
            case 5: func_ov004_0216b010(arg0, var17 + 0x47, 0x1a); break;
            case 6: func_ov004_0216b010(arg0, var17 + 0x47, 0x1b); break;
            case 7: func_ov004_0216b010(arg0, var17 + 0x47, 0x1c); break;
            case 8: func_ov004_0216b010(arg0, var17 + 0x47, 0x1d); break;
            case 9: func_ov004_0216b010(arg0, var17 + 0x47, 0x1e); break;
            case 10: func_ov004_0216b010(arg0, var17 + 0x47, 0x1f); break;
            }
        }

        int var26;
        void* var51 = GetMenuObjectList_ov011_021849c8(arg0);
        int var25 = var17 * 3 + 0x39;
        short var50 = var25;
        Struct_ov004_0216bb1c* var52 = FindMenuObjectById_ov023_021f6880(var51, var50);
        if (!var52) {
            var26 = 0;
        } else {
            const char* var53 = var52->unknown_20_;
            if (!var53) {
                Struct_ov004_0216bb1c* var54 = FindMenuObjectById_ov023_021f6880(var51, var52->unknown_36_);
                if (func_ov023_021f6f10(var54) == 4) {
                    var53 = FindStringInList_02072a68(func_ov023_021fa598(var54), var52->unknown_38_);
                }
            }
            var26 = 0;
            if (var53) {
                var26 = GetStringLength_020d2ff0(var53);
                var26 = (var26 * var52->unknown_44_0_) >> 1;
            }
        }
        Struct_ov004_0216bb1c* var27 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), var25);
        if (var27) {
            const Vector3i& var28 = var27->inline_ov004_0216bb1c_29();
            var7 = var28;
            var7.x = var7.x + ((var26 + 2) << 12);
            var7.y = var7.y + 0x2000;

            Struct_ov004_0216bb1c* var29 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), var17 + 0x47);
            if (var29) {
                var29->inline_ov004_0216bb1c_26(&var7);
                unsigned char var30 = var4->unknown_0_[var17].unknown_d_;
                if (var30 == 0xa) {
                    var29->inline_ov004_0216bb1c_16(0xd);
                } else if (var30 != 0) {
                    var29->inline_ov004_0216bb1c_16(5);
                }
            }
        }

        unsigned short var31 = var4->unknown_0_[var17].unknown_e_;
        Struct_ov004_0216bb1c* var32 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), var17 + 0x96);
        if (var32) {
            var32->inline_ov004_0216bb1c_18(var31);
        }
    }

    int var33 = var4->unknown_40_;
    int var34 = 0;
    if (var33 >= 1100 && var33 < 1200) var34 = 1;
    else if (var33 >= 100 && var33 < 200) var34 = 2;
    else if (var33 >= 1200 && var33 < 1300) var34 = 3;
    else if (var33 >= 1300 && var33 < 1400) var34 = 4;
    else if (var33 >= 4200 && var33 < 4300) var34 = 5;
    else if (var33 >= 1500 && var33 < 1600) var34 = 6;
    else if (var33 >= 5800 && var33 < 5900) var34 = 7;
    else if (var33 >= 1800 && var33 < 1900) var34 = 8;
    else if (var33 >= 1900 && var33 < 2000) var34 = 9;
    else if (var33 >= 200 && var33 < 300) var34 = 0xa;
    else if (var33 >= 2100 && var33 < 2200) var34 = 0xb;
    else if (var33 >= 2000 && var33 < 2100) var34 = 0xc;
    else if (var33 >= 2200 && var33 < 2300) var34 = 0xd;
    else if (var33 >= 2300 && var33 < 2400) var34 = 0xe;
    else if (var33 >= 5700 && var33 < 5800) var34 = 0xf;
    else if (var33 >= 400 && var33 < 500) var34 = 0x10;

    int var35 = -1;
    switch (var34) {
    case 0: var35 = 0x24; break;
    case 1: var35 = 0x25; break;
    case 2: var35 = 0x26; break;
    case 3: var35 = 0x27; break;
    case 4: var35 = 0x28; break;
    case 5: var35 = 0x29; break;
    case 6: var35 = 0x2a; break;
    case 7: var35 = 0x2b; break;
    case 8: var35 = 0x2c; break;
    case 9: var35 = 0x2d; break;
    case 0xa: var35 = 0x2e; break;
    case 0xb: var35 = 0x2f; break;
    case 0xc: var35 = 0x30; break;
    case 0xd: var35 = 0x31; break;
    case 0xe: var35 = 0x32; break;
    case 0xf: var35 = 0x33; break;
    case 0x10: var35 = 0x47; break;
    }

    if (inline_ov004_0216bb1c_27(GameState::GetInstance())->unknown_47_ != 0) {
        var35 = 0x2bc;
    }
    if (var35 >= 0) {
        func_ov004_0216b010(arg0, 0x46, var35);
    }

    unsigned char var37;
    unsigned char var36;
    unsigned short var38;
    var38 = data_ov004_02171034.unknown_a_;
    var36 = data_ov004_02171034.unknown_2_;
    var37 = data_ov004_02171034.unknown_4_;
    if (var38 != 0) {
        Struct_ov004_0216bb1c* var39 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x9a);
        if (var39) var39->inline_ov004_0216bb1c_18(var38);
    }
    if (var37 < 0xa) {
        Struct_ov004_0216bb1c* var45 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x9d);
        if (var45) var45->inline_ov004_0216bb1c_18(0);
    }
    Struct_ov004_0216bb1c* var40 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x9b);
    if (var40) var40->inline_ov004_0216bb1c_18(var37);
    if (var36 < 0xa) {
        Struct_ov004_0216bb1c* var46 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x9e);
        if (var46) var46->inline_ov004_0216bb1c_18(0);
    }
    Struct_ov004_0216bb1c* var41 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x9c);
    if (var41) var41->inline_ov004_0216bb1c_18(var36);

    void* var42 = func_ov004_0216ae9c(arg0, 0xd3);
    func_ov023_021f8120(var42);

    int var43 = data_ov004_02171034.unknown_10_;
    switch (var0) {
    case 1: func_ov023_021f7eb8(var42, arg0, var43, 6, 0x10, 0x1a, 8, 0, 1, 0); break;
    case 2: func_ov023_021f7eb8(var42, arg0, var43, 6, 0xe, 0x1a, 0xa, 0, 1, 0); break;
    case 3: func_ov023_021f7eb8(var42, arg0, var43, 6, 0xd, 0x1a, 0xb, 0, 1, 0); break;
    case 4: func_ov023_021f7eb8(var42, arg0, var43, 6, 0xc, 0x1a, 0xc, 0, 1, 0); break;
    }

    func_ov011_02184ad8(arg0);
    return 0;
}
#endif
