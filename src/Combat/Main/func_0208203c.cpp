#include <globaldefs.h>

struct RepeatedKey_02081f20 {
    unsigned short key_0_;
    unsigned char event_2_;
};

struct KeyRepeat_02081f20_2 {
    struct RepeatedKey_02081f20 *unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};

// USA: ResetKeyRepeat_0208203c
extern "C" ARM void ResetKeyRepeat_0208203c(struct KeyRepeat_02081f20_2 *keyRepeat) {
    struct RepeatedKey_02081f20 *repeatedKey = keyRepeat->unknown_0_;
    if (repeatedKey != NULL) {
        repeatedKey->key_0_ = 0;
        repeatedKey->event_2_ = 0;
    }
    keyRepeat->unknown_4_ = 0;
    keyRepeat->unknown_8_ = keyRepeat->unknown_6_;
}
