/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:46:24 by med-dahr          #+#    #+#             */
/*   Updated: 2024/11/28 12:47:02 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BOLD        "\033[1m"  
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"


class Zombie{

    private:
            std::string  _name;  
    public:
            Zombie(std::string name);
            Zombie();
            ~Zombie();
            void    SetName(std::string name);
            void    announce(void);
};

Zombie*         zombieHorde(int N, std::string name);

#endif
