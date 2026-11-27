#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov000_02157d14 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    char unknown_1e_[0x12];
    int unknown_30_;
};

// USA: InitActionActor_ov000_02157d14
extern "C" ARM void InitActionActor_ov000_02157d14(struct Struct_ov000_02157d14* actor) {
    memset(actor, 0, 0x30);
    actor->unknown_1c_ = -1;
    actor->unknown_30_ = 0;
}
