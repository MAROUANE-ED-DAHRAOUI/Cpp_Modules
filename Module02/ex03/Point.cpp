/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:40:41 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/24 11:50:27 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"



/**
 * @brief Default constructor for the Point class.
 *        Initializes the x and y coordinates to 0.
 */
Point::Point() : _x(0), _y(0)
{
    std::cout << "default constructor\n";
    return ; 
}

/**
 * @brief Constructs a Point object with the given x and y coordinates.
 * 
 * @param xnb The x-coordinate of the Point.
 * @param ynb The y-coordinate of the Point.
 */
Point::Point(const float xnb, const float ynb) : _x(Fixed(xnb)), _y(Fixed(ynb))
{
    std::cout << "default constructor 2 param const float\n";
    
}

// Point::Point(const int xnb, const int ynb) : _x(xnb), _y(ynb)
// {
//     std::cout << "default constructor 2 param const int\n";
// }

/**
 * @brief Copy constructor for the Point class.
 * 
 * @param Ob The Point object to be copied.
 */
Point::Point(const Point &Ob) : _x(Ob._x), _y(Ob._y)
{
        std::cout << "copy constructor\n";
}

/**
 * @brief Assignment operator for Point class.
 * 
 * This operator assigns the values of another Point object to the current object.
 * 
 * @param Ob The Point object to be assigned.
 * @return A reference to the current Point object.
 */
Point& Point::operator=(const Point &Ob)
{
    if(this != &Ob)
    {
        *this = Point(Ob);
    }
    return *this;
}

/**
 * @brief Destructor for the Point class.
 * 
 * This destructor is responsible for cleaning up any resources
 * allocated by the Point class.
 */
Point::~Point()
{

}

/**
 * @brief Get the x-coordinate of the Point object.
 * 
 * @return Fixed The x-coordinate of the Point object.
 */
Fixed Point::getX() const
{
    return (this->_x);
}

Fixed Point::getY() const
{
    return (this->_y);
}