#include <globaldefs.h>

// USA: GetLevel_0202053c
extern "C" ARM unsigned short GetLevel_0202053c(void* gameObject) {
#if defined(jpn)
    char* memberData = *(char**)((char*)gameObject + 0x144);
#else
    char* memberData = *(char**)((char*)gameObject + 0x150);
#endif
#if defined(jpn)
    int vocation = *(int*)(memberData + 0x8b8);
#else
    int vocation = *(int*)(memberData + 0x950);
#endif
    return *(unsigned short*)(memberData + vocation * 2 + 0x16c);
}
