#include <globaldefs.h>
#if defined(jpn)
extern "C" void func_02042428(char*, int);
#endif

struct StringList_02072a68_2;
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int AppendText_02042058(char* buffer, const char* text);

// USA: func_ov023_021e8ef8
extern "C" ARM void func_ov023_021e8ef8(void* arg0) {
    struct StringList_02072a68_2* var0 = *(struct StringList_02072a68_2**)((char*)arg0 + 0x5f4);
    if (!var0) return;
    char* var1 = *(char**)((char*)arg0 + 0x5d8);
#if defined(jpn)
    func_02042428(var1, 12);
    var0 = *(struct StringList_02072a68_2**)((char*)arg0 + 0x5f4);
#endif
    void* var2 = FindStringInList_02072a68(var0, 0x77);
    AppendText_02042058(var1, (const char*)var2);
}
