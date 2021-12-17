/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:29:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/15 16:29:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Constructor of MateriaSource has been called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia_inventory[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "Destructor of MateriaSource has been called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia_inventory[i] != NULL)
        {
            delete this->_materia_inventory[i];
            this->_materia_inventory[i] = NULL;
        }   
    }
}

MateriaSource::MateriaSource(const MateriaSource & copie)
{
    std::cout << "Constructor by copie has been called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia_inventory[i] = copie._materia_inventory[i];
}

MateriaSource  &MateriaSource::operator=(const MateriaSource & a)
{
    std::cout << "assignation has been called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_materia_inventory[i] = a._materia_inventory[i];
    }
    return (*this);
}

void        MateriaSource::learnMateria(AMateria *new_materia)
{
    if (new_materia == NULL)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia_inventory[i] == NULL)
        {
            std::cout << "Materia is learned" << std::endl;
            this->_materia_inventory[i] = new_materia;
            return ;
        }
    }
    delete new_materia;
    std::cout << "you can't learn more than 4 materia" << std::endl;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia_inventory[i] != NULL && this->_materia_inventory[i]->getType() == type)
            return (this->_materia_inventory[i]->clone());
    }
    std::cout << "The type is unknown" << std::endl;
    return (NULL);
}