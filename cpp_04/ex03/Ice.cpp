/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:49:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/13 19:49:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) 
{
    this->_type = "ice";
    std::cout << "Constructor of Ice has been called" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Destructor of Ice has been called" << std::endl;
}

Ice::Ice(const Ice & copie) :  AMateria(copie)
{
    std::cout << "Constructor Ice by copie has been called" << std::endl;
    return ;
}

Ice &Ice::operator=(const Ice &a)
{
    (void)a;
    std::cout << "Assignation has been called: the type hasn't change because no sense to do that" << std::endl;
    return (*this);
}

AMateria*   Ice::clone(void) const
{
    return (new Ice());
}

void        Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}