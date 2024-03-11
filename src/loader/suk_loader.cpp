#include <kamek/kamek_loader.h>

typedef void *allocRef(void);
allocRef *t_allocatorRef = (allocRef *)(0x801CC7C4);
typedef void* (*Alloc_func_t)(void* heapExp, size_t size, int alignment);

typedef void (*Free_func_t) (void* heapExp, void* buffer);

struct loaderFunctionsEx {
    loaderFunctions base;
    Alloc_func_t alloc;
    Free_func_t free;
};

void* allocAdapter(u32 size, bool isForCode, const loaderFunctions* funcs) {
    const loaderFunctionsEx* funcsEx = (const loaderFunctionsEx*)funcs;
    return funcsEx->alloc(t_allocatorRef(), size,0x20);
}

void freeAdapter(void* buffer, bool isForCode, const loaderFunctions* funcs) {
    const loaderFunctionsEx* funcsEx = (const loaderFunctionsEx*)funcs;
    funcsEx->free(t_allocatorRef(), buffer);
}


const loaderFunctionsEx functions_ex_ntsc = {
    {(OSReport_t) 0x8001DC90,
    (OSFatal_t) 0x8001FE50,
    (DVDConvertPathToEntrynum_t) 0x80039A40,
    (DVDFastOpen_t) 0x80039D50,
    (DVDReadPrio_t) 0x8003A120,
    (DVDClose_t) 0x80039EE0,
    (sprintf_t) 0x8000D7AC,
    allocAdapter,
    freeAdapter},
    (Alloc_func_t) 0x801CB760,
    (Free_func_t) 0x801CB764
};


int loadIntoKRTDL(); // forward-declare


/* current problems with this
    - metafortress has activated before this point
*/

kmCallDefCpp(0x801779D0, int, void) {
    loadIntoKRTDL();
    return 0x10000;
}


int loadIntoKRTDL() {
    // just for ntscv1
    const loaderFunctionsEx* funcs = &functions_ex_ntsc;
    funcs->base.OSReport("Loading custom code for Kirby's Return to Dream Land...\n");
    loadKamekBinaryFromDisc(&funcs->base, "/daydream/SUK_USA.bin");
    funcs->base.OSReport("Finished loading custom code! Welcome to Daydream!\n");
    return 0;
}