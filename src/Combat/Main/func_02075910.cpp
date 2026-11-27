#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_02108dfc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short lockOwnerID_2_;
    char* unknown_4_;
};

extern struct Struct_02108dfc data_02108dfc;
extern unsigned char data_020f0dc8;

extern "C" void func_020d0040(int arg0);
extern "C" int func_020d06d4();
extern "C" void func_020d0050(int arg0);
int GetCardReadManagerSharedStatus();
extern "C" int func_020d0834();
extern "C" void func_020758a0(void* arg0);
extern "C" void func_020d05ec(int arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

// USA: ReadSaveMemory_02075910
extern "C" ARM int ReadSaveMemory_02075910(int offset, int destination, int length, int isAsync) {
    if (data_02108dfc.unknown_4_) {
        if (offset >= 0x8000) {
            offset -= 0x8000;
        }
        VectorizedInvertedMemcpy(data_02108dfc.unknown_4_ + offset, (void*)destination, (unsigned int)length);
        return 1;
    }

    if (data_020f0dc8 == 0) {
        return 0;
    }

    data_02108dfc.unknown_0_ = 0;
    int isSuccess = 1;
    func_020d0040((int)data_02108dfc.lockOwnerID_2_);

    int var1 = ((func_020d06d4() & 0xff) == 1);
    if (var1) {
        func_020d05ec(offset, destination, length, func_020758a0, 0, 1, 6, 1, 0);
    } else {
        var1 = ((func_020d06d4() & 0xff) == 2);
        if (var1) {
            func_020d05ec(offset, destination, length, func_020758a0, 0, 1, 6, 1, 0);
        } else {
            var1 = ((func_020d06d4() & 0xff) == 3);
            if (var1) {
                func_020d05ec(offset, destination, length, func_020758a0, 0, 1, 6, 1, 0);
            }
        }
    }

    if (isAsync) {
        if (GetCardReadManagerSharedStatus()) {
            isSuccess = 0;
        }
    } else {
        func_020d0834();
        if (GetCardReadManagerSharedStatus()) {
            isSuccess = 0;
        }
        func_020d0050((int)data_02108dfc.lockOwnerID_2_);
        data_02108dfc.unknown_0_ = 1;
    }

    return isSuccess;
}
