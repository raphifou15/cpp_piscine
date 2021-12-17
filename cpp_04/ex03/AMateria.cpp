/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:43:33 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/13 18:43:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("no type know")
{
    std::cout << "Constructor AMateria has been called" << std::endl;
    return ;
}

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "Constructor AMateria has been called" << std::endl;
    return ;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor AMateria has been called" << std::endl;
    return ;
}

AMateria::AMateria(const AMateria & copie): _type(copie._type)
{
    std::cout << "Constructor AMateria by copie has been called" << std::endl;
    return ;
}

AMateria    &AMateria::operator=(const AMateria &a)
{
    std::cout << "Constructor AMateria by assignation has been called" << std::endl;
    this->_type = a._type;
    return (*this);
}

std::string const & AMateria::getType(void) const
{
    return (this->_type);
}

void        AMateria::use(ICharacter & target)
{
    (void)target;
}