#include <globaldefs.h>

struct Struct_020e8994 {
    int unknown_0_;
    int unknown_4_;
};

extern "C" struct Struct_020e8994 data_020e8994[];

struct FieldMonster_02076ccc {
    char unknown_0_[0x130];
    int state_130_;
    int previousState_134_;
    char unknown_138_[0x14];
    unsigned int stateTime_14c_;
};

// USA: SetFieldMonsterState_02076ccc
extern "C" ARM bool SetFieldMonsterState_02076ccc(void* monster, int state) {
    struct FieldMonster_02076ccc* fieldMonster = (struct FieldMonster_02076ccc*)monster;
    if (fieldMonster->state_130_ == state) {
        return true;
    }
    struct Struct_020e8994* enterMethod = &data_020e8994[state];
    void* adjustedThis = (char*)fieldMonster + (enterMethod->unknown_4_ >> 1);
    void* enterFunction;
    if (enterMethod->unknown_4_ & 1) {
        void** vtable = (void**)*(void**)adjustedThis;
        enterFunction = *(void**)((char*)vtable + enterMethod->unknown_0_);
    } else {
        enterFunction = (void*)enterMethod->unknown_0_;
    }
    if (((int (*)(void*))enterFunction)(adjustedThis) == 0) {
        return false;
    }
    fieldMonster->previousState_134_ = fieldMonster->state_130_;
    fieldMonster->state_130_ = state;
    fieldMonster->stateTime_14c_ = 0;
    return true;
}
