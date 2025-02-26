#ifndef POINT_H
#define POINT_H

#include "fixed.hpp"
#include <iostream>


class Point{

    private:
            Fixed const _x;
            Fixed const _y;
    public:
            Point();
            Point(const float x, const float y);
            Point(const Point &Ob);
            Point& operator=(const Point &Ob);
            ~Point();

            float getX() const;
            float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif