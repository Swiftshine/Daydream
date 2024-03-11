#include <macros.S>
#include <kamek/kamek_asm.S>

.data
sampleText: .string "Hooked into Hero constructor!\n\0"
.text

kmBranchDef 0x804E63F0
    SaveVolatileRegisters

    lis r3, sampleText@ha
    addi r3, r3, sampleText@l

    // OSReport(r3)
    kamek_bl 0x8001DC90


    RestoreVolatileRegisters
    # original instruction
    addi r11, r1, 0xe0
    # continue to next instruction
    kamek_b 0x804E63F4