#include <globaldefs.h>

struct Struct_0205c570;
extern "C" int func_0205c570(struct Struct_0205c570* arg0);

// USA: GetChoiceListCursorIndex_0205cb64
extern "C" ARM int GetChoiceListCursorIndex_0205cb64(void* choiceList) {
    return func_0205c570((struct Struct_0205c570*)((char*)choiceList + 0x1c));
}
