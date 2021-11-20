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

        int     getIndex(void) const;
        void    setIndex(int pos);
        void    setContact(std::string *str);
        void    getContactPartial(void) const;
        void    getContactAll(void) const;
        
    private:
        int             _index;
        std::string     _firstName;
        std::string     _LastName;
        std::string     _Nickname;
        std::string     _PhoneNumber;
        std::string     _DarkestSecret;
};

class PhoneBook
{
    public:

        PhoneBook(void);
        ~PhoneBook(void);
        int     getContact_index(int pos) const;
        void    getPartial(int pos) const;
        void    getAll(int pos) const;
        void    setContactIndex(int pos);
        void    setPhoneBookContact(int pos, std::string *str);

    private:
        Contact _instance[8];
};



# endif