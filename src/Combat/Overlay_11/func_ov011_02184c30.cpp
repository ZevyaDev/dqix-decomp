#include <globaldefs.h>

struct ScriptValue_ov011_02184c30 {
    int type_0_;
    union {
        int unknown1_0_;
        float unknown_0_;
    } value_4_;
};

// USA: func_ov011_02184c30
extern "C" ARM int func_ov011_02184c30(struct ScriptValue_ov011_02184c30* arg0) {
    if (arg0->type_0_ == 1) return (int)arg0->value_4_.unknown_0_;
    return arg0->value_4_.unknown1_0_;
}
