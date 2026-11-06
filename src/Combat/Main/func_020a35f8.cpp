#include <globaldefs.h>

extern "C" ARM int IsPartyMemberInBattle_020a35e0(unsigned char* battleSetup, unsigned char partyMemberIndex);

// USA: func_020a35f8
extern "C" ARM int func_020a35f8(unsigned char* arg0) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        if (IsPartyMemberInBattle_020a35e0(arg0, var1)) {
            var0++;
        }
    }
    return var0;
}
