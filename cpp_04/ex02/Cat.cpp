/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:36:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 16:36:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void): _brain(new Brain())
{
    std::cout << "constructor of Cat has been called" << std::endl;
    this->_type = "Cat";
    return ;
}
Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "destructor of Cat has been called" << std::endl;
    return ;
}
Cat::Cat(const Cat &copie) : Animal(copie), _brain(new Brain(*copie._brain))
{
    std::cout << "constructor by copie of Cat has been called" << std::endl;
    return ;
}

Cat &Cat::operator=(const Cat &a)
{
    Animal::operator=(a);
    delete this->_brain;
    this->_brain = new Brain(*a._brain);
    std::cout << "constructor Cat by assignation has been called" << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
    return;
}
