#ifndef DAYDREAM_SCN_STEP_HERO_MANAGER_H
#define DAYDREAM_SCN_STEP_HERO_MANAGER_H

#include <types.h>

namespace scn {
namespace step {

namespace hero {
    
    class Hero;

    // Size: 0x49C
    class HeroManager {
    public:
        HeroManager(void* component);

        Hero* getPlayerByIndex(u32 index);        
    public:

    };
}

namespace Component {

    // returns the current hero manager.
    scn::step::hero::HeroManager* heroManager();
}
}
}

#endif