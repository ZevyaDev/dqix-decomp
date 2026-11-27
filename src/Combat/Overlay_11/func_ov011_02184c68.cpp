#include <globaldefs.h>

struct Struct_ov011_02184c68 {
    int unknown_0_;
    Struct_ov011_02184c68* unknown_4_;
};

// USA: SetScriptRefInt_ov011_02184c68
extern "C" ARM void SetScriptRefInt_ov011_02184c68(Struct_ov011_02184c68* value, void* number) {
    if (value->unknown_0_ == 3) {
        value->unknown_4_->unknown_4_ = (Struct_ov011_02184c68*)number;
    }
}
