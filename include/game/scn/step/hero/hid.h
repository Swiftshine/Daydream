#ifndef DAYDREAM_SCN_STEP_HERO_HID_H
#define DAYDREAM_SCN_STEP_HERO_HID_H

#include <types.h>

namespace scn {
namespace step {
namespace hero {

    enum ButtonInputFlags {
        InputFlags_None         = 0,

        InputFlags_DPADLeft     = 1,
        InputFlags_DPADRight    = 1 << 1,
        InputFlags_DPADDown     = 1 << 2,
        InputFlags_DPADUp       = 1 << 3,
        InputFlags_Button2      = 1 << 4,
        InputFlags_Button1      = 1 << 5,
        InputFlags_ButtonA      = 1 << 6,

        InputFlags_ButtonMinus  = 1 << 8,
        InputFlags_ButtonB      = 1 << 9,
        InputFlags_Shake        = 1 << 10,
    };

    // Unofficial structs ^
    // 'Official' structs
    // size unknown
    class Hid {
    public:
        // Compares its flags to those provided and returns if they are the same.
        bool isTrigger(u32 inputFlags);
    public:
        void* _0;
        void* _4;
        u32 buttonFlags;
    };
}
    
}
}
#endif