#ifndef DAYDREAM_MEM_H
#define DAYDREAM_MEM_H

#include <types.h>
#include "game/memory/heapexp.h"

namespace mem {
    void nw(u32 size, IAllocator* allocator);
}

// This function is called many times.
mem::HeapExp* GetZeroBufferAddress(mem::HeapExpArray* heapExpArray);
#endif