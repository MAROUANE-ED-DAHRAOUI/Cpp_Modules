/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:37:05 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/18 11:52:59 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;

    std::cout << BOLD << a.getRawBits() << RESET << std::endl;
    std::cout << BOLD << b.getRawBits() << RESET << std::endl;
    std::cout << BOLD << c.getRawBits() << RESET << std::endl;
    return 0;
}
