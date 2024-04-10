#ifndef DAYDREAM_SCN_STEP_HERO_ABILITY_H
#define DAYDREAM_SCN_STEP_HERO_ABILITY_H

#include <types.h>
#include "game/scn/step/component.h"

namespace scn {
namespace step {
namespace hero {
    class Hero;
    typedef enum AbilityKind {
        Ability_None=0,
        Ability_Sword=1,
        Ability_Cutter=2,
        Ability_Leaf=3,
        Ability_Whip=4,
        Ability_Fire=5,
        Ability_Needle=6,
        Ability_Beam=7,
        Ability_Spark=8,
        Ability_Stone=9,
        Ability_Sleep=10,
        Ability_Parasol=11,
        Ability_Water=12,
        Ability_HighJump=13,
        Ability_Tornado=14,
        Ability_Bomb=15,
        Ability_Spear=16,
        Ability_Hammer=17,
        Ability_Ice=18,
        Ability_Wing=19,
        Ability_Ninja=20,
        Ability_Fighter=21,
        Ability_Crash=22,
        Ability_Mike1=23,
        Ability_Landia=24,
        Ability_SuperSword=25,
        Ability_SuperFire=26,
        Ability_SuperBeam=27,
        Ability_SuperHammer=28,
        Ability_SuperIce=29,
        Ability_Mike2=30,
        Ability_Mike3=31,
        Ability_Meta=32,
        Ability_Dedede=33,
        Ability_Dee=34
    } AbilityKind;

    // size: 0xC
    class AbilityBase {
    public:
        AbilityBase(scn::step::Component* component, scn::step::hero::Hero* hero);
        ~AbilityBase();

        virtual void setup();
        virtual int  tryToChangeStateOnCarry();
        virtual int  tryToChangeStateOnInterval();
        virtual int  tryToChangeStateOnDamage();
        virtual int  tryToChangeState();
        virtual void onStateEndCleanUp();
        virtual void onGetEventItem();
        virtual void onGimmickReactChangeState();
        virtual void onStartClearDanceExternal();
        virtual void onEnterWarpLowper(); // yes it is spelled like this
        virtual void onShowHero();
        virtual void onHideHero();
        virtual void onDead();
        virtual void onCaptured();
        virtual void onVacuumed();
        virtual void onStartDemo();
        virtual void onEnterDoor();
        virtual void procAnim();
        virtual void procMove();
        virtual void procObjCollReact();
        virtual bool isDepleted();


    public:
        void* vtable;
        scn::step::Component* component;
        scn::step::hero::Hero* hero;
    };

    // size: 0x68
    class AbilityManager {
    public:
        AbilityManager(scn::step::hero::Hero* hero, void* heapExpArrayUser);
        ~AbilityManager();

        bool haveAbility(scn::step::hero::Hero* hero);
        void clearAbilityCore(bool unk);
    public:
        scn::step::hero::Hero* hero;
    };
}
}
}

#endif