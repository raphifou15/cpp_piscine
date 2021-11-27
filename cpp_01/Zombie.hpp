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

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    /* data */
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);