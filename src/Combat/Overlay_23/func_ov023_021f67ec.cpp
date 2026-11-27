#include <globaldefs.h>

struct Struct_ov023_021f67ec_2 {
    virtual void inline_ov023_021f67ec_6();
    virtual void inline_ov023_021f67ec_7();
    virtual void inline_ov023_021f67ec();
    virtual void inline_ov023_021f67ec_2();
    virtual void inline_ov023_021f67ec_3();
    virtual void inline_ov023_021f67ec_4();
    virtual void inline_ov023_021f67ec_5(void* arg0);
    char unknown_4_[0x14 - 4];
    struct Struct_ov023_021f67ec_2* unknown_14_;
    struct Struct_ov023_021f67ec_2* unknown_18_;
};

struct Struct_ov023_021f67ec {
    struct Struct_ov023_021f67ec_2* unknown_0_;
};

// USA: RemoveMenuObject_ov023_021f67ec
extern "C" ARM void RemoveMenuObject_ov023_021f67ec(struct Struct_ov023_021f67ec* objectList, struct Struct_ov023_021f67ec_2* object) {
    if (!object) return;
    struct Struct_ov023_021f67ec_2* previous = object->unknown_14_;
    struct Struct_ov023_021f67ec_2* next = object->unknown_18_;
    if (previous) previous->unknown_18_ = next;
    if (next) next->unknown_14_ = previous;
    if (objectList->unknown_0_ == object) objectList->unknown_0_ = next;
    object->unknown_14_ = 0;
    object->unknown_18_ = 0;
    object->inline_ov023_021f67ec_5(objectList);
}
