#pragma once

struct TextWindowManager_0205d5d0;

extern "C" int SetTextWindowText_0205d5d0(TextWindowManager_0205d5d0* windowManager, int windowId, int text, int isWrappedAtScreenWidth
#if !defined(jpn)
                            , unsigned char font
#endif
);
