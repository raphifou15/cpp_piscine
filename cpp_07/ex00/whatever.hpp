/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:42:39 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/23 15:42:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template<typename T>
void swap (T &a , T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
const T & min (T &a, T &b)
{
    return a < b ? (a) : (b);
}

template<typename T>
const T & max (T &a, T &b)
{
    return a > b ? (a) : (b);
}

# endif
