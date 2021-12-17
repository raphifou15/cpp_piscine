/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:22:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/13 22:22:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(const Ice & copie);
        Ice &operator=(const Ice &a);
        virtual ~Ice(void);
        AMateria*  clone(void) const;
        void      use(ICharacter& target);
};

#endif
