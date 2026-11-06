#include <globaldefs.h>

extern "C" void* GetMenuObjectList_ov011_021849c8(void* menu);
extern "C" void* FindMenuObjectById_ov023_021f6880(void* objectList, int id);
extern "C" short func_ov023_021f6f10(void* arg0);
extern "C" void* func_ov023_021fa598(void* arg0);

struct StringListEntry_02072a68 { short id_0_; void* pText_4_; };
struct StringList_02072a68_2 { struct StringListEntry_02072a68* unknown_0_; short capacity_4_; };
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

// USA: func_ov023_021f63ac
extern "C" ARM void* func_ov023_021f63ac(void* arg0, int arg1, int arg2) {
    void* var0 = GetMenuObjectList_ov011_021849c8(arg0);
    void* var1 = FindMenuObjectById_ov023_021f6880(var0, arg1);
    if (var1 == NULL) return NULL;
    if (func_ov023_021f6f10(var1) != 4) return NULL;
    struct StringList_02072a68_2* var2 = (struct StringList_02072a68_2*)func_ov023_021fa598(var1);
    return FindStringInList_02072a68(var2, (short)arg2);
}
