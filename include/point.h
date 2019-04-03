#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

namespace geo
{
    class Point
    {
        int x,y;

        public:
            Point();
            ~Point();
            int GetX();
            int GetY();
            void SetX(int);
            void SetY(int);
    };
}

std::ostream& operator<<(std::ostream& ss, geo::Point pp);

#endif

