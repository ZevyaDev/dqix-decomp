#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_021652bc_2456 = 0x868 };
#else
enum { Enum_ov004_021652bc_2456 = 0x998 };
#endif

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_021652bc
#if defined(jpn)
extern "C" ARM int func_ov004_02165b4c(void* arg0)
#else
extern "C" ARM int func_ov004_021652bc(void* arg0)
#endif
{
    if (*(int*)((char*)GetMessageWindow_020421a0() + Enum_ov004_021652bc_2456) == 0) {
        QueueMenuScriptEntry_ov011_021848a0(arg0, 0x65);
    }
    return 0;
}
