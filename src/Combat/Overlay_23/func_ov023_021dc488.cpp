#include <globaldefs.h>

extern "C" void func_ov023_021db110(void* arg0);

struct Struct_ov002_02156178;
typedef void (Struct_ov002_02156178::*Type_ov002_02156178)();
extern Type_ov002_02156178 gNullMemberFunctionPointer_020e6d5c;

struct Struct_ov023_021ff9e0_5 {
#if defined(jpn)
unsigned char unknown_0_[0x18];
#else
unsigned char unknown1_0_[0x1c];
#endif
unsigned int unknown_1c_; };
extern struct Struct_ov023_021ff9e0_5 data_ov023_021ff9e0;

#if defined(jpn)
#define data_ov023_021fda60 data_ov023_021fcd24
#define data_ov023_021fda88 data_ov023_021fcd4c
#endif

struct Struct_ov023_021fda60 { unsigned char unknown_0_[0x40]; Type_ov002_02156178 unknown_40_; };
extern struct Struct_ov023_021fda60 data_ov023_021fda60;

extern unsigned char data_ov023_021ffa0c;

struct Struct_ov023_021fda88 { unsigned int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_ov023_021fda88 data_ov023_021fda88[];

// USA: UpdateItemInfoPanel_ov023_021dc488
extern "C" ARM int UpdateItemInfoPanel_ov023_021dc488(void* panel) {
    func_ov023_021db110(&data_ov023_021ffa0c);
    if (!(data_ov023_021ff9e0.unknown_1c_ & 1)) {
        data_ov023_021fda60.unknown_40_ = gNullMemberFunctionPointer_020e6d5c;
        data_ov023_021ff9e0.unknown_1c_ |= 1;
    }
    unsigned char state = *((unsigned char*)panel
#if defined(jpn)
 + 0x6f2
#else
 + 0x776
#endif
);
    if (data_ov023_021fda88[state].unknown_0_ == 0) return 1;
    struct Struct_ov023_021fda88* stateMethod = &data_ov023_021fda88[state];
    void* adjustedThis = (char*)panel + ((int)stateMethod->unknown_4_ >> 1);
    void* stateFunction;
    if (stateMethod->unknown_4_ & 1) {
        stateFunction = *(void**)((char*)*(void**)adjustedThis + stateMethod->unknown_0_);
    } else {
        stateFunction = (void*)stateMethod->unknown_0_;
    }
    ((void(*)(void*))stateFunction)(adjustedThis);
    return 0;
}
