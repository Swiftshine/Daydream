#ifndef DAYDREAM_HEL_RTTI_H
#define DAYDREAM_HEL_RTTI_H

namespace hel {
namespace common {

    class RuntimeTypeInfo {
    public:
        RuntimeTypeInfo(RuntimeTypeInfo* rtti, char* name);
    public:
        RuntimeTypeInfo* base;
        char* name;
    };

    typedef RuntimeTypeInfo RTTI;

    template <typename T>
    class RuntimeTypeInfoImpl {
    public:
        
    };
}
}

#endif