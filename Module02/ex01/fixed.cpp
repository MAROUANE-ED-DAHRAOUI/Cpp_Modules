/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:27 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 12:00:11 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _FixedValue(0) 
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int value) 
{
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
    this->_FixedValue = value << _number;
}

Fixed::Fixed(const float value) 
{
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
    this->_FixedValue = roundf(value * (1 << _number));
}

Fixed::Fixed(const Fixed &instance) 
{
    std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
    *this = instance;
}

Fixed::~Fixed() 
{
    std::cout << GREEN << "Destructor called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) 
{
    std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
    if (this != &rhs) {
        this->_FixedValue = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const 
{
    return this->_FixedValue;
}

void Fixed::setRawBits(int const raw) 
{
    this->_FixedValue = raw;
}

float Fixed::toFloat(void) const 
{
    return static_cast<float>(this->_FixedValue) / (1 << _number);
}

int Fixed::toInt(void) const 
{
    return this->_FixedValue >> _number;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}