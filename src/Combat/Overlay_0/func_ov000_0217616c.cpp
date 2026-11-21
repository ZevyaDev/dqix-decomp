#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021c9d2c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

// USA: SendPartyMemberPanelStats_ov000_0217616c
extern "C" ARM void SendPartyMemberPanelStats_ov000_0217616c(char* panel) {
    GameObject* member = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), *(int*)(panel + 0x4c));
    if (member == 0) {
        return;
    }
    func_ov017_021c9d2c(*(int*)(panel + 0x4c), *(short*)(panel + 0xc), *(short*)(panel + 0x8), *(short*)(panel + 0xe),
                         *(short*)(panel + 0xa), *(int*)(panel + 0x28), 0, 0, 0);
}
