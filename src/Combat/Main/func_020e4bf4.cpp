#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"


struct Struct_020e4bf4 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

extern "C" void SetNoun_020e4b34(void* noun, struct BaseCombatStats* singularText, struct BaseCombatStats* pluralText,
    int singularIndefiniteArticle, int pluralIndefiniteArticle, int singularDefiniteArticle, int pluralDefiniteArticle, int gender, int isPluralOnly, int arg9, int hasInitialVowelSound, int isInitialVowelFromText);

// USA: InitPartyMemberNoun_020e4bf4
extern "C" ARM void InitPartyMemberNoun_020e4bf4(void* noun, int partyMemberIndex) {
    memset(noun, 0, 0xc);
    GameState* gameState = GameState::GetInstance();
    GameObject* member = gameState->GetPartyMemberByIndex(partyMemberIndex);
    if (member != NULL) {
        struct Struct_020e4bf4* memberData = *(struct Struct_020e4bf4**)((char*)member + 0x150);
        SetNoun_020e4b34(noun, member->baseStats_, member->baseStats_, 0, 0, 0, 0, memberData->unknown_49c_0_, 0, 1, 0, 1);
    }
}
