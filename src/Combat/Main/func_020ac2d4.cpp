#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"
struct AlchemyRecipeEntry_020ac2d4 { unsigned short idAndFlags_0_; };
struct AlchemyRecipeState_020ac2d4_2 {
    unsigned short recipeId_0_;
    unsigned short isMade_2_0_:1, isKnown_2_1_:1, unknown_2_2_:14;
};
struct Struct_020ac2d4_3 { char unknown_0_[0x7800]; AlchemyRecipeEntry_020ac2d4 recipeEntries_7800_[0x1d7]; };
struct Struct_020ac2d4_4 { char unknown_0_[IS_JPN ? 0x84 : 0x2c4]; Struct_020ac2d4_3 unknown_2c4_; };
// USA: GetAlchemyRecipeStates_020ac2d4
extern "C" ARM int GetAlchemyRecipeStates_020ac2d4(void*, short* recipeIds, AlchemyRecipeState_020ac2d4_2* states, int count) {
    Struct_020ac2d4_3* gameStateBlock = &((Struct_020ac2d4_4*)GameState::GetInstance())->unknown_2c4_;
    for (int i = 0; i < count; i++) {
        int recipeId = recipeIds[i];
        if (recipeId >= 0) {
            int hasSlot = 0;
            AlchemyRecipeEntry_020ac2d4* entry = gameStateBlock->recipeEntries_7800_;
            unsigned int j = 0;
            for (; j < 0x1d7; entry++, j++) {
                int entryRecipeId = (entry->idAndFlags_0_ & 0xfffc) >> 2;
                if (entryRecipeId <= 0) { hasSlot = 1; break; }
                if (entryRecipeId == recipeId) { hasSlot = 1; break; }
            }
            if (hasSlot) {
                AlchemyRecipeState_020ac2d4_2 state;
                state.recipeId_0_ = recipeId;
                state.isMade_2_0_ = (entry->idAndFlags_0_ & 2) >> 1;
                state.isKnown_2_1_ = entry->idAndFlags_0_ & 1;
                memcpy(&states[i], &state, 4);
            }
        }
    }
    return 1;
}
