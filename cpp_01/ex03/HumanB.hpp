/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:48:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 15:48:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class   HumanB
{
    private:
        HumanB(void);
        std::string _name;
        Weapon  *_arme;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &arme);
        void    attack(void);
};

#endif
