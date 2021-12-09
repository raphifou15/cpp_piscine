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

//the constructor, destructor, and attack have to use different outputs
// When you build a ScavTrap, you must start by building a ClapTrap... Destruction is in reverse order

class ScavTrap : public ClapTrap
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
