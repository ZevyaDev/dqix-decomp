#include <globaldefs.h>
#include "Resource/StringList.h"

struct Struct_0201099c_3;
extern "C" int AppendText_02042058(char* buffer, const char* text);

// USA: func_ov003_02159290
extern "C" ARM void func_ov003_02159290(void* arg0, unsigned short arg1, int arg2) {
    int var0 = ((int)((StringList*)((struct Struct_0201099c_3*)((char*)arg0 + 0x64)))->GetString((int)(short)arg1));
    AppendText_02042058(*(char**)((char*)arg0 + 0x7c), (const char*)var0);
    int var1 = ((int)((StringList*)((struct Struct_0201099c_3*)((char*)arg0 + 0x64)))->GetString((int)(short)arg2));
    AppendText_02042058(*(char**)((char*)arg0 + 0x7c), (const char*)var1);
}
