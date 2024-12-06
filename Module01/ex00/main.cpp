/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:46:19 by med-dahr          #+#    #+#             */
/*   Updated: 2024/11/28 12:46:22 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Goal: Manage dynamically allocated objects and distinguish 
        between heap and stack memory.*/
int main()
{
    Zombie *new_Zombie = newZombie("foo");
    new_Zombie->announce();
    randomChump("marouane");
    delete new_Zombie;
    return (0);
}
