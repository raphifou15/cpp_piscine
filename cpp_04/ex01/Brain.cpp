/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:15:04 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 18:15:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "constructor of brain has been called" << std::endl;
    return ;
}

Brain::Brain(const Brain &copie)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copie._ideas[i];
        std::cout << i << " deep copies" << std::endl;
    }
    std::cout << "constructor of brain by copie has been called" << std::endl;
    return ;
}

Brain   &Brain::operator=(const Brain &a)
{
    std::cout << "constructor of brain by assignation has been called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = a._ideas[i];
        std::cout << i << "deep copies" << std::endl;
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "destructor of brain has been called" << std::endl;
    return ;
}