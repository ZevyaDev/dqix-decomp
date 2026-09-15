#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov003_0217f118(void* obj);
void SetByteField0x253(void* obj);
int GetFieldIfFlag4(char* obj);
void SetField0x23cTrue(void* obj);
void ClearFlagBits(unsigned char* obj, int mask);
void ClearBitsInField4(unsigned int* obj, unsigned int mask);

// USA: func_ov003_0217f1b8
ARM void InitObjAndClearFlags_0217f1b8(unsigned char* obj) {
    GameState* battleStruct = GameState::GetInstance();
    unsigned int* p = (unsigned int*)((int)func_ov017_0218b5b0());
    func_ov003_0217f118(obj);
    SetByteField0x253(battleStruct->GetUnknownGameObject());
    int f = GetFieldIfFlag4((char*)battleStruct);
    SetField0x23cTrue((void*)f);
    ClearFlagBits((unsigned char*)f, 2);
    ClearBitsInField4(p, 0xc0);
    obj[1] = 1;
}
