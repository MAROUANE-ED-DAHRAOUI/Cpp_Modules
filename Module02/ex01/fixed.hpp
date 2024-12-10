#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>


class Fixed
{

        private:
                int _FixedValue;
                static const int _number = 8;

        public:
                Fixed();
                Fixed(const int value);
                Fixed(const float value);
                Fixed(const Fixed &instance);
                ~Fixed();

                Fixed& operator=(const Fixed &rhs);

                int getRawBits(void) const;
                void setRawBits(int const raw);
                float toFloat(void) const;
                int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif