/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 23:04:30 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/23 23:04:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    lala (T & a)
{
    std::cout << a << std::endl;
}

template<typename T>
void    iter (T *adress, const unsigned int len, void f(T & elem))
{
    for (unsigned int i = 0; i < len; i++)
        f(adress[i]);
}

#endif

/*
    std::cout << adress << " " << len << std::endl;
    std::cout << "//////////////////" << std::endl;
*/