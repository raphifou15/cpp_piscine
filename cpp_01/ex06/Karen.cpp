/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:55:02 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/30 15:55:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){return ;}
Karen::~Karen(void){return ;}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it" << std::endl;
    return ;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    return ;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
    return ;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}
//void	(Karen::* ptr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
void    Karen::complain(std::string name)
{
    int j;
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Karen::*f[4])(void);
    f[0] = &Karen::debug;
    f[1] = &Karen::info;
    f[2] = &Karen::warning;
    f[3] = &Karen::error;
    for (int i = 0; i < 4; i++)
    {
        if (tab[i] == name)
        {
            j = i;
            break ;
        }
        if (i == 3)
            j = 4;
    }
    
    switch (j)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*f[0])();
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*f[1])();
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*f[2])();
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*f[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
        return ;
}