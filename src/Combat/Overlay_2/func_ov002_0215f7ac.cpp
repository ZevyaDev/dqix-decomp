#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
struct Struct_ov002_0215f7ac {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 12;
    char unknown_4_[0x16c - 4];
    unsigned short unknown_16c_[0x3a6];
    int unknown_8b8_;
};
struct Struct_02046574_2;
struct Struct_020465c0;
struct Struct_0201099c_3;
extern "C" char *func_020421a0();
extern "C" GameObject *func_0200ff1c(GameState *arg0, int arg1);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" void func_02046574(struct Struct_02046574_2 *arg0, int arg1, char *arg2);
extern "C" void func_020465c0(struct Struct_020465c0 *arg0, int arg1, int arg2);
extern "C" char *func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" void func_020465f0(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char *arg0, int arg1, unsigned char arg2);
extern "C" void func_02046380(void *arg0);
extern "C" int func_020d2ff0(const char *arg0);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" int func_ov017_021bdbcc(GameResources *arg0);
extern "C" void func_020474a8(void *arg0, int arg1, const char *arg2, char *arg3);

static inline unsigned short inline_ov002_0215f7ac(char *arg0, int arg1) { return *(unsigned short *) (arg0 + arg1); }

static const char data_ov002_0216d054[1] = {8};

// JPN: func_ov002_0215f7ac
extern "C" ARM void func_ov002_0215f7ac(char *arg0, char *arg1) {
    char var1[0x20];
    if (arg1 == NULL) return;
    char *var3       = func_020421a0();
    GameObject *var4 = func_0200ff1c(GameState::GetInstance(), *(signed char *) (arg0 + 0x1a00 + 0xe8));
    if (var4 == NULL) return;
    struct Struct_ov002_0215f7ac *var5 = (struct Struct_ov002_0215f7ac *) func_02053c6c((unsigned char *) var4);
    if (var5 == NULL) return;
    func_02046380(var3);
    func_02046574((struct Struct_02046574_2 *) var3, 0, *(char **) ((char *) var4 + 0x134));
    int var6 = func_020d2ff0(*(const char **) ((char *) var4 + 0x134)) / 2;
    func_020465c0((struct Struct_020465c0 *) var3, 9, (0x40 - var6 * 10) / 2);
    func_020465c0((struct Struct_020465c0 *) var3, 0, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x130), 4));
    func_020465c0((struct Struct_020465c0 *) var3, 1, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x134), 0x30));
    func_020465c0((struct Struct_020465c0 *) var3, 2, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x130), 6));
    func_020465c0((struct Struct_020465c0 *) var3, 3, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x134), 0x32));
    func_020465c0((struct Struct_020465c0 *) var3, 4, var5->unknown_16c_[var5->unknown_8b8_]);
    func_020465c0((struct Struct_020465c0 *) var3, 5, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x134), 0x34));
    func_020465c0((struct Struct_020465c0 *) var3, 6, inline_ov002_0215f7ac(*(char **) ((char *) var4 + 0x134), 0x36));
    func_020465c0((struct Struct_020465c0 *) var3, 7, var5->unknown_1_2_);
    int var7 = (0x40 - func_020d2ff0(func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8),
                                                    (short) (var5->unknown_8b8_ + 0x834))) / 2 * 8) / 2;
    func_020465c0((struct Struct_020465c0 *) var3, 8, var7);
    if (func_ov017_021bdbcc(GetGameResources())) {
        func_02046574((struct Struct_02046574_2 *) var3, 1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x834));
    } else if (*(int *) ((char *) var4 + 0x1b8) == 0) {
        func_02046574((struct Struct_02046574_2 *) var3, 1,
                      func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), (short) (var5->unknown_8b8_ + 0x834)));
    }
    unsigned char var11 = *((unsigned char *) var5 + var5->unknown_8b8_ + 0x186);
    if (var11 != 0) {
        char var0[3] = {(char) 0xe8, 0x40, 0};
        var0[1] += var11 - 1;
        __clear(var1, 0x20);
        int var12 = 5;
        if (var11 == 10) var12 = 0xd;
        func_02041e70(var1, var12);
        func_02042058(var1, var0);
        func_02041e70(var1, 0xf);
        func_02046574((struct Struct_02046574_2 *) var3, 2, var1);
    }
    for (int var13 = 0; var13 < 8; var13++) {
        int var14 = 3;
        if (var13 == 4) var14 = 2;
        func_020465f0((unsigned char *) var3, var13, var14);
    }
    for (int var15 = 0; var15 < 8; var15++) {
        func_020465d8((unsigned char *) var3, var15, 1);
    }
    func_020474a8(var3, 0xa, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x7d0), arg1);
}
#endif
