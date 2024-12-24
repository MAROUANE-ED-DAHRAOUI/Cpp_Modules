/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:40:36 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/24 11:21:15 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
    
static std::string	PrintResult( bool value ) {
	return (value ? "is located inside triangle ABC"
				: "is located outside triangle ABC");
}
int main() 
{
   {
        Point a(0, 0);
	      Point b(-2, -5);
	      Point c(0, 8);

        Point inside(1, 4);
        Point out(4, 4);
        Point edge(3, 2);


          std::cout << "Insid: " << PrintResult(bsp(a, b, c, inside)) << std::endl;
          std::cout << "Outside: " << PrintResult(bsp(a, b, c, out)) << std::endl;
          std::cout << "Edge: " << PrintResult(bsp(a, b, c, edge)) << std::endl; 
    }
    return 0;
}
