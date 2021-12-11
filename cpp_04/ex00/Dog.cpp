/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:44:00 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 15:44:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){ std::cout << "constructor of Dog has been called" << std::endl; this->_type = "Dog"; return ;}
Dog::~Dog(void){ std::cout << "destructor of Dog has been called" << std::endl; return ;}
Dog::Dog(const Dog &copie)
{
    this->_type = copie._type;
    std::cout << "constructor by copie of Dog has been called" << std::endl;
    return ;
}
Dog &Dog::operator=(const Dog &a)
{
    std::cout << "constructor Dog by assignation has been called" << std::endl;
    this->_type = a._type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouaf Wouaf" << std::endl;
    return;
}