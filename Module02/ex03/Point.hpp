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
            Point(const float xnb, const float ynb);
            Point(const Point &Ob);
            ~Point();

            Point& operator=(const Point &Ob);

               Fixed getX() const;
               Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif