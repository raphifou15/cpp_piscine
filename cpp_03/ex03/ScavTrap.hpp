/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:17:10 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/08 14:17:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

# define SCAVTRAP_HP 100
# define SCAVTRAP_EP 50
# define SCAVTRAP_AD 20
//the constructor, destructor, and attack have to use different outputs
// When you build a ScavTrap, you must start by building a ClapTrap... Destruction is in reverse order

class ScavTrap :virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copie);
        ScavTrap    &operator=(const ScavTrap&a);
        ~ScavTrap(void);
        void    attack(std::string const &target);
        void    guardGate(void) const;
        //this function will display a message on the standard outputs to anounce that ScavTrap have enterred in Gate keeper mode
};

#endif
