#ifndef DAYDREAM_SCN_STEP_HERO_HERO_H
#define DAYDREAM_SCN_STEP_HERO_HERO_H

#include <types.h>
#include "hel/array/array.h"
#include "game/memory/mem.h"
#include "game/scn/step/hero/hid.h"

namespace scn {
namespace step {
namespace hero {
namespace Constant {
    const float LIFE_BAR_LENGTH_MAIN    =  1.0f;
    const float LIFE_BAR_LENGTH_EXTRA   =  0.6f;
}

namespace IndiviUtil {
    enum Kind {
        HeroKind_Kirby,     // unknown
        HeroKind_MetaKnight = 4,
        HeroKind_KingDedede = 5,
        HeroKind_Dee        = 6,
    };

    // Returns if the hero kind provided matches Kirby's.
    static bool IsKirby(Kind heroKind);
    // Returns if the hero kind provided matches Meta Knight's.
    static bool IsMeta(Kind heroKind);
    // Returns if the hero kind provided matches King Dedede's.
    static bool IsDedede(Kind heroKind);
    // Returns if the hero kind provided matches Waddle Dee's.
    static bool IsDee(Kind heroKind);
    // Returns if the hero kind provided is able to hover.
    static bool CanHover(Kind heroKind);
}

    // size: 0x330
    class Hero {
    public:
        // Constructor
        Hero(void* component, mem::HeapExpArray* heapExpArray, Vec2f* unk1, Vec2f* unk2, bool unk3, void* contextHeroIndivi, void* unk4);

        // Destructor
        ~Hero();
        
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
        hel::common::ScopedPtr<void>* component;    // 0x0, 0x4
        void* _4;                                   // 0x4, 0x4
        void* _8;
        u32 inputFlags;                             // 0xC, 0x4
    };

    // Size: 0x49C
    class Manager {
    public:
        Manager(void* component);

        Hero* getPlayerByIndex(u32 index);
        void createHero(/* todo - add accurate parameters */); 
        void createHeros(Vec2f*, bool);    
         
    public:
        hel::common::MutableArray<Hero, 4> players; // 0x9C
    };
    typedef Manager HeroManager;
} // namespace hero
} // namespace step
} // namespace scn

#endif