/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:44:35 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 15:44:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain*  _brain;
    public:
    //constructor destructor //////////////////
        Dog(void);
        Dog(const Dog &copie);
        Dog &operator=(const Dog &a);
        virtual ~Dog(void);
    /////////////////////////////////////
    ///function///
        void        makeSound(void) const;
};

#endif