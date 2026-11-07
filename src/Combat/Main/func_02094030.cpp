#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_02093b54 {
#if defined(jpn)
    char unknown_0_[0xb];
#else
    char unknown_0_[0x30];
#endif
};

struct Notice_02093ad8 {
    struct Struct_02093b54 name_0_;
#if defined(jpn)
    unsigned char unknown_b_;
#endif
    short noticeId_30_;
    signed char memberIndex_32_;
    unsigned char unknown_33_;
};

struct NoticeQueue_02094030 {
    struct Notice_02093ad8 notices_0_[8];
#if defined(jpn)
    char unknown_80_[0x13b - 0x80];
#else
    char unknown_1a0_[0x3cb - 0x1a0];
#endif
    signed char noticeCount_3cb_;
    char unknown_3cc_[0x3cd - 0x3cc];
    unsigned char unknown_3cd_;
};

extern "C" void func_02093980(char* arg0);
extern "C" void func_02093b54(struct Notice_02093ad8* arg0, struct Notice_02093ad8* arg1);
extern "C" int func_0209372c(int arg0);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);

// USA: QueueNotice_02094030

extern "C" ARM int QueueNotice_02094030(struct NoticeQueue_02094030* noticeQueue, int noticeId, int arg2, int memberIndex) {
    GameObject* member = GameState::GetInstance()->GetPartyMemberByIndex(memberIndex);
    void* wireless = GetLocalWireless_0202ae18();
    GameResources* gameResources = GetGameResources();

    if (IsLocalWirelessGuest_0202c540(wireless) != 0) {
        if (noticeId == 10000) return 1;
    }
    if (noticeQueue->noticeCount_3cb_ >= 8) return 1;

    struct Notice_02093ad8* notice = &noticeQueue->notices_0_[noticeQueue->noticeCount_3cb_];
    func_02093980((char*)notice);

    if (member == 0 || noticeId == 3) {
        char* storedName = gameResources->unknown_435c_[memberIndex];
        if (storedName[0] == 0) return 1;
        sprintf(notice->name_0_.unknown_0_, storedName);
    } else if (member != 0) {
        sprintf(notice->name_0_.unknown_0_, member->baseStats_->unk);
    }

    notice->noticeId_30_ = (short)noticeId;
    notice->memberIndex_32_ = (signed char)memberIndex;
    if (noticeQueue->noticeCount_3cb_ <= 0) {
        noticeQueue->unknown_3cd_ |= 1;
    }

    unsigned int category = (unsigned int)func_0209372c(notice->noticeId_30_);
    noticeQueue->noticeCount_3cb_++;

    int i;
    for (i = noticeQueue->noticeCount_3cb_ - 1; i >= 2; i--) {
        if (func_0209372c(noticeQueue->notices_0_[i - 1].noticeId_30_) <= category) break;
        struct Notice_02093ad8 noticeCopy;
        func_02093b54(&noticeCopy, &noticeQueue->notices_0_[i]);
        func_02093b54(&noticeQueue->notices_0_[i], &noticeQueue->notices_0_[i - 1]);
        func_02093b54(&noticeQueue->notices_0_[i - 1], &noticeCopy);
    }
    return 0;
}
