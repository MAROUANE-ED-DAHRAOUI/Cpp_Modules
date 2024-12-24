#include "Point.hpp"
#include "Fixed.hpp"

// Calculate area of the triangle using Fixed point
Fixed CalculateArea(Point const& p1, Point const& p2, Point const& p3)
{
    Fixed area;
    Fixed term1;
    Fixed term2;
    Fixed term3;

            term1 = p1.getX() * (p2.getY() - p3.getY());
            term2 = p2.getX() * (p3.getY() - p1.getY());
            term3 = p3.getX() * (p1.getY() - p2.getY());

    area = (term1 + term2 + term3) / 2;
    if(area < 0)
        return (area * (-1));
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{

    Fixed TotalArea;
    Fixed ar1;
    Fixed ar2;
    Fixed ar3;

    // Calculate areas of triangles
        TotalArea = CalculateArea(a, b, c);
        ar1 = CalculateArea(point, a, b);
        ar2 = CalculateArea(point, b, c);
        ar3 = CalculateArea(point, c, a);

    bool valide = (TotalArea == ar1 + ar2 + ar3) ? true : false;

    std::cout << "areas: " << ar1 << ", " << ar2 << ", " << ar3 << std::endl;
    if(!(ar1 > 0 && ar2 > 0 && ar3 > 0))
    {
        std::cout << "here problem\n";
        std::cout << "areas: " << ar1 << ", " << ar2 << ", " << ar3 << std::endl;
    }
    return (valide && (ar1 > 0 && ar2 > 0 && ar3 > 0));
}