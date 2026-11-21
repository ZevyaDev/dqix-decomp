#include <globaldefs.h>

struct Struct_ov024_021da998 {
    char unknown_0_[0x14];
    int statusFlags_14_;
};

struct Struct_ov024_021da670_6 {
    char unknown_0_[0x138];
    struct Struct_ov024_021da998* pCurrentStats_138_;
};

// USA: HasTension_ov024_021da998
extern "C" ARM int HasTension_ov024_021da998(struct Struct_ov024_021da670_6* combatant) {
    return (combatant->pCurrentStats_138_->statusFlags_14_ & 0x800000) != 0;
}
