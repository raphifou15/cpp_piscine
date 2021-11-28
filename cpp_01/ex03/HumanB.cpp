/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:48:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 15:48:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {return ;}
HumanB::~HumanB(void) {return ;}
HumanB::HumanB(std::string name) : _name(name)
{
    this->_arme = NULL;
    return ;
}
void    HumanB::setWeapon(Weapon &arme) //reference envoyer et je prend l'addresse de la reference
{
    this->_arme = &arme;
    return ;
}

void    HumanB::attack(void)
{
    if (this->_arme == NULL)
        return ;
    std::string lala = this->_arme->getType();
    std::cout << this->_name << " attacks with his " << lala << std::endl;
    return ;
}