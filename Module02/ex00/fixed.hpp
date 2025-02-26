#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

    private:
            int        _FixedPoint;
            static const int _number;
    public:
            Fixed();
            Fixed(const Fixed &ob);
            Fixed& operator=(const Fixed &rhs);
            ~Fixed();

            int getRawBits( void ) const;
            void setRawBits( int const raw );
};


#endif