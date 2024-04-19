#include <macros.S>
#include <kamek/kamek_asm.S>

.text

// This prevents the super ability timer from going down
kmBranchDef 0x804d235c
    li r31, 0x0
    kamek_b 0x804d2368