/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:49:32 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/09 11:49:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

# define FRAGTRAP_HP 100
# define FRAGTRAP_EP 100
# define FRAGTRAP_AD 30

//The FragTrap class will have its construction and destruction messages

class   FragTrap:virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap&copie);
        FragTrap    &operator=(const FragTrap&a);
        ~FragTrap(void);
        void    attack(std::string const &target); // pour montrer que la fonction herite bien de toutes les methodes public, mais qu'on peut reecrire la methode.
        void    highFivesGuys(void) const;
};

# endif