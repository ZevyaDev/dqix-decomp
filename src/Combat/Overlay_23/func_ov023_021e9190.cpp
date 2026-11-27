#include <globaldefs.h>

extern "C" int GetEarnedAccoladeBits_020ac460(void* earnedBits);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: SetScriptRefToAccoladeEarned_ov023_021e9190
extern "C" ARM int SetScriptRefToAccoladeEarned_ov023_021e9190(void* params) {
    unsigned int earnedBits[15];
    GetEarnedAccoladeBits_020ac460(earnedBits);
    int isEarned = 0;
    int accoladeIndex = GetScriptValueAsInt_ov017_021d60f4(params);
    int wordIndex = accoladeIndex / 32;
    int bitIndex = accoladeIndex % 32;
    if (earnedBits[wordIndex] & (1 << bitIndex)) isEarned = 1;
    if (isEarned) {
        SetScriptRefInt_ov017_021d6134((char*)params + 8, 1);
    } else {
        SetScriptRefInt_ov017_021d6134((char*)params + 8, 0);
    }
    return 1;
}
