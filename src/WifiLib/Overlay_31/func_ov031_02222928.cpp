#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

// The setup's result: the access point's SSID, security and keys.
struct Struct_ov031_0224f7dc {
    char unknown_0_[0x20];
    int unknown_20_;
    int unknown_24_;
    unsigned char unknown_28_[4][0x20];
    int unknown_a8_[16];
};

// What the setup reports to the callback: state, time left, error.
struct Struct_ov031_02222928 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov031_0224b114 {
    unsigned char* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

// The setup's scalars, .bss 0x0224f670-0x0224f6f4, are defined here: the ROM reaches them all from one base
// address, as mwcc does for objects defined in the same file. mwcc lays out equal-size objects in a fixed
// permutation of their declaration order, so they are declared from +0x7c down to +0x0, then +0x80. Three
// are global, as other files use them.
static void (*data_ov031_0224f6ec)(Struct_ov031_02222928*);
static int data_ov031_0224f6e8;
static int data_ov031_0224f6e4;
static int data_ov031_0224f6e0;
static int data_ov031_0224f6dc;
static int data_ov031_0224f6d8;
static int data_ov031_0224f6d4;
static int data_ov031_0224f6d0;
static int data_ov031_0224f6cc;
static int data_ov031_0224f6c8;
static int data_ov031_0224f6c4;
int data_ov031_0224f6c0;
static int data_ov031_0224f6bc;
static int data_ov031_0224f6b8;
static int data_ov031_0224f6b4;
static int data_ov031_0224f6b0;
static int data_ov031_0224f6ac;
static int data_ov031_0224f6a8;
static int data_ov031_0224f6a4;
static void* data_ov031_0224f6a0;
static int data_ov031_0224f69c;
static int data_ov031_0224f698;
static int data_ov031_0224f694;
static int data_ov031_0224f690;
static int data_ov031_0224f68c;
static int data_ov031_0224f688;
static int data_ov031_0224f684;
static int data_ov031_0224f680;
static void (*data_ov031_0224f67c)(void*);
static int data_ov031_0224f678;
static void* (*data_ov031_0224f674)(unsigned int);
int data_ov031_0224f670;
void (*data_ov031_0224f6f0)(int, int);

extern Struct_ov031_0224b114 data_ov031_0224b114;
extern ProcessorContext data_ov031_0224f71c;
extern Struct_ov031_0224f7dc data_ov031_0224f7dc;

extern "C" {
int func_020c75a4(void);
int func_ov031_0221fa94(int arg0);
void func_ov031_02220ed4(void);
unsigned int func_ov031_02222870(void);
void func_ov031_02222af0(void);
}

// USA: func_ov031_02222928
// Starts the AOSS setup: unless it is already running (states 1-5), stores the callback and allocator, brings up
// the wireless link, allocates the thread's stack, then starts the setup thread with a 60-second deadline.
extern "C" THUMB int func_ov031_02222928(unsigned int arg0, int arg1, void (*arg2)(Struct_ov031_02222928*),
                                         void* (*arg3)(unsigned int), void (*arg4)(void*), unsigned int arg5) {
    int var0;

    if (data_ov031_0224f6a8 >= 1 && data_ov031_0224f6a8 <= 5)
        return -10;
    data_ov031_0224b114.unknown_10_ = arg1;
    data_ov031_0224f6a8 = 7;
    data_ov031_0224f6ec = arg2;
    data_ov031_0224f674 = arg3;
    data_ov031_0224f67c = arg4;
    data_ov031_0224b114.unknown_8_ = arg5;
    var0 = func_ov031_0221fa94(arg1);
    data_ov031_0224f6e4 = 1;
    if (var0 < 0) {
        data_ov031_0224f6e8 = var0;
        return var0;
    }
    data_ov031_0224f6a0 = data_ov031_0224f674(data_ov031_0224b114.unknown_8_);
    if (data_ov031_0224f6a0 == 0) {
        data_ov031_0224f6e8 = -1;
        return -1;
    }
    if (func_020c75a4() != 1) {
        data_ov031_0224f6e8 = -9;
        return -9;
    }
    PopulateContext(&data_ov031_0224f71c, (unsigned int)func_ov031_02220ed4, 0,
                    (unsigned int)data_ov031_0224f6a0 + (data_ov031_0224b114.unknown_8_ & ~7),
                    data_ov031_0224b114.unknown_8_, arg0);
    data_ov031_0224f6a8 = 1;
    data_ov031_0224b114.unknown_c_ = func_ov031_02222870() + 60000;
    data_ov031_0224f680 = 0;
    __builtin__clear(&data_ov031_0224f7dc, sizeof(data_ov031_0224f7dc));
    func_ov031_02222af0();
    MarkContextReadyAndSwitch(&data_ov031_0224f71c);
    data_ov031_0224f6d4 = 1;
    return 1;
}
