/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:04:22 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 17:04:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

/*
    makesound n'est pas en virtuel du coup cette fonction sera static et non dynamique;
*/

class   WrongAnimal
{
    public:
        ///////constructor destructor/////////////////
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copie);
        WrongAnimal  &operator=(const WrongAnimal &a);
        virtual ~WrongAnimal(void);
        /////////////////////////////////////////////
        //function///////
        void    makeSound(void) const;
        std::string     getType(void) const;
        //////////////////
    protected:
        std::string _type;
};

#endif