#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov031_0222f430 {
    unsigned char unknown_0_[0x38];
    void* unknown_38_;
    unsigned char unknown_3c_[5];
    unsigned char unknown_41_;
    unsigned char unknown_42_[3];
    unsigned char unknown_45_;
    unsigned char unknown_46_;
};
struct Struct_ov031_02290ca0_7 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_ov031_0222f430* unknown_8_;
};
extern Struct_ov031_02290ca0_7 gConnectionSettingsPage_ov031_02290ca0;
extern "C" unsigned char func_ov031_022351e4();
extern "C" unsigned char func_ov031_022351d0();
extern "C" void DisableButtonBarInput_ov031_02222e98();
extern "C" void EnableButtonBarInput_ov031_02222e80();
extern "C" void FreeCursorSprites_ov031_022238cc();
extern "C" void func_ov031_0222f9ec();
extern "C" void func_ov031_022308d4();
extern "C" int PlayWifiSetupSoundEffect_ov031_02236878(int);
extern "C" void func_ov031_0223060c(int);
extern "C" void func_ov031_022306d4();
extern "C" void* AddTask_ov031_0223e218(void*, void*, void*, int);

// USA: func_ov031_0222f430
extern "C" ARM void func_ov031_0222f430() {
    if (gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_38_) return;
    if (gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_41_) gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_41_--;
    switch (func_ov031_022351e4()) {
    case 1:
        gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_45_ = 1;
        return;
    case 2:
        if (gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_41_) return;
        FreeCursorSprites_ov031_022238cc();
        gConnectionSettingsPage_ov031_02290ca0.unknown_4_ = (func_ov031_022351d0() * 145) / 55;
        func_ov031_0222f9ec();
        gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_41_ = 4;
        return;
    case 3: {
        gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_45_ = 0;
        gConnectionSettingsPage_ov031_02290ca0.unknown_4_ = (func_ov031_022351d0() * 145) / 55;
        PlayWifiSetupSoundEffect_ov031_02236878(0x13);
        func_ov031_0222f9ec();
        int var0 = FastIntModulus(gConnectionSettingsPage_ov031_02290ca0.unknown_4_, 0x1d);
        if (var0 == 0) {
            func_ov031_022308d4();
            return;
        }
        if (var0 < 0x10) {
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_38_ = AddTask_ov031_0223e218(0, (void*)func_ov031_0223060c, 0, 0x78);
            return;
        } else {
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_38_ = AddTask_ov031_0223e218(0, (void*)func_ov031_022306d4, 0, 0x78);
        }
        return;
    }
    case 4:
        if (gConnectionSettingsPage_ov031_02290ca0.unknown_4_ == 0) {
            if (gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_46_) return;
            PlayWifiSetupSoundEffect_ov031_02236878(9);
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_46_ = 1;
        } else {
            PlayWifiSetupSoundEffect_ov031_02236878(0x13);
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_38_ = AddTask_ov031_0223e218(0, (void*)func_ov031_0223060c, 0, 0x78);
        }
        return;
    case 6:
        if (gConnectionSettingsPage_ov031_02290ca0.unknown_4_ == 145) {
            if (gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_46_) return;
            PlayWifiSetupSoundEffect_ov031_02236878(9);
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_46_ = 1;
        } else {
            PlayWifiSetupSoundEffect_ov031_02236878(0x13);
            gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_38_ = AddTask_ov031_0223e218(0, (void*)func_ov031_022306d4, 0, 0x78);
        }
        return;
    case 5:
    case 7:
        gConnectionSettingsPage_ov031_02290ca0.unknown_8_->unknown_46_ = 0;
        return;
    }
}
