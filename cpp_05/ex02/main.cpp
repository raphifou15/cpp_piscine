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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    // Bureaucrat  Lala("Lala", 0); // creer un segmantation fault car pas de try catch; 
/*
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
*/

    {
        Bureaucrat  Lala("Lala", 146);
        Bureaucrat  Lili("Lili", 40);
        ShrubberyCreationForm   Raphael("raph");    // 145, 137
        RobotomyRequestForm     form2("form2");     // 72, 45

        /*
            try
        {
            Form    Kokoa("kokoa", 0, 75);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        */
        /*
        Lala.signForm(Raphael);
        std::cout << Raphael << std::endl;
        Raphael.execute(Lili);
        Lili.signForm(Raphael);
        std::cout << Raphael << std::endl;
        Raphael.execute(Lili);
        Raphael.execute(Lili);
        Raphael.execute(Lili);*/
        Lili.signForm(Raphael);
        Lili.executeForm(Raphael);
        Lala.signForm(Raphael);
        Lala.executeForm(Raphael);

        Lili.signForm(form2);
        Lili.executeForm(form2);
    }

    {
        Bureaucrat min = Bureaucrat("min", 149);
	    Bureaucrat top = Bureaucrat("top", 1);
	    ShrubberyCreationForm shrub = ShrubberyCreationForm("France");
	    RobotomyRequestForm robot = RobotomyRequestForm("Belgique");
	    PresidentialPardonForm prez = PresidentialPardonForm("USA");
	
	    std::cout << "##### Shruberry ####" << std::endl << std::endl;
	    std::cout << shrub << std::endl;
	    shrub.execute(top);
	    top.signForm(shrub);
	    std::cout << shrub << std::endl;
	    shrub.execute(min);
	    shrub.execute(top);

	    std::cout << "\n\n##### Robotomy ####" << std::endl << std::endl;
	    std::cout << robot << std::endl;
	    robot.execute(top);
	    top.signForm(robot);
	    std::cout << robot << std::endl;
	    robot.execute(min);
	    robot.execute(top);
	
	    std::cout << "\n\n##### Prez ####" << std::endl << std::endl;
	    std::cout << prez << std::endl;
	    prez.execute(top);
	    top.signForm(prez);
	    std::cout << prez << std::endl;
	    prez.execute(min);
	    prez.execute(top);
	    min.executeForm(prez);
    }
    return (0);
}