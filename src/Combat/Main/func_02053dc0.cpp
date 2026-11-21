#include <globaldefs.h>

struct Struct_02053dc0 {
#if defined(jpn)
    char unknown1_0_[0x190];
#else
    char unknown_0_[0x19c];
#endif
    void* pBattleCommand_19c_;
};

// USA: GetBattleCommand_02053dc0
extern "C" ARM void* GetBattleCommand_02053dc0(struct Struct_02053dc0* partyMember) {
    void* command = partyMember->pBattleCommand_19c_;
    return command != NULL ? command : NULL;
}
