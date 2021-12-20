/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:15:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/20 18:15:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    this->_tab_form[0] = "shrubbery request";
    this->_tab_form[1] = "robotomy request";
    this->_tab_form[2] = "presidentialpardon request";

    std::cout << "constructor of Intern has been called" << std::endl;
    return ;
}
Intern::Intern(const Intern & copie)
{
    this->_tab_form[0] = copie._tab_form[0];
    this->_tab_form[1] = copie._tab_form[1];
    this->_tab_form[2] = copie._tab_form[2];
    std::cout << "constructor of Intern has been called";
     return ;
}
Intern  &Intern::operator=(const Intern & a)
{
    this->_tab_form[0] = a._tab_form[0];
    this->_tab_form[1] = a._tab_form[1];
    this->_tab_form[2] = a._tab_form[2];
    std::cout << "assignation of Intern has been called";
    return (*this);
}
Intern::~Intern(void){std::cout << "Destructor of Intern has been called" << std::endl; return ;}

Form    *Intern::makeForm(std::string form, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if(this->_tab_form[i] == form)
        {
            switch (i)
            {
                case 0:
                    return (new ShrubberyCreationForm(target));
                case 1:
                    return (new RobotomyRequestForm(target));
                case 2:
                    return (new PresidentialPardonForm(target));
                default:
                    std::cerr << "Something bad happend" << std::endl;
                break;
            }
        }
    }
    std::cerr << "Cannot create a form of type " << form << std::endl;
    return (NULL);
}