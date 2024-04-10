#ifndef DAYDREAM_SCN_STEP_COMPONENT_COMPONENT_H
#define DAYDREAM_SCN_STEP_COMPONENT_COMPONENT_H

#include <types.h>


namespace scn {
namespace step {
namespace hero { class HeroManager; }
namespace enemy { class EnemyManager; }
    class Component {
        // Returns the hero manager
        scn::step::hero::HeroManager* heroManager();

        // Returns the enemy manager
        scn::step::enemy::EnemyManager* enemyManager();        

    };
}
}

#endif