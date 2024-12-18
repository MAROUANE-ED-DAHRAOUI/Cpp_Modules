/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:52 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 11:57:32 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

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