#include <globaldefs.h>
#include "GameState/GameState.h"

int GetFieldAt0x150(unsigned char* obj);
short FindMappedMemberId02080468(void* obj, int id);

// USA: func_ov003_0217a220
ARM void ComputeMappedOffset_0217a220(unsigned char* obj) {
    short result = -1;
    GameState* bs = GameState::GetInstance();
    GameObject* c = bs->GetPartyMemberByIndex(*(signed char*)(obj + 0x1043));
    if (c != NULL) {
        unsigned char* base = (unsigned char*)GetFieldAt0x150((unsigned char*)c);
        short id = FindMappedMemberId02080468(*(void**)(obj + 0x89c), 0x15);
        short diff = *(short*)(obj + 0x100e) - id;
        result = *(short*)(base + diff * 2 + 0x400 + 0x54);
    }
    *(short*)(obj + 0x103a) = result;
}
