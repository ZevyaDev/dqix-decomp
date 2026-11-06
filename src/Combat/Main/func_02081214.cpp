#include <globaldefs.h>

struct StringList_02072a68_2;

extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

struct Struct_02081214 {
    struct StringList_02072a68_2* unknown_0_;
};

// USA: func_02081214
extern "C" ARM void* func_02081214(struct Struct_02081214* arg0, int arg1) {
    return FindStringInList_02072a68(arg0->unknown_0_, arg1);
}
