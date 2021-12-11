/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:36:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 16:36:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
    public:
    //constructor destructor///////////////////
        Cat(void);
        Cat(const Cat &copie);
        Cat &operator=(const Cat &a);
        ~Cat(void);
    // function
        void        makeSound(void) const;
};

#endif
