#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020397cc_400 = 0x184 };
#else
enum { Enum_020397cc_400 = 0x190 };
#endif

extern "C" int IsOnLadder_02039d7c(char*);

struct Struct_02010604;
extern "C" int SetMotion_02033b88(struct Struct_02010604* object, int motion);

struct Struct_02018300_3 {
    char unknown_0_[0xc1];
    unsigned char unknown_c1_0_ : 2;
    char unknown_c2_[Enum_020397cc_400];
    unsigned char isControllable_252_;
    unsigned char isControlRequested_253_;
};

// USA: DisablePlayerControl_020397cc
extern "C" ARM void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill) {
    if (standStill && object->isControllable_252_ && IsOnLadder_02039d7c((char*)(object)) == 0 && (object->unknown_c1_0_ & 2) == 0) {
        SetMotion_02033b88((struct Struct_02010604*)object, 0);
    }
    object->isControlRequested_253_ = 0;
    object->isControllable_252_ = 0;
}
