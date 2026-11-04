#include <globaldefs.h>

#if defined(jpn)
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void* __clear(void* arg0, int arg1);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);

struct Struct_ov012_02186f3c {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_0_12_ : 19;
    unsigned int unknown_0_31_ : 1;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    unsigned short unknown_10_;
    short unknown_12_;
    int unknown_14_[2];
    SafeAllocator* unknown_1c_;
};

extern const char* data_020f2a54;
extern "C" int func_ov012_021871a0(Struct_ov012_02186f3c* arg0);
extern "C" int func_ov012_021856c8(Struct_ov012_02186f3c* arg0);

// JPN: func_ov012_02186f3c
extern "C" ARM int func_ov012_02186f3c(Struct_ov012_02186f3c* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    switch (arg0->unknown_12_) {
    case 1:
        arg0->unknown_14_[0] = var0->QueueLoadFile(data_020f2a54, 0);
        arg0->unknown_12_ = 2;
        return func_ov012_02186f3c(arg0);
    case 2:
        for (int var1 = 0; var1 < 2; var1++) {
            if (arg0->unknown_14_[var1] >= 0 && var0->GetTaskStatus(arg0->unknown_14_[var1]) == 0) {
                return 0;
            }
        }
        arg0->unknown_12_ = 3;
        return func_ov012_02186f3c(arg0);
    case 3: {
        void* var2[2];
        unsigned int var3[2];
        __clear(var2, 8);
        __clear(var3, 8);
        int* var11 = arg0->unknown_14_;
        void** var12 = var2;
        unsigned int* var13 = var3;
        for (int var4 = 0; var4 < 2; var4++, var11++, var12++, var13++) {
            if (*var11 >= 0) {
                var0->GetLoadedFileByID(*var11, var12, var13);
            }
        }
        SafeAllocator* var5 = arg0->unknown_1c_;
        void* var7;
        unsigned int var6;
        var6 = var3[1];
        var7 = var2[1];
        if (var5 != 0 && ((var2[0] != 0 && var3[0] != 0) || (var7 != 0 && var6 != 0))) {
            if (var2[0] != 0 && var3[0] != 0 && var5 != 0 && var2[0] != 0) {
                memcpy(arg0, var2[0], 4);
                int var8 = func_ov012_021871a0(arg0);
                int var9 = arg0->unknown_0_12_;
                arg0->unknown_4_ = var8 != 0 ? var5->Allocate(var8) : 0;
                arg0->unknown_8_ = var9 != 0 ? var5->Allocate(var9) : 0;
                if (arg0->unknown_4_ != 0) {
                    memcpy(arg0->unknown_4_, (char*)var2[0] + 4, var8);
                }
                if (arg0->unknown_8_ != 0) {
                    int var14 = func_ov012_021871a0(arg0) + 4;
                    memcpy(arg0->unknown_8_, (char*)var2[0] + var14, var9);
                }
                arg0->unknown_0_31_ = 1;
            }
            arg0->unknown_c_ = 0;
            arg0->unknown_10_ = 0;
            if (var7 != 0 && var6 != 0) {
                void* var10 = var5->Allocate(var6);
                if (var10 != 0) {
                    memcpy(var10, var7, var6);
                    arg0->unknown_c_ = var10;
                    arg0->unknown_10_ = var6;
                }
            }
        }
        func_ov012_021856c8(arg0);
        return 1;
    }
    }
    return 1;
}
#endif
