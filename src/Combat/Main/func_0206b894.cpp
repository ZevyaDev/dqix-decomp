#include <globaldefs.h>

extern "C" void ParseTagNumbers_020696bc(int text, int* values, int count);
extern "C" int GetFontDefaultWidth_02042648(int font);

// USA: ApplyPositionTag_0206b894
extern "C" ARM int ApplyPositionTag_0206b894(int arg0, int* arg1, int arg2) {
    int var0;
    ParseTagNumbers_020696bc(arg0, &var0, 1);
    *arg1 = var0 - (GetFontDefaultWidth_02042648(arg2) + 1);
    return 0;
}
