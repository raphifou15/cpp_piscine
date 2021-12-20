/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:26:45 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/19 16:26:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("no_name"), _signed(0), _grade_to_sign(75), _grade_to_exec(75)
{
    std::cout << "Constructor Form has been called" << std::endl;
    return ;
}

Form::Form(std::string name, int grade_s, int grade_e) : _name(name), _signed(0), _grade_to_sign(grade_s), _grade_to_exec(grade_e)
{
    if (this->_grade_to_exec > 150  || this->_grade_to_sign > 150)
        throw Form::GradeTooLowException();
    if (this->_grade_to_exec < 1 || this->_grade_to_sign < 1)
        throw Form::GradeTooHighException();
    std::cout << "Constructor Form has been called" << std::endl;
}

Form::Form(const Form &copie) : _name(copie._name), _signed(copie._signed), _grade_to_sign(copie._grade_to_sign), _grade_to_exec(copie._grade_to_exec) 
{
    std::cout << "Constructor Form by copie has been called" << std::endl;
    return ;
}

Form    &Form::operator=(const Form &a) 
{
    std::cout << "only the signed will be changed because fonction else are const" << std::endl;
    this->_signed = a._signed;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Destructor Form has been called" << std::endl;
}

std::string Form::getName(void) const { return (this->_name);}
bool        Form::getSign(void) const { return (this->_signed);}
int         Form::getGradeSign(void) const { return (this->_grade_to_sign);}
int         Form::getGradeExec(void) const { return (this->_grade_to_exec);}


void    Form::beSigned(const Bureaucrat &i)
{
    try
    {
        if (i.getGrade() > this->getGradeSign())
            throw   Form::GradeTooLowException(); // lever une exception
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    this->_signed = 1;
}

std::ostream    &operator<<(std::ostream &ostream, const Form &i)
{
    ostream << "name of form: " << i.getName() << " signed: " << i.getSign() << " grade_to_signed " << i.getGradeSign() << " grade_to_exec " << i.getGradeExec() << std::ends;
    return (ostream);
}