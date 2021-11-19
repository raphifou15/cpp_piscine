/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 04:12:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/18 04:12:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

Contact::Contact(void) : _index(-1)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

int Contact::getIndex(void) const
{
    return (this->_index);
}

int PhoneBook::getContact_index(int pos) const
{
    return (this->_instance[pos].getIndex());
}

void    PhoneBook::setContactIndex(int pos)
{
    this->_instance[pos].setIndex(pos);
    return ;
}

void    Contact::setIndex(int pos)
{
    this->_index = pos;
    return ;
}

void    PhoneBook::setPhoneBookContact(int pos, std::string *str)
{
    this->_instance[pos].setContact(str);
}

void   Contact::setContact(std::string *str)
{
    this->_firstName = str[0];
    this->_LastName = str[1];
    this->_Nickname = str[2];
    this->_PhoneNumber = str[3];
    this->_DarkestSecret = str[4];

}

void PhoneBook::getPartial(int pos) const
{
    this->_instance[pos].getContactPartial();
    return ;
}

void    Contact::getContactPartial(void) const
{
    int size;

    size = this->_firstName.length();
    if (size > 10)
        std::cout << this->_firstName.substr(0, 9) << ".|" << std::ends;
    else
    {
        while (size < 10)
        {
            std::cout << " " << std::ends;
            size++;
        }
        std::cout << this->_firstName << "|" << std::ends;
    }

    size = this->_LastName.length();
    if (size > 10)
        std::cout << this->_LastName.substr(0, 9) << ".|" << std::ends;
    else
    {
        while (size < 10)
        {
            std::cout << " " << std::ends;
            size++;
        }
        std::cout << this->_LastName << "|" << std::ends;
    }

    size = this->_Nickname.length();
    if (size > 10)
        std::cout << this->_Nickname.substr(0, 9) << "." << std::endl;
    else
    {
        while (size < 10)
        {
            std::cout << " " << std::ends;
            size++;
        }
        std::cout << this->_Nickname << std::endl;
    }
    return ;
}

void add_contact(PhoneBook &Book)
{
    int next_contact;

    std::string str[5];

    for (int i = 0; i < 8; i++)
    {
        next_contact = i;
        if (Book.getContact_index(i) == -1)
            break ;
        if (i == 7)
        {
            std::cout << "\e[15;31mvous ne pouvez plus ajouter de contact\e[0m" << std::endl;
            return ;
        }
    }
    std::cout << "first name: " << std::ends;
    std::getline(std::cin, str[0]);
    std::cout << "last name: " << std::ends;
    std::getline(std::cin, str[1]);
    std::cout << "nickname: " << std::ends;
    std::getline(std::cin, str[2]);
    std::cout << "phone number: " << std::ends;
    std::getline(std::cin, str[3]);
    std::cout << "darkest secret: " << std::ends;
    std::getline(std::cin, str[4]);

    Book.setPhoneBookContact(next_contact, str);
    Book.setContactIndex(next_contact);
    return ;
}

void    display_list_contact(PhoneBook &Book)
{
    for (int i = 0; i < 8; i++)
    {
        if (Book.getContact_index(i) == -1)
            break ;
        std::cout << "         " << Book.getContact_index(i) << "|" << std::ends;
        Book.getPartial(i);
    }
    return ;
}

int main(void)
{
    std::string commande;
    PhoneBook Book;

    while (1)
    {
        std::cout << "ecrire un des trois mots ci-dessous tout autre mot est exclut" << std::endl;
        std::cout << "ADD (ajouter un contact)" << std::endl;
        std::cout << "SEARCH (affiche la liste des contactes disponible)" << std::endl;
        std::cout << "EXIT (le programme se ferme)" << std::endl;

        std::getline(std::cin, commande);
        if (std::cin.eof() == 1)
            return (0);
        if (commande == "EXIT")
        {
            std::cout << "\e[1;36m Tu as bien quitter le programme.\e[0m" << std::endl;
            return (0);
        }
        if (commande == "ADD")
            add_contact(Book);
        if (commande == "SEARCH")
        {
            display_list_contact(Book);
        }
    }
    return (0);
}