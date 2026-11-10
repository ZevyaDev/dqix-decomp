#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c288 {
    char unknown_0_[0xd];
    unsigned char playerCount_d_;
};
struct LocalWireless_0202b2f0 {
    int unknown_0_;
    char unknown_4_[0x1000 - 4];
    struct Struct_0202c288 unknown_1000_;
};

extern "C" void func_020d8654(void);
extern "C" void func_020d8694(void);
extern "C" int IsLocalWirelessPlayerJoined_0202c1c0(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" void func_0202c3e0(void* arg0);
extern "C" void func_020ac4f8(int arg0);
unsigned long long GetCurrentTimestamp(void);

// USA: UpdateLocalWirelessPlayerCount_0202c288
extern "C" ARM void UpdateLocalWirelessPlayerCount_0202c288(struct LocalWireless_0202b2f0* wireless) {
    func_020d8654();
    int isOn = (*(int*)wireless != 0);
    unsigned char previousPlayerCount = wireless->unknown_1000_.playerCount_d_;

    if (!isOn) {
        wireless->unknown_1000_.playerCount_d_ = 1;
    } else {
        wireless->unknown_1000_.playerCount_d_ = 0;
        int i;
        for (i = 0; i < 4; i++) {
            if (IsLocalWirelessPlayerJoined_0202c1c0(wireless, i)) {
                (*((unsigned char*)wireless + 0x100d))++;
            }
        }
        func_0202c3e0(wireless);
    }

    if (*(int*)wireless == 5) {
        unsigned char playerCount = wireless->unknown_1000_.playerCount_d_;
        if (playerCount == 1) {
            if (previousPlayerCount > 1) {
                func_020ac4f8(1);
                goto done;
            }
        }

        if (playerCount > 1) {
            if (previousPlayerCount == 1) {
                GameState* gameState = GameState::GetInstance();
                gameState->altTimestamp_ = GetCurrentTimestamp();
            }
        }
    }

done:
    func_020d8694();
}
