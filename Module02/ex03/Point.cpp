#include "Point.hpp"
#include "fixed.hpp"

Point::Point() : _x(0), _y(0)
{
    return ;
}

Point::Point(const float xnb, const float ynb) : _x(Fixed(xnb)), _y(Fixed(ynb))
{

}

Point::Point(const Point &Ob) : _x(Ob._x), _y(Ob._y)
{

}

Point& Point::operator=(const Point &Ob)
{
    (void)Ob;
    return *this;
}

Point::~Point()
{

}

Fixed Point::getX() const
{
    return (_x);
}

Fixed Point::getY() const
{
    return (_y);
}
