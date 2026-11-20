#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct PartyMemberData_020e4c74 {
    char unknown_0_[0x49c];
    unsigned char gender_49c_0_ : 1;
};

extern "C" void SetNoun_020e4b34(void* noun, struct BaseCombatStats* singularText, struct BaseCombatStats* pluralText,
    int singularIndefiniteArticle, int pluralIndefiniteArticle, int singularDefiniteArticle, int pluralDefiniteArticle, int gender, int isPluralOnly, int isProperName, int hasInitialVowelSound, int isInitialVowelFromText);

// USA: InitMemberNoun_020e4c74
extern "C" ARM void InitMemberNoun_020e4c74(void* noun, GameObject* member) {
    memset(noun, 0, 0xc);
    if (member != NULL) {
        struct PartyMemberData_020e4c74* memberData = *(struct PartyMemberData_020e4c74**)((char*)member + 0x150);
        SetNoun_020e4b34(noun, member->baseStats_, member->baseStats_, 0, 0, 0, 0, memberData->gender_49c_0_, 0, 1, 0, 1);
    }
}
