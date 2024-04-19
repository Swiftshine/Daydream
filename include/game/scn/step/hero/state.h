#ifndef DAYDREAM_SCN_STEP_HERO_STATE_H
#define DAYDREAM_SCN_STEP_HERO_STATE_H

namespace scn {
namespace step {
namespace hero {
    class Hero;

    class StateBase {
    public:
        StateBase();
        ~StateBase();
    public:
        void* vtable;
        Hero* hero;
    };
}
}
}

#endif