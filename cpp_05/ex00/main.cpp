/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:28:23 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/18 19:28:26 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    // Bureaucrat  Lala("Lala", 0); // creer un segmantation fault car pas de try catch; 

    try
    {
        Bureaucrat  Lala("Lala", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  Lala("Lala", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Bureaucrat  Raphael("raphael", 150);
    Bureaucrat  Jeremy("jeremy", 1);
    std::cout << Raphael << std::endl;
    std::cout << Jeremy << std::endl;
    try
    {
        Raphael.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << Raphael << std::endl;
    try
    {
        Jeremy.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << Jeremy << std::endl;

    Bureaucrat  Ilan;
    
    std::cout << Ilan << std::endl;
    try
    {
        Ilan.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << Ilan << std::endl;

    return (0);
}