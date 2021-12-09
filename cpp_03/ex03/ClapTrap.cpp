/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:52:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/08 11:52:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructeur et destructeur doit decrire quelque chose

ClapTrap::ClapTrap(void): _Name("lala"), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "Le constructeur ClapTrap a ete appeler" << std::endl;
    //std::cout << "Name " << this->_Name << std::endl;
    //std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    //std::cout << "Energy points " << this->_Energy_points << std::endl;
    //std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _Hitpoints(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "Le constructeur ClapTrap a ete appeler" << std::endl;
    //std::cout << "Name " << this->_Name << std::endl;
    //std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    //std::cout << "Energy points " << this->_Energy_points << std::endl;
    //std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &copie):_Name(copie._Name), _Hitpoints(copie._Hitpoints), _Energy_points(copie._Energy_points), _Attack_damage(copie._Attack_damage)
{
    // copie de clapptrap construite;
    std::cout << "Le constructeur par copie ClapTrap appeler" << std::endl;
    //std::cout << "Name " << this->_Name << std::endl;
    //std::cout << "Hitpoints " << this->_Hitpoints << std::endl;
    //std::cout << "Energy points " << this->_Energy_points << std::endl;
    //std::cout << "Attack damage " << this->_Attack_damage << std::endl;
    return ;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap&a)
{
    this->_Name = a._Name;
    this->_Hitpoints = a._Hitpoints;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Le destructeur ClapTrap a ete appeler" << std::endl;
    return ;
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout<< "ClapTrap: " << this->_Name << " attaque " << target << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap: " << this->_Name << " a pris " << amount << " de domage:: votre vie a baisser" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap: " << this->_Name << " va avoir " << amount << " de reparation:: votre vie a monter" << std::endl;
    return ;
}