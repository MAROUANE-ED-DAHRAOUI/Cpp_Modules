/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:39:53 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 12:13:41 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        
    std::cout << GREEN << a << RESET << std::endl;
    std::cout << GREEN << ++a << RESET << std::endl;
    std::cout << GREEN << a << RESET << std::endl;
    std::cout << GREEN << a++ << RESET << std::endl;
    std::cout << GREEN << a << RESET << std::endl;
    std::cout << GREEN << b << RESET << std::endl;
    std::cout << GREEN << Fixed::max( a, b ) << std::endl;
    
    return 0;
}
