#ifndef DAYDREAM_HEL_ARRAY_ARRAY_H
#define DAYDREAM_HEL_ARRAY_ARRAY_H

#include <types.h>

namespace hel {
namespace common {
    template <typename T, u32 N>
    class Array {
    public:
        T* getAtIndex(u32 index);
    public:
        T data[N];
    };

    template <typename T, u32 N>
    class MutableArray {
    public:
        T* getAtIndex(u32 index);
        void add(T* object);
    public:
        u32 numObjects; // the number of objects in the array
        hel::common::Array<T, N> array; // the array
    };
}
}

#endif