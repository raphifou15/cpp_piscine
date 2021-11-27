/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:05:35 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/27 11:05:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){ return ;}

Zombie::~Zombie(void)
{
    std::cout << "<" << this->_name << ">" << " c'est finnit pour moi!" << std::endl;
    return ;
}

void    Zombie::announce(void) const 
{
    std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}