/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:40:28 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/24 11:43:20 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_number = 8;

Fixed::Fixed() : _FixedPoint(0) 
{

}

Fixed::Fixed(const int value) 
{
    this->_FixedPoint = value * (1 << _number);
}

Fixed::Fixed(const float value) 
{
        this->_FixedPoint = roundf(value * (1 << _number));
}

//Copy constructor
Fixed::Fixed(const Fixed &instance) 
{
    *this = instance;
}

Fixed::~Fixed() 
{
}

Fixed& Fixed::operator=(const Fixed &rhs) 
{
    this->_FixedPoint = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const 
{
    return this->_FixedPoint;
}

void Fixed::setRawBits(int const raw) 
{
    this->_FixedPoint = raw;
}

float Fixed::toFloat(void) const 
{
    return ((float)(this->_FixedPoint) / (1 << _number));
}

int Fixed::toInt(void) const 
{
    return (this->_FixedPoint / (1 << _number));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}

// Comparison Operators
bool Fixed::operator>(const Fixed &Ob) const
{
    return (this->_FixedPoint > Ob._FixedPoint);
}

bool Fixed::operator>=(const Fixed &Ob) const
{
    return (this->_FixedPoint >= Ob._FixedPoint);
}

bool Fixed::operator<(const Fixed &Ob) const
{
        return (this->_FixedPoint < Ob._FixedPoint);
}

bool Fixed::operator<=(const Fixed &Ob) const
{
        return (this->_FixedPoint <= Ob._FixedPoint);
}
    
bool Fixed::operator==(const Fixed &Ob) const
{
        return (this->_FixedPoint == Ob._FixedPoint);
}

bool Fixed::operator!=(const Fixed &Ob) const
{
        return (this->_FixedPoint != Ob._FixedPoint);
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed &Ob) const
{
    return Fixed(this->toFloat() + Ob.toFloat());
}

Fixed Fixed::operator-(const Fixed &Ob) const
{
    return Fixed(this->toFloat() - Ob.toFloat());
}

Fixed Fixed::operator*(const Fixed &Ob) const
{
    return Fixed(this->toFloat() * Ob.toFloat());
}

Fixed Fixed::operator/(const Fixed &Ob) const
{
    return Fixed(this->toFloat() / Ob.toFloat());
}

// Pre-increment
Fixed &Fixed::operator++()
{
    ++_FixedPoint;
    return (*this);
}

// Post-increment
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _FixedPoint++; 
    return temp;
}

// Pre-decrement
Fixed &Fixed::operator--()
{
    --_FixedPoint;
    return (*this);
}

// Post-decrement
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _FixedPoint--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b; 
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b; 
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b; 
}  

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b; 
}