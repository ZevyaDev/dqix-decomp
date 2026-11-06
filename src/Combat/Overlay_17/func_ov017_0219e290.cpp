#include <globaldefs.h>



extern "C" int GetFlagManager_0205ec34(int arg0);
extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
extern "C" void func_ov017_021d0924(int, int, unsigned short, int);
extern unsigned short data_ov017_021d6638[18];

// USA: func_ov017_0219e290
extern "C" ARM void func_ov017_0219e290(void* arg0, unsigned short arg1) {
    int var0 = GetFlagManager_0205ec34((int)arg0);
    int var1 = -1;
    for (unsigned int var2 = 0; var2 < 0x12; var2++) {
        if (arg1 == data_ov017_021d6638[var2]) var1 = var2;
    }
    if (var1 < 0) return;
    SetFlag_0206df6c((void*)var0, (unsigned char*)var0 + 0x8c, var1 + 0x200, 1);
    if (IsNotLocalWirelessGuest_0202c508(GetLocalWireless_0202ae18()) == 0) return;
    func_ov017_021d0924(1, 0, (unsigned short)var1, 1);
}
