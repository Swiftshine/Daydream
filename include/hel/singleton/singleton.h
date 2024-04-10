#ifndef DAYDREAM_HEL_SINGLETON_SINGLETON_H
#define DAYDREAM_HEL_SINGLETON_SINGLETON_H

namespace hel {
namespace common {

    template <typename T>
    class ExplicitSingleton {
    public:
        static T object_; // or is it T*?
    private:
        ExplicitSingleton();
        ~ExplicitSingleton();
    };
}
}
#endif