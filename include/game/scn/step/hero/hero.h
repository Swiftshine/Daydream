#ifndef DAYDREAM_SCN_STEP_HERO_HERO_H
#define DAYDREAM_SCN_STEP_HERO_HERO_H

#include <types.h>
#include "hel/array/array.h"
#include "game/memory/mem.h"
#include "game/scn/step/component/component.h"
#include "game/scn/step/hero/hid.h"

namespace scn {
namespace step {
namespace hero {
namespace Constant {
    const float LIFE_BAR_LENGTH_MAIN    =  1.0f;
    const float LIFE_BAR_LENGTH_EXTRA   =  0.6f;
} // namespace Constant

namespace IndiviUtil {
    enum Kind {
        HeroKind_Kirby      = 0,
        HeroKind_Kirby2     = 1,
        HeroKind_Kirby3     = 2,
        HeroKind_Kirby4     = 3,
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
} // namespace IndiviUtil

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
        Manager(scn::step::Component* component);

        Hero* getPlayerByIndex(u32 index);
        void createHero(/* todo - add accurate parameters */); 
        void createHeros(Vec2f*, bool);    
         
    public:
        scn::step::Component* component;                // 0x0, 0x4
        u8 heroHeapExpArray[0x38];                      // 0x4, 0x38
        u8 inactiveHeroHeapExpArray[0x38];              // 0x3C, 0x38
        u32 _74;                                        // 0x74, 0x4
        u8 animResource1[0x10];                         // 0x78, 0x10
        u32 _88;                                        // 0x88, 0x4
        u8 animResource2[0x10];                         // 0x8C, 0x10
        hel::common::MutableArray<Hero*, 4> players;    // 0x9C, 0x14
        u32 _B0;                                        // 0xB0, 0x4
        u8 animResource3[0x10];                         // 0xB4, 0x10
        u8 animResource4[0x10];                         // 0xC4, 0x10
        void* lightObj1;                                // 0xD4, 0x4
        u8 bossDemoCtrl[0x1C];                          // 0xD8, 0x1C
        u32 _F4;                                        // 0xF4, 0x4
        u32 _F8;                                        // 0xF8, 0x4 
        hel::common::Array<Vec3f, 4> _FC;               // 0xFC, 0x30
        hel::common::Array<Vec3f, 4> _12C;              // 0x12C, 0x30
        u32 _15C;
        u32 _160;
        u8 _164;
        u8 _165;
        u16 pad1;
        u8 initiative[0xC];
        u8 shuffleManager[0xA8];
        u32 _21C;
        u8 clearDanceSync[0x18];
        void* lightObj2;
        u8 _23C;
        u8 _23D;
        u16 pad2;
        u8 bombWeaponManager[0x15C];
        u32 _39C;
        void* lightObj3;
        u8 _3A4;
        u8 _3A5;
        u16 pad3;
        u8 moveLimitResponseCtrl[0x10];
        u8 barrierInvincible[0x8];
        u8 vacuumSoundCtrl[0x44];
        u8 flowSoundCtrl[0x98];
    };
    typedef Manager HeroManager;
} // namespace hero
} // namespace step
} // namespace scn

#endif