#include <globaldefs.h>

#if defined(jpn)

struct Struct_ov004_02157594 {
    char unknown_0_[0x5c];
    short unknown_5c_, unknown_5e_;
    unsigned char unknown_60_;
    unsigned char unknown_61_;
};
struct Struct_ov004_02157594_2 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x20 - 0xd];
    char* unknown_20_;
    char unknown_24_[0x104 - 0x24];
    short unknown_104_, unknown_106_;
};
struct Struct_ov004_021707c8 {
    void* unknown_0_;
    short* unknown_4_;
};
struct StringList_02072a68_2;
extern Struct_ov004_021707c8 data_ov004_021707c8;
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" void* FindMenuObjectById_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" StringList_02072a68_2* func_ov023_021fa598(void*);
extern "C" char* FindStringInList_02072a68(StringList_02072a68_2*, int);
extern "C" void func_ov023_021f9b30(Struct_ov004_02157594*, unsigned short, unsigned short, unsigned short);
extern "C" void func_ov023_021f9d14(Struct_ov004_02157594*, void*);
extern "C" void RedrawMenuWindow_ov023_021f809c(void*, void*);
extern "C" int func_ov004_021560e8(void*);

// JPN: func_ov004_02157594
extern "C" ARM int func_ov004_02157594(void* arg0) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    short var2;
    Struct_ov004_02157594* var1 = (Struct_ov004_02157594*)FindMenuObjectById_ov023_021f6880(var0, 3);
    if (!var1) return 0;
    if (func_ov023_021f6f10(var1) != 7) return 0;
    var2 = var1->unknown_5c_;
    short var3 = var1->unknown_5e_;
    void* var4 = FindMenuObjectById_ov023_021f6880(var0, 0xb);
    if (!var4) return 0;
    if (func_ov023_021f6f10(var4) != 4) return 0;
    StringList_02072a68_2* var5 = func_ov023_021fa598(var4);
    short var7 = var2 * 16;
    int var6 = 0;
    for (short var8 = 0; var8 < 16; var8++) {
        int var9 = var8 + 0x6e;
        Struct_ov004_02157594_2* var10 = (Struct_ov004_02157594_2*)FindMenuObjectById_ov023_021f6880(var0, var9);
        if (!var10 || func_ov023_021f6f10(var10) != 8) continue;
        var10->unknown_20_ = NULL;
        var10->unknown_c_ &= ~8;
        int var11 = var8 + var7;
        if (data_ov004_021707c8.unknown_4_[var11] > 0) {
            func_ov023_021f9b30(var1, (unsigned short)var9, (unsigned short)(var8 >> 1), var8 & 1);
            var10->unknown_20_ = FindStringInList_02072a68(var5, data_ov004_021707c8.unknown_4_[var11]);
            var6++;
        } else {
            func_ov023_021f9b30(var1, 0, (unsigned short)(var8 >> 1), var8 & 1);
            var10->unknown_c_ |= 8;
        }
    }
    if (var6 == 0) func_ov023_021f9b30(var1, 0x6e, 0, 0);
    func_ov023_021f9d14(var1, arg0);
    var1->unknown_61_ = 0;
    Struct_ov004_02157594_2* var12 = (Struct_ov004_02157594_2*)FindMenuObjectById_ov023_021f6880(var0, 0x33);
    if (!var12) return 0;
    if (func_ov023_021f6f10(var12) != 6) return 0;
    var12->unknown_104_ = var2;
    var12->unknown_106_ = var3;
    RedrawMenuWindow_ov023_021f809c(var12, arg0);
    func_ov004_021560e8(arg0);
    return 0;
}

#endif
