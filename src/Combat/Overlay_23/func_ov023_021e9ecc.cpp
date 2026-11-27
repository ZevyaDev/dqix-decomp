#include <globaldefs.h>

extern "C" int GetAlchemyCount_020ac0b4(void* count);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: SetScriptRefToAlchemyCount_ov023_021e9ecc
extern "C" ARM int SetScriptRefToAlchemyCount_ov023_021e9ecc(void* scriptRef) {
    int alchemyCount = 0;
    GetAlchemyCount_020ac0b4(&alchemyCount);
    SetScriptRefInt_ov017_021d6134(scriptRef, alchemyCount);
    return 1;
}
