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

int main(void)
{
    std::string commande;
    while (1)
    {
        std::cout << "ecrire un des trois mots ci-dessous tout autre mot est exclut" << std::endl;
        std::cout << "ADD (ajouter un contact)" << std::endl;
        std::cout << "SEARCH (affiche la liste des contactes disponible)" << std::endl;
        std::cout << "EXIT (le programme se ferme)" << std::endl;
        std::cin >> commande;

        if (strcmp(commande.c_str(), "ADD") == 0)
            std::cout << "entrer dans ADD" << std::endl;
        else if (strcmp(commande.c_str(), "SEARCH") == 0)
            std::cout << "entrer dans SEARCH" << std::endl;
        else if (strcmp(commande.c_str(), "EXIT") == 0)
        {
            std::cout << "Merci d'avoir utiliser ce programme" << std::endl;
            return (0);
        }
    }
    return (0);
}