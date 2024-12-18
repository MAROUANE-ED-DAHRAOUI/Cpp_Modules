/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:59 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 12:06:32 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <iostream>


int main( void ) 
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << MAGENTA << "a is " << RESET << BOLD << a << RESET << std::endl;
    std::cout << MAGENTA << "b is " << RESET << BOLD << b << RESET << std::endl;
    std::cout << MAGENTA << "c is " << RESET << BOLD << c << RESET << std::endl;
    std::cout << MAGENTA << "d is " << RESET << BOLD << d << RESET << std::endl;

    std::cout << MAGENTA << "a is " << RESET << BOLD << a.toInt() << RESET 
            << MAGENTA << " as integer" << RESET << std::endl;
    std::cout << MAGENTA << "b is " << RESET << BOLD << b.toInt() << RESET 
            << MAGENTA << " as integer" << RESET << std::endl;
    std::cout << MAGENTA << "c is " << RESET << BOLD << c.toInt() << RESET 
            << MAGENTA << " as integer" << RESET << std::endl;
    std::cout << MAGENTA << "d is " << RESET << BOLD << d.toInt() << RESET 
            << MAGENTA << " as integer" << RESET << std::endl;
    
    return 0;
}
