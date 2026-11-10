#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef char* Type_02001bdc;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_start(ap, parm) ((ap) = (Type_02001bdc)((char*)((unsigned long)&(parm) & ~3U) + __va_align(sizeof(parm))))
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))
#define va_end(ap) ((void)0)
#include "NitroSDK/IPC.h"

extern "C" void* func_020d4064();
extern "C" int func_020c7e0c(void* arg0, void* arg1, int arg2);

extern int data_021142e8;

// USA: SendWirelessCommand_020d40bc
extern "C" ARM int SendWirelessCommand_020d40bc(int command, unsigned short paramCount, ...)
{
    Type_02001bdc params;
    int i;
    int sendResult;
    unsigned long* commandBuffer;
    commandBuffer = (unsigned long*)func_020d4064();
    if (commandBuffer == NULL)
        return 8;
    *(unsigned short*)commandBuffer = command;
    va_start(params, paramCount);
    for (i = 0; i < paramCount; i++)
        commandBuffer[i + 1] = va_arg(params, unsigned long);
    va_end(params);
    CleanCacheRange(commandBuffer, 0x100);
    sendResult = SendCommandToArm7(10, (int)commandBuffer, false);
    func_020c7e0c(&data_021142e8, commandBuffer, 1);
    if (sendResult < 0)
        return 8;
    return 2;
}
