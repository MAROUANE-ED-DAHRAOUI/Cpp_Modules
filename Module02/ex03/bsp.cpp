#include "Point.hpp"

// Helper function to get absolute value of Fixed
Fixed fpAbs(Fixed f)
{
    if (f.getRawBits() < 0)
        f.setRawBits(-f.getRawBits());
    return f;
}

// Calculate area of the triangle using Fixed point
Fixed CalculateArea(Point const& p1, Point const& p2, Point const& p3)
{
    return (p1.getX() * (p2.getY() - p3.getY())
            + p2.getX() * (p3.getY() - p1.getY())
            + p3.getX() * (p1.getY() - p2.getY())) / 2;
}

// Main bsp function to check if point is inside triangle
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    // Calculate areas of triangles
    Fixed TotalArea = fpAbs(CalculateArea(a, b, c));
    Fixed ar1 = fpAbs(CalculateArea(point, a, b));
    Fixed ar2 = fpAbs(CalculateArea(point, b, c));
    Fixed ar3 = fpAbs(CalculateArea(point, c, a));

    // Return true if the areas match and no sub-area is zero
    return ((TotalArea == ar1 + ar2 + ar3) && (ar1 != 0 && ar2 != 0 && ar3 != 0));
}
