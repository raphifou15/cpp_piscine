/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 19:36:41 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/12 19:36:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    for( int i = 0; i < 100; i++)
    {
        this->_ideas[i] = "oh i have an idea";
    }
    std::cout << "Constructor Brain has been called" << std::endl;
}
Brain::~Brain(void)
{
    std::cout << "Destructor Brain has been called" << std::endl;
}

Brain::Brain(const Brain &copie)
{
    for( int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copie._ideas[i];
    }
    std::cout << "Constructor by copie Brain has been called" << std::endl;
}

Brain   &Brain::operator=(const Brain &a)
{
    for( int i = 0; i < 100; i++)
    {
        this->_ideas[i] = a._ideas[i];
    }
    std::cout << "Constructor by assignation Brain has been called" << std::endl;
    return (*this);
}
