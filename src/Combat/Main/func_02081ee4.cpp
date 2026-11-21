#include <globaldefs.h>

struct RepeatedKey_02081ee4_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct KeyRepeat_02081ee4 {
    struct RepeatedKey_02081ee4_2 *unknown_0_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
};

// USA: InitKeyRepeat_02081ee4
extern "C" ARM void InitKeyRepeat_02081ee4(struct KeyRepeat_02081ee4 *keyRepeat, struct RepeatedKey_02081ee4_2 *repeatedKey) {
    keyRepeat->unknown_0_ = 0;
    if (repeatedKey != NULL) {
        keyRepeat->unknown_0_ = repeatedKey;
        repeatedKey->unknown_0_ = 0;
        repeatedKey->unknown_2_ = 0;
    }
    keyRepeat->unknown_4_ = 0;
    keyRepeat->unknown_6_ = 20;
    keyRepeat->unknown_7_ = 10;
    keyRepeat->unknown_8_ = keyRepeat->unknown_6_;
}
