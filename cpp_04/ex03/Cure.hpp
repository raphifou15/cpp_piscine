/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:10:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/14 16:11:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        Cure(const Cure & copie);
        Cure &operator=(const Cure &a);
        virtual ~Cure(void);
        AMateria*   clone(void) const;
        void        use(ICharacter & target);
};

#endif
