#include "Point.hpp"
#include "fixed.hpp"

Point::Point() : _x(0), _y(0)
{
    return ;
}

Point::Point(float x, float y) : _x(x), _y(y)
{

}

Point::Point(const Point &Ob) : _x(Ob._x), _y(Ob._y)
{

}

Point& Point::operator=(const Point &Ob)
{
    (void) Ob;
    return *this;
}

Point::~Point()
{

}

float Point::getX() const
{
    return ((float)_x.toFloat());
}

float Point::getY() const
{
    return ((float)_y.toFloat());
}
