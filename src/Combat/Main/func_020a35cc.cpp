#include <globaldefs.h>

// USA: AddPartyMemberToBattle_020a35cc
extern "C" ARM void AddPartyMemberToBattle_020a35cc(unsigned char* arg0, unsigned char partyMemberIndex) {
    arg0[0x34] |= 1 << partyMemberIndex;
}
