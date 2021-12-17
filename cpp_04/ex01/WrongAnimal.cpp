/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:04:07 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 17:04:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
// construtor, destructor ... //
WrongAnimal::WrongAnimal(void){ std::cout << "Constructor of WrongAnimal has been called" << std::endl; return ;}
WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "Constructor of WrongAnimal has been called" << std::endl;
    return ;
}
WrongAnimal::~WrongAnimal(void){ std::cout << "Destructor of WrongAnimal has been called" << std::endl; return ;}
WrongAnimal::WrongAnimal(const WrongAnimal &copie) : _type(copie._type)
{
    std::cout << "Constructor of WrongAnimal by copie has been called" << std::endl;
    return;
}
WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &a)
{
    std::cout << "constructor WrongAnimal by assignation has been called" << std::endl;
    this->_type = a._type;
    return (*this);
}
/////////////////////////////

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal make noise" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return(this->_type);
}
