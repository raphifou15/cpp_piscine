/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:49:01 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/13 16:49:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    {
        //AMateria *Raphael;
        //AMateria *Raphael = new AMateria(); impossible to impement;
    }
    
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    
   
   {
        IMateriaSource   *src = new MateriaSource;
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        delete src;
   }
    return (0);
}
