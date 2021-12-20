/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:34:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/19 20:34:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("no_name")
{
    std::cout << "constructor ShrubberyCreationForm has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "constructor ShrubberyCreationForm has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copie) : Form(copie), _target(copie._target)
{
    std::cout << "constructor by copie ShrubberyCreationForm has been called" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & a)
{
    Form::operator=(a);
    std::cout << "Assignation ShrubberyCreationForm" << std::endl;
    this->_target = a._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Destructor ShrubberyCreationForm has been called" << std::endl;
}


/*
Je ne trouve pas d'utiliter de faire un try catch ici qui est couteu en ressource sachant que souvant
les Forms ne seront pas signee car de base ils ne le sont pas. pour montrer que je sais le faire je l'ai mis en commentaire
try
{
    if (this->getSign() == 0)
        throw std::exception();
}
catch(const std::exception& e)
{
    std::cerr << "the Form " << this->getName() <<" is not sign" << std::endl;
    return ;
}
*/

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
        std::string lala = this->_target + "_shrubbery";
        std::fstream    f(lala.c_str(), std::ios_base::out);
        
        f << "    0    " << "       " << "    0    " << std::endl;
        f << "   000   " << "       " << "   000   " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << "   000   " << "       " << "   000   " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << " 0000000 " << "       " << " 0000000 " << std::endl;
        f << "  00000  " << "       " << "  00000  " << std::endl;
        f << " 0000000 " << "       " << " 0000000 " << std::endl;
        f << "000000000" << "       " << "000000000" << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "   |||   " << "       " << "   |||   " << std::endl;
        f << "█████████████████████████████████████" << std::endl;
        f << "█████████████████████████████████████" << std::endl;
        std::cout << "The form has been execute well" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

