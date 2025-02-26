#include "fixed.hpp"
#include "Point.hpp"
    
int main() 
{
    Point a(0, 0);
    Point b(4, 6);
    Point c(5, 3);
    Point inside(1, 1);
    Point outside(2, 2);
    Point edge(1, 1);

    Point p;
    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "Edge: " << bsp(a, b, c, edge) << std::endl;

    return 0;
}
