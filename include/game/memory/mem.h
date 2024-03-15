#ifndef DAYDREAM_MEM_H
#define DAYDREAM_MEM_H

#include <types.h>
#include "game/memory/heapexp.h"

namespace mem {
    void nw(u32 size, IAllocator* allocator);

    template <typename T>
    class ExplicitScopedPtr {
    public:
        ~ExplicitScopedPtr();

        // Returns data buffer
        void* ref();
    private:
        mem::HeapExp* heapExp;
        T* buffer;
    };
}

namespace hel {
namespace common {
    template <typename T>
    class ScopedPtr {
    public:

        // Returns data buffer
        void* ref();
    private:
        T* buffer;
    };
}
}

// This function is called many times.
void* GetZeroBufferAddress(mem::ExplicitScopedPtr<void>* explicitScopedPointer);

#endif