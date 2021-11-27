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
        std::cout << "\e[0;36m" << this->_firstName.substr(0, 9) << ".\e[0m|" << std::ends;
    else
    {
        while (size < 10)
        {
            std::cout << "\e[0;36m " << std::ends;
            size++;
        }
        std::cout << "\e[0;36m" << this->_firstName << "\e[0m|" << std::ends;
    }

    size = this->_LastName.length();
    if (size > 10)
        std::cout << "\e[0;36m" << this->_LastName.substr(0, 9) << ".\e[0m|" << std::ends;
    else
    {
        while (size < 10)
        {
            std::cout << "\e[0;36m " << std::ends;
            size++;
        }
        std::cout << "\e[0;36m" << this->_LastName << "\e[0m|" << std::ends;
    }

    size = this->_Nickname.length();
    if (size > 10)
        std::cout << "" << this->_Nickname.substr(0, 9) << ".\e[0m" << std::endl;
    else
    {
        while (size < 10)
        {
            std::cout << "\e[0;36m " << std::ends;
            size++;
        }
        std::cout << "\e[0;36m" << this->_Nickname << "\e[0m" << std::endl;
    }
    return ;
}

void    PhoneBook::getAll(int pos) const
{
    this->_instance[pos].getContactAll();
    return ;
}

void    Contact::getContactAll(void) const
{
    std::cout << "\e[1;33mfirst name: \e[0;36m" << this->_firstName << "\e[0m" << std::endl;
    std::cout << "\e[1;33mlast name: \e[0;36m" << this->_LastName << "\e[0m" << std::endl;
    std::cout << "\e[1;33mnickname: \e[0;36m" << this->_Nickname << "\e[0m" << std::endl;
    std::cout << "\e[1;33mphone number:  \e[0;36m" << this->_PhoneNumber << "\e[0m" << std::endl;
    std::cout << "\e[1;33mdarkest secret:  \e[0;36m" << this->_DarkestSecret << "\e[0m" << std::endl;
    return ;
}

int containOnlyNumber(std::string str)
{
    int size;

    size = str.length();
    for (int i = 0; size > i; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
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

    std::cout << "\e[1;33mfirst name: \e[0m" << std::ends;
    while (1)
    {
        std::getline(std::cin, str[0]);
        if (std::cin.eof() == 1)
            return  ;
        if (str[0] != "")
            break ;
        std::cout << "\e[1;33mfirst name: \e[0m" << std::ends;
    }

    std::cout << "\e[1;33mlast name: \e[0m" << std::ends;
    while (1)
    {
        std::getline(std::cin, str[1]);
        if (std::cin.eof() == 1)
            return  ;
        if (str[1] != "")
            break ;
        std::cout << "\e[1;33mlast name: \e[0m" << std::ends;
    }

    std::cout << "\e[1;33mnickname: \e[0m" << std::ends;
    while (1)
    {
        std::getline(std::cin, str[2]);
        if (std::cin.eof() == 1)
            return  ;
        if (str[2] != "")
            break ;
        std::cout << "\e[1;33mnickname: \e[0m" << std::ends;
    }

    std::cout << "\e[1;33mphone number: \e[0m" << std::ends;
    while (1)
    {
        std::getline(std::cin, str[3]);
        if (std::cin.eof() == 1)
            return  ;
        if (str[3] != "" && containOnlyNumber(str[3]) == 1)
            break ;
        std::cout << "\e[1;33mphone number: \e[0m" << std::ends;
    }

    std::cout << "\e[1;33mdarkest secret: \e[0m" << std::ends;
    while (1)
    {
        std::getline(std::cin, str[4]);
        if (std::cin.eof() == 1)
            return  ;
        if (str[4] != "")
            break ;
        std::cout << "\e[1;33mdarkest secret: \e[0m" << std::ends;
    }

    Book.setPhoneBookContact(next_contact, str);
    Book.setContactIndex(next_contact);
    return ;
}



void    display_list_contact(PhoneBook &Book)
{
    std::string str;
    int         number;

    for (int i = 0; i < 8; i++)
    {
        if (Book.getContact_index(i) == -1)
        {
            if (i == 0)
            {
                std::cout << "\e[0;31mLe phoneBook est vide \e[0m" << std::endl;
                return ;
            }
            break ;
        }
        std::cout << "\e[0;36m         " << Book.getContact_index(i) << "\e[0m|" << std::ends;
        Book.getPartial(i);
 
    }
    std::cout << "\e[0;32m\nChoisir l'index souhaité\e[0m" << std::endl;
    while (1)
    {
        std::getline(std::cin, str);
        if (std::cin.eof() == 1)
            return ;
        if (str[0] >= '0' && str[0] <= '7' && str[1] == '\0')
        {
            number = static_cast<int>(str[0] - 48);
            if (Book.getContact_index(number) != -1)
            {
                Book.getAll(number);
                return ;
            }
            else
                std::cout << "\e[0;31mbad index\e[0m" << std::endl;
        }
        else
            std::cout << "\e[0;31mbad index\e[0m" << std::endl;
    }
    return ;
}

int main(void)
{
    std::string commande;
    PhoneBook Book;

    while (1)
    {
        std::cout << "\e[0;32mécrire un des trois mots ci-dessous tout autre mot est exclut\e[0m" << std::endl;
        std::cout << "\e[0;32mADD \e[0m(ajouter un contact)" << std::endl;
        std::cout << "\e[0;32mSEARCH \e[0m(affiche la liste des contactes disponible)" << std::endl;
        std::cout << "\e[0;32mEXIT \e[0m(le programme se ferme)" << std::endl;

        std::getline(std::cin, commande);
        if (std::cin.eof() == 1)
            return (0);
        if (commande == "EXIT")
        {
            std::cout << "\e[1;36m Tu as bien quitter le programme.\e[0m" << std::endl;
            return (0);
        }
        else if (commande == "ADD")
        {
            add_contact(Book);
            if (std::cin.eof() == 1)
                return (0);
        }
        else if (commande == "SEARCH")
        {
            display_list_contact(Book);
            std::cout << "\n" << std::ends;
        }
        else
            std::cout << "\e[0;31mUtilise ADD SEARCH ou EXIT\e[0m" << std::endl;

    }
    return (0);
}