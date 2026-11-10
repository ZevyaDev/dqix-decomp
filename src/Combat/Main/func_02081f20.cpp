#include <globaldefs.h>
#include "Input/Input.h"

extern unsigned short __attribute__((aligned(4))) data_020e8a84[];

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

extern "C" void func_0208203c(struct KeyRepeat_02081f20_2* arg0);

// USA: UpdateKeyRepeat_02081f20
extern "C" ARM unsigned short UpdateKeyRepeat_02081f20(struct KeyRepeat_02081f20_2* keyRepeat, int elapsedFrames) {
    if (keyRepeat->unknown_0_ == NULL) return 0;
    keyRepeat->unknown_0_->event_2_ = 0;
    if (keyRepeat->unknown_0_->key_0_ == 0) {
        unsigned short directionKeys[4];
        {
            const unsigned short* source = data_020e8a84;
            unsigned short* destination = directionKeys;
            int remaining = 4;
            do {
                *destination++ = *source++;
            } while (--remaining);
        }
        int i;
        for (i = 0; i < 4; i++) {
            unsigned short key = directionKeys[i];
            if (g_keyManager.TestKeysPressed(key)) {
                keyRepeat->unknown_0_->key_0_ = key;
                keyRepeat->unknown_8_ = keyRepeat->unknown_6_;
                keyRepeat->unknown_0_->event_2_ = 1;
                goto end;
            }
        }
        goto end;
    }
    if (keyRepeat->unknown_0_->key_0_ != 0) {
        if (g_keyManager.TestKeysHeld(keyRepeat->unknown_0_->key_0_)) {
            keyRepeat->unknown_8_ -= (signed char)elapsedFrames;
            if (keyRepeat->unknown_8_ < 0) {
                keyRepeat->unknown_8_ += keyRepeat->unknown_7_;
                keyRepeat->unknown_0_->event_2_ = 2;
            }
            goto end;
        }
        func_0208203c(keyRepeat);
    }
end:
    return keyRepeat->unknown_0_->event_2_;
}
