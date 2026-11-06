#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

extern "C" void func_0204f0ec(char* arg0);
struct Struct_02020cb8_7;
extern "C" void func_0204acb0(struct Struct_02020cb8_7* arg0);

struct Struct_0204c684 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
#if defined(jpn)
    unsigned char unknown_0_3_ : 6;
#else
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 5;
#endif
};

// USA: InitTextWindow_0204c684
extern "C" ARM void InitTextWindow_0204c684(char* textWindow) {
    *(int*)(textWindow + 0x0) = 0;
    *(int*)(textWindow + 0x4) = 0;
    *(int*)(textWindow + 0x8) = 0;
    func_0204f0ec(textWindow);

    *(int*)(textWindow + 0x9c) = 0;
    *(int*)(textWindow + 0xa0) = 0;
    *(int*)(textWindow + 0xa4) = 0;
    *(short*)(textWindow + 0xac) = 0;
    *(short*)(textWindow + 0xae) = 0;
    *(short*)(textWindow + 0xa8) = 0;
    *(short*)(textWindow + 0xaa) = 0;
    *(short*)(textWindow + 0xb0) = 4;
    *(short*)(textWindow + 0xb2) = 4;
    *(short*)(textWindow + 0xb4) = 0xa;
    *(short*)(textWindow + 0xb6) = 0xb;
    *(short*)(textWindow + 0xb8) = 0;
    *(short*)(textWindow + 0xba) = 0;
    *(short*)(textWindow + 0xbc) = 0;
    *(short*)(textWindow + 0xbe) = 0;
    *(short*)(textWindow + 0xc0) = 0;
    *(short*)(textWindow + 0xc2) = 0;
    *(unsigned char*)(textWindow + 0xc5) = 0;
    *(unsigned char*)(textWindow + 0xc4) = 0xff;
    *(unsigned char*)(textWindow + 0xc6) = 2;
    *(unsigned char*)(textWindow + 0xc7) = 0xa;

    func_0204acb0((struct Struct_02020cb8_7*)(textWindow + 0xc8));

    Struct_0204c684* var0 = (Struct_0204c684*)(textWindow + 0xd8);
    var0->unknown_0_0_ = 0;
    var0->unknown_0_3_ = 0;
    *(unsigned char*)(textWindow + 0xd9) = 0;
    *(unsigned char*)(textWindow + 0xda) = 0;

    var0->unknown_0_1_ = 1;
#if !defined(jpn)
    var0->unknown_0_2_ = 0;
#endif

    memset(textWindow + 0xdb, 0, 4);
}
