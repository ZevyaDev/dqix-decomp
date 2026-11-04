#include <globaldefs.h>

#if defined(jpn)

#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov009_02185c58 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    unsigned short unknown_10_;
    short unknown_12_;
    int unknown_14_[2];
    SafeAllocator* unknown_1c_;
};

extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_ov009_02185ed8(Struct_ov009_02185c58* arg0);
extern "C" int func_ov009_02185888(Struct_ov009_02185c58* arg0);
extern const char* data_020f2a54;
extern const char* data_020f2a50;

// JPN: func_ov009_02185c58
extern "C" ARM int func_ov009_02185c58(Struct_ov009_02185c58* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    switch (arg0->unknown_12_) {
    case 1:
        arg0->unknown_14_[0] = var0->QueueLoadFile(data_020f2a54, NULL);
        arg0->unknown_14_[1] = var0->QueueLoadFile(data_020f2a50, NULL);
        arg0->unknown_12_ = 2;
        return func_ov009_02185c58(arg0);
    case 2:
        for (int var1 = 0; var1 < 2; var1++) {
            if (arg0->unknown_14_[var1] >= 0 && var0->GetTaskStatus(arg0->unknown_14_[var1]) == 0) {
                return 0;
            }
        }
        arg0->unknown_12_ = 3;
        return func_ov009_02185c58(arg0);
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
        unsigned int var6 = var3[1];
        var7 = var2[1];
        if (var5 != NULL && ((var2[0] != NULL && var3[0] != 0) || (var7 != NULL && var6 != 0))) {
            if (var2[0] != NULL && var3[0] != 0) {
                if (var5 != NULL && var2[0] != NULL) {
                    memcpy(arg0, var2[0], 4);
                    int var8 = func_ov009_02185ed8(arg0);
                    unsigned int var9 = arg0->unknown_1_4_;
                    arg0->unknown_4_ = var8 != 0 ? var5->Allocate(var8) : NULL;
                    arg0->unknown_8_ = var9 != 0 ? var5->Allocate(var9) : NULL;
                    if (arg0->unknown_4_ != NULL) {
                        memcpy(arg0->unknown_4_, (char*)var2[0] + 4, var8);
                    }
                    if (arg0->unknown_8_ != NULL) {
                        int var14 = func_ov009_02185ed8(arg0) + 4;
                        memcpy(arg0->unknown_8_, (char*)var2[0] + var14, var9);
                    }
                    arg0->unknown_3_7_ = 1;
                }
            }
            arg0->unknown_c_ = NULL;
            arg0->unknown_10_ = 0;
            if (var7 != NULL && var6 != 0) {
                void* var10 = var5->Allocate(var6);
                if (var10 != NULL) {
                    memcpy(var10, var7, var6);
                    arg0->unknown_c_ = var10;
                    arg0->unknown_10_ = var6;
                }
            }
        }
        func_ov009_02185888(arg0);
        return 1;
    }
    }
    return 1;
}

#endif
