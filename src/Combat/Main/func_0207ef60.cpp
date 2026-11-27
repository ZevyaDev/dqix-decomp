#include <globaldefs.h>

struct Struct_0207ef60 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: ResetMenuLayoutWindowEntries_0207ef60
extern "C" ARM void ResetMenuLayoutWindowEntries_0207ef60(struct Struct_0207ef60* windowEntries) {
    windowEntries->unknown_0_ = 0;
    windowEntries->unknown_6_ = 0;
    windowEntries->unknown_4_ = 0;
}
