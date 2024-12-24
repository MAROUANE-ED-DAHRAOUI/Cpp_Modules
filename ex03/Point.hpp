/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-dahr <med-dahr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:40:48 by med-dahr          #+#    #+#             */
/*   Updated: 2024/12/24 10:46:20 by med-dahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include <iostream>
#include <fstream>

class Point{

    private:
            Fixed const _x;
            Fixed const _y;
    public:
            Point();
            Point(const float xnb, const float ynb);
            Point(const Point &Ob);
            Point& operator=(const Point &Ob);
            ~Point();

            Fixed getX() const;
            Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
