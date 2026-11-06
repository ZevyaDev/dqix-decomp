#include <globaldefs.h>

struct BGControlSave_02074af4 {
    volatile unsigned short unknown_0_;
    char unknown_2_[2];
    volatile unsigned short unknown_4_;
    char unknown_6_[2];
    volatile unsigned short unknown_8_;
    char unknown_a_[2];
    volatile unsigned short unknown_c_;
    char unknown_e_[2];
    unsigned char isMainSaved_10_;
};

// USA: SaveMainBGControl_02074af4
extern "C" ARM void SaveMainBGControl_02074af4(struct BGControlSave_02074af4* save) {
    if (save->isMainSaved_10_ != 0) return;
    unsigned short* const bGControl = (unsigned short*)0x4000008;
    volatile short bg0ControlCopy, bg1ControlCopy, bg2ControlCopy, bg3ControlCopy;
    {
        unsigned short bg0Control = *(volatile unsigned short*)&bGControl[0];
        bg0ControlCopy = bg0Control;
        bg0ControlCopy;
        save->unknown_0_ = bg0Control;
        bg0ControlCopy;
    }
    {
        unsigned short bg1Control = *(volatile unsigned short*)&bGControl[1];
        save->unknown_4_ = bg1Control;
        bg1ControlCopy = bg1Control;
        bg1ControlCopy;
    }
    {
        unsigned short bg2Control = *(volatile unsigned short*)&bGControl[2];
        bg2ControlCopy = bg2Control;
        bg2ControlCopy;
        save->unknown_8_ = bg2Control;
        bg2ControlCopy;
    }
    {
        unsigned short bg3Control = *(volatile unsigned short*)&bGControl[3];
        save->unknown_c_ = bg3Control;
        bg3ControlCopy = bg3Control;
        bg3ControlCopy;
    }
    save->isMainSaved_10_ = 1;
}
