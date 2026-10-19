#include <globaldefs.h>
#include <Graphics/NSBXX/RenderCommands_Common.h>
#include <System/Interrupts.h>
#include <System/Memory.h>
#include "System/Mutex.h"
#include "System/ProcessorContext.h"
#include "System/Timing.h"
#include "System/WirelessScanDescriptor.h"
#include "System/OverlayMD5.h"
#include "std_library_functions.h"

// The ov031 Wi-Fi setup module (0x0221f324-0x02222b0c) and its .bss (0x0224f670-0x0224fb18): the WCM
// connection state machine and its event queue, the station scan and connect, the setup protocol's
// frames, AES key wrap and MD5, and the setup thread with its start/end/status API. Its functions reach
// their data through that one .bss block (and the .data at 0x0224b114) the way mwcc reaches objects
// defined in the same file, and no code outside the range touches either block.
// The module is built with the NitroSDK compiler (2.0/sp1p2; 0221fd18 differs under sp1p6 and later),
// at optimization level 3 without loop-invariant hoisting: 0221fee4 needs both pragmas, and every other
// function of the module compiles to the same bytes with or without them.
#pragma optimization_level 3
#pragma opt_loop_invariants off

// ---------------------------------------------------------------------------------------------------
// Types

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

struct LinkEvent {
    short type;
    short result;
};

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
union WepKeyText {
    char text[0x21];
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

// The settings record the access point sends (0x022206e0 parses it; 0x254 bytes).
struct ReceivedKey {
    int format;
    int length;
    char text[32];
};
struct ReceivedSecurity {
    int type;
    int keyIndex;
    unsigned char unknown08[0x28];
    ReceivedKey keys[4];
    char passphrase[72];
};
struct ReceivedSettings {
    unsigned char unknown000[0x100];
    char ssid[32];
    unsigned char unknown120[0xc];
    ReceivedSecurity security;
    unsigned char unknown244[0x10];
};

// The module's initialised .data (0x0224b114), read through its base.
struct SocketConfig;
struct SetupData {
    unsigned char* frameBuffer;
    int traceAddresses;
    unsigned long threadStackSize;
    unsigned long deadline;
    int scanParameter;
};

struct ScannedStation {
    unsigned int ssidLength;
    unsigned char ssid[0x20];
    char padding24[4];
    unsigned char bssid[6];
    unsigned short security;
};

struct StationList {
    unsigned int count;
    ScannedStation entries[1];
};

// ---------------------------------------------------------------------------------------------------
// The module's .bss (0x0224f670-0x0224fb18). mwcc lays out the objects declared before a function in
// one batch: it collects them in reverse declaration order and heapsorts them by size. So the declaration
// order below is the one that reproduces the ROM's offsets, not a logical grouping; each line gives the
// object's offset. Objects with an entry in symbols.txt keep that address name.

unsigned char data_ov031_0224f670;                      // +0x000 reply flag sent with the settings
static void* (*hostAlloc)(unsigned long);               // +0x004
static void (*hostFree)(void*);                         // +0x00c
static int setupResult;                                 // +0x078
void (*data_ov031_0224f6f0)(int, int);                  // +0x080 connection event callback
static void (*notifyCallback)(SetupStatus*);            // +0x07c
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
int data_ov031_0224f6f4[4];                             // +0x084 connection event queue
Mutex data_ov031_0224f704;                              // +0x094 allocator lock
ProcessorContext data_ov031_0224f71c;                   // +0x0ac setup thread
SetupSettings data_ov031_0224f7dc;                      // +0x16c settings handed back
ReceivedSettings data_ov031_0224f8c4;                   // +0x254 settings received

// Data owned elsewhere: the separate char arrays after .bss, .data and the AES tables.
extern SetupData data_ov031_0224b114;
extern SocketConfig data_ov031_0224b128;
extern char data_ov031_0224b180[];
extern const unsigned char data_ov031_0224b194[64];
extern unsigned char data_ov031_0224b1d4[4] __attribute__((aligned(4)));
extern unsigned char data_ov031_0224fb18[6];
extern unsigned char data_ov031_0224fb20[6];
extern unsigned char data_ov031_0224fb28[6];
extern unsigned char data_ov031_0224fb30[16];
struct SessionKey {
    unsigned char bytes[8];
};
extern SessionKey data_ov031_0224fb40;
extern unsigned char data_ov031_0224fb48[0x10];
extern unsigned char data_ov031_0224fb60[32];
extern char data_ov031_0224fb80[];
extern unsigned char data_ov031_0224fba4[];
extern unsigned char data_ov031_022503a4[0x800];
extern unsigned char data_ov031_02245fb0[8];
extern unsigned char data_ov031_02245fb8[32];
extern unsigned char data_ov031_022460e0[7] __attribute__((aligned(4)));
extern "C" const unsigned int data_ov031_022460e8[10];
extern "C" const unsigned int data_ov031_02246110[256];
extern "C" const unsigned int data_ov031_02246510[256];
extern "C" const unsigned int data_ov031_02246910[256];
extern "C" const unsigned int data_ov031_02246d10[256];
extern "C" const unsigned int data_ov031_02247110[256];
extern "C" const unsigned int data_ov031_02247510[256];
extern "C" const unsigned int data_ov031_02247910[256];
extern "C" const unsigned int data_ov031_02247d10[256];
extern "C" const unsigned int data_ov031_02248110[256];
extern "C" const unsigned int data_ov031_02248510[256];

#define rcon data_ov031_022460e8
#define Td2 data_ov031_02246110
#define Td3 data_ov031_02246510
#define Td4 data_ov031_02246910
#define Te0 data_ov031_02246d10
#define Te1 data_ov031_02247110
#define Te2 data_ov031_02247510
#define Te3 data_ov031_02247910
#define Te4 data_ov031_02247d10
#define Td0 data_ov031_02248110
#define Td1 data_ov031_02248510

// ---------------------------------------------------------------------------------------------------
// Functions outside the module

int DispatchOnZeroPair_0220cdd4(int, int, int);
extern "C" int func_ov031_0220d010(void*, unsigned char*, int);
extern "C" int func_ov031_0220cce4();
void ClearHandleIfStatusReady_0220ca88();
extern "C" int func_ov031_0220d214();
extern "C" int func_ov031_0220cae0(RadioConfig*, void (*)(LinkEvent*));
extern "C" int func_ov031_0220c970(void* workspace, unsigned int size);
extern "C" int func_ov031_0220eb88(int);
extern "C" int func_ov031_0220eb30(void);
extern "C" int func_ov031_022077c0();
extern "C" int func_ov031_0220764c(SocketConfig*);
extern "C" ARM int func_ov031_022073a4(int socket, void* buffer, int length, int flags, void* header);
extern "C" int func_ov031_02206f3c();
void PackBigEndian32_0220781c(unsigned int value, unsigned char* output);
extern "C" void CopyFrom027ffcf4_020c99ac(void* dst);
extern "C" int func_02001aec(const void* first, const void* second, unsigned int size);
extern "C" long long func_0200cf24(long long a, long long b);
unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long a, unsigned long long b);
bool IsContextInactive(ProcessorContext* context);
int GetGlobalWord021112ec_020c75a4();

struct Packet02207204 {
    unsigned char length;
    unsigned char family;
    unsigned short port;
    unsigned int address;
};
ARM int SelectAndCall022071d8(int unused, int mode);
int SwapField2AndForward02207204(void* obj, struct Packet02207204* pkt);
extern "C" int func_ov031_02207434(int socket);
extern "C" int func_ov031_022072d0(int socket, void* buffer, int size, int flags, Packet02207204* address);

// ---------------------------------------------------------------------------------------------------
// Functions of the module, declared ahead of their callers

extern "C" void func_ov031_0221f324(LinkEvent* notice);
extern "C" int func_ov031_0221f630();
extern "C" int func_ov031_0221f698(BssDescription* destination, int capacity);
extern "C" int func_ov031_0221f6dc(unsigned char* address, unsigned char* payload, int length, unsigned long options);
extern "C" int func_ov031_0221f7c4(void);
extern "C" int func_ov031_0221f7fc(void);
extern "C" int func_ov031_0221f854(void* payload, void* auxiliary, int option);
extern "C" int func_ov031_0221f8d8(void (*callback)(int, int), unsigned char* memory, unsigned int size);
extern "C" int func_ov031_0221f994(void);
extern "C" void* func_ov031_0221fa20();
extern "C" void func_ov031_0221f9f8();
extern "C" void func_ov031_0221fa58(int event, int);
extern "C" void func_ov031_0221fa88(int a);
extern "C" int func_ov031_0221fa94(int mode);
extern "C" int func_ov031_0221fb38();
extern "C" int func_ov031_0221fb90();
extern "C" void func_ov031_0221fcb4();
extern "C" int func_ov031_0221fd18(StationList* saved, StationList* scanned, unsigned int* index);
extern "C" int func_ov031_0221fee4();
extern "C" int func_ov031_02220178(int socket, void* header, void* timestamp, void* buffer, int length);
extern "C" int func_ov031_02220190(int socket, void* buffer, int length);
extern "C" void func_ov031_022201cc(int socket, const void* address, void* buffer, int length);
extern "C" unsigned char* func_ov031_022201d8(unsigned char* p, unsigned int* typeOut, unsigned int* lenOut);
extern "C" unsigned char* func_ov031_02220248(unsigned char** cursor, unsigned char* end, unsigned int* typeOut, unsigned int* lenOut);
struct FramedPayloadHeader {
    unsigned short length;
    unsigned char unknown02[6];
};
extern "C" unsigned char* func_ov031_02220298(FramedPayloadHeader* packet, unsigned int* typeOut, unsigned int* lenOut);
struct Destination022202cc;
struct Source022202cc;
extern "C" int func_ov031_022202cc(Destination022202cc* destination, int type, Source022202cc* source, int length, void* transform);
extern "C" unsigned char* func_ov031_02220390(unsigned char* buffer, int type, const void* data, int length);
extern "C" int func_ov031_022203f0(unsigned char* packet, int type, const void* data, int length);
extern "C" int func_ov031_02220418(void* packet, int* enabled);
extern "C" unsigned int func_ov031_022204ec(unsigned char* packet, unsigned int expectedType, unsigned char* destination, const unsigned char* key);
extern "C" int func_ov031_0222053c(void* request);
extern "C" int func_ov031_022205d8(void* dst);
struct AddressPair;
extern "C" int func_ov031_022205e4(AddressPair* output, Packet02207204* address);
extern "C" int func_ov031_022206e0(unsigned char* message);
extern "C" int func_ov031_022208b4(unsigned char* destination, const char* text, int length);
extern "C" int func_ov031_02220968();
extern "C" int func_ov031_02220af0();
extern "C" void func_ov031_02220ed4();
struct Block8 {
    unsigned char v[8];
};
extern "C" int func_ov031_02220f0c(Block8* cipher, const unsigned char* plain, unsigned int len, const unsigned char* kek, unsigned int kekLen);
extern "C" int func_ov031_022210c4(Block8* plain, const unsigned char* cipher, unsigned int len, const unsigned char* kek, unsigned int kekLen);
extern "C" void func_ov031_0222127c(const unsigned char* a, const unsigned char* b, unsigned char* out);
extern "C" int func_ov031_022212c4(unsigned int* rk, const unsigned char* cipherKey, int keyBits);
extern "C" int func_ov031_0222157c(unsigned int* rk, const unsigned char* cipherKey, int keyBits);
extern "C" void func_ov031_0222170c(const unsigned int* rk, int Nr, const unsigned char* ct, unsigned char* pt);
extern "C" void func_ov031_02221ac8(const unsigned int* rk, int Nr, const unsigned char* ct, unsigned char* pt);
extern "C" void func_ov031_02221f78(unsigned int* state, const unsigned char* block);
extern "C" void func_ov031_022227ec(unsigned int* destination, const unsigned char* source, unsigned int size);
extern "C" void func_ov031_02222818(unsigned char* dst, const unsigned char* src, unsigned int count);
extern "C" void func_ov031_02222848(unsigned char* digest, unsigned char* data, unsigned int len);
extern "C" unsigned int func_ov031_02222870(void);
extern "C" void* func_ov031_0222288c(int a, int b);
extern "C" void func_ov031_022228b0(void* p);
extern "C" int func_ov031_022228c0(char* output, int input);
extern "C" int func_ov031_022228f4(char* output, const signed char* address);
extern "C" int func_ov031_02222aa4(SetupStatus* obj);
extern "C" void func_ov031_02222af0(void);

// ---------------------------------------------------------------------------------------------------
// Connection state machine

static inline int DispatchBattlePair(int a, int b, int flags) {
    return DispatchOnZeroPair_0220cdd4(a, b, flags);
}

// USA: func_ov031_0221f324
extern "C" THUMB void func_ov031_0221f324(LinkEvent* event) {
    if (!event) return;
    switch (event->type) {
    case 1:
        if (event->result == 0) {
            if (linkState == LINK_TO_IDLE) {
                linkState = LINK_IDLE;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(6, 0);
            } else if (linkState == LINK_TO_SEARCHING) {
                if (DispatchBattlePair((int)scanMacFilter, (int)scanNameFilter, searchOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_TO_CONNECTED) {
                if (func_ov031_0220d010(connectBss, connectKeys, connectOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            }
        } else {
            linkState = LINK_STARTING;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
        }
        break;
    case 3:
        if (event->result == 0) {
            if (linkState == LINK_TO_SEARCHING) {
                linkState = LINK_SEARCHING;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(8, 0);
            }
        } else {
            linkState = LINK_IDLE;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(9, 0);
        }
        break;
    case 5:
        if (event->result == 0) {
            if (linkState == LINK_TO_CONNECTED) {
                linkState = LINK_CONNECTED;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(12, 0);
            }
        } else {
            linkState = LINK_IDLE;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(13, 0);
        }
        break;
    case 4:
        if (event->result == 0) {
            if (linkState == LINK_TO_IDLE) {
                linkState = LINK_IDLE;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(10, 0);
            } else if (linkState == LINK_TO_SEARCHING) {
                if (DispatchBattlePair((int)scanMacFilter, (int)scanNameFilter, searchOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_TO_STARTING) {
                if (func_ov031_0220cce4() != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_TO_CONNECTED) {
                if (func_ov031_0220d010(connectBss, connectKeys, connectOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            }
        } else {
            linkState = LINK_IDLE;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(11, 0);
        }
        break;
    case 6:
        if (event->result == 0) {
            if (linkState == LINK_TO_IDLE) {
                linkState = LINK_IDLE;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(14, 0);
            } else if (linkState == LINK_TO_SEARCHING) {
                if (DispatchBattlePair((int)scanMacFilter, (int)scanNameFilter, searchOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_TO_STARTING) {
                if (func_ov031_0220cce4() != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_TO_CONNECTED) {
                if (func_ov031_0220d010(connectBss, connectKeys, connectOptions) != 3) {
                    linkState = LINK_IDLE;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (linkState == LINK_CONNECTED) {
                linkState = LINK_IDLE;
            }
        } else {
            linkState = LINK_IDLE;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(15, 0);
        }
        break;
    case 2:
        if (event->result == 0) {
            if (linkState == LINK_TO_STARTING) {
                ClearHandleIfStatusReady_0220ca88();
                linkState = LINK_NONE;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(20, 0);
            }
        } else {
            linkState = LINK_IDLE;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
        }
        break;
    case 7:
        if (linkState == LINK_SEARCHING)
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(5, 0);
        break;
    case 8:
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(4, 0);
        break;
    case 9:
        linkState = LINK_NONE;
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(3, 0);
        break;
    case 0:
    default:
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(1, 0);
        break;
    }
}

// USA: func_ov031_0221f630
extern "C" THUMB int func_ov031_0221f630() {
    switch (linkState) {
    case LINK_SEARCHING:
        if (DispatchOnZeroPair_0220cdd4(0, 0, 0) != 3) return 0;
        break;
    case LINK_CONNECTED:
        if (func_ov031_0220d214() != 3) return 0;
        break;
    case LINK_STARTING:
        if (func_ov031_0220cae0(radioConfig, func_ov031_0221f324) != 3) return 0;
        break;
    default:
    case LINK_NONE:
    case LINK_TO_STARTING:
    case LINK_IDLE:
    case LINK_TO_IDLE:
    case LINK_TO_SEARCHING:
    case LINK_TO_CONNECTED:
        return 0;
    }
    return 1;
}

// USA: func_ov031_0221f698
extern "C" THUMB int func_ov031_0221f698(BssDescription* destination, int capacity) {
    func_ov031_0220eb88(1);
    int count = func_ov031_0220eb30();
    if (count > 0) {
        int index = 0;
        if (index < count) do {
            if (index >= capacity) break;
            func_020ca408(GetOffset10FromResult_0220ec04((unsigned short)index), destination, sizeof(*destination));
            ++index;
            ++destination;
        } while (index < count);
    }
    func_ov031_0220eb88(0);
    return count;
}

// USA: func_ov031_0221f6dc
extern "C" THUMB int func_ov031_0221f6dc(unsigned char* address, unsigned char* payload, int length, unsigned long options) {
    int i;
    unsigned long irqState;
    irqState = DisableIRQInterrupts();
    searchOptions = options;
    scanMacFilter = data_ov031_0224fb28;
    if (address != 0) {
        for (i = 0; i < 6; i++) {
            data_ov031_0224fb28[i] = *address++;
        }
    } else {
        VectorizedMemset(data_ov031_0224fb28, 255, 6);
        scanMacFilter = data_ov031_02245fb0;
    }
    scanNameFilter = data_ov031_0224fb60;
    if (payload != 0 && length > 0 && length < 32) {
        for (i = 0; i < length; i++) {
            data_ov031_0224fb60[i] = *payload++;
        }
        for (; i < 32; i++) {
            data_ov031_0224fb60[i] = 0;
        }
    } else {
        VectorizedMemset(data_ov031_0224fb60, 255, 32);
        scanNameFilter = data_ov031_02245fb8;
    }
    if (linkState == LINK_IDLE) {
        if (DispatchOnZeroPair_0220cdd4(
                (int)data_ov031_0224fb28, (int)scanNameFilter,
                searchOptions) == 3) {
            linkState = LINK_TO_SEARCHING;
            SetIRQInterruptState(irqState);
            return 1;
        }
    } else if (func_ov031_0221f630() == 1) {
        linkState = LINK_TO_SEARCHING;
        SetIRQInterruptState(irqState);
        return 1;
    }
    SetIRQInterruptState(irqState);
    return 0;
}

// USA: func_ov031_0221f7c4
extern "C" THUMB int func_ov031_0221f7c4(void) {
    int oldState = DisableIRQInterrupts();
    if (linkState == LINK_CONNECTED) {
        if (func_ov031_0220d214() == 3) {
            linkState = LINK_TO_IDLE;
            SetIRQInterruptState(oldState);
            return 1;
        }
    }
    SetIRQInterruptState(oldState);
    return 0;
}

// USA: func_ov031_0221f7fc
extern "C" THUMB int func_ov031_0221f7fc(void) {
    int oldState = DisableIRQInterrupts();
    if (linkState == LINK_IDLE) {
        if (func_ov031_0220cce4() != 3) {
            SetIRQInterruptState(oldState);
            return 0;
        }
        linkState = LINK_TO_STARTING;
        SetIRQInterruptState(oldState);
        return 1;
    }
    if (func_ov031_0221f630() == 1) {
        linkState = LINK_TO_STARTING;
        SetIRQInterruptState(oldState);
        return 1;
    }
    SetIRQInterruptState(oldState);
    return 0;
}

// USA: func_ov031_0221f854
extern "C" THUMB int func_ov031_0221f854(void* payload, void* auxiliary, int option) {
    int irqState = DisableIRQInterrupts();
    connectOptions = option;
    if (auxiliary) VectorizedInvertedMemcpy(auxiliary, connectKeys, 96);
    else VectorizedMemset(connectKeys, 0, 96);
    func_020ca408(payload, connectBss, 192);
    if (func_ov031_0221f630() == 1) {
        linkState = LINK_TO_CONNECTED;
        SetIRQInterruptState(irqState);
        return 1;
    }
    if (linkState == LINK_IDLE && func_ov031_0220d010(connectBss, connectKeys, connectOptions) == 3) {
        linkState = LINK_TO_CONNECTED;
        SetIRQInterruptState(irqState);
        return 1;
    }
    SetIRQInterruptState(irqState);
    return 0;
}

// USA: func_ov031_0221f8d8
extern "C" THUMB int func_ov031_0221f8d8(void (*callback)(int, int), unsigned char* memory, unsigned int size) {
    int interruptState = DisableIRQInterrupts();
    RadioConfig* config = (RadioConfig*)(((unsigned int)memory + 0x63) & ~3);
    unsigned int address = (unsigned int)config + 0x2f;
    connectKeys = memory;
    radioConfig = config;
    address &= ~0x1f;
    wirelessWork = (unsigned char*)address;
    address = (address + 0x231f) & ~0x1f;
    connectBss = (BssDescription*)address;
    address = (address + 0xdf) & ~0x1f;
    config->buffer = (unsigned char*)address;
    radioConfig->bufferSize = memory + size - radioConfig->buffer;
    radioConfig->bufferMode = 0;
    radioConfig->dmaChannel = 3;
    data_ov031_0224f6f0 = callback;
    if (linkState == LINK_NONE) {
        if (func_ov031_0220c970(wirelessWork, 0x2300) != 0) {
            SetIRQInterruptState(interruptState);
            return 0;
        }
        linkState = LINK_STARTING;
    }
    if (linkState == LINK_STARTING) {
        if (func_ov031_0220cae0(radioConfig, func_ov031_0221f324) != 3) {
            SetIRQInterruptState(interruptState);
            return 0;
        }
        linkState = LINK_TO_IDLE;
        SetIRQInterruptState(interruptState);
        return 1;
    }
    SetIRQInterruptState(interruptState);
    return 0;
}

// USA: func_ov031_0221f994  (semantic: GetGlobalField2c_0221f994)
extern "C" THUMB int func_ov031_0221f994(void) {
    return linkState;
}

// ---------------------------------------------------------------------------------------------------
// Socket allocator hooks

// USA: func_ov031_0221f9a0
extern "C" THUMB void* func_ov031_0221f9a0(void* unused, int size) {
    if (size > 0) {
        LockMutex(&data_ov031_0224f704);
        void* allocation = hostAlloc(size);
        UnlockMutex(&data_ov031_0224f704);
        return allocation;
    }
    return NULL;
}

// USA: func_ov031_0221f9d0  (semantic: InvokeGuardedCallback_0221f9d0)
extern "C" THUMB void func_ov031_0221f9d0(void* unused0, void* obj, int count) {
    if (obj != 0 && count > 0) {
        LockMutex(&data_ov031_0224f704);
        hostFree(obj);
        UnlockMutex(&data_ov031_0224f704);
    }
}

// ---------------------------------------------------------------------------------------------------
// Connection event queue and connection setup

// USA: func_ov031_0221f9f8
extern "C" THUMB void func_ov031_0221f9f8() {
    int irq = DisableIRQInterrupts();
    queueTail = 0;
    queueHead = 0;
    int i = 0;
    int* p = data_ov031_0224f6f4;
    do {
        i++;
        *p++ = 0;
    } while (i < 4);
    SetIRQInterruptState(irq);
}

// USA: func_ov031_0221fa20
extern "C" THUMB void* func_ov031_0221fa20() {
    int interruptState = DisableIRQInterrupts();
    int index = queueHead;
    void* entry;
    if (queueTail == index) {
        entry = 0;
    } else {
        entry = (void*)data_ov031_0224f6f4[index];
        queueHead = index + 1;
        if (queueHead >= 4) queueHead = 0;
    }
    SetIRQInterruptState(interruptState);
    return entry;
}

// USA: func_ov031_0221fa58
extern "C" THUMB void func_ov031_0221fa58(int event, int) {
    int index = queueTail;
    int next = index + 1;
    int read = queueHead;
    if (next != read && index != read + 3) {
        data_ov031_0224f6f4[index] = event;
        queueTail = next;
        if (next >= 4) queueTail = 0;
    }
}

// USA: func_ov031_0221fa88  (semantic: CallWithZero_0221fa88)
extern "C" THUMB void func_ov031_0221fa88(int a) {
    func_ov031_0221fa58(a, 0);
}

static inline unsigned long long RoundUp32(unsigned long long value) {
    return (value + 0x1f) & ~0x1fULL;
}

// USA: func_ov031_0221fa94
extern "C" THUMB int func_ov031_0221fa94(int mode) {
    int waiting = 1;
    int result;
    scanCapacity = mode;
    func_ov031_0221f9f8();
    unsigned int n = mode * 0xd0;
    void* allocation = hostAlloc(n + 0x24d0 + mode * 0xc0);
    workAllocation = (unsigned char*)allocation;
    if (allocation == NULL) {
        return -1;
    }
    unsigned char* memory = (unsigned char*)RoundUp32((unsigned int)allocation);
    linkWork = memory;
    scanResults = (BssDescription*)RoundUp32((unsigned int)memory + (n + 0x2490));
    if (func_ov031_0221f8d8(func_ov031_0221fa58, memory, n + 0x2490) == 0) {
        return -2;
    }
    do {
        SleepCurrentContext(10);
        int event = (int)func_ov031_0221fa20();
        while (event != 0) {
            switch (event) {
            case 4:
            case 5:
                break;
            case 6:
                waiting = 0;
                result = 1;
                break;
            default:
                waiting = 0;
                result = -2;
                break;
            }
            event = (int)func_ov031_0221fa20();
        }
    } while (waiting);
    return result;
}

// USA: func_ov031_0221fb38
extern "C" THUMB int func_ov031_0221fb38() {
    int waiting = 1;
    if (func_ov031_0221f7fc() != 0) {
        do {
            SleepCurrentContext(10);
            void* event = func_ov031_0221fa20();
            if (event != NULL) do {
                switch ((unsigned int)event) {
                case 4: case 5: break;
                case 20: waiting = 0; break;
                default: waiting = 0; break;
                }
                event = func_ov031_0221fa20();
            } while (event != NULL);
        } while (waiting != 0);
    }
    if (workAllocation != NULL) {
        hostFree(workAllocation);
        workAllocation = NULL;
    }
    return 1;
}

// USA: func_ov031_0221fb90
extern "C" THUMB int func_ov031_0221fb90() {
    int running = 1;
    int result = -2;
    BssDescription* buffer = scanResults + selectedStation;
    Alarm alarm;
    if (buffer == NULL) return 0;
    if (func_ov031_0221f854(buffer, 0, 0x30000) == 0) return -2;
    ZeroInitializeAlarm(&alarm);
    SetTimeout(&alarm, 0x3fec42ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)18);
    do {
        if (func_ov031_02222870() >= data_ov031_0224b114.deadline) { result = -3; break; }
        if (cancelRequested != 0) { result = -8; break; }
        SleepCurrentContext(10);
        int message = (int)func_ov031_0221fa20();
        if (message != 0) { do {
            switch (message) {
            case 4: case 5: case 18: case 19: break;
            case 12: running = 0; result = 1; break;
            case 13:
                if (cancelRequested != 0) { running = 0; result = -8; }
                else if (func_ov031_0221f854(buffer, 0, 0x30000) == 0) return result;
                break;
            default: running = 0; break;
            }
            message = (int)func_ov031_0221fa20();
        } while (message != 0); }
    } while (running != 0);
    CancelAlarm(&alarm);
    while (func_ov031_0221fa20() != 0) {}
    if (result > 0) {
        linkConnected = 1;
        if (func_ov031_0220764c(&data_ov031_0224b128) < 0) result = -2;
        else socketStarted = 1;
    }
    return result;
}

// USA: func_ov031_0221fcb4
extern "C" THUMB void func_ov031_0221fcb4() {
    bool waiting = true;
    if (linkConnected != 0) {
        if (func_ov031_0221f7c4() != 0) {
            do {
                SleepCurrentContext(10);
                int event = (int)func_ov031_0221fa20();
                if (event != 0) do {
                    switch (event) {
                    case 4: case 5: break;
                    case 14: waiting = false; break;
                    default: waiting = false; break;
                    }
                    event = (int)func_ov031_0221fa20();
                } while (event != 0);
            } while (waiting != 0);
        }
        linkConnected = 0;
    }
    if (socketStarted != 0) {
        socketStarted = 0;
        func_ov031_022077c0();
    }
}

// USA: func_ov031_0221fd18
extern "C" THUMB int func_ov031_0221fd18(StationList* saved, StationList* scanned, unsigned int* index) {
    int found = 0;
    int result = 0;
    int savedDefault;
    int scannedDefault;
    unsigned int count;
    unsigned int i;
    unsigned int j;
    ScannedStation* entry = saved->entries;
    ScannedStation* other = scanned->entries;

    for (i = 0; i < saved->count; i++) {
        char name[0x22] = {0};
        memcpy(name, entry->ssid, 0x20);
        name[entry->ssidLength] = 0;
        count = scanned->count;
        j = 0;
        if (j < count) {
            unsigned int length = entry->ssidLength;
            do {
            if (length == 0 || length > 0x20) {
                break;
            }
            if (length == 1 && (entry->ssid[0] == 0 || entry->ssid[0] == ' ')) {
                break;
            }
            if (func_02001aec(name, other->ssid, strlen(name)) == 0 &&
                func_02001aec(entry->bssid, other->bssid, 6) == 0 &&
                entry->security != other->security && entry->security == 0) {
                found = 1;
                break;
            }
            other++;
            } while (++j < count);
        }
        if (found) {
            break;
        }
        entry++;
        other = scanned->entries;
    }
    if (!found) {
        char name[0x22] = {0};
        savedDefault = 0;
        scannedDefault = 0;
        entry = saved->entries;
        other = scanned->entries;
        for (j = 0; j < scanned->count; j++) {
            memcpy(name, other->ssid, 0x20);
            name[other->ssidLength] = 0;
            if (func_02001aec(name, data_ov031_0224b180, strlen(data_ov031_0224b180)) == 0 &&
                other->security == 0) {
                scannedDefault = 1;
                break;
            }
            other++;
        }
        for (i = 0; i < saved->count; i++) {
            memcpy(name, entry->ssid, 0x20);
            name[entry->ssidLength] = 0;
            if (strlen(name) == strlen(data_ov031_0224b180) &&
                func_02001aec(name, data_ov031_0224b180, strlen(data_ov031_0224b180)) == 0 &&
                entry->security == 0) {
                savedDefault = 1;
                break;
            }
            entry++;
        }
        if (savedDefault && !scannedDefault) {
            found = 1;
        }
    }
    if (found) {
        *index = i;
        result = 1;
    }
    return result;
}

// ---------------------------------------------------------------------------------------------------
// Station scan

static inline StationList* AllocStationList(int size) {
    return (StationList*)func_ov031_0222288c(1, size);
}

// USA: func_ov031_0221fee4
extern "C" THUMB int func_ov031_0221fee4() {
    int result = -1;
    int retry;
    int i;
    int index;
    int size;
    StationList* list;
    StationList* previous = NULL;
    int selected = 0;
    BssDescription* desc;
    BssDescription* results;
    unsigned char* mac;
    char text[0x20];
    Alarm alarm;

    size = scanCapacity * sizeof(ScannedStation) + sizeof(StationList);
    list = AllocStationList(size);
    if (list == NULL) goto cleanup;
    previous = AllocStationList(size);
    if (previous == NULL) goto cleanup;

    for (retry = 0; retry < 30 && cancelRequested == 0; retry++) {
        int running;
        int message;

        if (func_ov031_02222870() >= data_ov031_0224b114.deadline) break;
        if (func_ov031_0221f6dc(0, 0, 0, 0x30bffe) == 0) {
            result = -2;
            goto cleanup;
        }
        ZeroInitializeAlarm(&alarm);
        SetTimeout(&alarm, 0xffb10ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
        running = 1;
        result = 0;
        do {
            SleepCurrentContext(10);
            if (func_ov031_02222870() >= data_ov031_0224b114.deadline) break;
            if (cancelRequested != 0) break;
            message = (int)func_ov031_0221fa20();
            if (message != 0) do {
                switch (message) {
                case 4: case 8: case 18:
                    break;
                case 19:
                    running = 0;
                    break;
                case 5: {
                    int n = func_ov031_0221f698(scanResults, scanCapacity);
                    if (n > result) {
                        result = n;
                        CancelAlarm(&alarm);
                        SetTimeout(&alarm, 0xffb10ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
                    }
                    break;
                }
                case 10:
                    running = 0;
                    break;
                case 0: case 1: case 2: case 3: case 6: case 7: case 9:
                case 11: case 12: case 13: case 14: case 15: case 16: case 17:
                default:
                    running = 0;
                    break;
                }
                message = (int)func_ov031_0221fa20();
            } while (message != 0);
        } while (running != 0);
        CancelAlarm(&alarm);
        while (func_ov031_0221fa20() != 0) {}
        if (cancelRequested != 0) break;

        index = 0;
        if (result >= scanCapacity) {
            result = -6;
            goto cleanup;
        }
        results = scanResults;
        i = 0;
        if (result > 0) for (; i < result; i++) {
            desc = &results[i];
            memcpy(list->entries[index].ssid, desc->ssid, sizeof(desc->ssid));
            list->entries[index].ssidLength = desc->ssidLength;
            list->entries[index].ssid[desc->ssidLength] = 0;
            list->entries[index].security = (desc->capability & 0x10) ? 1 : 0;
            mac = list->entries[index].bssid;
            mac[0] = desc->bssid[0];
            mac[1] = desc->bssid[1];
            mac[2] = desc->bssid[2];
            mac[3] = desc->bssid[3];
            mac[4] = desc->bssid[4];
            mac[5] = desc->bssid[5];
            index++;
        }
        list->count = result;

        if (setupState != 1 && func_ov031_0221fd18(list, previous, (unsigned int*)&selected) != 0) {
            ScannedStation* entry = &list->entries[selected];
            selectedStation = selected;
            strcpy(data_ov031_0224fb80, (char*)entry->ssid);
            mac = entry->bssid;
            data_ov031_0224fb20[0] = mac[0];
            data_ov031_0224fb20[1] = mac[1];
            data_ov031_0224fb20[2] = mac[2];
            data_ov031_0224fb20[3] = mac[3];
            data_ov031_0224fb20[4] = mac[4];
            data_ov031_0224fb20[5] = mac[5];
            func_ov031_022228f4(text, (const signed char*)data_ov031_0224fb20);
            break;
        }
        memcpy(previous, list, size);
        setupState = 2;
        func_ov031_02222af0();
    }

    if (retry >= 30 || func_ov031_02222870() > data_ov031_0224b114.deadline) {
        result = -3;
    } else if (cancelRequested != 0) {
        result = -8;
    } else {
        result = 1;
    }

cleanup:
    if (list != NULL) func_ov031_022228b0(list);
    if (previous != NULL) func_ov031_022228b0(previous);
    return result;
}

// ---------------------------------------------------------------------------------------------------
// Frames and elements of the configuration protocol

// USA: func_ov031_02220178  (semantic: ForwardOrFail_02220178)
extern "C" THUMB int func_ov031_02220178(int socket, void* header, void* timestamp, void* buffer, int length) {
    int result = func_ov031_022073a4(socket, buffer, length, 0, header);
    if (result < 0) {
        result = -4;
    }
    return result;
}

struct Request02220190 {
    unsigned char timestamp[4];
    unsigned char size;
    unsigned char type;
    unsigned short command;
    int result;
};

// USA: func_ov031_02220190
extern "C" THUMB int func_ov031_02220190(int socket, void* buffer, int length) {
    Request02220190 request;
    request.size = 8;
    request.type = 2;
    request.result = -1;
    request.command = 0x1e6;
    PackBigEndian32_0220781c(func_ov031_02206f3c(), request.timestamp);
    return func_ov031_02220178(socket, &request.size, request.timestamp, buffer, length);
}

// USA: func_ov031_022201cc  (semantic: ForwardSkipArg_022201cc)
extern "C" THUMB void func_ov031_022201cc(int socket, const void* address, void* buffer, int length) {
    func_ov031_02220190(socket, buffer, length);
}

// USA: func_ov031_022201d8  (semantic: ParsePacketHeaderAndVerifyChecksum_022201d8)
extern "C" THUMB unsigned char* func_ov031_022201d8(unsigned char* p, unsigned int* typeOut, unsigned int* lenOut) {
    unsigned short type = *(unsigned short*)(p + 0);
    unsigned int sum = 0;
    *typeOut = (unsigned short)((unsigned char)(type >> 8) | ((type << 8) & 0xff00));

    unsigned short len = *(unsigned short*)(p + 2);
    unsigned int swappedLen = (unsigned short)((unsigned char)(len >> 8) | ((len << 8) & 0xff00));
    *lenOut = swappedLen;

    unsigned char* end = p + 6 + swappedLen;
    unsigned char* cur = p;
    if (cur < end) {
        do {
            sum += *cur++;
        } while (cur < end);
    }
    unsigned short checksum = *(unsigned short*)end;
    unsigned short swappedChecksum = (unsigned short)((unsigned char)(checksum >> 8) | ((checksum << 8) & 0xff00));
    if ((unsigned short)sum != swappedChecksum)
        return 0;
    return p + 6;
}

// USA: func_ov031_02220248
extern "C" THUMB unsigned char* func_ov031_02220248(unsigned char** cursor, unsigned char* end, unsigned int* typeOut, unsigned int* lenOut) {
    unsigned char* p = *cursor;
    if (p >= end)
        return 0;

    unsigned short type = *(unsigned short*)(p + 0);
    *typeOut = (unsigned short)((unsigned char)(type >> 8) | ((type << 8) & 0xff00));

    unsigned short len = *(unsigned short*)(p + 2);
    unsigned int swappedLen = (unsigned short)((unsigned char)(len >> 8) | ((len << 8) & 0xff00));
    *lenOut = swappedLen;

    unsigned char* data = p + 4;
    *cursor = data + (((swappedLen + 11) & ~7) - 4);
    return data;
}

// USA: func_ov031_02220298
extern "C" THUMB unsigned char* func_ov031_02220298(FramedPayloadHeader* packet, unsigned int* typeOut, unsigned int* lenOut) {
    unsigned char* cursor = (unsigned char*)(packet + 1);
    unsigned short length = packet->length;
    unsigned short swapped = (unsigned char)(length >> 8) | ((length << 8) & 0xff00);
    return func_ov031_02220248(&cursor, cursor + swapped, typeOut, lenOut);
}

struct Source022202cc {
    union { struct { unsigned short length; unsigned char pad2[6]; } fields; unsigned char raw[8]; } header;
    unsigned char payload[1];
};
struct Destination022202cc {
    union { struct { unsigned short type, length, field4; } fields; unsigned char raw[6]; } header;
    unsigned char payload[1];
};

// USA: func_ov031_022202cc
extern "C" THUMB int func_ov031_022202cc(Destination022202cc* destination, int type, Source022202cc* source, int length, void* transform) {
    unsigned char* end = (unsigned char*)destination;
    unsigned int checksum = 0;
    source->header.raw[0] = 0;
    unsigned short payloadLength = length - 8;
    source->header.raw[1] = 0;
    source->header.raw[2] = 0;
    source->header.raw[3] = 0;
    source->header.raw[4] = 0;
    source->header.raw[5] = 0;
    source->header.raw[6] = 0;
    source->header.raw[7] = 0;
    source->header.fields.length = (unsigned char)(payloadLength >> 8) | ((payloadLength << 8) & 0xff00);
    if (transform) {
        func_ov031_02220f0c((Block8*)destination->payload, (const unsigned char*)source, length, (const unsigned char*)transform, 16);
        length += 8;
    } else memcpy(destination->payload, source, length);
    destination->header.raw[0] = 0;
    destination->header.raw[1] = 0;
    destination->header.raw[2] = 0;
    destination->header.raw[3] = 0;
    destination->header.raw[4] = 0;
    destination->header.raw[5] = 0;
    unsigned short typeWord = type;
    destination->header.fields.type = (unsigned char)(typeWord >> 8) | ((typeWord << 8) & 0xff00);
    unsigned short lengthWord = length;
    destination->header.fields.length = (unsigned char)(lengthWord >> 8) | ((lengthWord << 8) & 0xff00);
    end += 6;
    end += length;
    unsigned char* cursor = (unsigned char*)destination;
    if (cursor < end) do { checksum += *cursor++; } while (cursor < end);
    unsigned short checksumWord = checksum;
    *(unsigned short*)end = (unsigned char)(checksumWord >> 8) | ((checksumWord << 8) & 0xff00);
    return end + 2 - (unsigned char*)destination;
}

// USA: func_ov031_02220390
extern "C" THUMB unsigned char* func_ov031_02220390(unsigned char* buffer, int type, const void* data, int length) {
    buffer[0] = 0;
    buffer[1] = 0;
    buffer[2] = 0;
    buffer[3] = 0;
    unsigned short tag = type;
    ((unsigned short*)buffer)[0] = (unsigned char)(tag >> 8) | ((tag << 8) & 0xff00);
    int padded = ((length + 4 + 7) & ~7) - 4;
    unsigned short size = length;
    ((unsigned short*)buffer)[1] = (unsigned char)(size >> 8) | ((size << 8) & 0xff00);
    buffer += 4;
    memset(buffer, 0, padded);
    memcpy(buffer, data, length);
    buffer += padded;
    return buffer;
}

// USA: func_ov031_022203f0
extern "C" THUMB int func_ov031_022203f0(unsigned char* packet, int type, const void* data, int length) {
    packet[0] = 0;
    packet[1] = 0;
    packet[2] = 0;
    packet[3] = 0;
    packet[4] = 0;
    packet[5] = 0;
    packet[6] = 0;
    packet[7] = 0;

    int size = (int)func_ov031_02220390(packet + 8, type, data, length) - (int)packet;
    ((unsigned short*)packet)[0] = (unsigned short)(size - 8);
    return size;
}

struct Record02220418 { unsigned short value; };
struct Body02220418 { unsigned char header[8]; unsigned char records[1]; };

// USA: func_ov031_02220418
extern "C" THUMB int func_ov031_02220418(void* packet, int* enabled) {
    unsigned int type, length, recordType, recordLength;
    unsigned char* cursor;
    int first;
    int second;
    int fifth;
    Body02220418* body = (Body02220418*)func_ov031_022201d8((unsigned char*)packet, &type, &length);
    first = 0;
    cursor = (unsigned char*)body;
    second = 0;
    fifth = 0;
    if (!body) return first;
    if (type != 1) return first;
    unsigned char* end = (unsigned char*)body + length;
    cursor += sizeof(body->header);
    Record02220418* record;
    while ((record = (Record02220418*)func_ov031_02220248(&cursor, end, &recordType, &recordLength)) != 0) {
        switch (recordType) {
        case 1: {
            unsigned short value = record->value;
            first = (unsigned short)((unsigned char)(value >> 8) | ((value << 8) & 0xff00));
            break;
        }
        case 2: {
            unsigned short value = record->value;
            second = (unsigned short)((unsigned char)(value >> 8) | ((value << 8) & 0xff00));
            break;
        }
        case 5: {
            unsigned short value = record->value;
            fifth = (unsigned short)((unsigned char)(value >> 8) | ((value << 8) & 0xff00));
            break;
        }
        }
    }
    if (first != 1 || second != 1) return 0;
    if (fifth >= 1) *enabled = 1;
    else *enabled = 0;
    return 1;
}

// USA: func_ov031_022204ec
extern "C" THUMB unsigned int func_ov031_022204ec(unsigned char* packet, unsigned int expectedType, unsigned char* destination, const unsigned char* key) {
    unsigned int type;
    unsigned int length;
    unsigned char* payload = func_ov031_022201d8(packet, &type, &length);
    if (!payload) return 0;
    if (type != expectedType) return 0;
    if (key) {
        func_ov031_022210c4((Block8*)destination, payload, length, key, 16);
        length -= 8;
    } else {
        memcpy(destination, payload, length);
    }
    return length;
}

struct Descriptor0222053c {
    unsigned short length;
    unsigned char name[7];
};

// USA: func_ov031_0222053c
extern "C" THUMB int func_ov031_0222053c(void* request) {
    Descriptor0222053c descriptor;
    descriptor.length = 256;
    const unsigned char* source = data_ov031_022460e0;
    unsigned char* destination = descriptor.name;
    int remaining = 7;
    do {
        *destination++ = *source++;
    } while (--remaining);
    unsigned char* cursor = func_ov031_02220390(data_ov031_0224b114.frameBuffer, 1, &descriptor, 2);
    cursor = func_ov031_02220390(cursor, 2, &descriptor, 2);
    cursor = data_ov031_0224f6c0 ? func_ov031_02220390(cursor, 5, &descriptor, 2) : cursor;
    cursor = func_ov031_02220390(cursor, 3, descriptor.name, 7);
    if (data_ov031_0224f6c0) cursor = func_ov031_02220390(cursor, 4, data_ov031_0224fb18, 6);
    return func_ov031_022202cc((Destination022202cc*)request, 2, (Source022202cc*)data_ov031_0224fba4, cursor - data_ov031_0224b114.frameBuffer + 8, 0);
}

// USA: func_ov031_022205d8  (semantic: CopyAndSucceed_022205d8)
extern "C" THUMB int func_ov031_022205d8(void* dst) {
    CopyFrom027ffcf4_020c99ac(dst);
    return 1;
}

struct HardwareAddress {
    unsigned char bytes[6];
};
struct InternetAddress {
    unsigned char bytes[4];
};
struct AddressPair {
    HardwareAddress first;
    HardwareAddress second;
    InternetAddress network;
};

#define COPY_ADDRESS(destination, source) do { \
    HardwareAddress* targetAddress = &(destination); \
    const HardwareAddress* sourceAddress = &(source); \
    targetAddress->bytes[0] = sourceAddress->bytes[0]; \
    targetAddress->bytes[1] = sourceAddress->bytes[1]; \
    targetAddress->bytes[2] = sourceAddress->bytes[2]; \
    targetAddress->bytes[3] = sourceAddress->bytes[3]; \
    targetAddress->bytes[4] = sourceAddress->bytes[4]; \
    targetAddress->bytes[5] = sourceAddress->bytes[5]; \
} while (0)

// USA: func_ov031_022205e4
// KEEP-NAME: func_ov031_022205e4
extern "C" THUMB int func_ov031_022205e4(AddressPair* output, Packet02207204* address) {
    char firstText[32];
    char secondText[32];
    HardwareAddress addresses[2];
    unsigned char* network = output->network.bytes;
    const unsigned char* sourceNetwork = data_ov031_0224b1d4;
    network[0] = sourceNetwork[0];
    network[1] = sourceNetwork[1];
    network[2] = sourceNetwork[2];
    network[3] = sourceNetwork[3];
    COPY_ADDRESS(addresses[1], *(HardwareAddress*)data_ov031_0224fb20);
    addresses[1].bytes[0] &= 0xfd;
    func_ov031_022205d8(&addresses[0]);
    const HardwareAddress* primary = &addresses[0];
    COPY_ADDRESS(*(HardwareAddress*)data_ov031_0224fb18, *primary);
    const HardwareAddress* second;
    if (func_02001aec(&addresses[1], primary, 6) <= 0) {
        COPY_ADDRESS(output->first, addresses[0]);
        second = &addresses[1];
    } else {
        COPY_ADDRESS(output->first, addresses[1]);
        second = &addresses[0];
    }
    COPY_ADDRESS(output->second, *second);
    if (data_ov031_0224b114.traceAddresses) {
        func_ov031_022228f4(firstText, (const signed char*)&addresses[0]);
        func_ov031_022228f4(secondText, (const signed char*)&addresses[1]);
    }
    return 1;
}

#define SWAP16(v) ((unsigned short)((unsigned char)((v) >> 8) | (((v) << 8) & 0xff00)))

// USA: func_ov031_022206e0
extern "C" THUMB int func_ov031_022206e0(unsigned char* message) {
    unsigned short* header;
    int result;
    unsigned int total;
    unsigned char* cursor;
    int type;
    int len;
    unsigned char* data;
    header = (unsigned short*)message;
    message += 8;
    cursor = message;
    result = 0;
    total = SWAP16(*header);
    data = func_ov031_02220248(&cursor, message + total, (unsigned int*)&type, (unsigned int*)&len);
    if (data != 0) {
        do {
            switch (type) {
            case 0x201:
                __builtin__clear(data_ov031_0224f8c4.ssid, sizeof(data_ov031_0224f8c4.ssid));
                memcpy(data_ov031_0224f8c4.ssid, data, len);
                result = 1;
                break;
            case 0x202:
                data_ov031_0224f8c4.security.type = SWAP16(*(unsigned short*)data);
                break;
            case 0x203: {
                int i = 0;
                unsigned char* entry = (unsigned char*)&data_ov031_0224f8c4;
                unsigned int format = SWAP16(*(unsigned short*)data);
                do {
                    *(unsigned int*)(entry + 0x15c) = format;  // security.keys[i].format
                    i++;
                    entry += sizeof(ReceivedKey);
                } while (i < 4);
                break;
            }
            case 0x204: {
                unsigned char* entry = (unsigned char*)&data_ov031_0224f8c4;
                int i = 0;
                unsigned int length = SWAP16(*(unsigned short*)data);
                do {
                    *(unsigned int*)(entry + 0x160) = length;  // security.keys[i].length
                    i++;
                    entry += sizeof(ReceivedKey);
                } while (i < 4);
                break;
            }
            case 0x205:
                data_ov031_0224f8c4.security.keyIndex = SWAP16(*(unsigned short*)data);
                break;
            case 0x206:
            case 0x207:
            case 0x208:
            case 0x209:
                memset(data_ov031_0224f8c4.security.keys[type - 0x206].text, 0, 0x20);
                if (data_ov031_0224f8c4.security.keys[0].format == 1) {
                    char* out = data_ov031_0224f8c4.security.keys[type - 0x206].text;
                    int i = 0;
                    if (i < len) {
                        do {
                            out += func_ov031_022228c0(out, *(char*)data++);
                            i++;
                        } while (i < len);
                    }
                } else {
                    memcpy(data_ov031_0224f8c4.security.keys[type - 0x206].text, data, len);
                }
                break;
            case 0x20a:
                __builtin__clear(data_ov031_0224f8c4.security.passphrase, sizeof(data_ov031_0224f8c4.security.passphrase));
                memcpy(data_ov031_0224f8c4.security.passphrase, data, len);
                break;
            }
            data = func_ov031_02220248(&cursor, message + total, (unsigned int*)&type, (unsigned int*)&len);
        } while (data != 0);
    }
    return result;
}

// USA: func_ov031_022208b4
extern "C" THUMB int func_ov031_022208b4(unsigned char* destination, const char* text, int length) {
    int c;
    int value = 0;
    int i = 0;
    if (length > 0) do {
        c = text[i];
        switch (c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            value += c - '0';
            break;
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
            value += c - 'a' + 10;
            break;
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            value += c - 'A' + 10;
            break;
        default:
            return 0;
        }
        if (i % 2 == 0) {
            value <<= 4;
        } else {
            destination[i / 2] = value;
            value = 0;
        }
        i++;
    } while (i < length);
    return 1;
}

// USA: func_ov031_02220968
extern "C" THUMB int func_ov031_02220968() {
    int result = 1;
    strcpy(data_ov031_0224f7dc.ssid, data_ov031_0224f8c4.ssid);
    switch (data_ov031_0224f8c4.security.type) {
    case 0:
        data_ov031_0224f7dc.securityMode = 0;
        break;
    case 1: {
        if (data_ov031_0224f8c4.security.keyIndex == 0) {
            result = -7;
            break;
        }
        data_ov031_0224f7dc.wepKeyIndex = data_ov031_0224f8c4.security.keyIndex;
        WepKeyText key;
        const WepKeyText* text;
        const char* source = data_ov031_0224f8c4.security.keys[0].text;
        WepKey* destination = data_ov031_0224f7dc.wepKeyTable;
        int i = 0;
        text = &key;
        do {
            memcpy(key.text, source, 0x20);
            key.text[0x20] = 0;
            switch (strlen(key.text)) {
            case 0:
                break;
            case 5:
                data_ov031_0224f7dc.securityMode = 1;
                destination->key40 = text->key40;
                break;
            case 10:
                data_ov031_0224f7dc.securityMode = 1;
                func_ov031_022208b4(destination->bytes, text->text, 10);
                break;
            case 13:
                data_ov031_0224f7dc.securityMode = 2;
                destination->key104 = text->key104;
                break;
            case 26:
                data_ov031_0224f7dc.securityMode = 2;
                func_ov031_022208b4(destination->bytes, text->text, 26);
                break;
            case 16:
                data_ov031_0224f7dc.securityMode = 3;
                destination->key128 = text->key128;
                break;
            case 32:
                data_ov031_0224f7dc.securityMode = 3;
                func_ov031_022208b4(destination->bytes, text->text, 32);
                break;
            default:
                result = -7;
                break;
            }
            source += sizeof(ReceivedKey);
            destination++;
            i++;
        } while (i < 4);
        break;
    }
    case 2:
        data_ov031_0224f7dc.securityMode = 4;
        __memcpy(&data_ov031_0224f7dc.pskBytes, data_ov031_0224f8c4.security.passphrase, sizeof(data_ov031_0224f7dc.pskBytes));
        break;
    case 3:
        data_ov031_0224f7dc.securityMode = 5;
        __memcpy(&data_ov031_0224f7dc.pskBytes, data_ov031_0224f8c4.security.passphrase, sizeof(data_ov031_0224f7dc.pskBytes));
        break;
    default:
        result = -7;
        break;
    }
    return result;
}

// USA: func_ov031_02220af0
extern "C" THUMB int func_ov031_02220af0() {
    Packet02207204 local;
    Packet02207204 from;
    int socket = 0;
    int result = -5;
    unsigned int timestamp = 0;
    int attempts = 0;
    int done = 0;
    setupStep = SETUP_STEP_SCAN;
    while (!done && !cancelRequested) {
        SleepCurrentContext(500);
        switch (setupStep) {
        case SETUP_STEP_SCAN:
            result = func_ov031_0221fee4();
            if (result != 1) {
                done = 1;
                break;
            }
            setupState = 3;
            func_ov031_02222af0();
            setupStep = SETUP_STEP_CONNECT;
            break;
        case SETUP_STEP_CONNECT:
            result = func_ov031_0221fb90();
            if (result != 1) {
                done = 1;
                break;
            }
            setupStep = SETUP_STEP_OPEN_SOCKET;
            break;
        case SETUP_STEP_OPEN_SOCKET: {
            typedef int (*Fn3)(int, int, int);
            socket = ((Fn3)SelectAndCall022071d8)(2, 2, 0);
            if (socket < 0) {
                result = -2;
                done = 1;
                break;
            }
            __builtin__clear(&local, sizeof(local));
            local.length = 8;
            local.family = 2;
            local.port = 0x1e6;
            local.address = 0;
            result = SwapField2AndForward02207204((void*)socket, &local);
            if (result < 0) {
                result = -2;
                done = 1;
                break;
            }
            setupStep = SETUP_STEP_WAIT_SEARCH;
            break;
        }
        case SETUP_STEP_WAIT_SEARCH:
            if (func_ov031_02222870() >= data_ov031_0224b114.deadline) {
                func_ov031_02207434(socket);
                result = -3;
                done = 1;
                break;
            }
            from.length = 8;
            func_ov031_022205e4((AddressPair*)data_ov031_0224fb30, &from);
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                func_ov031_02220418(data_ov031_022503a4, &data_ov031_0224f6c0) != 0) {
                data_ov031_0224b114.deadline = func_ov031_02222870() + 30000;
                setupStep = SETUP_STEP_SEND_SEARCH_REPLY;
                setupState = 4;
                func_ov031_02222af0();
            }
            break;
        case SETUP_STEP_SEND_SEARCH_REPLY: {
            int length = func_ov031_0222053c(data_ov031_022503a4);
            frameLength = length;
            func_ov031_022201cc(socket, &from, data_ov031_022503a4, length);
            timestamp = func_ov031_02222870();
            setupStep = SETUP_STEP_WAIT_KEY;
            break;
        }
        case SETUP_STEP_WAIT_KEY:
            if (func_ov031_02222870() >= data_ov031_0224b114.deadline) {
                func_ov031_02207434(socket);
                result = -4;
                done = 1;
                break;
            }
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                func_ov031_022204ec(data_ov031_022503a4, 3, data_ov031_0224fba4, data_ov031_0224fb30) != 0) {
                unsigned int type;
                unsigned int size;
                const SessionKey* key = (const SessionKey*)func_ov031_02220298((FramedPayloadHeader*)data_ov031_0224fba4, &type, &size);
                if (type == 0x101) {
                    unsigned int now = func_ov031_02222870();
                    data_ov031_0224fb40 = *key;
                    func_ov031_02222848(data_ov031_0224fb48, (unsigned char*)&now, 4);
                    attempts = 0;
                    setupStep = SETUP_STEP_SEND_KEY_REPLY;
                    setupState = 5;
                    data_ov031_0224b114.deadline = -1;
                    func_ov031_02222af0();
                } else if (type == 0x102) {
                    break;
                }
            } else if (func_ov031_02222870() >= timestamp + 1000) {
                setupStep = SETUP_STEP_SEND_SEARCH_REPLY;
            }
            break;
        case SETUP_STEP_SEND_KEY_REPLY: {
            elementLength = func_ov031_022203f0(data_ov031_0224fba4, 0x102, data_ov031_0224fb48, 8);
            int length = func_ov031_022202cc((Destination022202cc*)data_ov031_022503a4, 4, (Source022202cc*)data_ov031_0224fba4, elementLength, data_ov031_0224fb30);
            frameLength = length;
            func_ov031_022201cc(socket, &from, data_ov031_022503a4, length);
            timestamp = func_ov031_02222870();
            __builtin__clear(&data_ov031_0224f8c4, sizeof(data_ov031_0224f8c4));
            setupStep = SETUP_STEP_WAIT_SETTINGS;
            break;
        }
        case SETUP_STEP_WAIT_SETTINGS:
            if (func_ov031_022072d0(socket, data_ov031_022503a4, 0x800, 4, &from) > 0 &&
                (elementLength = func_ov031_022204ec(data_ov031_022503a4, 5, data_ov031_0224fba4, data_ov031_0224fb40.bytes)) != 0 &&
                func_ov031_022206e0(data_ov031_0224fba4) != 0) {
                if (data_ov031_0224f8c4.ssid[0]) data_ov031_0224f670 = 1;
                else data_ov031_0224f670 = 0;
                attempts = 0;
                setupStep = SETUP_STEP_SEND_SETTINGS_REPLY;
            } else if (func_ov031_02222870() >= timestamp + 1000) {
                if (++attempts >= 10) {
                    func_ov031_02207434(socket);
                    result = -2;
                    done = 1;
                } else {
                    setupStep = SETUP_STEP_SEND_KEY_REPLY;
                }
            }
            break;
        case SETUP_STEP_SEND_SETTINGS_REPLY:
            elementLength = func_ov031_022203f0(data_ov031_0224fba4, 0x301, &data_ov031_0224f670, 1);
            frameLength = func_ov031_022202cc((Destination022202cc*)data_ov031_022503a4, 6, (Source022202cc*)data_ov031_0224fba4, elementLength, &data_ov031_0224fb40);
            if (func_ov031_0221f994() != LINK_CONNECTED) {
                timestamp = func_ov031_02222870() + 1000;
                attempts = 10;
                setupStep = SETUP_STEP_FINISH;
            } else {
                func_ov031_022201cc(socket, &from, data_ov031_022503a4, frameLength);
                timestamp = func_ov031_02222870();
                setupStep = SETUP_STEP_FINISH;
            }
            break;
        case SETUP_STEP_FINISH:
            if (func_ov031_02222870() >= timestamp + 1000) {
                if (++attempts >= 10) {
                    done = 1;
                    result = func_ov031_02220968();
                } else {
                    setupStep = SETUP_STEP_SEND_SETTINGS_REPLY;
                }
            }
            break;
        }
    }
    if (socket != 0) func_ov031_02207434(socket);
    if (cancelRequested) result = -8;
    return result;
}

// USA: func_ov031_02220ed4
extern "C" THUMB void func_ov031_02220ed4() {
    int result = func_ov031_02220af0();
    setupResult = result;
    func_ov031_0221fcb4();
    if (result == 1) setupState = 6;
    else setupState = 7;
    data_ov031_0224b114.deadline = -1;
    func_ov031_02222af0();
}

// ---------------------------------------------------------------------------------------------------
// AES key wrap (RFC 3394) and Rijndael

#define BSWAP64(x) \
    ((((x) & 0x00000000000000ffULL) << 56) | \
     (((x) & 0x000000000000ff00ULL) << 40) | \
     (((x) & 0x0000000000ff0000ULL) << 24) | \
     (((x) & 0x00000000ff000000ULL) <<  8) | \
     (((x) & 0x000000ff00000000ULL) >>  8) | \
     (((x) & 0x0000ff0000000000ULL) >> 24) | \
     (((x) & 0x00ff000000000000ULL) >> 40) | \
     (((x) & 0xff00000000000000ULL) >> 56))

static inline void Copy8(const unsigned char* src, unsigned char* dst) {
    unsigned int k;
    for (k = 8; k != 0; k--) {
        *dst++ = *src++;
    }
}

// USA: func_ov031_02220f0c  (semantic: AES key wrap, RFC 3394)
extern "C" THUMB int func_ov031_02220f0c(Block8* cipher, const unsigned char* plain, unsigned int len,
                                          const unsigned char* kek, unsigned int kekLen) {
    unsigned int rk[80];
    Block8 b[2];
    unsigned long long tb;
    unsigned int iv[2];
    unsigned long long t;
    int n;
    int i;
    int j;
    int Nr;
    Block8* r;
    long long nn;
    long long t0;

    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((len & 7) || (kekLen & 7)) {
        return 0;
    }
    n = len >> 3;
    if (n < 2) {
        return 0;
    }
    Nr = func_ov031_022212c4(rk, kek, kekLen * 8);
    memcpy(cipher + 1, plain, len);
    Copy8((unsigned char*)iv, b[0].v);

    j = 0;
    nn = n;
    do {
        i = 1;
        if (i <= n) {
            t0 = func_0200cf24(nn, j);
            do {
                r = (Block8*)((char*)cipher + i * sizeof(Block8));
                b[1] = *r;
                func_ov031_0222170c(rk, Nr, b[0].v, b[0].v);
                t = i + t0;
                tb = BSWAP64(t);
                func_ov031_0222127c(b[0].v, (unsigned char*)&tb, b[0].v);
                *r = b[1];
            } while (++i <= n);
        }
    } while (++j < 6);
    Copy8(b[0].v, cipher->v);
    return 1;
}

// USA: func_ov031_022210c4  (semantic: AES key unwrap, RFC 3394)
extern "C" THUMB int func_ov031_022210c4(Block8* plain, const unsigned char* cipher, unsigned int len,
                                          const unsigned char* kek, unsigned int kekLen) {
    unsigned int rk[80];
    Block8 b[2];
    unsigned long long tb;
    unsigned int iv[2];
    int n;
    int i;
    int j;
    int Nr;
    int ret;
    Block8* r;
    long long nn;
    long long t0;
    unsigned long long t;

    ret = 1;
    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((len & 7) || (kekLen & 7)) {
        return 0;
    }
    n = (len - 1) >> 3;
    if (n < 2) {
        return 0;
    }
    Nr = func_ov031_0222157c(rk, kek, kekLen * 8);
    Copy8(cipher, b[0].v);
    memcpy(plain, cipher + 8, len - 1);

    j = 5;
    nn = n;
    do {
        i = n;
        if (i > 0) {
            t0 = func_0200cf24(nn, j);
            do {
                t = i + t0;
                tb = BSWAP64(t);
                func_ov031_0222127c(b[0].v, (unsigned char*)&tb, b[0].v);
                r = plain + (i - 1);
                b[1] = *r;
                func_ov031_02221ac8(rk, Nr, b[0].v, b[0].v);
                *r = b[1];
            } while (--i > 0);
        }
    } while (--j >= 0);
    if (func_02001aec(iv, b, 8) != 0) {
        ret = 0;
    }
    return ret;
}

// USA: func_ov031_0222127c  (semantic: XorBlock8_0222127c)
extern "C" THUMB void func_ov031_0222127c(const unsigned char* a, const unsigned char* b, unsigned char* out) {
    out[0] = a[0] ^ b[0];
    out[1] = a[1] ^ b[1];
    out[2] = a[2] ^ b[2];
    out[3] = a[3] ^ b[3];
    out[4] = a[4] ^ b[4];
    out[5] = a[5] ^ b[5];
    out[6] = a[6] ^ b[6];
    out[7] = a[7] ^ b[7];
}

#define GETU32(p) \
    (((unsigned int)(p)[0] << 24) ^ ((unsigned int)(p)[1] << 16) ^ \
     ((unsigned int)(p)[2] << 8) ^ ((unsigned int)(p)[3]))

#define PUTU32(ct, st) { \
    (ct)[0] = (unsigned char)((st) >> 24); \
    (ct)[1] = (unsigned char)((st) >> 16); \
    (ct)[2] = (unsigned char)((st) >> 8);  \
    (ct)[3] = (unsigned char)(st); }

// USA: func_ov031_022212c4  (semantic: rijndaelKeySetupEnc)
extern "C" THUMB int func_ov031_022212c4(unsigned int *rk, const unsigned char *cipherKey,
                                          int keyBits) {
    int i = 0;
    unsigned int temp;

    rk[0] = GETU32(cipherKey     );
    rk[1] = GETU32(cipherKey +  4);
    rk[2] = GETU32(cipherKey +  8);
    rk[3] = GETU32(cipherKey + 12);
    if (keyBits == 128) {
        for (;;) {
            temp  = rk[3];
            rk[4] = rk[0] ^
                (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                (Te4[(temp >>  8) & 0xff] & 0x00ff0000) ^
                (Te4[(temp      ) & 0xff] & 0x0000ff00) ^
                (Te4[(temp >> 24)       ] & 0x000000ff) ^
                rcon[i];
            rk[5] = rk[1] ^ rk[4];
            rk[6] = rk[2] ^ rk[5];
            rk[7] = rk[3] ^ rk[6];
            if (++i >= 10) {
                return 10;
            }
            rk += 4;
        }
    }
    rk[4] = GETU32(cipherKey + 16);
    rk[5] = GETU32(cipherKey + 20);
    if (keyBits == 192) {
        for (;;) {
            temp = rk[ 5];
            rk[ 6] = rk[ 0] ^
                (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                (Te4[(temp >>  8) & 0xff] & 0x00ff0000) ^
                (Te4[(temp      ) & 0xff] & 0x0000ff00) ^
                (Te4[(temp >> 24)       ] & 0x000000ff) ^
                rcon[i];
            rk[ 7] = rk[ 1] ^ rk[ 6];
            rk[ 8] = rk[ 2] ^ rk[ 7];
            rk[ 9] = rk[ 3] ^ rk[ 8];
            if (++i >= 8) {
                return 12;
            }
            rk[10] = rk[ 4] ^ rk[ 9];
            rk[11] = rk[ 5] ^ rk[10];
            rk += 6;
        }
    }
    rk[6] = GETU32(cipherKey + 24);
    rk[7] = GETU32(cipherKey + 28);
    if (keyBits == 256) {
        for (;;) {
            temp = rk[ 7];
            rk[ 8] = rk[ 0] ^
                (Te4[(temp >> 16) & 0xff] & 0xff000000) ^
                (Te4[(temp >>  8) & 0xff] & 0x00ff0000) ^
                (Te4[(temp      ) & 0xff] & 0x0000ff00) ^
                (Te4[(temp >> 24)       ] & 0x000000ff) ^
                rcon[i];
            rk[ 9] = rk[ 1] ^ rk[ 8];
            rk[10] = rk[ 2] ^ rk[ 9];
            rk[11] = rk[ 3] ^ rk[10];
            if (++i >= 7) {
                return 14;
            }
            temp = rk[11];
            rk[12] = rk[ 4] ^
                (Te4[(temp >> 24)       ] & 0xff000000) ^
                (Te4[(temp >> 16) & 0xff] & 0x00ff0000) ^
                (Te4[(temp >>  8) & 0xff] & 0x0000ff00) ^
                (Te4[(temp      ) & 0xff] & 0x000000ff);
            rk[13] = rk[ 5] ^ rk[12];
            rk[14] = rk[ 6] ^ rk[13];
            rk[15] = rk[ 7] ^ rk[14];
            rk += 8;
        }
    }
    return 0;
}

// USA: func_ov031_0222157c (rijndaelKeySetupDec)
extern "C" THUMB int func_ov031_0222157c(unsigned int *rk, const unsigned char *cipherKey, int keyBits) {
    int Nr, i, j;
    unsigned int temp;

    Nr = func_ov031_022212c4(rk, cipherKey, keyBits);
    for (i = 0, j = 4*Nr; i < j; i += 4, j -= 4) {
        temp = rk[i    ]; rk[i    ] = rk[j    ]; rk[j    ] = temp;
        temp = rk[i + 1]; rk[i + 1] = rk[j + 1]; rk[j + 1] = temp;
        temp = rk[i + 2]; rk[i + 2] = rk[j + 2]; rk[j + 2] = temp;
        temp = rk[i + 3]; rk[i + 3] = rk[j + 3]; rk[j + 3] = temp;
    }
    for (i = 1; i < Nr; i++) {
        rk += 4;
        rk[0] =
            Td0[Te4[(rk[0] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[0] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[0] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[0]      ) & 0xff] & 0xff];
        rk[1] =
            Td0[Te4[(rk[1] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[1] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[1] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[1]      ) & 0xff] & 0xff];
        rk[2] =
            Td0[Te4[(rk[2] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[2] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[2] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[2]      ) & 0xff] & 0xff];
        rk[3] =
            Td0[Te4[(rk[3] >> 24)       ] & 0xff] ^
            Td1[Te4[(rk[3] >> 16) & 0xff] & 0xff] ^
            Td2[Te4[(rk[3] >>  8) & 0xff] & 0xff] ^
            Td3[Te4[(rk[3]      ) & 0xff] & 0xff];
    }
    return Nr;
}

// USA: func_ov031_0222170c
extern "C" THUMB void func_ov031_0222170c(const unsigned int *rk, int Nr,
                                           const unsigned char *ct, unsigned char *pt) {
    unsigned int s0, s1, s2, s3, t0, t1, t2, t3;
    int r;

    s0 = GETU32(ct     ) ^ rk[0];
    s1 = GETU32(ct +  4) ^ rk[1];
    s2 = GETU32(ct +  8) ^ rk[2];
    s3 = GETU32(ct + 12) ^ rk[3];

    r = Nr >> 1;
    for (;;) {
        t0 =
            Te0[(s0 >> 24)       ] ^
            Te1[(s1 >> 16) & 0xff] ^
            Te2[(s2 >>  8) & 0xff] ^
            Te3[(s3      ) & 0xff] ^
            rk[4];
        t1 =
            Te0[(s1 >> 24)       ] ^
            Te1[(s2 >> 16) & 0xff] ^
            Te2[(s3 >>  8) & 0xff] ^
            Te3[(s0      ) & 0xff] ^
            rk[5];
        t2 =
            Te0[(s2 >> 24)       ] ^
            Te1[(s3 >> 16) & 0xff] ^
            Te2[(s0 >>  8) & 0xff] ^
            Te3[(s1      ) & 0xff] ^
            rk[6];
        t3 =
            Te0[(s3 >> 24)       ] ^
            Te1[(s0 >> 16) & 0xff] ^
            Te2[(s1 >>  8) & 0xff] ^
            Te3[(s2      ) & 0xff] ^
            rk[7];

        rk += 8;
        if (--r == 0) {
            break;
        }

        s0 =
            Te0[(t0 >> 24)       ] ^
            Te1[(t1 >> 16) & 0xff] ^
            Te2[(t2 >>  8) & 0xff] ^
            Te3[(t3      ) & 0xff] ^
            rk[0];
        s1 =
            Te0[(t1 >> 24)       ] ^
            Te1[(t2 >> 16) & 0xff] ^
            Te2[(t3 >>  8) & 0xff] ^
            Te3[(t0      ) & 0xff] ^
            rk[1];
        s2 =
            Te0[(t2 >> 24)       ] ^
            Te1[(t3 >> 16) & 0xff] ^
            Te2[(t0 >>  8) & 0xff] ^
            Te3[(t1      ) & 0xff] ^
            rk[2];
        s3 =
            Te0[(t3 >> 24)       ] ^
            Te1[(t0 >> 16) & 0xff] ^
            Te2[(t1 >>  8) & 0xff] ^
            Te3[(t2      ) & 0xff] ^
            rk[3];
    }

    s0 =
        (Te4[(t0 >> 24)       ] & 0xff000000) ^
        (Te4[(t1 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(t2 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(t3      ) & 0xff] & 0x000000ff) ^
        rk[0];
    PUTU32(pt, s0);

    s1 =
        (Te4[(t1 >> 24)       ] & 0xff000000) ^
        (Te4[(t2 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(t3 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(t0      ) & 0xff] & 0x000000ff) ^
        rk[1];
    PUTU32(pt + 4, s1);

    s2 =
        (Te4[(t2 >> 24)       ] & 0xff000000) ^
        (Te4[(t3 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(t0 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(t1      ) & 0xff] & 0x000000ff) ^
        rk[2];
    PUTU32(pt + 8, s2);

    s3 =
        (Te4[(t3 >> 24)       ] & 0xff000000) ^
        (Te4[(t0 >> 16) & 0xff] & 0x00ff0000) ^
        (Te4[(t1 >>  8) & 0xff] & 0x0000ff00) ^
        (Te4[(t2      ) & 0xff] & 0x000000ff) ^
        rk[3];
    PUTU32(pt + 12, s3);
}

// USA: func_ov031_02221ac8
extern "C" THUMB void func_ov031_02221ac8(const unsigned int *rk, int Nr,
                                           const unsigned char *ct, unsigned char *pt) {
    unsigned int s0, s1, s2, s3, t0, t1, t2, t3;
    int r;

    s0 = GETU32(ct     ) ^ rk[0];
    s1 = GETU32(ct +  4) ^ rk[1];
    s2 = GETU32(ct +  8) ^ rk[2];
    s3 = GETU32(ct + 12) ^ rk[3];

    r = Nr >> 1;
    for (;;) {
        t0 =
            Td0[(s0 >> 24)       ] ^
            Td1[(s3 >> 16) & 0xff] ^
            Td2[(s2 >>  8) & 0xff] ^
            Td3[(s1      ) & 0xff] ^
            rk[4];
        t1 =
            Td0[(s1 >> 24)       ] ^
            Td1[(s0 >> 16) & 0xff] ^
            Td2[(s3 >>  8) & 0xff] ^
            Td3[(s2      ) & 0xff] ^
            rk[5];
        t2 =
            Td0[(s2 >> 24)       ] ^
            Td1[(s1 >> 16) & 0xff] ^
            Td2[(s0 >>  8) & 0xff] ^
            Td3[(s3      ) & 0xff] ^
            rk[6];
        t3 =
            Td0[(s3 >> 24)       ] ^
            Td1[(s2 >> 16) & 0xff] ^
            Td2[(s1 >>  8) & 0xff] ^
            Td3[(s0      ) & 0xff] ^
            rk[7];

        rk += 8;
        if (--r == 0) {
            break;
        }

        s0 =
            Td0[(t0 >> 24)       ] ^
            Td1[(t3 >> 16) & 0xff] ^
            Td2[(t2 >>  8) & 0xff] ^
            Td3[(t1      ) & 0xff] ^
            rk[0];
        s1 =
            Td0[(t1 >> 24)       ] ^
            Td1[(t0 >> 16) & 0xff] ^
            Td2[(t3 >>  8) & 0xff] ^
            Td3[(t2      ) & 0xff] ^
            rk[1];
        s2 =
            Td0[(t2 >> 24)       ] ^
            Td1[(t1 >> 16) & 0xff] ^
            Td2[(t0 >>  8) & 0xff] ^
            Td3[(t3      ) & 0xff] ^
            rk[2];
        s3 =
            Td0[(t3 >> 24)       ] ^
            Td1[(t2 >> 16) & 0xff] ^
            Td2[(t1 >>  8) & 0xff] ^
            Td3[(t0      ) & 0xff] ^
            rk[3];
    }

    s0 =
        (Td4[(t0 >> 24)       ] & 0xff000000) ^
        (Td4[(t3 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(t2 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(t1      ) & 0xff] & 0x000000ff) ^
        rk[0];
    PUTU32(pt, s0);

    s1 =
        (Td4[(t1 >> 24)       ] & 0xff000000) ^
        (Td4[(t0 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(t3 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(t2      ) & 0xff] & 0x000000ff) ^
        rk[1];
    PUTU32(pt + 4, s1);

    s2 =
        (Td4[(t2 >> 24)       ] & 0xff000000) ^
        (Td4[(t1 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(t0 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(t3      ) & 0xff] & 0x000000ff) ^
        rk[2];
    PUTU32(pt + 8, s2);

    s3 =
        (Td4[(t3 >> 24)       ] & 0xff000000) ^
        (Td4[(t2 >> 16) & 0xff] & 0x00ff0000) ^
        (Td4[(t1 >>  8) & 0xff] & 0x0000ff00) ^
        (Td4[(t0      ) & 0xff] & 0x000000ff) ^
        rk[3];
    PUTU32(pt + 12, s3);
}

// ---------------------------------------------------------------------------------------------------
// MD5 (RSA reference implementation)

// USA: func_ov031_02221e84
extern "C" THUMB void func_ov031_02221e84(OverlayMD5Context* context) {
    context->bitCount[1] = 0;
    context->bitCount[0] = 0;
    context->state[0] = 0x67452301;
    context->state[1] = 0xefcdab89;
    context->state[2] = 0x98badcfe;
    context->state[3] = 0x10325476;
}

// USA: func_ov031_02221eac
extern "C" THUMB void func_ov031_02221eac(OverlayMD5Context* context, const void* bytes, unsigned int length) {
    const unsigned char* input = (const unsigned char*)bytes;
    unsigned int offset;
    unsigned int used = (context->bitCount[0] >> 3) & 63;
    context->bitCount[0] += length << 3;
    if (context->bitCount[0] < (length << 3)) context->bitCount[1]++;
    context->bitCount[1] += length >> 29;
    offset = 64 - used;
    if (length >= offset) {
        func_ov031_02222818(context->buffer + used, input, offset);
        func_ov031_02221f78(context->state, context->buffer);
        if (offset + 63 < length) {
            do {
                func_ov031_02221f78(context->state, input + offset);
                offset += 64;
            } while (offset + 63 < length);
        }
        used = 0;
    } else offset = 0;
    func_ov031_02222818(context->buffer + used, input + offset, length - offset);
}

// USA: func_ov031_02221f24
extern "C" THUMB void func_ov031_02221f24(unsigned char* digest, OverlayMD5Context* context) {
    unsigned char encodedBitCount[8];
    func_ov031_022227c0(encodedBitCount, context->bitCount, 8);
    unsigned int used = (context->bitCount[0] >> 3) & 0x3f;
    unsigned int padding = used < 0x38 ? 0x38 - used : 0x78 - used;
    func_ov031_02221eac(context, data_ov031_0224b194, padding);
    func_ov031_02221eac(context, encodedBitCount, 8);
    func_ov031_022227c0(digest, context->state, 0x10);
    func_ov031_02222830(context, 0, sizeof(*context));
}

#define S11 7
#define S12 12
#define S13 17
#define S14 22
#define S21 5
#define S22 9
#define S23 14
#define S24 20
#define S31 4
#define S32 11
#define S33 16
#define S34 23
#define S41 6
#define S42 10
#define S43 15
#define S44 21

#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))

#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define FF(a, b, c, d, x, s, ac) { \
    (a) += F((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define GG(a, b, c, d, x, s, ac) { \
    (a) += G((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define HH(a, b, c, d, x, s, ac) { \
    (a) += H((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}
#define II(a, b, c, d, x, s, ac) { \
    (a) += I((b), (c), (d)) + (x) + (unsigned int)(ac); \
    (a) = ROTATE_LEFT((a), (s)); \
    (a) += (b); \
}

// USA: func_ov031_02221f78
extern "C" THUMB void func_ov031_02221f78(unsigned int* state, const unsigned char* block) {
    unsigned int a = state[0], b = state[1], c = state[2], d = state[3], x[16];

    func_ov031_022227ec(x, block, 64);

    FF(a, b, c, d, x[0], S11, 0xd76aa478);
    FF(d, a, b, c, x[1], S12, 0xe8c7b756);
    FF(c, d, a, b, x[2], S13, 0x242070db);
    FF(b, c, d, a, x[3], S14, 0xc1bdceee);
    FF(a, b, c, d, x[4], S11, 0xf57c0faf);
    FF(d, a, b, c, x[5], S12, 0x4787c62a);
    FF(c, d, a, b, x[6], S13, 0xa8304613);
    FF(b, c, d, a, x[7], S14, 0xfd469501);
    FF(a, b, c, d, x[8], S11, 0x698098d8);
    FF(d, a, b, c, x[9], S12, 0x8b44f7af);
    FF(c, d, a, b, x[10], S13, 0xffff5bb1);
    FF(b, c, d, a, x[11], S14, 0x895cd7be);
    FF(a, b, c, d, x[12], S11, 0x6b901122);
    FF(d, a, b, c, x[13], S12, 0xfd987193);
    FF(c, d, a, b, x[14], S13, 0xa679438e);
    FF(b, c, d, a, x[15], S14, 0x49b40821);

    GG(a, b, c, d, x[1], S21, 0xf61e2562);
    GG(d, a, b, c, x[6], S22, 0xc040b340);
    GG(c, d, a, b, x[11], S23, 0x265e5a51);
    GG(b, c, d, a, x[0], S24, 0xe9b6c7aa);
    GG(a, b, c, d, x[5], S21, 0xd62f105d);
    GG(d, a, b, c, x[10], S22, 0x2441453);
    GG(c, d, a, b, x[15], S23, 0xd8a1e681);
    GG(b, c, d, a, x[4], S24, 0xe7d3fbc8);
    GG(a, b, c, d, x[9], S21, 0x21e1cde6);
    GG(d, a, b, c, x[14], S22, 0xc33707d6);
    GG(c, d, a, b, x[3], S23, 0xf4d50d87);
    GG(b, c, d, a, x[8], S24, 0x455a14ed);
    GG(a, b, c, d, x[13], S21, 0xa9e3e905);
    GG(d, a, b, c, x[2], S22, 0xfcefa3f8);
    GG(c, d, a, b, x[7], S23, 0x676f02d9);
    GG(b, c, d, a, x[12], S24, 0x8d2a4c8a);

    HH(a, b, c, d, x[5], S31, 0xfffa3942);
    HH(d, a, b, c, x[8], S32, 0x8771f681);
    HH(c, d, a, b, x[11], S33, 0x6d9d6122);
    HH(b, c, d, a, x[14], S34, 0xfde5380c);
    HH(a, b, c, d, x[1], S31, 0xa4beea44);
    HH(d, a, b, c, x[4], S32, 0x4bdecfa9);
    HH(c, d, a, b, x[7], S33, 0xf6bb4b60);
    HH(b, c, d, a, x[10], S34, 0xbebfbc70);
    HH(a, b, c, d, x[13], S31, 0x289b7ec6);
    HH(d, a, b, c, x[0], S32, 0xeaa127fa);
    HH(c, d, a, b, x[3], S33, 0xd4ef3085);
    HH(b, c, d, a, x[6], S34, 0x4881d05);
    HH(a, b, c, d, x[9], S31, 0xd9d4d039);
    HH(d, a, b, c, x[12], S32, 0xe6db99e5);
    HH(c, d, a, b, x[15], S33, 0x1fa27cf8);
    HH(b, c, d, a, x[2], S34, 0xc4ac5665);

    II(a, b, c, d, x[0], S41, 0xf4292244);
    II(d, a, b, c, x[7], S42, 0x432aff97);
    II(c, d, a, b, x[14], S43, 0xab9423a7);
    II(b, c, d, a, x[5], S44, 0xfc93a039);
    II(a, b, c, d, x[12], S41, 0x655b59c3);
    II(d, a, b, c, x[3], S42, 0x8f0ccc92);
    II(c, d, a, b, x[10], S43, 0xffeff47d);
    II(b, c, d, a, x[1], S44, 0x85845dd1);
    II(a, b, c, d, x[8], S41, 0x6fa87e4f);
    II(d, a, b, c, x[15], S42, 0xfe2ce6e0);
    II(c, d, a, b, x[6], S43, 0xa3014314);
    II(b, c, d, a, x[13], S44, 0x4e0811a1);
    II(a, b, c, d, x[4], S41, 0xf7537e82);
    II(d, a, b, c, x[11], S42, 0xbd3af235);
    II(c, d, a, b, x[2], S43, 0x2ad7d2bb);
    II(b, c, d, a, x[9], S44, 0xeb86d391);

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;

    func_ov031_02222830(x, 0, sizeof(x));
}

// USA: func_ov031_022227c0
extern "C" THUMB void func_ov031_022227c0(unsigned char* destination, const unsigned int* source, unsigned int size) {
    unsigned int offset = 0;
    if (offset < size) do {
        unsigned char* group = destination + offset;
        group[0] = *source;
        group[1] = *source >> 8;
        group[2] = *source >> 16;
        group[3] = *source++ >> 24;
        offset += 4;
    } while (offset < size);
}

// USA: func_ov031_022227ec
extern "C" THUMB void func_ov031_022227ec(unsigned int* destination, const unsigned char* source, unsigned int size) {
    unsigned int offset = 0;
    if (offset < size) do {
        const unsigned char* group = source + offset;
        *destination++ = group[0] | (group[1] << 8) |
            (group[2] << 16) | ((unsigned int)group[3] << 24);
        offset += 4;
    } while (offset < size);
}

// USA: func_ov031_02222818  (semantic: CopyBytes_02222818)
extern "C" THUMB void func_ov031_02222818(unsigned char* dst, const unsigned char* src, unsigned int count) {
    unsigned int i = 0;
    if (i < count) {
        do {
            dst[i] = src[i];
            i++;
        } while (i < count);
    }
}

// USA: func_ov031_02222830  (semantic: FillBytes_02222830)
extern "C" THUMB void func_ov031_02222830(void* destination, int value, unsigned int count) {
    char* dst = (char*)destination;
    unsigned int i = 0;
    if (i < count) {
        do {
            i++;
            *dst = (char)value;
            dst++;
        } while (i < count);
    }
}

// USA: func_ov031_02222848
extern "C" THUMB void func_ov031_02222848(unsigned char* digest, unsigned char* data, unsigned int len) {
    OverlayMD5Context ctx;

    func_ov031_02221e84(&ctx);
    func_ov031_02221eac(&ctx, data, len);
    func_ov031_02221f24(digest, &ctx);
}

// ---------------------------------------------------------------------------------------------------
// Utilities and the setup API

// USA: func_ov031_02222870  (semantic: ComputeScaledTimestamp_02222870)
extern "C" THUMB unsigned int func_ov031_02222870(void) {
    return (unsigned int)_ll_udiv(GetCurrentTimestamp() << 6, 0x82ea);
}

// USA: func_ov031_0222288c  (semantic: AllocZeroed_0222288c)
extern "C" THUMB void* func_ov031_0222288c(int a, int b) {
    int size = a * b;
    void* p = hostAlloc(size);
    if (p) {
        memset(p, 0, size);
    }
    return p;
}

// USA: func_ov031_022228b0  (semantic: InvokeHandlerC_022228b0)
extern "C" THUMB void func_ov031_022228b0(void* p) {
    hostFree(p);
}

// USA: func_ov031_022228c0
extern "C" THUMB int func_ov031_022228c0(char* output, int input) {
    char* cursor;
    unsigned char value;
    int index;
    int digit;
    int low;
    cursor = output;
    value = input;
    digit = (value & 0xf0) >> 4;
    index = 0;
    low = value & 0xf;
    do {
        if (digit <= 9) {
            digit += '0';
        } else {
            digit += 'A' - 10;
        }
        index++;
        *cursor++ = digit;
        digit = low;
    } while (index < 2);
    *cursor = 0;
    return cursor - output;
}

// USA: func_ov031_022228f4
extern "C" THUMB int func_ov031_022228f4(char* output, const signed char* address) {
    char* cursor = output;
    int i = 0;
    do {
        cursor += func_ov031_022228c0(cursor, *address++);
        if (i < 5) *cursor++ = ':';
        ++i;
    } while (i < 6);
    *cursor = 0;
    return cursor - output;
}

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

// USA: func_ov031_02222aa4  (semantic: FillElapsedResult_02222aa4)
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

// USA: func_ov031_02222adc  (semantic: CopyTemplate_02222adc)
extern "C" THUMB int func_ov031_02222adc(void* dst) {
    memcpy(dst, &data_ov031_0224f7dc, 0xe8);
    return 1;
}

// USA: func_ov031_02222af0  (semantic: BuildAndDispatch_02222af0)
extern "C" THUMB void func_ov031_02222af0(void) {
    SetupStatus ctx;
    func_ov031_02222aa4(&ctx);
    notifyCallback(&ctx);
}
