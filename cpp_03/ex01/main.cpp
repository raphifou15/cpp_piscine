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

#include "ScavTrap.hpp"

//faire un main qui decrit bien se qu'il se passe.
int main(void)
{
    ClapTrap Anita("Anita");
    ScavTrap Lala;
    ScavTrap Raphael("raphael");
    Raphael = Lala;
    ScavTrap Lolo(Raphael);
    Raphael.guardGate();
    Raphael.beRepaired(145);
    Raphael.attack("koko");
    Anita.attack("koko");
    //Anita.guardGate(); cela ne doit pas compiler car la fonction guardgate est dans ScavTrap
    return (0);
}