#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#define REGION_OFFSET_2 0x1faa
#define REGION_OFFSET_3 0x1fb1
#define REGION_OFFSET_4 0x1fac
#define REGION_OFFSET_5 0x1fb9
#define REGION_OFFSET_6 0x1fb2
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#define REGION_OFFSET_2 0x1d72
#define REGION_OFFSET_3 0x1d79
#define REGION_OFFSET_4 0x1d74
#define REGION_OFFSET_5 0x1d81
#define REGION_OFFSET_6 0x1d7a
#endif

#include "std_library_functions.h"

struct TextWindowManager_0205d5d0;
struct TextWindowManager_0205def8;
struct TextWindowManager_0205d81c;

struct TextWindow_0205d0e0 {
    char unknown_0_[0xc2];
    short palette_c2_;
    unsigned char unknown_c4_;
    unsigned char unknown_c5_;
};

struct Struct_ov000_0217a0a4 {
    char unknown_0_[0x188];
    char unknown_188_[REGION_OFFSET_2 - 0x188];
    unsigned short unknown_1d72_;
    char unknown_1d74_[REGION_OFFSET_3 - REGION_OFFSET_4];
    unsigned char unknown_1d79_;
    char unknown_1d7a_[REGION_OFFSET_5 - REGION_OFFSET_6];
    unsigned char unknown_1d81_;
};

extern "C" int GetMessageWindow_020421a0();
extern "C" void func_0205def8(struct TextWindowManager_0205def8*, int, int);
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c*, int);
extern "C" void func_ov000_0217a2dc(struct Struct_ov000_0217a0a4*, int, void*);
extern "C" void func_ov000_0217a19c(struct Struct_ov000_0217a0a4*, int);

// USA: func_ov000_0217a0a4
extern "C" ARM void func_ov000_0217a0a4(struct Struct_ov000_0217a0a4* arg0) {
    void* var0 = *(void**)(GetMessageWindow_020421a0() + REGION_OFFSET_0);
    memset(var0, 0, REGION_OFFSET_1);
    func_ov000_0217a2dc(arg0, 0, var0);
#if defined(jpn)
    SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0*)arg0->unknown_188_, 0x17, (int)var0, 1);
#else
    SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0*)arg0->unknown_188_, 0x17, (int)var0, 1, 0);
#endif
    if (arg0->unknown_1d81_) {
        func_0205def8((struct TextWindowManager_0205def8*)arg0->unknown_188_, 0, 0x18);
        func_0205def8((struct TextWindowManager_0205def8*)arg0->unknown_188_, 0, 0x19);
        struct TextWindow_0205d0e0* var1 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)arg0->unknown_188_, 0x17);
        if (var1) {
            var1->unknown_c5_ &= ~0x40;
            var1->palette_c2_ = 0;
        }
        arg0->unknown_1d72_ &= ~0x100;
    }
    if (arg0->unknown_1d79_) {
        func_ov000_0217a19c(arg0, 0);
    } else {
        struct TextWindow_0205d0e0* var2 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)arg0->unknown_188_, 0x18);
        if (var2) {
            var2->palette_c2_ = 0;
        }
        arg0->unknown_1d79_ = 1;
    }
}
