/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 05:08:08 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/20 05:08:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm & a);
        RobotomyRequestForm &operator=(const RobotomyRequestForm & a);
        virtual ~RobotomyRequestForm(void);
        void    execute(Bureaucrat const & executor) const;
};

#endif