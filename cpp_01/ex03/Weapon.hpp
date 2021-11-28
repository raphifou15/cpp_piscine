/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:58:38 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 13:58:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    private:
        Weapon(void);
        std::string _weapon_type;
    public:
        Weapon(std::string);
        ~Weapon(void);
        std::string const &getType(void) const;
        void        setType(std::string const &type);
};

#endif