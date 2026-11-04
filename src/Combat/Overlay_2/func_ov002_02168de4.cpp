#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

#if defined(jpn)
struct Struct_0201099c_3;
struct Struct_020727d8;

extern "C" unsigned char func_ov013_021847c4(void *arg0, int arg1);
extern "C" char *func_020421a0();
extern "C" int func_ov002_021574d4(void *arg0, int arg1);
extern "C" void func_ov013_02184c8c(void *arg0, void *arg1);
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" unsigned char func_0209a678(char *arg0, void *arg1, unsigned short *arg2);
extern "C" void *func_0202ae18();
extern "C" int func_0202b7d8(int *arg0);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021ccc34(int arg0);
extern "C" void func_ov017_021cd0d8(int arg0, unsigned short *arg1, int arg2);
extern "C" const char *func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" void func_020727d8(Struct_020727d8 *arg0);
extern "C" void func_02073864(void *arg0, void *arg1, const char *arg2, short *arg3, unsigned short arg4, unsigned char arg5);
extern "C" void *func_02053c6c(unsigned char *arg0);
extern "C" void func_02083e28(void *arg0, int arg1);
extern "C" void func_ov013_0218782c(void *arg0, signed char arg1, unsigned char arg2);
extern "C" void func_ov013_021870c0(void *arg0);

// JPN: func_ov002_02168de4
extern "C" ARM void func_ov002_02168de4(char *arg0) {
    *(unsigned int *) (arg0 + 0x22ac) |= 4;
    if (func_ov013_021847c4(arg0 + 0xc20 + 0x1000, *(int *) (arg0 + 0x1a68)) == 6) {
        GameState *var1 = GameState::GetInstance();
        func_020421a0();
        *(unsigned int *) (arg0 + 0x22ac) &= ~4;
        if (*(unsigned char *) (arg0 + 0x2289) == 0) {
            char *var2 =
                (char *) func_0200ff1c(var1, func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1ad0)));
            if (var2 != 0) {
                func_ov013_02184c8c(arg0 + 0xc20 + 0x1000, var2);
            }
            if (var2 != 0) {
                ((SafeAllocator *) (arg0 + 0x3c8 + 0x400))->Reset();
                *(void **) (arg0 + 0x2284) = ((SafeAllocator *) (arg0 + 0x3c8 + 0x400))->Allocate(0x6e);
                memset(*(void **) (arg0 + 0x2284), 0, 0x6e);
                *(unsigned char *) (arg0 + 0x2289) =
                    func_0209a678(arg0 + 0x274 + 0x2000, var2, *(unsigned short **) (arg0 + 0x2284));
                if (func_0202b7d8((int *) func_0202ae18())) {
                    int var3 = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1ad0));
                    func_ov017_021c9e00(var3, 0, 0, 0);
                    func_ov017_021ccc34(var3);
                    func_ov017_021cd0d8(var3, *(unsigned short **) (arg0 + 0x2284), *(unsigned char *) (arg0 + 0x2289));
                }
                if (*(unsigned char *) (arg0 + 0x2289) == 0) {
                    *(int *) (arg0 + 0x1a88) += 1;
                    return;
                }
                *(void **) (arg0 + 0x2280) = ((SafeAllocator *) (arg0 + 0x3c8 + 0x400))->Allocate(8);
                func_020727d8(*(Struct_020727d8 **) (arg0 + 0x2280));
                func_02073864(*(void **) (arg0 + 0x2280), arg0 + 0x3c8 + 0x400,
                              func_020e0434((Struct_0201099c_3 *) (arg0 + 8), 0x64), 0, 0, 0);
                func_02083e28(func_02053c6c((unsigned char *) var2), 0);
            }
        }
        *(int *) (arg0 + 0x1a88) += 1;
    } else {
        int var4 = *(int *) (arg0 + 0x2204);
        int var5 = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1ad0));
        func_ov013_0218782c(arg0 + 0x3c8 + 0x1800, (signed char) var5, (unsigned char) var4);
        func_ov013_021870c0(arg0 + 0x3c8 + 0x1800);
    }
}
#endif
