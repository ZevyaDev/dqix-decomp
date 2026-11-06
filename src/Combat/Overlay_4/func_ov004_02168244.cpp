#if defined(jpn)
#define func_ov004_02167b78 func_ov004_02168074
#endif
#include <globaldefs.h>

extern "C" void func_ov004_02167b78(void* arg0, int arg1);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_02168244
extern "C" ARM int func_ov004_02168244(void* arg0) {
    func_ov004_02167b78(arg0, 0);
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0x96);
    return 0;
}
