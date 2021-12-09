/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:33:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/09 16:33:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("lala_clap_name")
{
    std::cout << "constructeur de DiamondTrap est appeler" << std::endl;
    this->_Name = "lala";
    this->_Hitpoints = FRAGTRAP_HP;
    this->_Energy_points = SCAVTRAP_EP;
    this->_Attack_damage = FRAGTRAP_AD;
    std::cout << "Le constructeur DiamondTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "constructeur de DiamondTrap est appeler" << std::endl;
    this->_Name = name;
    this->_Hitpoints = FRAGTRAP_HP;
    this->_Energy_points = SCAVTRAP_EP;
    this->_Attack_damage = FRAGTRAP_AD;
    std::cout << "Le constructeur DiamondTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap&copie)
{
    std::cout << "constructeur de DiamondTrap par copie est appeler" << std::endl;
    this->_Name = copie._Name;
    this->_Hitpoints = copie._Hitpoints;
    this->_Energy_points = copie._Energy_points;
    this->_Attack_damage = copie._Attack_damage;
    std::cout << "Le constructeur DiamondTrap a ete appeler" << std::endl;
    std::cout << "Name " << this->_Name << std::endl;
    std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    std::cout << "Energy points " << this->_Energy_points << std::endl;
    std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap&a)
{
    this->_Name = a._Name;
    this->_Hitpoints = a._Hitpoints;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}

void        DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
    return;
}
DiamondTrap::~DiamondTrap(void)  
{
    std::cout << "destructeur de DiamondTrap est appeler" << std::endl;
    return ;
}

void        DiamondTrap::whoAmI(void) const
{
    std::cout << "Le nom de DiamondTrap est " << this->_Name << " et le nom de clapTrap est " << ClapTrap::_Name << std::endl;
    return ;
}