/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:05:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 15:05:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//une refence ne peu pas pointer sur null donc obliger de le faire dans le constructor;

HumanA::HumanA(std::string name, Weapon &arme) : _name(name), _arme(arme) {return ;}

HumanA::~HumanA(void){return ;}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_arme.getType() << std::endl;
    return ;
}