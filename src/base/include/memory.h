#ifndef MEMORY_H
#define MEMORY_H

#include <err.h>

#define MEM_ALLOC_ERR 11

void* allocate(void* (*fp)(size_t), size_t size) {
    void* buffer;
    if (!(buffer = fp(size)))
        errx(MEM_ALLOC_ERR, "%s:%d (%s) can't allocate segment of size %lu", 
            __FILE__, __LINE__, __func__, size);
}   

#endif