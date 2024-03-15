#ifndef DAYDREAM_SCN_STEP_ENEMY_MANAGER_H
#define DAYDREAM_SCN_STEP_ENEMY_MANAGER_H

#include <types.h>

namespace scn {
namespace step {
namespace enemy {

    class Enemy;
    class Desc;

    class Manager {
    public:
        Manager();
        ~Manager();

        Enemy* request(void* unk, Desc* properties);

    public:
    };

    typedef Manager EnemyManager;
}
}
}

#endif