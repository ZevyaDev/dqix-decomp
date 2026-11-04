#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern "C" void func_02041f50(char*, char*);
extern char data_020efb08[], data_020efb0b[], data_020efb0e[], data_020efb11[], data_020efb14[];
extern char data_020efb17[], data_020efb1a[], data_020efb1d[], data_020efb20[], data_020efb23[];
extern char data_020efb26[], data_020efb29[], data_020efb2c[];

// JPN: func_0203bf00
extern "C" ARM void func_0203bf00(void* arg0, char* arg1, char* arg2, int arg3)
{
    if (arg1 == NULL) return;
    char var0[0x80] = {};
    char* var1 = var0;
    func_02041f50(arg1, var1);
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    signed char var5;
    while ((var5 = *var1) != 0)
    {
        if (arg3 == 8)
        {
            if (var4 >= 4)
            {
                var3++;
                var4 -= 4;
            }
            if (var3 >= 10) break;
        }
        else if (arg3 == 16 && var2 == 10) return;
        if ((var5 == '\\' && var1[1] == 'n') || (var5 == '\r' && var1[1] == '\n'))
        {
            var3++;
            arg2[0] = -1;
            arg2[1] = -1;
            arg2 += 2;
            var1 += 2;
            var2++;
            if (var4 & 3) var3++;
            var4 = 0;
            continue;
        }
        if (var5 == '\n')
        {
            arg2[0] = -1;
            arg2[1] = -1;
            arg2 += 2;
            var1++;
            var2++;
            var3++;
            var4 = 0;
            continue;
        }
        if (var5 >= 'A' && var5 <= 'Z')
        {
            memcpy(arg2, data_020efb08, 2);
            arg2[1] += (char)(var5 - 'A');
            var1++;
            var2++;
            arg2 += 2;
            var4++;
            continue;
        }
        if (var5 >= 'a' && var5 <= 'z')
        {
            memcpy(arg2, data_020efb0b, 2);
            arg2[1] += (char)(var5 - 'a');
            var1++;
            var2++;
            arg2 += 2;
            var4++;
            continue;
        }
        if (var5 >= '0' && var5 <= '9')
        {
            memcpy(arg2, data_020efb0e, 2);
            arg2[1] += (char)(var5 - '0');
            var1++;
            var2++;
            arg2 += 2;
            var4++;
            continue;
        }
        if (var5 == '-')
        {
            memcpy(arg2, data_020efb11, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '!')
        {
            memcpy(arg2, data_020efb14, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '?')
        {
            memcpy(arg2, data_020efb17, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '[')
        {
            memcpy(arg2, data_020efb1a, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == ']')
        {
            memcpy(arg2, data_020efb1d, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '{')
        {
            memcpy(arg2, data_020efb1a, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '}')
        {
            memcpy(arg2, data_020efb1d, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '(')
        {
            memcpy(arg2, data_020efb20, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == ')')
        {
            memcpy(arg2, data_020efb23, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '~')
        {
            memcpy(arg2, data_020efb26, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == ',')
        {
            memcpy(arg2, data_020efb29, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == '.')
        {
            memcpy(arg2, data_020efb2c, 2);
            var1++;
            arg2 += 2;
            var2++;
            var4++;
            continue;
        }
        if (var5 == ' ') { var1++; continue; }
        if (var5 == '+') { var1++; continue; }
        if (var5 == '*') { var1++; continue; }
        if (var5 == '/') { var1++; continue; }
        if (var5 == '%') { var1++; continue; }
        if (var5 == '&') { var1++; continue; }
        if (var5 == '|') { var1++; continue; }
        if (var5 == '=') { var1++; continue; }
        if (var5 == ':') { var1++; continue; }
        if (var5 == ';') { var1++; continue; }
        if (var5 == '<') { var1++; continue; }
        if (var5 == '>') { var1++; continue; }
        if (var5 == '$') { var1++; continue; }
        if (var5 == '@') { var1++; continue; }
        if (var5 == '#') { var1++; continue; }
        if (var5 == '^') { var1++; continue; }
        if (var5 == '_') { var1++; continue; }
        if (var5 == '\\') { var1++; continue; }
        if (var5 == '"') { var1++; continue; }
        if (var5 == '\'') { var1++; continue; }
        arg2[0] = var5;
        arg2[1] = var1[1];
        var1 += 2;
        var2++;
        arg2 += 2;
        var4++;
    }
}
#endif
