/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:36:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/27 18:37:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Raphael = zombieHorde(10, "raphael");
    for (int i = 0; i < 10; i++)
        Raphael[i].announce();
    delete [] Raphael;
    return (0);
}
