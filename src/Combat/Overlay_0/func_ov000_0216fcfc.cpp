#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);

// USA: func_ov000_0216fcfc
extern "C" ARM int func_ov000_0216fcfc(void* arg0, int arg1) {
    return FindStringInTable_020e0434((struct Struct_0201099c_3*)((char*)arg0 + 0x88), arg1);
}
