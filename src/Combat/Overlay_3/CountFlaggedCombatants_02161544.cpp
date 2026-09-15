#include <globaldefs.h>
#include "GameState/GameState.h"

void* GetPtrField0x2a04(GameState* battleStruct);

// USA: func_ov003_02161544
ARM int CountFlaggedCombatants_02161544(void* self) {
    GameState* bs = GameState::GetInstance();
    unsigned char* arr = (unsigned char*)GetPtrField0x2a04(bs);
    unsigned char count = 0;
    unsigned char i = 0;
    while (i < arr[0xf7c]) {
        unsigned char* p = arr + i;
        unsigned char id = p[0xf78];
        if (id != *(short*)((char*)self + 0x400 + 0x82)) {
            GameObject* c = bs->GetCombatantByIndex(id);
            if (c != NULL) {
                int* q = *(int**)((char*)c + 0x130);
                if (*(unsigned short*)((char*)q + 4) != 0) {
                    count = count + 1;
                }
            }
        }
        i = i + 1;
    }
    return count;
}
