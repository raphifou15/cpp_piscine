/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:52:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/08 11:52:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string);
        ClapTrap(const ClapTrap &copie);
        ClapTrap    &operator=(const ClapTrap&a);
        ~ClapTrap(void);
        void    attack(std::string const &target); //decrire se qu'il se passe
        void    takeDamage(unsigned int amount); //decrire se qu'il se passe
        void    beRepaired(unsigned int amount); //decrire se qu'il se passe
    protected:
        std::string _Name;
        int         _Hitpoints;
        int         _Energy_points;
        int         _Attack_damage;
};

#endif