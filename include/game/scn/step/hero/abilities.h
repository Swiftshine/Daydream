#ifndef DAYDREAM_SCN_STEP_HERO_ABILITIES_H
#define DAYDREAM_SCN_STEP_HERO_ABILITIES_H

#include "game/scn/step/hero/ability.h"

namespace scn {
namespace step {
namespace hero {

    class Hero;

// Sword Ability
namespace sword {
    // size: 0x10
    class Sword : public AbilityBase {
    public:
        Sword(scn::step::Component* component, scn::step::hero::Hero* hero);
        virtual ~Sword();

        void setup() override;
        int  tryToChangeState() override;
        void onStateEndCleanUp() override;
    public:
        u8 _C;
        u8 padMaybe[3];
    };
}

}
}
}

#endif