#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>


class Fixed
{

        private:
                int _FixedPoint;
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

                // Comparison Operators
                bool operator>(const Fixed &Ob) const;
                bool operator>=(const Fixed &Ob) const;
                bool operator<(const Fixed &Ob) const;
                bool operator<=(const Fixed &Ob) const;
                bool operator==(const Fixed &Ob) const;
                bool operator!=(const Fixed &Ob) const;

                // Arithmetic Operators
                Fixed operator+(const Fixed &Ob) const;
                Fixed operator-(const Fixed &Ob) const;
                Fixed operator*(const Fixed &Ob) const;
                Fixed operator/(const Fixed &Ob) const;

                // Increment/Decrement Operators
                Fixed &operator++();    // Pre-increment
                Fixed operator++(int);  // post increment
                Fixed &operator--();    // pre decriment
                Fixed operator--(int);  // post decrement

                static Fixed &min(Fixed &a, Fixed &b);
                static const Fixed &min(const Fixed &a, const Fixed &b);
                static Fixed &max(Fixed &a, Fixed &b);  
                static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif