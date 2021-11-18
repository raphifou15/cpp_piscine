/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 05:05:45 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/18 05:05:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);

    void    contact();

    private:
        int _index;
        std::string	_first_name;
};

# endif