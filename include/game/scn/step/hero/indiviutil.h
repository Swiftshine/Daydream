#ifndef DAYDREAM_SCN_STEP_HERO_INDIVIUTIL_H
#define DAYDREAM_SCN_STEP_HERO_INDIVIUTIL_H

namespace scn {
namespace step {
namespace hero {
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
}
}
}

#endif