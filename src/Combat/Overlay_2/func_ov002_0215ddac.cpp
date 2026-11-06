#include <globaldefs.h>

#if defined(jpn)

extern "C" int AppendPositionTag_02041a90(char* buffer, int x, int y);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int func_0204234c(char* arg0, int arg1);

extern char data_ov002_0216d933[];

// JPN: func_ov002_0215ddac
extern "C" ARM void func_ov002_0215ddac(void* arg0, char* arg1) {
    const char* var0;
    if (arg1 == NULL) return;
    var0 = (const char*)data_ov002_0216d933;
    AppendPositionTag_02041a90(arg1, 0x59, 4);
    AppendText_02042058(arg1, var0);
    func_0204234c(arg1, 0x10);
    AppendPositionTag_02041a90(arg1, 4, 0x14);
    AppendText_02042058(arg1, var0);
    func_0204234c(arg1, 0x20);
    AppendPositionTag_02041a90(arg1, 4, 0x22);
    AppendText_02042058(arg1, var0);
}

#endif
