#ifndef DAYDREAM_HEL_STRING_H
#define DAYDREAM_HEL_STRING_H

#include <types.h>

namespace hel {
namespace common {

    template<u32 N>
    class FixedString {
    public:
        FixedString(const char* string);
    public:
        char data[N];
    };
}
}

#endif