#include <globaldefs.h>

struct SaveProgress_020a9ea4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};

// USA: ResetSaveProgress_020a9ea4
extern "C" ARM void ResetSaveProgress_020a9ea4(struct SaveProgress_020a9ea4 *progress) {
    progress->unknown_0_ = 0;
    progress->unknown_1_ = 0;
    progress->unknown_4_ = 0;
}
