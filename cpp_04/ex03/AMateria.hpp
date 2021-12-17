/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:46:11 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/13 18:46:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
class AMateria;
# include <iostream>
# include "Character.hpp"

class AMateria
{
    protected:
        std::string _type; //name in lowercase;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria &copie);
        AMateria    &operator=(const AMateria &a);
        virtual ~AMateria();
        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter& target);
};

#endif
