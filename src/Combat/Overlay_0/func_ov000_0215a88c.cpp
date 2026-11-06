#include <globaldefs.h>

extern "C" void* func_ov000_0215e9b8(void* arg0);

struct Struct_ov000_0215a88c_3;
struct Struct_ov000_0215a88c;
extern "C" void func_ov000_0215fe00(struct Struct_ov000_0215a88c_3* arg0, struct Struct_ov000_0215a88c* arg1);

struct ActionResultMessage_ov000_0215a88c_2 { short messageId_0_; int pNext_4_; };

// USA: AddActionResultMessage_ov000_0215a88c
extern "C" ARM void AddActionResultMessage_ov000_0215a88c(void* battle, void* result, int messageId) {
    void* node = func_ov000_0215e9b8(battle);
    struct ActionResultMessage_ov000_0215a88c_2* message = (struct ActionResultMessage_ov000_0215a88c_2*)node;
    if (message == 0) {
        return;
    }
    message->messageId_0_ = 0;
    message->pNext_4_ = 0;
    message->messageId_0_ = (short)messageId;
    func_ov000_0215fe00((struct Struct_ov000_0215a88c_3*)result, (struct Struct_ov000_0215a88c*)node);
    unsigned char* battleBytes = (unsigned char*)battle;
    battleBytes[0x8000 + 0xe03] = battleBytes[0x8000 + 0xe03] + 1;
}
