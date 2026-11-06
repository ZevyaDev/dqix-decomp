#include <globaldefs.h>

struct Struct_02079e2c;
typedef int (*Type_02079e2c)(void*);
extern "C" void* func_02079e60(struct Struct_02079e2c* arg0, int arg1, Type_02079e2c arg2);

struct Struct_020797e8;
extern "C" int func_020797e8(struct Struct_020797e8* arg0);

// USA: FindActionData_02079e2c
extern "C" ARM void* FindActionData_02079e2c(char* actionTables, int actionId) {
    void* action = func_02079e60((struct Struct_02079e2c*)actionTables, actionId, (Type_02079e2c)func_020797e8);
    if (action != 0) return action;
    return func_02079e60((struct Struct_02079e2c*)(actionTables + 0xc), actionId, (Type_02079e2c)func_020797e8);
}
