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

#include "DiamondTrap.hpp"

//faire un main qui decrit bien se qu'il se passe.
int main(void)
{
    DiamondTrap Raphael("raphael");
    Raphael.attack("Daniel");
    Raphael.whoAmI();
    return (0);
}