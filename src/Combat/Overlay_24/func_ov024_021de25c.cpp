#include <globaldefs.h>

struct Struct_ov024_021de25c {
    char unknown_0_[0x14];
    int statusFlags_14_;
};

struct Struct_ov024_021de124 {
    char unknown_0_[0x138];
    struct Struct_ov024_021de25c* pCurrentStats_138_;
};

// USA: IsConfused_ov024_021de25c
extern "C" ARM int IsConfused_ov024_021de25c(struct Struct_ov024_021de124* combatant) {
    return (combatant->pCurrentStats_138_->statusFlags_14_ & 0x20) != 0;
}
