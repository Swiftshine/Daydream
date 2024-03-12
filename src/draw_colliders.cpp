#include "kamek/kamek.h"
// The game checks if r3 is nonzero, and if so,
// allows colliders to be drawn (for debugging purposes).
// In the game's code, it calls a function that always
// returns zero. These patches make the game call our
// custom-defined functions instead.


// enable or disable these to your liking.
bool enableEntityColliderViewer = false;
bool enableVacuumColliderViewer = false;
bool enableGridViewer           = false;
bool enablePegFrameViewer       = false;

bool drawEntityColliders() {
    return enableEntityColliderViewer;
}

bool drawVacuumColliders() {
    return enableVacuumColliderViewer;
}

bool drawGrid() {
    return enableGridViewer;
}

bool drawPegFrames() {
    return enablePegFrameViewer;
}

// entity colliders
kmBranchDefAsm(0x80356ADC, 0x80356AE0) {
    bl drawEntityColliders
}

// vacuum colliders
kmBranchDefAsm(0x80356B00, 0x80356B04) {
    bl drawVacuumColliders
}

// grid
kmBranchDefAsm(0x80356BA0, 0x80356BA4) {
    bl drawGrid
}

// "peg frames"
kmBranchDefAsm(0x80356BB8, 0x80356BBC) {
    bl drawPegFrames
}