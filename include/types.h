#ifndef TYPES_H
#define TYPES_H

#define NULL 0

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef float f32;
typedef double f64;


struct Vec2f {
    Vec2f() {
        this->x = 0.0f;
        this->y = 0.0f;
    }

    Vec2f(f32 newX, f32 newY) {
        this->x = newX;
        this->y = newY;
    }
    
    f32 x, y;
};

struct Vec3f {
    Vec3f() {
        this->x = 0.0f;
        this->y = 0.0f;
        this->z = 0.0f;
    }

    Vec3f(f32 newX, f32 newY, f32 newZ) {
        this->x = newX;
        this->y = newY;
        this->z = newZ;
    }

    f32 x, y, z;
};



// Signed 16-bit integer 3D vector
typedef struct {
	s16 x, y, z;
} S16Vec;

// Quaternion & pointer
typedef struct {
	f32 x, y, z, w;
} Quaternion;

// 3x4 matrix & pointer
typedef f32 Mtx[3][4];
typedef f32 (*MtxPtr)[4];

// 4x3 reordered matrix & pointer
typedef f32 ROMtx[4][3];
typedef f32 (*ROMtxPtr)[3];

// 3x3 matrix & pointer
typedef f32 Mtx33[3][3];
typedef f32(*Mtx33Ptr)[3];

// 4x4 matrix & pointer
typedef f32 Mtx44[4][4];
typedef f32 (*Mtx44Ptr)[4];

#endif