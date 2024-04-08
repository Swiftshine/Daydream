#ifndef DAYDREAM_SCN_STEP_COMPONENT_COMPONENT_H
#define DAYDREAM_SCN_STEP_COMPONENT_COMPONENT_H

#include <types.h>
#include "game/scn/step/hero/hero.h"
#include "game/scn/step/enemy/enemy.h"

namespace scn {
namespace step {
    class Component {
        // Returns the hero manager
        scn::step::hero::HeroManager* heroManager();

        // Returns the enemy manager
        scn::step::enemy::EnemyManager* enemyManager();        

    };
}
}

#endif