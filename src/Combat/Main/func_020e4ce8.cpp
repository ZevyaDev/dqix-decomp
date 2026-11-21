#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif
struct Struct_020e4ce8 {
    unsigned int singularIndefiniteArticle_0_0_:6, pluralIndefiniteArticle_0_6_:6, singularDefiniteArticle_1_4_:6, pluralDefiniteArticle_2_2_:6, gender_3_0_:2, isPluralOnly_3_2_:1, isProperName_3_3_:1, hasInitialVowelSound_3_4_:1, unknown_3_5_:2, unknown_3_7_:1;
};
struct Noun_020e4ce8_2 { int unknown_0_; int unknown_4_; union { unsigned int unknown_0_; Struct_020e4ce8 unknown1_0_; } unknown_8_; };
struct MonsterData_020e4ce8_3 { char unknown_0_[0x14]; void* pPluralText_14_; Struct_020e4ce8 unknown_18_; };
struct Enemy_020e4ce8_4 { char unknown_0_[0x144]; MonsterData_020e4ce8_3* pMonsterData_144_; char unknown_148_[4]; char name_14c_[1]; };
struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(Struct_02000c9c_8*);
extern "C" int func_020d2ff0(const char*);
extern "C" void SetNoun_020e4b34(void*, const char*, void*, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
// USA: InitEnemyNoun_020e4ce8
extern "C" ARM void InitEnemyNoun_020e4ce8(Noun_020e4ce8_2* noun, Enemy_020e4ce8_4* enemy, int arg2) {
    memset(noun, 0, 12);
    if (enemy) {
        MonsterData_020e4ce8_3* monsterData = enemy->pMonsterData_144_;
        const char* name = enemy->name_14c_;
        SetNoun_020e4b34(noun, name, monsterData->pPluralText_14_, (unsigned char)monsterData->unknown_18_.singularIndefiniteArticle_0_0_,
            monsterData->unknown_18_.pluralIndefiniteArticle_0_6_, monsterData->unknown_18_.singularDefiniteArticle_1_4_, monsterData->unknown_18_.pluralDefiniteArticle_2_2_,
            monsterData->unknown_18_.gender_3_0_, monsterData->unknown_18_.isPluralOnly_3_2_, monsterData->unknown_18_.isProperName_3_3_,
            monsterData->unknown_18_.hasInitialVowelSound_3_4_, 0);
        int length = func_020d2ff0(name);
        int suffixLetter;
        if (length && name[length - 1] >= 'A' && name[length - 1] <= 'Z') suffixLetter = name[length - 1];
        else suffixLetter = 0;
        if (suffixLetter && arg2) {
            if (func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance()) == 1) {
                noun->unknown_8_.unknown1_0_.singularDefiniteArticle_1_4_ = 0;
                noun->unknown_8_.unknown1_0_.singularIndefiniteArticle_0_0_ = 0;
            }
            noun->unknown_8_.unknown1_0_.unknown_3_7_ = 1;
        }
    }
}
