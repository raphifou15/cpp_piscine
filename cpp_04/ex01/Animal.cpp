/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:10:21 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 10:10:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// construtor, destructor ... //
Animal::Animal(void){ std::cout << "Constructor of Animal has been called" << std::endl; return ;}
Animal::~Animal(void){ std::cout << "Destructor of Animal has been called" << std::endl; return ;}
Animal::Animal(const Animal &copie){ (void)copie;std::cout << "Constructor of Animal by copie has been called" << std::endl; return;}
Animal  &Animal::operator=(const Animal &a)
{
    std::cout << "constructor Animal by assignation has been called" << std::endl;
    (void)a;
    return (*this);
}
/////////////////////////////

void    Animal::makeSound(void) const
{
    std::cout << "animals make noise" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return(this->_type);
}