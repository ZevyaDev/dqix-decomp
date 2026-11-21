#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x4c0
#else
#define REGION_FIELD_0 0x6d0
#endif

extern "C" void func_0202006c(unsigned char* arg0, int arg1);

struct Struct_ov017_021d82e0_5 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d82e0_5 data_ov017_021d82e0;

// USA: RequestPartyMemberPanelRedraw_ov017_0218b5f8
extern "C" ARM void RequestPartyMemberPanelRedraw_ov017_0218b5f8(int memberIndex) {
    int gameResources = data_ov017_021d82e0.unknown_4_;
    if (gameResources == 0) return;
    int subScreenDisplay = *(int*)((char*)gameResources + 0x3000 + REGION_FIELD_0);
    if (subScreenDisplay == 0) return;
    func_0202006c((unsigned char*)subScreenDisplay, memberIndex);
}
