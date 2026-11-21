#include <globaldefs.h>

struct Struct_ov000_021735d0_2 {
    char unknown_0_[0x4c];
    int memberIndex_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x17c - 0x70];
    int selectedMemberIndex_17c_;
};

// USA: GetSelectedMemberPanel_ov000_0217f8c0
extern "C" ARM struct Struct_ov000_021735d0_2* GetSelectedMemberPanel_ov000_0217f8c0(struct Struct_ov000_021735d0_3* battleUI) {
    int i;
    for (i = 0; i < 4; i++) {
        struct Struct_ov000_021735d0_2* panel = (struct Struct_ov000_021735d0_2*)((char*)battleUI + 0x958) + battleUI->unknown_6c_[i];
        if (battleUI->selectedMemberIndex_17c_ == panel->memberIndex_4c_) {
            return panel;
        }
    }
    return 0;
}
