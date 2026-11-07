#include <globaldefs.h>

struct BGControlSave_02074b64 {
    char unknown_0_[2];
    volatile unsigned short unknown_2_;
    char unknown_4_[2];
    volatile unsigned short unknown_6_;
    char unknown_8_[2];
    volatile unsigned short unknown_a_;
    char unknown_c_[2];
    volatile unsigned short unknown_e_;
    char unknown_10_;
    unsigned char unknown_11_;
};

// USA: SaveSubBGControl_02074b64
extern "C" ARM void SaveSubBGControl_02074b64(struct BGControlSave_02074b64* save) {
    if (save->unknown_11_ != 0) return;
    unsigned short* const subBGControl = (unsigned short*)0x4001008;
    volatile short subBG0ControlCopy, subBG1ControlCopy, subBG2ControlCopy, subBG3ControlCopy;
    {
        unsigned short subBG0Control = *(volatile unsigned short*)&subBGControl[0];
        subBG0ControlCopy = subBG0Control;
        save->unknown_2_ = subBG0Control;
        subBG0ControlCopy;
    }
    {
        unsigned short subBG1Control = *(volatile unsigned short*)&subBGControl[1];
        save->unknown_6_ = subBG1Control;
        subBG1ControlCopy = subBG1Control;
        subBG1ControlCopy;
    }
    {
        unsigned short subBG2Control = *(volatile unsigned short*)&subBGControl[2];
        subBG2ControlCopy = subBG2Control;
        subBG2ControlCopy;
        save->unknown_a_ = subBG2Control;
        subBG2ControlCopy;
    }
    {
        unsigned short subBG3Control = *(volatile unsigned short*)&subBGControl[3];
        save->unknown_e_ = subBG3Control;
        subBG3ControlCopy = subBG3Control;
        subBG3ControlCopy;
    }
    save->unknown_11_ = 1;
}
