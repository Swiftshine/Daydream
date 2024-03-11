#include "kamek/kamek.h"

#include "game/object/hero/hero.h"

bool printButtonInputs(scn::step::hero::Hid* hid, u32 inputFlags) {
    if (hid->buttonFlags == 0)
        return false;
    OSReport("HID Button flags: %#010X\n", hid->buttonFlags);
    //OSReport("     Input flags: %#010X\n", inputFlags);
    return (hid->buttonFlags & inputFlags) != 0;
}

// Entry - 0x804ee788
// Exit - 0x804ee798
// hook into scn::step::hero::Hid::isTrigger() to print hid->buttonFlags
kmBranchDefAsm(0x804ee788, 0x804ee798) {
    bl printButtonInputs;
}