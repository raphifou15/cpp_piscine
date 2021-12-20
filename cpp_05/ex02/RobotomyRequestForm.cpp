/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 05:07:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/20 05:07:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("no_name")
{
    std::cout << "constructor RobotomyRequestForm has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "constructor RobotomyRequestForm has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copie) : Form(copie), _target(copie._target)
{
    std::cout << "constructor by copie RobotomyRequestForm has been called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & a)
{
    Form::operator=(a);
    std::cout << "RobotomyRequestForm" << std::endl;
    this->_target = a._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Destructor RobotomyRequestForm has been called" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0)
    {
        std::cerr << "the Form " << this->getName() <<" is not sign" << std::endl;
        return ;
    }
    try
    {
        if (this->getGradeExec() < executor.getGrade())
            throw   Form::GradeTooLowException();
        std::cout << "Sound of the the drill" << std::endl;
        srand(time(NULL)); // initialise sur le temp actuel;
        if ((rand() % 2) == 0)
            std::cout << this->_target <<  "a bien été robotomizée" << std::endl;
        else
            std::cout << this->_target <<  "n'a pas été robotomizée" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}