#include <globaldefs.h>

struct Struct_ov000_021537b8_6 { char unknown_0_[0xe]; short currMP_e_; };

extern "C" void SendPartyMemberPanelStats_ov000_0217616c(struct Struct_ov000_021537b8_6*);

// USA: SetPartyMemberPanelMP_ov000_02176150
extern "C" ARM void SetPartyMemberPanelMP_ov000_02176150(struct Struct_ov000_021537b8_6* panel, short mp) {
    if (mp == panel->currMP_e_) return;
    panel->currMP_e_ = mp;
    SendPartyMemberPanelStats_ov000_0217616c(panel);
}
