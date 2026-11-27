#include <globaldefs.h>

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};

extern "C" void SaveAndDisableVCounterInterrupt_020d8654(void);
extern "C" void RestoreVCounterInterrupt_020d8694(void);

// USA: AppendPacketNode_0205e18c
extern "C" ARM void AppendPacketNode_0205e18c(struct Struct_0205e18c* list, struct Struct_0205e18c_2* node) {
    SaveAndDisableVCounterInterrupt_020d8654();
    if (list->unknown_0_ != NULL) {
        list->unknown_4_->unknown_18_ = node;
        list->unknown_4_ = node;
    } else {
        list->unknown_0_ = node;
        list->unknown_4_ = node;
        list->unknown_0_->unknown_18_ = NULL;
    }
    list->unknown_8_++;
    list->unknown_4_->unknown_18_ = NULL;
    RestoreVCounterInterrupt_020d8694();
}
