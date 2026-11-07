#include <globaldefs.h>

struct Struct_02093b54 {
#if defined(jpn)
    char unknown1_0_[0xb];
#else
    char unknown_0_[0x30];
#endif
};

struct Notice_02093ad8 {
    struct Struct_02093b54 name_0_;
#if defined(jpn)
    unsigned char unknown_b_;
#endif
    short noticeId_30_;
    signed char memberIndex_32_;
    unsigned char unknown_33_;
};

// USA: func_02093b54
extern "C" ARM void func_02093b54(struct Notice_02093ad8* arg0, struct Notice_02093ad8* arg1) {
    arg0->name_0_ = arg1->name_0_;
#if defined(jpn)
    arg0->unknown_b_ = arg1->unknown_b_;
#endif
    arg0->noticeId_30_ = arg1->noticeId_30_;
    arg0->memberIndex_32_ = arg1->memberIndex_32_;
    arg0->unknown_33_ = arg1->unknown_33_;
}
