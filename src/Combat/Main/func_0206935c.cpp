#include <globaldefs.h>
#if defined(jpn)

struct Struct_02108760;
extern int data_02108760;

struct Struct_0206935c {
    unsigned char unknown_0_[0x24];
    int unknown_24_;
    unsigned char unknown_28_[0x50 - 0x28];
    unsigned char unknown_50_[1];
};

extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0206cbe8(Struct_0206935c* arg0, unsigned short arg1, int arg2);
extern "C" void func_0205c840(void* arg0);

// JPN: func_0206935c
extern "C" ARM void func_0206935c(Struct_0206935c* arg0, int arg1) {
    switch (arg1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
            func_0206cbe8(arg0, arg1 + 0xff56, arg0->unknown_24_);
            break;
        case 6:
            func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
        case -2:
            func_0206cbe8(arg0, 0xff5c, arg0->unknown_24_);
            break;
        default:
            return;
    }
    func_0205c840(arg0->unknown_50_);
}
#endif
