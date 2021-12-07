/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:50:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/06 14:51:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point   a;
    Point   b(Fixed(0), Fixed(10));
    Point   c(Fixed(10), Fixed(0.01f));
    if (bsp(a, b, c, Point(Fixed(3), Fixed(6.98f))) == true)
        std::cout << "Le point est dans le triangle" << std::endl;
    else
        std::cout << "Le point n'est pas dans le triangle" << std::endl;
    return (0);
}
// ne pas diviser par 0;