#include <globaldefs.h>
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *, int);

extern int data_02153694;

// USA: GetStandardString_020e51cc
extern "C" ARM int GetStandardString_020e51cc(int stringId) {
    return FindStringInTable_020e0434((struct Struct_0201099c_3 *)(&data_02153694), (int)(stringId));
}
