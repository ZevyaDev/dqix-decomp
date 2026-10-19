#include <globaldefs.h>
#include "System/ProcessorContext.h"
#include "System/WirelessScanDescriptor.h"
#include "std_library_functions.h"

// Radio link state (the connection state machine's variable).
enum LinkState {
    LINK_NONE,
    LINK_STARTING,
    LINK_TO_STARTING,
    LINK_IDLE,
    LINK_TO_IDLE,
    LINK_SEARCHING,
    LINK_TO_SEARCHING,
    LINK_CONNECTED,
    LINK_TO_CONNECTED,
    LINK_ENDING
};

// Steps of the setup thread (0x02220af0).
enum SetupStep {
    SETUP_STEP_NONE,
    SETUP_STEP_SCAN,
    SETUP_STEP_CONNECT,
    SETUP_STEP_OPEN_SOCKET,
    SETUP_STEP_WAIT_SEARCH,
    SETUP_STEP_SEND_SEARCH_REPLY,
    SETUP_STEP_WAIT_KEY,
    SETUP_STEP_SEND_KEY_REPLY,
    SETUP_STEP_WAIT_SETTINGS,
    SETUP_STEP_SEND_SETTINGS_REPLY,
    SETUP_STEP_FINISH
};

struct RadioConfig {
    int dmaChannel;
    unsigned char* buffer;
    unsigned int bufferSize;
    int bufferMode;
};

typedef WirelessScanDescriptor BssDescription;

// What the setup reports to its caller's callback (0x02222aa4).
struct SetupStatus {
    int state;
    int timeout;
    int result;
};

struct WepKey40 {
    unsigned char bytes[5];
};
struct WepKey104 {
    unsigned char bytes[13];
};
struct WepKey128 {
    unsigned char bytes[16];
};
union WepKey {
    unsigned char bytes[0x20];
    WepKey40 key40;
    WepKey104 key104;
    WepKey128 key128;
};
struct PairwiseMasterKey {
    unsigned int words[16];
};

// The settings the setup hands back (0x02220968 fills it, 0x02222adc copies it out; 0xe8 bytes).
struct SetupSettings {
    char ssid[32];
    int securityMode;
    int wepKeyIndex;
    WepKey wepKeyTable[4];
    PairwiseMasterKey pskBytes;
};

// The module's initialised .data (0x0224b114).
struct SetupData {
    unsigned char* frameBuffer;
    int traceAddresses;
    unsigned long threadStackSize;
    unsigned long deadline;
    int scanParameter;
};

// The module's scalar state; each line gives the object's offset.
unsigned char data_ov031_0224f670;                      // +0x000 reply flag sent with the settings
static RadioConfig* radioConfig;                        // +0x008
static int networkStarted;                              // +0x074
static int scanCapacity;                                // +0x070
static int queueHead;                                   // +0x06c
static int queueTail;                                   // +0x068
static int threadRunning;                               // +0x064
static unsigned long searchOptions;                     // +0x060
static BssDescription* scanResults;                     // +0x05c
static unsigned long connectOptions;                    // +0x058
static unsigned char* workAllocation;                   // +0x054
int data_ov031_0224f6c0;                                // +0x050 search request flag
static BssDescription* connectBss;                      // +0x04c
static unsigned char* scanNameFilter;                   // +0x048
static unsigned char* scanMacFilter;                    // +0x044
static unsigned char* linkWork;                         // +0x040
static unsigned char* wirelessWork;                     // +0x03c
static int selectedStation;                             // +0x018
static int elementLength;                               // +0x034
static unsigned long long* threadStack;                 // +0x030
static LinkState linkState;                             // +0x02c
static unsigned char* connectKeys;                      // +0x028
static int socketStarted;                               // +0x024
static int linkConnected;                               // +0x020
static SetupStep setupStep;                             // +0x01c
static int setupState;                                  // +0x038
static int frameLength;                                 // +0x014
static int cancelRequested;                             // +0x010
static void (*hostFree)(void*);                         // +0x00c
static int setupResult;                                 // +0x078
static void* (*hostAlloc)(unsigned long);               // +0x004
static void (*notifyCallback)(SetupStatus*);            // +0x07c
void (*data_ov031_0224f6f0)(int, int);                  // +0x080 connection event callback

extern SetupData data_ov031_0224b114;
extern ProcessorContext data_ov031_0224f71c;
extern SetupSettings data_ov031_0224f7dc;

bool IsContextInactive(ProcessorContext* context);
int GetGlobalWord021112ec_020c75a4();
extern "C" int func_ov031_0221fa94(int mode);
extern "C" int func_ov031_0221fb38();
extern "C" void func_ov031_02220ed4();
extern "C" unsigned int func_ov031_02222870(void);
extern "C" int func_ov031_02222aa4(SetupStatus* obj);
extern "C" void func_ov031_02222af0(void);

// USA: func_ov031_02222928
extern "C" THUMB int func_ov031_02222928(int priority, int parameter, void (*notify)(SetupStatus*), void* (*allocate)(unsigned long), void (*release)(void*), unsigned long stackSize) {
    if (setupState >= 1 && setupState <= 5) return -10;
    data_ov031_0224b114.scanParameter = parameter;
    setupState = 7;
    notifyCallback = notify;
    hostAlloc = allocate;
    hostFree = release;
    data_ov031_0224b114.threadStackSize = stackSize;
    int result = func_ov031_0221fa94(parameter);
    networkStarted = 1;
    if (result < 0) { setupResult = result; return result; }
    threadStack = (unsigned long long*)hostAlloc(data_ov031_0224b114.threadStackSize);
    if (!threadStack) { setupResult = -1; return -1; }
    if (GetGlobalWord021112ec_020c75a4() != 1) { setupResult = -9; return -9; }
    PopulateContext(&data_ov031_0224f71c, (unsigned int)func_ov031_02220ed4, 0, (unsigned int)(threadStack + data_ov031_0224b114.threadStackSize / sizeof(*threadStack)), data_ov031_0224b114.threadStackSize, priority);
    setupState = 1;
    data_ov031_0224b114.deadline = func_ov031_02222870() + 60000;
    cancelRequested = 0;
    __builtin__clear(&data_ov031_0224f7dc, sizeof(data_ov031_0224f7dc));
    func_ov031_02222af0();
    MarkContextReadyAndSwitch(&data_ov031_0224f71c);
    threadRunning = 1;
    return 1;
}

// USA: func_ov031_02222a10
extern "C" THUMB int func_ov031_02222a10() {
    int state;
    if (threadRunning) {
        state = setupState;
        cancelRequested = 1;
        while (setupState >= 1 && setupState <= 5) {
            SleepCurrentContext(100);
        }
        SleepCurrentContext(500);
        if (!IsContextInactive(&data_ov031_0224f71c)) {
            do {
                MarkContextReadyAndSwitch(&data_ov031_0224f71c);
                AwaitContextCompletion(&data_ov031_0224f71c);
            } while (!IsContextInactive(&data_ov031_0224f71c));
        }
        if (threadStack) {
            hostFree(threadStack);
            threadStack = 0;
        }
        threadRunning = 0;
        if (state != setupState) func_ov031_02222af0();
    }
    if (networkStarted > 0) {
        int result = func_ov031_0221fb38();
        networkStarted = 0;
        return result;
    }
    return -10;
}

// USA: func_ov031_02222aa4
extern "C" THUMB int func_ov031_02222aa4(SetupStatus* obj) {
    obj->state = setupState;
    if (data_ov031_0224b114.deadline == -1) {
        obj->timeout = -1;
    } else {
        obj->timeout = data_ov031_0224b114.deadline - func_ov031_02222870();
    }
    obj->result = setupResult;
    return 1;
}

// USA: func_ov031_02222adc
extern "C" THUMB int func_ov031_02222adc(void* dst) {
    memcpy(dst, &data_ov031_0224f7dc, sizeof(data_ov031_0224f7dc));
    return 1;
}

// USA: func_ov031_02222af0
extern "C" THUMB void func_ov031_02222af0(void) {
    SetupStatus ctx;
    func_ov031_02222aa4(&ctx);
    notifyCallback(&ctx);
}
