#include <globaldefs.h>

struct Struct_02079e2c;
typedef int (*Type_02079e2c)(void*);
extern "C" void* BinarySearchActionTable_02079e60(struct Struct_02079e2c* actionTable, int key, Type_02079e2c getKey);

struct Struct_020797e8;
extern "C" int GetActionDataId_020797e8(struct Struct_020797e8* actionData);

// USA: FindActionData_02079e2c
extern "C" ARM void* FindActionData_02079e2c(char* actionTables, int actionId) {
    void* action = BinarySearchActionTable_02079e60((struct Struct_02079e2c*)actionTables, actionId, (Type_02079e2c)GetActionDataId_020797e8);
    if (action != 0) return action;
    return BinarySearchActionTable_02079e60((struct Struct_02079e2c*)(actionTables + 0xc), actionId, (Type_02079e2c)GetActionDataId_020797e8);
}
