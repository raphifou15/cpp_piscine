/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:05:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/27 11:06:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    /* data */
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void    setZombie(std::string);
        void    announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif