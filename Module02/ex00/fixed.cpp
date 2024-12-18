/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:36:50 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 11:51:48 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

const int Fixed::_number = 8;

Fixed::Fixed() : _FixedValue(0)
{
    std::cout << GREEN << "default constructor" << RESET << std::endl; 
}

Fixed::Fixed(const Fixed &Ob)
{
        this->_FixedValue = Ob.getRawBits();
        std::cout << GREEN << "copy constructor is called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed &instance)
{
    std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
    if(this != &instance)
    {
        this->_FixedValue = instance.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << GREEN << "destructor is called" << RESET << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << MAGENTA << "getRawBits member function called\n" << RESET;
    return (this->_FixedValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_FixedValue = raw;
}
