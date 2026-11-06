#include <globaldefs.h>

extern "C" void LoadPartyMemberColors_020dc7e8(int destination, int partyMemberIndex);
extern "C" void func_020200c0(int arg0, void* arg1);

// USA: func_02020aa0
extern "C" ARM void func_02020aa0(void* arg0) {
    char var0;
    LoadPartyMemberColors_020dc7e8(6, -1);
    LoadPartyMemberColors_020dc7e8(7, -1);
    for (var0 = 0; var0 < 4; var0++) {
        func_020200c0(var0, (char*)arg0 + 0xe8);
    }
}
