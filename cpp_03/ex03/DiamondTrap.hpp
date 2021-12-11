/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:34:18 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/09 16:34:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string _Name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&copie);
        DiamondTrap &operator=(const DiamondTrap&a);
        ~DiamondTrap();
        void        attack(std::string const &target);
        void        whoAmI(void) const;
};

#endif
