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

#include "FragTrap.hpp"

//faire un main qui decrit bien se qu'il se passe.
int main(void)
{
    FragTrap    Raphael("raphael");
    FragTrap    Jeremy("jeremy");
    Jeremy = Raphael;
    FragTrap    Ilan(Jeremy);
    Ilan.highFivesGuys();
    Ilan.attack("Lala");
    Ilan.beRepaired(45);
    Ilan.takeDamage(85);
    return (0);
}