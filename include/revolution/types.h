#ifndef REVOLUTION_TYPES_H
#define REVOLUTION_TYPES_H

#include <types.h>

struct MEMiHeapHead {
    unsigned int signature;
    u8 link[8];
    u8 childList[12];
    void* heapStart;
    void* heapHead;
    u8 mutex[24];
    unsigned int attribs;
};

typedef MEMiHeapHead* MEMHeapHandle;

#endif