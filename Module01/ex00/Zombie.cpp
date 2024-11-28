/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:45:53 by med-dahr          #+#    #+#             */
/*   Updated: 2024/11/28 12:52:42 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << BOLD <<_name << ":" << RESET << RED <<" Destroy Zombie\n" << RESET;
}

void Zombie::announce(void)
{
    std::cout << YELLOW << _name << ":" << RESET
              << GREEN << "BraiiiiiiinnnzzzZ..." << RESET << "\n";
}