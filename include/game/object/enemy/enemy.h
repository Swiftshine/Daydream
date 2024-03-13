#ifndef DAYDREAM_SCN_STEP_ENEMY_H
#define DAYDREAM_SCN_STEP_ENEMY_H

#include <types.h>
#include "game/memory/heapexp.h"

namespace scn {
namespace step {

namespace map {

    // honestly just look at https://github.com/DudeLuke/MagoCrate/blob/master/RDLLVL/Objects.cs for information.
    // i'm not going to type all of them out right now.

    enum BinEnemyKind {
        SirKibble         = 0,
        BrontoBurt        = 1,
        WaddleDee         = 2,
    };

    enum BinEnemyVariation { // the behaviour of the enemy

    };

    enum BinEnemyDirType {
        TowardsKirby  = 0,
        Left          = 1,
        Right         = 2,
    };

    enum BinEnemySize {

    };
}


namespace enemy {

    // Information for the enemy
    // Size: 0x30?
    class Desc {
    public:
        Desc(scn::step::map::BinEnemyKind kind, scn::step::map::BinEnemyVariation variation, u32 level, scn::step::map::BinEnemyDirType direction, scn::step::map::BinEnemySize sizeType, bool hasSuperAbility, bool unk2, Vec2f* position);
    public:
        u32 enemyID;        // 0x0, 0x4; "enemyKind"
        u32 behavior;       // 0x4, 0x4; "enemyVariation"
        u32 level;          // 0x8, 0x4
        u32 direction;      // 0xC, 0x4; 0 = towards Kirby, 1 = left, 2 = right
        u32 sizeType;       // 0x10, 0x4
        bool superAbility;  // 0x14, 0x1
        bool _15;           // 0x15, 0x1
        u16 padding1;       // 0x16, 0x2
        Vec2f pos;          // 0x18, 0x8
        Vec2f pos2;         // 0x20, 0x8; a duplicate of pos1
        bool _28;           // 0x28, 0x1
        bool _29;           // 0x29, 0x1
        u16 padding2;       // 0x2A, 0x2
        u32 _2C;            // 0x2C, 0x4
    };

    // Base enemy class
    // Size: 0x1B0
    class Enemy {
    public:
        Enemy(void* component, mem::HeapExp* heapExpArray, scn::step::enemy::Desc* desc, u32 unk);
    public:
        void* _0;                       // 0x0, 0x4
        mem::HeapExp* heapExpArray;     // 0x4, 0x4
        void* _8;                       // 0x8, 0x4
        void* _C;                       // 0xC, 0x4
        Desc properties;                // 0x10, 0x30
    };

}
}
}

#endif