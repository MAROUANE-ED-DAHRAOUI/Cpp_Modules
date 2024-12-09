#include "fixed.hpp"

const int Fixed::_number = 8;

Fixed::Fixed() : _FixedValue(0)
{
    std::cout << "default constructor" << std::endl; 
}

Fixed::Fixed(const Fixed &Ob)
{
        this->_FixedValue = Ob.getRawBits();
        std::cout << "copy constructor is called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &instance)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &instance)
    {
        this->_FixedValue = instance.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "destructor is called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_FixedValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_FixedValue = raw;
}
