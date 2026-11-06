#if defined(jpn)
#define R(j,u) (j)
#define func_ov004_02167b78 func_ov004_02168074
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov004_02167b78(void* arg0, int arg1);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_02167fb0
extern "C" ARM int func_ov004_02167fb0(void* arg0) {
    func_ov004_02167b78(arg0, 0);
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0x33);
    return 0;
}
