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

Cat::Cat(void){ std::cout << "constructor of Cat has been called" << std::endl; this->_type = "Cat"; return ;}
Cat::~Cat(void){ std::cout << "destructor of Cat has been called" << std::endl; return ;}
Cat::Cat(const Cat &copie)
{
    this->_type = copie._type;
    std::cout << "constructor by copie of Cat has been called" << std::endl;
    return ;
}

Cat &Cat::operator=(const Cat &a)
{
    std::cout << "constructor Cat by assignation has been called" << std::endl;
    this->_type = a._type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
    return;
}
