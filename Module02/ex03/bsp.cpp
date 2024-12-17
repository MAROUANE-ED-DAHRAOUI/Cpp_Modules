#include "Point.hpp"

static float CalculateArea(Point const& p1, Point const& p2, Point const& p3)
{
    Fixed TriangleArea = (p1.getX() * (p2.getY() - p3.getY()) 
                            + p2.getX() * (p3.getY() - p1.getY())
                            + p3.getX() * (p1.getY() - p2.getY())) / 2;
    return (TriangleArea.toFloat() > 0 ? TriangleArea.toFloat() : -TriangleArea.toFloat());
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    float TotalArea = CalculateArea(a, b, c);
    float ar1 = CalculateArea(point, a, b);
    float ar2 = CalculateArea(point, b, c);
    float ar3 = CalculateArea(point, c, a);

    return ((TotalArea == ar1 +  ar2 + ar3) && (ar1 > 0 && ar2 > 0 && ar3 > 0));
}

