#include <globaldefs.h>

struct Struct_ov024_021dd260 {
    char unknown_0_[0x14];
    int statusFlags_14_;
};

struct Struct_ov024_021dd028_5 {
    char unknown_0_[0x138];
    struct Struct_ov024_021dd260* pCurrentStats_138_;
};

// USA: HasSuperHighTension_ov024_021dd260
extern "C" ARM int HasSuperHighTension_ov024_021dd260(struct Struct_ov024_021dd028_5* combatant) {
    return (combatant->pCurrentStats_138_->statusFlags_14_ & 0x1000000) != 0;
}
