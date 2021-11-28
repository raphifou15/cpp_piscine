/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:59:01 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 13:59:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){return ;}
Weapon::Weapon(std::string name) : _weapon_type(name){return ;}
Weapon::~Weapon(void){return ;}

std::string const &Weapon::getType(void) const
{
    return (this->_weapon_type);
}

void    Weapon::setType(std::string const &type)
{
    this->_weapon_type = type;
}