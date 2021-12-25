/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 03:33:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/24 03:33:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>

template <typename T>
class Array
{
    public:
        Array(void): _tab(NULL), _len(0){}
        Array(unsigned int n) : _tab(new T[n]), _len(n){}
        Array(const Array & copie) : _tab(new T[copie._len]), _len(copie._len){}
        Array   &operator=(const Array & a)
        {
            delete [] this->_tab;
            this->_tab = new T[a._len];
            this->_len = a._len;
            for (unsigned int i = 0 ; i < this->_len; i++)
                this->_tab[i] = a._tab[i];
            return (*this);
        }
        ~Array(void) {delete [] this->_tab;}

        class   NotAssignable : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return ("this value is not assignable");
                }
        };

        T   &operator[] (unsigned int i)
        {
            if (i >= this->_len)
                throw Array::NotAssignable();
            return (this->_tab[i]);
        }
        unsigned int    size(void) const
        {
            return (this->_len);
        }
    private:
        T*  _tab;
        unsigned int _len;
};

#endif