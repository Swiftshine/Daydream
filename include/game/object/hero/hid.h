#ifndef DAYDREAM_SCN_STEP_HERO_HID_H
#define DAYDREAM_SCN_STEP_HERO_HID_H

#include <types.h>

namespace scn::step::hero {
    enum ButtonInputFlags : u32 {

    };

    // Unofficial structs ^
    // 'Official' structs
    // size unknown
    class Hid {
    public:
        // Compares its flags to those provided and returns if they are the same.
        bool isTrigger(ButtonInputFlags inputFlags);
    public:
        void* _0;
        void* _4;
        u32 buttonFlags;
    };
}

#endif