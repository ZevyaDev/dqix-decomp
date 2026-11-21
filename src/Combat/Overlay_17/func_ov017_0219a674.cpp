#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: ResetInteractionPrompt_ov017_0219a674
extern "C" ARM void ResetInteractionPrompt_ov017_0219a674(unsigned char* prompt) {
    VectorizedMemset(prompt, 0, 0x14);
    prompt[0x0] = 0xf;
    prompt[0x1] = 0x12;
    *(unsigned short*)(prompt + 0x2) = 0xff;
    prompt[0x4] = 0;
    *(unsigned short*)(prompt + 0x10) = 0x3244;
}
