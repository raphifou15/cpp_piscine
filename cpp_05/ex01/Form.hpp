/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:26:58 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/19 16:27:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _grade_to_sign;
        const int           _grade_to_exec;
    public:
        Form(void) noexcept;
        Form(std::string name, int grade_s, int grade_e);
        Form(const Form &copie);
        Form    &operator=(const Form &a);
        ~Form(void);
        std::string     getName(void) const;
        bool            getSign(void) const;
        int             getGradeSign(void) const;
        int             getGradeExec(void) const;
        void            beSigned(const Bureaucrat &i);
    class   GradeTooHighException : public std::exception
    {
        public:
            virtual const char * what() const throw()
            {
                return ("Too Hight Form");
            }
    };
    class   GradeTooLowException : public std::exception
    {
        public:
            virtual const char * what() const throw()
            {
                return ("Too Low Form");
            }
    };
};

std::ostream    &operator<<(std::ostream &ostream, const Form &i);
#endif
