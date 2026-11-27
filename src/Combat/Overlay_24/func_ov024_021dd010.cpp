#include <globaldefs.h>

struct Struct_ov024_021dd010 {
    char unknown_0_[0x14];
    int statusFlags_14_;
};

struct Struct_ov024_021dced0_2 {
    char unknown_0_[0x138];
    struct Struct_ov024_021dd010* pCurrentStats_138_;
};

// USA: IsSpellcastingBlocked_ov024_021dd010
extern "C" ARM int IsSpellcastingBlocked_ov024_021dd010(struct Struct_ov024_021dced0_2* combatant) {
    return (combatant->pCurrentStats_138_->statusFlags_14_ & 0x100) != 0;
}
