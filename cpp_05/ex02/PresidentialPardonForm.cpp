/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:44:26 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/20 16:44:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("no_name")
{
    std::cout << "constructor PresidentialPardonForm has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "constructor PresidentialPardonForm has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copie) : Form(copie), _target(copie._target)
{
    std::cout << "constructor by copie PresidentialPardonForm has been called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & a)
{
    Form::operator=(a);
    std::cout << "PresidentialPardonForm" << std::endl;
    this->_target = a._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Destructor PresidentialPardonForm has been called" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
        std::cout << this->_target << " a été pardonnée par Zafod Beeblebrox" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
