#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int);
extern "C" float GetScriptValueAsFloat_ov017_021d6110(void*);
extern "C" void* func_ov001_0215a654(void* arg0, int arg1);

// USA: func_ov001_0215c858
extern "C" ARM int func_ov001_0215c858(void* arg0) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) return 0;
    int var2 = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110((char*)arg0 + 0x8));
    func_ov001_0215a654(var1, var2);
    return 1;
}
