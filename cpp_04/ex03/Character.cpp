/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:23:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/14 18:23:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(void) : _name("unknown")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Constructor of Charactere has been called" << std::endl;
    return ;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        //std::cout << (long)(this->_inventory[i]) << std::endl;
        if (this->_inventory[i] != NULL)
        {
            std::cout << "delete" << std::endl;
            long address = (long)(this->_inventory[i]);
            delete this->_inventory[i];
            for (int j = 0; j < 4; j++)
            {
                if ((long)(this->_inventory[j]) == address)
                    this->_inventory[j] = NULL;
            }
        }   
    }
    std::cout << "Destructor of Charactere has been called" << std::endl;
    return ;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    std::cout << "Constructor of Charactere has been called" << std::endl;
    return ;
}

Character::Character(const Character & copie) : _name(copie._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
            this->_inventory[i] = copie._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    std::cout << "Constructor of Charactere By copie has been called" << std::endl;
    return ;
}

Character   &Character::operator=(const Character & a)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
            this->_inventory[i] = a._inventory[i]->clone();
        }
        else
            this->_inventory[i] = NULL;

    }
    return (*this);
}


std::string const & Character::getName(void) const
{
    return (this->_name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Amateria has been had" << std::endl;
            return ;
        }
    }
    std::cout << "No Amateria has been had: the inventary is fool" << std::endl;
}

 void   Character::unequip(int idx)
 {
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
        std::cout << "the AMateria has been removed" << std::endl;
        return ;
    }
    std::cout << "The inventory has only 4 places from 0 to 3" << std::endl;
    return ;
 }

 void   Character::use(int idx, ICharacter& target)
 {
     if (idx < 0 || idx > 3)
    {
        std::cout << "The inventory have only four places for amateria from 0 to 3" << std::endl;
        return ;
    }
    if (this->_inventory[idx] != NULL)
    {
        this->_inventory[idx]->use(target);
    }
 }