/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:29:30 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/15 16:29:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_materia_inventory[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &copie);
        MateriaSource &operator=(const MateriaSource & a);
        virtual ~MateriaSource(void);

        void        learnMateria(AMateria*);
        AMateria*   createMateria(std::string const & type);
};

#endif
