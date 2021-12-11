/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:13:59 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 17:14:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "WrongAnimal.hpp"

class  WrongCat: public WrongAnimal
{
    public:
    //constructor destructor///////////////////
        WrongCat(void);
        WrongCat(const WrongCat &copie);
        WrongCat &operator=(const WrongCat &a);
        ~WrongCat(void);
    // function
        void        makeSound(void) const;
};

#endif
