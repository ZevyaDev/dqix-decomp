#include <globaldefs.h>

#if defined(jpn)

#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Struct_02108760_2;
struct Struct_0209c3b4_2;
struct StringList_02072a68_2;
struct Struct_ov004_0216b7bc;

extern "C" void func_0209ca70(void* arg0, int arg1);
extern "C" void func_0205e9f4(struct Struct_02108760_2* arg0, int arg1);
extern "C" void PlayMusic_0209c3b4(struct Struct_0209c3b4_2* manager, int musicIndex);
extern "C" void func_02012028(void* arg0, unsigned char arg1);
extern "C" void* func_ov004_0216b1c4(void* arg0, int arg1);
extern "C" void* func_ov004_0216ae9c(void* arg0, int arg1);
extern "C" void func_ov011_02184ad8(struct Struct_ov004_0216b7bc* arg0);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

class Struct_ov004_0216cb34_3 {
public:
    virtual void inline_ov004_0216cb34(); virtual void inline_ov004_0216cb34_2(); virtual void inline_ov004_0216cb34_3(); virtual void inline_ov004_0216cb34_4();
    virtual void inline_ov004_0216cb34_5(); virtual void inline_ov004_0216cb34_6(); virtual void inline_ov004_0216cb34_7();
    virtual void inline_ov004_0216cb34_8(Vector3i* arg0);
    virtual void inline_ov004_0216cb34_9(); virtual void inline_ov004_0216cb34_10(); virtual void inline_ov004_0216cb34_11(); virtual void inline_ov004_0216cb34_12();
    virtual void inline_ov004_0216cb34_13(); virtual void inline_ov004_0216cb34_14(); virtual void inline_ov004_0216cb34_15(); virtual void inline_ov004_0216cb34_16();
    virtual void inline_ov004_0216cb34_17();
    virtual void inline_ov004_0216cb34_18(int arg0);
    virtual void inline_ov004_0216cb34_19(); virtual void inline_ov004_0216cb34_20(); virtual void inline_ov004_0216cb34_21(); virtual void inline_ov004_0216cb34_22();
    virtual void inline_ov004_0216cb34_23(); virtual void inline_ov004_0216cb34_24(); virtual void inline_ov004_0216cb34_25(); virtual void inline_ov004_0216cb34_26();
    virtual void inline_ov004_0216cb34_27(); virtual void inline_ov004_0216cb34_28(); virtual void inline_ov004_0216cb34_29(); virtual void inline_ov004_0216cb34_30();
    virtual void inline_ov004_0216cb34_31();
    virtual void inline_ov004_0216cb34_32(int arg0);
    char unknown_4_[8];
    unsigned char unknown_c_;
};

struct Struct_ov004_0216cb34 {
    char unknown_0_[0x868];
    int unknown_868_;
    char unknown_86c_[0x17df - 0x86c];
    unsigned char unknown_17df_;
    char unknown_17e0_[0x17fb - 0x17e0];
    unsigned char unknown_17fb_;
};

struct Struct_ov004_0216cb34_4 {
    char unknown_0_[0x50];
    unsigned int unknown_50_;
};

struct Struct_ov004_0216cb34_2 {
    char unknown_0_[0x6120];
    Struct_ov004_0216cb34_4 unknown_6120_;
    char unknown_6174_[0x7c9f - 0x6174];
    unsigned char unknown_7c9f_;
};

struct Struct_ov004_021718b0 {
    unsigned char unknown_0_;
    char unknown_1_[4];
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned short unknown_8_;
    char unknown_a_[6];
    int unknown_10_;
};

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" Struct_ov004_0216cb34_3* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);
extern "C" void func_ov004_0216b418(void* arg0, int arg1, int arg2);
extern "C" int func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov004_0216b20c(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021f9ba8(void* arg0, unsigned short arg1);
extern "C" struct StringList_02072a68_2* func_ov023_021fa598(void* arg0);
extern "C" Struct_ov004_0216cb34* GetMessageWindow_020421a0();
extern "C" void StartMessage_0204500c(Struct_ov004_0216cb34* window, void* text, int arg2);
extern "C" void func_ov023_021f8120(void* arg0);
extern "C" void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
extern "C" void func_ov004_0216bb1c(void* arg0);

extern char gMusicManager_02109bf4[];
extern struct Struct_02108760_2 gSoundEffectManager_02108760;
extern Struct_ov004_021718b0 data_ov004_02171034;

// JPN: func_ov004_0216cb34
extern "C" ARM int func_ov004_0216cb34(void* arg0) {
    GameState* var0;
    Struct_ov004_0216cb34_2* var1;
    int var2;
    int var3;
    int var4;
    int var22;
    Struct_ov004_0216cb34_3* var5;

    func_0209ca70(gMusicManager_02109bf4, 3);
    func_0205e9f4(&gSoundEffectManager_02108760, 3);
    data_ov004_02171034.unknown_7_ = 3;
    data_ov004_02171034.unknown_6_ = 3;
    data_ov004_02171034.unknown_8_ = 0;
    if (data_ov004_02171034.unknown_5_ != 4) {
        PlayMusic_0209c3b4((struct Struct_0209c3b4_2*)gMusicManager_02109bf4, 2);
    }
    var0 = GameState::GetInstance();
    GetParty_02010828(var0);
    var2 = 0;
    var3 = 0;
    data_ov004_02171034.unknown_0_ = 0;
    FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0xb)->unknown_c_ |= 8;

    if (data_ov004_02171034.unknown_5_ == 0) {
        FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 1)->unknown_c_ |= 8;
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0xc9);
        return 0;
    } else if (data_ov004_02171034.unknown_5_ == 1) {
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0xc);
        if (var5) var5->unknown_c_ &= ~8;
        var1 = (Struct_ov004_0216cb34_2*)var0;
        Struct_ov004_0216cb34_4* var26 = &var1->unknown_6120_;
        if (var26->unknown_50_ & 2) {
            Vector3i var25;
            var25.x = 0x91000;
            var25.y = 0x42000;
            var5->inline_ov004_0216cb34_8(&var25);
            var2 = 1;
            var3 = 2;
            var22 = 5;
            var4 = 0x130;
        } else if (var26->unknown_50_ & 1) {
            Vector3i var24;
            var24.x = 0x91000;
            var24.y = 0x34000;
            var24.z = 0;
            var5->inline_ov004_0216cb34_8(&var24);
            var2 = 1;
            var3 = 1;
            var4 = 0x12f;
            var22 = 4;
        } else {
            var2 = 1;
            var4 = 0x12e;
            var3 = 0;
            var22 = 3;
        }
        func_ov004_0216b1c4(arg0, var4);
        data_ov004_02171034.unknown_8_ = var4;
        func_ov004_0216b418(arg0, var2, var3);
        for (int var6 = 0; var6 < var22; var6++) {
            func_ov004_0216b2c8(arg0, var4, var6 + 0x32, var6);
        }
        switch (var3) {
        case 0:
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
            if (var5) {
                var5->inline_ov004_0216cb34_18(8);
                var5->inline_ov004_0216cb34_32(8);
            }
            func_ov004_0216b20c(arg0, 0x33, 0x96, 0);
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x34);
            if (var5) {
                var5->inline_ov004_0216cb34_18(0xa);
                var5->inline_ov004_0216cb34_32(0xa);
            }
            break;
        case 1:
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
            if (var5) {
                var5->inline_ov004_0216cb34_18(8);
                var5->inline_ov004_0216cb34_32(8);
            }
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x33);
            if (var5) {
                var5->inline_ov004_0216cb34_18(0xb);
                var5->inline_ov004_0216cb34_32(0xb);
            }
            func_ov004_0216b20c(arg0, 0x34, 0x96, 0);
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x35);
            if (var5) {
                var5->inline_ov004_0216cb34_18(0xa);
                var5->inline_ov004_0216cb34_32(0xa);
            }
            break;
        case 2:
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
            if (var5) {
                var5->inline_ov004_0216cb34_18(8);
                var5->inline_ov004_0216cb34_32(8);
            }
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x33);
            if (var5) {
                var5->inline_ov004_0216cb34_18(0xb);
                var5->inline_ov004_0216cb34_32(0xb);
            }
            func_ov004_0216b20c(arg0, 0x34, 0x12c, 0);
            func_ov004_0216b20c(arg0, 0x35, 0x96, 0);
            var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x36);
            if (var5) {
                var5->inline_ov004_0216cb34_18(0xa);
                var5->inline_ov004_0216cb34_32(0xa);
            }
            break;
        }
        int var7 = var1->unknown_7c9f_;
        if (var7 > 0) {
            Struct_ov004_0216cb34_3* var8 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), var4);
            Struct_ov004_0216cb34_3* var9;
            if (var8 == 0) {
                var9 = 0;
            } else if (func_ov023_021f6f10(var8) != 7) {
                var9 = 0;
            } else {
                var9 = var8;
            }
            if (var9) {
                func_ov023_021f9ba8(var9, var7);
            }
            var1->unknown_7c9f_ = 0;
        }
    } else if (data_ov004_02171034.unknown_5_ == 2) {
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0xc);
        if (var5) var5->unknown_c_ &= ~8;
        Vector3i var23;
        var23.x = 0x90000;
        var23.y = 0x1b000;
        var5->inline_ov004_0216cb34_8(&var23);
        var2 = 2;
        var3 = 0;
        var4 = 0x12d;
        func_ov004_0216b1c4(arg0, var4);
        data_ov004_02171034.unknown_8_ = var4;
        func_ov004_0216b418(arg0, var2, var3);
        for (int var10 = 0; var10 < 2; var10++) {
            func_ov004_0216b2c8(arg0, var4, var10 + 0x32, var10);
        }
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
        if (var5) {
            var5->inline_ov004_0216cb34_18(5);
            var5->inline_ov004_0216cb34_32(5);
        }
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x33);
        if (var5) {
            var5->inline_ov004_0216cb34_18(0xa);
            var5->inline_ov004_0216cb34_32(0xa);
        }
    } else if (data_ov004_02171034.unknown_5_ == 3) {
        var2 = 3;
        var4 = 0x12c;
        func_ov004_0216b1c4(arg0, var4);
        data_ov004_02171034.unknown_8_ = var4;
        func_ov004_0216b418(arg0, var2, var3);
        func_ov004_0216b2c8(arg0, var4, 0x32, var3);
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
        if (var5) {
            var5->inline_ov004_0216cb34_18(8);
            var5->inline_ov004_0216cb34_32(8);
        }
    } else if (data_ov004_02171034.unknown_5_ == 4) {
        func_02012028(var0, 0);
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x190);
        return 0;
    } else if (data_ov004_02171034.unknown_5_ == 5) {
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0xc);
        if (var5) var5->unknown_c_ &= ~8;
        var2 = 1;
        var3 = 0;
        var4 = 0x12e;
        func_ov004_0216b1c4(arg0, var4);
        data_ov004_02171034.unknown_8_ = var4;
        func_ov004_0216b418(arg0, var2, var3);
        for (int var11 = 0; var11 < 3; var11++) {
            func_ov004_0216b2c8(arg0, var4, var11 + 0x32, var11);
        }
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x32);
        if (var5) {
            var5->inline_ov004_0216cb34_18(0);
            var5->inline_ov004_0216cb34_32(0);
        }
        func_ov004_0216b20c(arg0, 0x33, 0x96, 0);
        var5 = FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), 0x34);
        if (var5) {
            var5->inline_ov004_0216cb34_18(0xa);
            var5->inline_ov004_0216cb34_32(0xa);
        }
    } else if (data_ov004_02171034.unknown_5_ == 6) {
        func_02012028(var0, 0);
        void* var12 = GetMenuObjectList_ov011_021849c8(arg0);
        Struct_ov004_0216cb34_3* var13 = FindMenuObjectById_ov023_021f6880(var12, 1);
        if (var13 == 0) return 0;
        if (func_ov023_021f6f10(var13) != 0xb) return 0;
        var13->unknown_c_ |= 8;
        Struct_ov004_0216cb34_3* var14 = FindMenuObjectById_ov023_021f6880(var12, 0x192);
        if (var14 == 0) return 0;
        if (func_ov023_021f6f10(var14) != 4) return 0;
        struct StringList_02072a68_2* var15 = func_ov023_021fa598(var14);
        Struct_ov004_0216cb34* var16 = GetMessageWindow_020421a0();
        var16->unknown_868_ = 1;
        StartMessage_0204500c(var16, FindStringInList_02072a68(var15, 0x5dc), 0);
        var16->unknown_17fb_ = 0;
        var16->unknown_17df_ = 0;
        func_02012028(var0, 0);
        return 0;
    } else if (data_ov004_02171034.unknown_5_ == 7) {
        func_02012028(var0, 0);
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x258);
        return 0;
    }

    func_ov011_02184ad8((struct Struct_ov004_0216b7bc*)arg0);
    int var17;
    void* var18 = func_ov004_0216ae9c(arg0, 0xd2);
    func_ov023_021f8120(var18);
    var17 = 0x60;
    switch (var2) {
    case 0:
        func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0x12, 5, 0, 1, 0);
        var17 += 0xb40;
        break;
    case 1:
        switch (var3) {
        case 0:
            func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0x14, 6, 0, 1, 0);
            var17 += 0xf00;
            break;
        case 1:
            func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0x1d, 8, 0, 1, 0);
            var17 += 0x1d00;
            break;
        case 2:
            func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0x1d, 0xa, 0, 1, 0);
            var17 += 0x2440;
            break;
        }
        break;
    case 2:
        func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0x14, 5, 0, 1, 0);
        var17 += 0xc80;
        break;
    case 3:
        func_ov023_021f7eb8(var18, arg0, var17, 1, 1, 0xc, 3, 0, 1, 0);
        var17 += 0xb40;
        break;
    }
    data_ov004_02171034.unknown_10_ = var17;
    func_ov011_02184ad8((struct Struct_ov004_0216b7bc*)arg0);
    if (var2 == 1 && data_ov004_02171034.unknown_5_ != 5) {
        func_ov004_0216bb1c(arg0);
    }
    return 0;
}

#endif
