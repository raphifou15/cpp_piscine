/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:52:59 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/08 11:53:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//faire un main qui decrit bien se qu'il se passe.
int main(void)
{
    ClapTrap    Raphael("raphael");
    ClapTrap    Raphael2(Raphael);
    ClapTrap    Lolo("lolo");
    Lolo = Raphael;
    ClapTrap    Lala(Lolo);
    Raphael.attack("anton");
    Raphael.takeDamage(45);
    Raphael.beRepaired(26);
    return (0);
}