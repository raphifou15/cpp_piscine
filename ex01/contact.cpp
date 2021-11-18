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

Contact::Contact(void): _index(-1)
{
    std::cout << "Constructor called  " << this->_index << std::endl;
    return ;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}


int main(void)
{
    Contact instance[8];
    std::string commande;

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
        {
            std::cout << "lala" << std::endl;
        }
    }
    return (0);
}