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

//nouvel exercice
Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = num << _value_static;
    return ;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    //The value of x rounded to the nearest integral (as a floating-point value).
    //bit shifting c'est pour gagner en temp de clcul processeur.
    //float calcul sur 32 bit plus parssing.
    //int calcul sur 24 bit.
    //roundf provoque une perte de donnee
    //Le bit shifting de 1 permet d'aller plus vite pour le processeur car appres il est mult avec un float.
    this->_value = (int)(roundf(num * (1 << _value_static)));
    return ;
}

/////////////////

Fixed   &Fixed::operator=(const Fixed&a)
{
    std::cout << "Assignation operator called" << std::endl;
    // eviter les problemes d'auto affectation, il n'est pas utile dans 99.9% des cas.
    if (this == &a)
        return (*this);
    this->_value = a.getRawBits();
    return (*this);
    // Le retour de this permettra de chaîner les affectations (a = b = c).
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
    return ;
}

/////////////////////////

float   Fixed::toFloat(void) const
{
    float   value_float;

    value_float =  (((float)(this->_value)) / ((float)(1 << _value_static)));
    return (value_float);
}

int     Fixed::toInt(void) const
{
    int     value_int;

    value_int = (int)(this->_value >> _value_static);
    return (value_int);
}

std::ostream & operator<<(std::ostream & ostream, Fixed const &i)
{
    ostream << i.toFloat();
    //ostream est la sortit.
    //on redefinnit la direction si le premier est un ostream est le second est un fixed;
    //resultat le plus coherent.
    return (ostream);
}

// Il y a par contre des opérateurs que l'on n'a le droit de surcharger que comme fonction membre :
// operator=, operator(), operator[] etoperator->.