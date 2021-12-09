/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:53:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/02 09:53:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//int Fixed::_value_static = 8; ceci etait mon erreur lors de ma premiere correction, il fallait une static const;

Fixed::Fixed(void): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &copie)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copie;
    return ;
}

Fixed   &Fixed::operator=(const Fixed&a)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = a.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}