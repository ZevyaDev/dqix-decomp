#include <globaldefs.h>
#if defined(jpn)
#include "Resource/Script.h"

struct Struct_0209be38_2 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 5;
    unsigned int unknown_2_1_ : 7;
    unsigned int unknown_3_0_ : 8;
};
struct Struct_0209be38 {
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
    unsigned short unknown_2_;
    struct Struct_0209be38_2 unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

struct Struct_0209a4f0;
extern "C" void func_0209a4f0(struct Struct_0209a4f0* arg0, struct Struct_0209be38* arg1);

extern struct Struct_0209a4f0* data_02109ba4;

static inline Script::Parameter* inline_0209be38_2(char* arg0, int arg1) { return (Script::Parameter*)(arg0 + arg1); }
static inline int inline_0209be38(char* arg0, int arg1) { Script::Parameter* var0 = inline_0209be38_2(arg0, arg1); int var1 = var0->ToInt(); return var1; }

// JPN: func_0209be38
extern "C" ARM int func_0209be38(char* arg0) {
    struct Struct_0209be38 var0;

    var0.unknown_0_0_ = inline_0209be38(arg0, 0);
    var0.unknown_4_.unknown_0_0_ = inline_0209be38(arg0, 8);
    var0.unknown_4_.unknown_0_5_ = inline_0209be38(arg0, 0x10);
    var0.unknown_4_.unknown_1_4_ = inline_0209be38(arg0, 0x18);
    var0.unknown_4_.unknown_2_1_ = inline_0209be38(arg0, 0x20);
    var0.unknown_2_ = inline_0209be38(arg0, 0x28);
    var0.unknown_1_4_ = inline_0209be38(arg0, 0x30);
    var0.unknown_4_.unknown_3_0_ = inline_0209be38(arg0, 0x38);
    var0.unknown_8_ = inline_0209be38(arg0, 0x40);
    var0.unknown_a_ = inline_0209be38(arg0, 0x48);

    func_0209a4f0(data_02109ba4, &var0);
    return 1;
}
#endif
