#include <point.h>

namespace geo
{
    Point::Point()
    {
        this->x = 0;
        this->y = 0;
    }

    Point::~Point()
    {
    }

    int Point::GetX()
    {
        return x;
    }

    int Point::GetY()
    {
        return y;
    }

    void Point::SetX(int n)
    {
        this->x = n;
    }

    void Point::SetY(int n)
    {
        this->y = n;
    }

}

std::ostream& operator<<(std::ostream& ss,geo::Point pp)
{
    ss<< "X: " << pp.GetX() << std::endl;
    ss<< "Y: " << pp.GetY() << std::endl;

    return ss;
}
