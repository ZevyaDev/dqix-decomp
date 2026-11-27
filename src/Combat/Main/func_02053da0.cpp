#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02053da0_412 = 0x190 };
#else
enum { Enum_02053da0_412 = 0x19c };
#endif

struct Struct_02053da0 {
    short unknown_0_;
    char unknown_2_;
    char unknown_3_;
    char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
};

// USA: SetBattleCommand_02053da0
extern "C" ARM void SetBattleCommand_02053da0(char* partyMember, struct Struct_02053da0* command) {
    *(struct Struct_02053da0**)(partyMember + Enum_02053da0_412) = command;
    command->unknown_0_ = 0;
    command->unknown_2_ = 0;
    command->unknown_3_ = 0;
    command->unknown_4_ = 0;
    command->unknown_8_ = 0;
}
