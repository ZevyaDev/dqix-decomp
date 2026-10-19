#include <globaldefs.h>

struct RC4Context_022118a8 {
    unsigned char i;
    unsigned char j;
    unsigned char reserved[2];
    unsigned char s[256];
};

// USA: func_ov031_022118a8
extern "C" ARM void func_ov031_022118a8(RC4Context_022118a8* context, const void* key, unsigned long key_len) {
    const unsigned char* keyBytes = (const unsigned char*)key;
    unsigned char* s;
    int i;
    unsigned char k;
    unsigned char j;

    if (key_len > 16) {
        key_len = 16;
    }
    context->i = 0;
    context->j = 0;
    s = context->s;
    for (i = 0; i < 256; i++) {
        s[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < 256; i++) {
        unsigned char t = s[i];

        j = j + (t + keyBytes[k]);
        k++;
        if (k == (unsigned char)key_len) {
            k = 0;
        }
        s[i] = s[j];
        s[j] = t;
    }
}
