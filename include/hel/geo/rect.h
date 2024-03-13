#ifndef DAYDREAM_HEL_GEO_RECT_H
#define DAYDREAM_HEL_GEO_RECT_H

#include "types.h"

namespace hel {
namespace geo {

    class Rect {
    public:
        Rect();
        Rect(hel::geo::Rect* source);
        Rect(float x1, float y1, float x2, float y2);
        ~Rect();

        // Rect translation.
        void trans(float x, float y);
        // Rect translation based on another rect.
        void transInternal(hel::geo::Rect* source);
        // Returns the center of the rect.
        // CURRENTLY UNSURE OF FUNCTION SIGNATURE.
        Vec2f* getCenter();
        // Returns the width of the rect.
        float getWidth();
        // Returns the height of the rect.
        float getHeight();

        // Returns if the coordinates are within the rect.
        bool isInclude(float x, float y);
        // Returns if some other rect intersects this one.
        bool isIntersect(hel::geo::Rect* other);

        // Adjusts the rect's dimensions by some multiplier.
        void adjustAspectShrink(float multiplier);
    public:
        float bottom;
        float top;
        float right;
        float left;
    };

}
}

#endif