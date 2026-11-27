#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;

unsigned int IsBrightnessTransitionActive(GameResources*);
extern "C" unsigned int SetScriptRefInt_ov011_02184c68(unsigned int, unsigned int);

// USA: SetScriptRefToBrightnessTransitionActive_ov011_02186e30
extern "C" ARM unsigned int SetScriptRefToBrightnessTransitionActive_ov011_02186e30(unsigned int scriptRef) {
    SetScriptRefInt_ov011_02184c68(scriptRef, IsBrightnessTransitionActive(GetGameResources()));
    return 1;
}
