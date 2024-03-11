#ifndef DAYDREAM_SCN_STEP_HERO_INDIVIUTIL_H
#define DAYDREAM_SCN_STEP_HERO_INDIVIUTIL_H

#include <types.h>
namespace scn::step::hero {

    
    // Unofficial structs ^ 
    // Official structs
    enum Kind : u32 {
        HeroKind_Kirby,     // unknown
        HeroKind_MetaKnight = 4,
        HeroKind_KingDedede = 5,
        HeroKind_Dee        = 6,
    };


    // Returns if the hero kind provided matches Kirby's.
    bool IsKirby(Kind heroKind);
    // Returns if the hero kind provided matches Meta Knight's.
    bool IsMeta(Kind heroKind);
    // Returns if the hero kind provided matches King Dedede's.
    bool IsDedede(Kind heroKind);
    // Returns if the hero kind provided matches Waddle Dee's.
    bool IsDee(Kind heroKind);
    // Returns if the hero kind provided is able to hover.
    bool CanHover(Kind heroKind);
}

#endif