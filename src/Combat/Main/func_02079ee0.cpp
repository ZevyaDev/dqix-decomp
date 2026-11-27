#include <globaldefs.h>

struct ActionDamageData_02079ee0;
struct ActionDamageTable_02079ee0_2;
struct Struct_020797f8;
typedef int (*Type_02079ee0)(struct ActionDamageData_02079ee0*);

extern "C" struct ActionDamageData_02079ee0* func_02079f20(struct ActionDamageTable_02079ee0_2* arg0, int arg1, Type_02079ee0 arg2);
extern "C" int func_020797f8(struct Struct_020797f8* arg0);

// USA: FindActionDamageData_02079ee0
extern "C" ARM struct ActionDamageData_02079ee0* FindActionDamageData_02079ee0(void* actionTables, int damageId) {
    struct ActionDamageData_02079ee0* damageData;
    if (damageId == 0) return NULL;
    damageData = func_02079f20((struct ActionDamageTable_02079ee0_2*)((char*)actionTables + 0x18), damageId, (Type_02079ee0)func_020797f8);
    if (damageData != NULL) return damageData;
    return func_02079f20((struct ActionDamageTable_02079ee0_2*)((char*)actionTables + 0x24), damageId, (Type_02079ee0)func_020797f8);
}
