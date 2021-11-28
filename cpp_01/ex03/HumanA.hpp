/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:06:15 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 15:06:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon  &_arme; // ne peut etre a NULL (jamais); reference
    public:
        HumanA(std::string name, Weapon &arme);
        ~HumanA(void);
        void    attack(void);
};

#endif
