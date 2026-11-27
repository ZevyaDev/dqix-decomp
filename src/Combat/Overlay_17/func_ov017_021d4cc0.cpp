#include <globaldefs.h>

struct Struct_ov017_021d4cc0 {
    unsigned int unknown_0_;
    unsigned int nativeCount_4_;
    unsigned int pNatives_8_;
};

// USA: SetScriptNatives_ov017_021d4cc0
extern "C" ARM void SetScriptNatives_ov017_021d4cc0(Struct_ov017_021d4cc0* scriptVM, unsigned int natives, unsigned int nativeCount) {
    scriptVM->pNatives_8_ = natives;
    scriptVM->nativeCount_4_ = nativeCount;
}
