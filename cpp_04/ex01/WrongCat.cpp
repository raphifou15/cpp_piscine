/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:13:48 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 17:13:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(void){ std::cout << "constructor of WrongCat has been called" << std::endl; this->_type = "WrongCat"; return ;}
WrongCat::~WrongCat(void){ std::cout << "destructor of WrongCat has been called" << std::endl; return ;}
WrongCat::WrongCat(const WrongCat &copie)
{
    this->_type = copie._type;
    std::cout << "constructor by copie of WrongCat has been called" << std::endl;
    return ;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
    std::cout << "constructor WrongCat by assignation has been called" << std::endl;
    this->_type = a._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Miaouch Miaouch" << std::endl;
    return;
}