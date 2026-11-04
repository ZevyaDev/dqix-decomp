#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include <globaldefs.h>

#if defined(jpn)
struct Struct_020a0b8c;
struct Struct_020a0bcc;
struct Struct_020a095c;
struct Struct_0207cf30_4;
struct Struct_ov002_0215b2c8;
struct Struct_0201099c_10;
struct Struct_0205d81c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
extern "C" void func_020a0bcc(struct Struct_020a0bcc *arg0);
extern "C" int func_020a0af4(struct Struct_020a095c *arg0, int arg1);
extern "C" void func_020a095c(struct Struct_0207cf30_4 *arg0, int arg1, int arg2);
extern "C" void func_ov023_021e1318(void *arg0);
extern "C" void func_ov023_021e1330(void *arg0);
extern "C" void func_ov023_021e1518(void *arg0);
extern "C" void func_ov023_021e1474(struct Struct_ov002_0215b2c8 *arg0, struct Struct_0201099c_10 *arg1);
extern "C" void func_ov023_021e1850(void *arg0, void *arg1, const char *arg2, short *arg3, int arg4);
extern "C" void func_ov023_021e1870(void *arg0, void *arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov023_021e1814(void *arg0, void *arg1, int arg2, int arg3, int arg4);
struct Struct_ov002_0215b458_4 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};
extern "C" struct Struct_ov002_0215b458_4 *func_0205d81c(struct Struct_0205d81c *arg0, int arg1);
extern "C" int GetInventoryItemByID(char *arg0, int arg1, int arg2);
extern "C" void func_0205d7a0(void *arg0, int arg1);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);
extern "C" const char data_ov002_0216d5b6[];

struct Struct_ov002_0215b458 {
    char unknown_0_[0x18];
    short unknown_18_;
};
struct Struct_ov002_0215b458_2 {
    struct Struct_ov002_0215b458_2 *unknown_0_;
    struct Struct_ov002_0215b458 *unknown_4_;
};
struct Struct_ov002_0215b458_3 {
    short *unknown_0_;
    signed char *unknown_4_;
};

// JPN: func_ov002_0215c618
extern "C" ARM void func_ov002_0215c618(char *arg0, int arg1) {
    GameState *var0;
    int var2;
    char *var1;
    struct Struct_ov002_0215b458_3 *var4;
    int var5;
    void *var10;
    void *var11;
    short *var3;
    void *var9;
    signed char *var6;
    struct Struct_ov002_0215b458_2 *var7;
    SafeAllocator var8;
    var0 = GameState::GetInstance();
    var4 = (struct Struct_ov002_0215b458_3 *) func_02010828(var0);
    var2 = GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1a00 + 0xb0), *(signed char *) (arg0 + 0x1a00 + 0xe8));
    var3 = var4->unknown_0_;
    var6 = var4->unknown_4_;
    var5 = func_020a0b8c((struct Struct_020a0b8c *) var4);
    if (var5 == 0) return;

    ((SafeAllocator *) (arg0 + 0x3b4 + 0x400))->Reset();
    var9 = ((SafeAllocator *) (arg0 + 0x3b4 + 0x400))->Allocate(0x4bc0);
    var8.ResetAllocatorPointer();
    var8.ResetAllocatorPointer();
    var8.CreateTypeA(var9, 0x4bc0);
    var1 = arg0 + 0x368;
    func_ov023_021e1318(var1 + 0x400);
    func_ov023_021e1850(var1 + 0x400, &var8, data_ov002_0216d5b6, var3, var5);
    func_ov023_021e1518(var1 + 0x400);
    func_ov023_021e1474((struct Struct_ov002_0215b2c8 *) (var1 + 0x400), (struct Struct_0201099c_10 *) (arg0 + 0x750));
    if (*(unsigned char *) (arg0 + 0x2000 + 0x2bd) == 2) {
        func_ov023_021e1870(var1 + 0x400, (void *) 1, -1, -1, 0);
        *(unsigned char *) (arg0 + 0x2000 + 0x2bd) = 1;
    } else {
        func_ov023_021e1814(var1 + 0x400, (void *) 1, -1, -1, 0);
        *(unsigned char *) (arg0 + 0x2000 + 0x2bd) = 2;
    }
    var10 = var8.Allocate(0x140);
    var11 = var8.Allocate(0xa0);
    memset(var10, 0, 0x140);
    memset(var11, 0, 0xa0);
    memcpy(var10, var3, var5 * 2);
    memcpy(var11, var6, var5);
    func_020a0bcc((struct Struct_020a0bcc *) var4);

    for (var7 = *(struct Struct_ov002_0215b458_2 **) (var1 + 0x400); var7 != NULL; var7 = var7->unknown_0_) {
        struct Struct_ov002_0215b458 *var12 = var7->unknown_4_;
        if (var12 == NULL) continue;
        short var13 = var12->unknown_18_;
        for (short var14 = 0; var14 < var5; var14++) {
            if (var13 == ((short *) var10)[var14]) {
                func_020a095c((struct Struct_0207cf30_4 *) var4, var13, ((signed char *) var11)[var14]);
                break;
            }
        }
    }
    func_ov023_021e1330(var1 + 0x400);
    if (var8.GetSignedAllocator() != NULL) {
        var8.Destroy();
    }
    ((SafeAllocator *) (arg0 + 0x3b4 + 0x400))->Free(var9);

    if (var2 >= 0 && arg1) {
        int var15 = func_020a0af4((struct Struct_020a095c *) var4, var2);
        if (var15 >= 0) {
            *(short *) (arg0 + 0x1a00 + 0xb0) = var15;
            func_0205d7a0(arg0 + 0xe20, var15);
            struct Struct_ov002_0215b458_4 *var16 = func_0205d81c((struct Struct_0205d81c *) (arg0 + 0xe20), 5);
            if (var16 != NULL) {
                var16->unknown_c5_ &= ~2;
            }
        }
    }
    func_ov002_0215b9a4(arg0, 5, 0);
}
#endif
