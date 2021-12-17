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
#include "Brain.hpp"

Dog::Dog(void): _brain(new Brain)
{
    std::cout << "constructor of Dog has been called" << std::endl;
    this->_type = "Dog";
    return ;
}
Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "destructor of Dog has been called" << std::endl;
    return ;
}
Dog::Dog(const Dog &copie) : Animal(copie), _brain(new Brain(*copie._brain))
{
    std::cout << "constructor by copie of Dog has been called" << std::endl;
    return ;
}
Dog &Dog::operator=(const Dog &a)
{
    Animal::operator=(a);
    delete this->_brain;
    this->_brain = new Brain(*a._brain);
    std::cout << "constructor Dog by assignation has been called" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouaf Wouaf" << std::endl;
    return;
}