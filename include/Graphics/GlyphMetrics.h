#pragma once

#include "std_library_functions.h"

// Shared text layout and display mode state. The first halfword is also
// initialized by func_02029568; the following two bytes remain unidentified.
struct PrintSettings_020ef74c {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    int lineHeight_4_;
    int charWidth_8_;
    int mode_c_;
};

extern PrintSettings_020ef74c data_020ef74c;

