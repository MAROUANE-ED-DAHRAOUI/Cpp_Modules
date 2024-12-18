/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:36:59 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 11:54:55 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

#define GREEN       "\033[32m"      // Green text
#define YELLOW      "\033[33m"      // Yellow text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class Fixed{

    private:
            int        _FixedValue;
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