/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:53:10 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/27 10:53:14 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie  Raphael("raphael");
    Raphael.announce();
    Zombie*  Anita = newZombie("anita");
    delete Anita;
    randomChump("ilan");
    return (0);
}