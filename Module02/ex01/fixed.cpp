#include "fixed.hpp"

Fixed::Fixed() : _FixedPoint(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) 
{
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPoint = value << _number;
}

Fixed::Fixed(const float value) 
{
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPoint = roundf(value * (1 << _number));
}

Fixed::Fixed(const Fixed &instance) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = instance;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_FixedPoint = rhs.getRawBits();
    }
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
    return static_cast<float>(this->_FixedPoint) / (1 << _number);
}

int Fixed::toInt(void) const 
{
    return this->_FixedPoint >> _number;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}
