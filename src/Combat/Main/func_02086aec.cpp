#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

struct Party_02053f7c {
    char unknown_0_[0xf78];
    unsigned char memberObjectIndices_f78_[4];
    unsigned char memberCount_f7c_;
};

extern "C" int func_02053c6c(unsigned char* gameObject);

struct Struct_02083994;
extern "C" int func_02083994(struct Struct_02083994* arg0, int arg1);

struct Struct_0206f81c;
struct Struct_0206f81c_8;
extern "C" struct Struct_0206f81c_8* func_02083554(struct Struct_0206f81c* arg0, int arg1);

extern "C" short CountItemInBags_02086bf4(char* party, int itemId);

// USA: CountOwnedItem_02086aec
extern "C" ARM short CountOwnedItem_02086aec(struct Party_02053f7c* party, int itemId) {
    short count;
    GameState* gameState;
    unsigned char i;
    GameObject* partyMemberBase;
    void* memberData;
    if (itemId < 0) {
        return 0;
    }
    count = 0;
    gameState = GameState::GetInstance();
    for (i = 0; i < party->memberCount_f7c_; i++) {
        partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, party->memberObjectIndices_f78_[i]);
        if (partyMemberBase != NULL) {
            memberData = (void*)func_02053c6c((unsigned char*)partyMemberBase);
            if (memberData != NULL) {
                count = count + func_02083994((struct Struct_02083994*)memberData, itemId);
                if (func_02083554((struct Struct_0206f81c*)memberData, itemId) != NULL) {
                    count = count + 1;
                }
            }
        }
    }
    return count + CountItemInBags_02086bf4((char*)party, itemId);
}
