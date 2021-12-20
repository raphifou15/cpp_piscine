/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:16:11 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/20 18:16:13 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# include <iostream>

class   Form;

class Intern
{
    private:
        std::string    _tab_form[3];
    public:
        Intern(void);
        Intern(const Intern &copie);
        Intern  &operator=(const Intern & a);
        ~Intern(void);
        Form *makeForm(std::string form, std::string target);
};

#endif
