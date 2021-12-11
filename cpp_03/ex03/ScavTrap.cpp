/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:16:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/08 14:16:46 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << "Le constructeur ScavTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << "Le constructeur ScavTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap &copie): ClapTrap(copie)
{
    std::cout << "Le constructeur ScavTrap par copie a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap&a)
{
    ClapTrap::operator=(a);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "destructeur de ScavTrap" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout <<"ScavTrapp " << this->_Name << " attaque " << target << std::endl;
}

void    ScavTrap::guardGate(void) const
{
    std::cout << " ScavTrap have enterred in Gate keeper mode." << std::endl;
}