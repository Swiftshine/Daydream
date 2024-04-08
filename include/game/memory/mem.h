#ifndef DAYDREAM_MEM_H
#define DAYDREAM_MEM_H

#include <types.h>
#include "revolution/types.h"

namespace mem {
    class HeapExp;
    typedef HeapExp IAllocator;
    void nw(u32 size, IAllocator* allocator);

    template <typename T>
    class ExplicitScopedPtr {
    public:
        // custom entries
        ExplicitScopedPtr(T* buf);
        // end of custom entries


        ~ExplicitScopedPtr();

        // Returns data buffer
        T* ref();

    public:
    private:
        mem::HeapExp* heapExp;
        T* buffer;
    };

    template <typename T>
    class ScopedPtr {
    public:
        T* ref();
    private:
        T* buffer;
    }
    // size unknown
    class HeapExp {
    public:
        void* alloc(u32 size, int alignment);
        void  free(void* buffer);
    public:
        // offset, len
        void* vtable;           // 0x0, 0x4
        char* heapName;         // 0x4, 0x8
        u8 _8[0x24 - 0x8];      // 0x8, 0x1C
        void* memBlock;         // 0x24, 0x4
        void* _28;              // 0x28, 0x4
        int blockCount;         // 0x2C, 0x4
        void* memBlock2;        // 0x30, 0x4
        MEMiHeapHead* heapHead; // 0x34, 0x4
        void* _38;              // 0x38, 0x4
        void* _3C;              // 0x3C, 0x4
    };


    //template <typename T>
    class HeapExpArray {
    public:

    public:
        union {
            char* name;
            void* vtable;
        };
        HeapExp* heapExp;
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


// custom functions
#endif