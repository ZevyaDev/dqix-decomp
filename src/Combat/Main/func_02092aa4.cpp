#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/StringList.h"

struct StringTable_0201099c_14;

struct Struct_02092aa4 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x2c - 0x14];
    int unknown_2c_;
    short unknown_30_;
    short unknown_32_;
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
};

// USA: ResetCallToArms_02092aa4
extern "C" ARM void ResetCallToArms_02092aa4(Struct_02092aa4* callToArms, int callerIndex) {
    callToArms->unknown_0_.ResetAllocatorPointer();
    ((StringList*)((struct StringTable_0201099c_14*)((char*)callToArms + 0x14)))->Reset();

    callToArms->unknown_2c_ = -1;
    callToArms->unknown_30_ = -1;
    callToArms->unknown_32_ = 0;
    callToArms->unknown_34_ = 0;
    callToArms->unknown_35_ = 0;
    callToArms->unknown_36_ = 0;
    callToArms->unknown_37_ = 0;
    callToArms->unknown_38_ = callerIndex;
    callToArms->unknown_39_ = 0;
    callToArms->unknown_3a_ = 0;
    callToArms->unknown_3b_ = 0;

    unsigned char* partyBytes = (unsigned char*)GetParty_02010828(GameState::GetInstance());
    unsigned char i;
    for (i = 0; i < partyBytes[0xf7c]; i++) {
        unsigned char* var2 = partyBytes + i;
        if (var2[0xf78] == 0) {
            callToArms->unknown_37_ |= 1;
            return;
        }
    }
}
