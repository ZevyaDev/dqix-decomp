#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e4e38_2 {
    unsigned int unknown_0_0_ : 6;
    unsigned int unknown_0_6_ : 6;
    unsigned int unknown_1_4_ : 6;
    unsigned int unknown_2_2_ : 6;
    unsigned int unknown_3_0_ : 2;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 3;
};

struct Struct_020e4e38 {
    void* unknown_0_;
    char unknown_4_[0x30];
    void* unknown_34_;
    struct Struct_020e4e38_2 unknown_38_;
};

extern "C" void SetNoun_020e4b34(void* noun, void* singularText, void* pluralText,
    int singularIndefiniteArticle, int pluralIndefiniteArticle, int singularDefiniteArticle, int pluralDefiniteArticle, int gender, int isPluralOnly, int arg9, int hasInitialVowelSound, int isInitialVowelFromText);

// USA: func_020e4e38
extern "C" ARM void func_020e4e38(void* arg0, struct Struct_020e4e38* arg1) {
    memset(arg0, 0, 0xc);
    if (arg1 != NULL) {
        SetNoun_020e4b34(arg0, arg1->unknown_0_, arg1->unknown_34_,
            (unsigned char)arg1->unknown_38_.unknown_0_0_, (unsigned char)arg1->unknown_38_.unknown_0_6_,
            (unsigned char)arg1->unknown_38_.unknown_1_4_, (unsigned char)arg1->unknown_38_.unknown_2_2_,
            (unsigned char)arg1->unknown_38_.unknown_3_0_, (unsigned char)arg1->unknown_38_.unknown_3_2_,
            (unsigned char)arg1->unknown_38_.unknown_3_3_, (unsigned char)arg1->unknown_38_.unknown_3_4_, 0);
    }
}
