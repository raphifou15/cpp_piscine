/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:29:02 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/18 19:29:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ranges from 1 (highest possible) to 150 (lowest possible).
//  Any attempt to create a Bureaucrat with an invalid grade must throw an exception

//Il est possible d'utiliser noexcept pour le faire,
//et il est particulièrement recommandé de le faire pour certaines opérations comme les constructeurs par déplacement

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) noexcept : _name("no name"), _grade(150)
{
    std::cout << "Constructor Bureaucrat has been called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Constructor Bureaucrat has been called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copie) : _name(copie._name), _grade(copie._grade)
{
    std::cout << "Constructor by copie has been called" << std::endl;
    return ;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat & a)
{
    std::cout << "the name is const and can't be change but the grade has been changed" << std::endl;
    this->_grade = a._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Destructor Bureaucrat has been called" << std::endl;
}

const std::string   &Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void    Bureaucrat::increment(void)
{
    if (this->_grade == 1)
        throw   Bureaucrat::GradeTooHighException();
    this->_grade--;
    return ;
}

void    Bureaucrat::decrement(void)
{
    if (this->_grade == 150)
        throw   Bureaucrat::GradeTooLowException();
    this->_grade++;
    return ;
}

std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &i)
{
    ostream << i.getName() << ", Buraucrat grade " << i.getGrade() << std::ends;
    return (ostream);
}