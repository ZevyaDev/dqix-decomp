#include <globaldefs.h>
#include "Resource/UiArrayEntry.h"

extern Struct_ov031_022276b4* data_ov031_02290c4c;

extern "C" void* func_ov031_0223c560(int arg0, int arg1);
extern "C" int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov031_0223caec(void* arg0);

// USA: ShowMainScreenMessage_ov031_022235a0
extern "C" ARM void ShowMainScreenMessage_ov031_022235a0(void* messageIndex) {
    void* textLayer = func_ov031_0223c560(0, 0);
    int text = func_ov031_022276b4(data_ov031_02290c4c, (unsigned int)messageIndex);
    int drawFlags = func_ov031_022236d0();
    func_ov031_0223c980(textLayer, 0xd, 0x28, 0xe6, 0x70, 2, drawFlags, text);
    func_ov031_0223caec(textLayer);
}
