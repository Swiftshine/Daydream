#ifndef DAYDREAM_SCN_STEP_HERO_HERO_H
#define DAYDREAM_SCN_STEP_HERO_HERO_H

#include <types.h>
#include "game/memory/heapexp.h"


#include "game/object/hero/indiviutil.h"
#include "game/object/hero/hid.h"

namespace scn {
namespace step {
namespace hero {
    // size: 0x330
    class Hero {
    public:
        // Constructor
        Hero(void* component, void* heapExpArray, Vec2f* unk1, Vec2f* unk2, bool unk3, void* contextHeroIndivi, void* unk4);

        // Returns the HID device.
        scn::step::hero::Hid* hid();

        // Returns position.
        Vec2f* location();
        // Unknown.
        void*  move();

        // Returns if the hero is Kirby.
        bool isKirby();
        // Returns if the hero is Meta Knight.
        bool isMeta();
        // Returns if the hero is King Dedede.
        bool isDedede();
        // Returns if the hero is a Waddle Dee.
        bool isDee();

    public:
        // offset, len
        void* _0;                       // 0x0, 0x4
        HeapExp* heapExpArray;          // 0x4, 0x4
        void* _8;                       // 0x8, 0x4
        u32 inputFlags;                 // 0xC, 0x4
    };
} // namespace hero
} // namespace step
} // namespace scn

#endif