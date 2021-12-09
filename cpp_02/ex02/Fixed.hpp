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
        bool    operator>(const Fixed&i) const;
        bool    operator<(const Fixed&i) const;
        bool    operator>=(const Fixed&i) const;
        bool    operator<=(const Fixed&i) const;
        bool    operator==(const Fixed&i) const;
        bool    operator!=(const Fixed&i) const;
        Fixed   operator+(const Fixed&i) const;
        Fixed   operator-(const Fixed&i) const;
        Fixed   operator*(const Fixed&i) const;
        Fixed   operator/(const Fixed&i) const;
        Fixed&  operator++(void);    // prefix ++
        Fixed   operator++(int); // postfix ++ via parametre bidon
        Fixed&  operator--(void);
        Fixed   operator--(int);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        // CONV
        float   toFloat(void) const;
        int     toInt(void) const;

        // FUNC 
        static Fixed    &min(Fixed &a, Fixed &b);
        static Fixed    &max(Fixed &a, Fixed &b);
        static const Fixed  &min(const Fixed &a, const Fixed &b);
        static const Fixed  &max(const Fixed &a, const Fixed &b);
};
std::ostream&   operator<<(std::ostream & ostream, Fixed const &i);
#endif