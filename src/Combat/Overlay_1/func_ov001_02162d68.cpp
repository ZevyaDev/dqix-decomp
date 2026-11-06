#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

struct Struct_ov001_02162d68 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

// USA: func_ov001_02162d68
extern "C" ARM int func_ov001_02162d68(void* arg0) {
    GameObject* var0 = GameState::GetInstance()->GetPartyMemberByIndex(0);
    if (var0 == NULL) {
        return 0;
    }
    struct Struct_ov001_02162d68* var1 = (struct Struct_ov001_02162d68*)GetPartyMemberData_02053c6c((unsigned char*)var0);
    SetScriptRefInt_ov017_021d6134(arg0, var1->unknown_49c_0_ == 0);
    return 1;
}
