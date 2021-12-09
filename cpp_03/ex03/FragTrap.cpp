/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:49:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/09 11:49:13 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << "Le constructeur FragTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << "Le constructeur FragTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &copie)
{
    this->_Name = copie._Name;
    this->_Hitpoints = copie._Hitpoints;
    this->_Energy_points = copie._Energy_points;
    this->_Attack_damage = copie._Attack_damage;
    std::cout << "Le constructeur FragTrap par copie a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

FragTrap    &FragTrap::operator=(const FragTrap&a) 
{
    this->_Name = a._Name;
    this->_Hitpoints = a._Hitpoints;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "destructeur de FragTrap" << std::endl;
}

void    FragTrap::attack(std::string const &target)
{
     std::cout <<"FragTrap " << this->_Name << " attaque " << target << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "high-five we won the game" << std::endl;
}