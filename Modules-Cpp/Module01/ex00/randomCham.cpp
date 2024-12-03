/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomCham.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:46:12 by med-dahr          #+#    #+#             */
/*   Updated: 2024/11/28 12:46:14 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie Zombie(name);
    Zombie.announce();
}