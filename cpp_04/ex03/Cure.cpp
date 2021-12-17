/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:11:10 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/14 16:11:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
    std::cout << "Constructor of Cure has been called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Destructor of Cure has been called" << std::endl;
}

Cure::Cure(const Cure & copie) : AMateria(copie)
{
    std::cout << "Constructor Cure by copie has been called" << std::endl;
    return ;
}

Cure &Cure::operator=(const Cure &a)
{
    (void)a;
    std::cout << "Assignation has been called: the type hasn't change because no sense to do that" << std::endl;
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    return (new Cure());
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}