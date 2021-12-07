/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:53:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/02 09:53:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:
        int _value;
        static int  _value_static;
    public:
        Fixed(void);
        Fixed(const Fixed &copie);
        ~Fixed(void);
        Fixed   &operator=(const Fixed&a);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif