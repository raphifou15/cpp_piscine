/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:54:52 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/06 14:54:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point(void);
        Point(const Point &copie);
        Point(const Fixed &a, const Fixed &b);
        Point &operator=(const Point&a);
        const Fixed&  get_x(void) const;
        const Fixed&  get_y(void) const;
        ~Point(void);
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);