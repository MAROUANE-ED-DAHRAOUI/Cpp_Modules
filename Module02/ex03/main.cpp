#include "fixed.hpp"
#include "Point.hpp"
    
int main() 
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 3);
    Point inside(1, 1);
    Point outside(5, 5);
    Point edge(2, 0);

    Point p;
    std::cout << "Inside: " << p.bsp(a, b, c, inside) << std::endl; // true
    std::cout << "Outside: " << p.bsp(a, b, c, outside) << std::endl; // false
    std::cout << "Edge: " << p.bsp(a, b, c, edge) << std::endl; // false

    return 0;
}
