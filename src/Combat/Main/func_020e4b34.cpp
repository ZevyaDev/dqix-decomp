#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e4b34_2 {
    unsigned int unknown_0_0_ : 6;
    unsigned int unknown_0_6_ : 6;
    unsigned int unknown_1_4_ : 6;
    unsigned int unknown_2_2_ : 6;
    unsigned int unknown_3_0_ : 2;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

struct Noun_020e4b34 {
    int unknown_0_;
    int unknown_4_;
    union {
        unsigned int unknown_0_;
        Struct_020e4b34_2 unknown1_0_;
    } unknown_8_;
};

// USA: SetNoun_020e4b34
extern "C" ARM void SetNoun_020e4b34(Noun_020e4b34* noun, int singularText, int pluralText, unsigned int singularIndefiniteArticle,
        unsigned char pluralIndefiniteArticle, unsigned char singularDefiniteArticle, unsigned char pluralDefiniteArticle, unsigned char gender,
        unsigned char isPluralOnly, unsigned char arg9, unsigned char hasInitialVowelSound, unsigned char isInitialVowelFromText) {
    memset(noun, 0, 0xc);
    noun->unknown_0_ = singularText;
    noun->unknown_4_ = pluralText;
    noun->unknown_8_.unknown1_0_.unknown_0_0_ = singularIndefiniteArticle;
    noun->unknown_8_.unknown1_0_.unknown_0_6_ = pluralIndefiniteArticle;
    noun->unknown_8_.unknown1_0_.unknown_1_4_ = singularDefiniteArticle;
    noun->unknown_8_.unknown1_0_.unknown_2_2_ = pluralDefiniteArticle;
    noun->unknown_8_.unknown1_0_.unknown_3_0_ = gender;
    noun->unknown_8_.unknown1_0_.unknown_3_2_ = isPluralOnly;
    noun->unknown_8_.unknown1_0_.unknown_3_3_ = arg9;
    noun->unknown_8_.unknown1_0_.unknown_3_4_ = hasInitialVowelSound;
    noun->unknown_8_.unknown1_0_.unknown_3_6_ = isInitialVowelFromText;
}
