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
# include <cmath>

class Fixed
{
    private:
        int _value;
        static const int  _value_static = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &copie);
        Fixed(const int);
        Fixed(const float);
        ~Fixed(void);
        Fixed   &operator=(const Fixed&a);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};
std::ostream & operator<<(std::ostream & ostream, Fixed const &i);
#endif