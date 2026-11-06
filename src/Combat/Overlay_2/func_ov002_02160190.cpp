#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_02160190_7174 = 0x1ace };
#else
enum { Enum_ov002_02160190_7174 = 0x1c06 };
#endif

extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);

// USA: func_ov002_02160190
extern "C" ARM void func_ov002_02160190(char* arg0, char* arg1, int arg2) {
    if (arg2) {
        int var0 = *(short*)(arg0 + Enum_ov002_02160190_7174);
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    int var1 = *(short*)(arg0 + Enum_ov002_02160190_7174);
    AppendCursorTag_02041ea4(arg1, var1);
}
