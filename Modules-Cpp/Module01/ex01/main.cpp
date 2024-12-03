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

/*Goal: Allocate and manage multiple objects in a single memory block.*/

int main()
{
    int     Nb = 10;
    Zombie *ObZombie = zombieHorde(Nb, "test");
    for(int i = 0; i < Nb; i++)
        ObZombie[i].announce();
    delete[] (ObZombie);
    return (0);
}
