/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:54:39 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/06 14:54:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
// const int i = 0

Point::Point(void){}
Point::~Point(void){}
Point::Point(const Point &copie): _x(copie._x), _y(copie._y){};
Point::Point(const Fixed &a, const Fixed &b): _x(a), _y(b) {};

Point &Point::operator=(const Point&a)
{
    (void)a;
    //impossible de copier une valeur qui est const
    return(*this);
}

const Fixed&    Point::get_x(void) const
{ 
    return(this->_x);
}
const Fixed&    Point::get_y(void) const
{ 
    return(this->_y);
}