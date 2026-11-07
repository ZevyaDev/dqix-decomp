#include <globaldefs.h>

extern "C" void SetItemInfoPanelItem_ov023_021dcae0(void* panel, int itemId);

// USA: func_ov023_021fbdcc
extern "C" ARM void func_ov023_021fbdcc(void* arg0, int arg1) {
    SetItemInfoPanelItem_ov023_021dcae0((char*)arg0 + 0x20, arg1);
}
