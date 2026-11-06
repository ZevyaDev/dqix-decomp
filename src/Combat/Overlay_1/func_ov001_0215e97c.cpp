#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" int GetMessageWindow_020421a0(void);

// USA: func_ov001_0215e97c
extern "C" ARM int func_ov001_0215e97c(void* arg0) {
    char* var0 = (char*)GetMessageWindow_020421a0();
    unsigned char var1 = GetScriptValueAsInt_ov017_021d60f4(arg0) != 0;
#if defined(jpn)
    var0[0x17fc] = var1;
#else
    var0[0x19cb] = var1;
#endif
    return 1;
}
