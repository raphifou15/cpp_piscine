/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:10:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 10:10:39 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

/*
Il est nécessaire de rendre le destructeur d'une classe de base virtuel quand celle-ci est destinéeà être détruite polymorphiquement.
Généralement dès qu'un objet commence à être utilisé polymorphiquement
(c'est-à-dire utilisé en place d'un objet de la classe mère),
il est fréquent qu'il soit stocké et manipulé via un pointeur vers sa classe mère
*/
/*
Rendre un destructeur virtuel ou non ne se limite donc
pas à l'ajout du mot-clé virtual mais doit être l'aboutissement d'une réflexion menée sur l'utilisation de la classe.
Une classe qui n'est pas destinée à être dérivée n'a pas à avoir de destructeur virtuel.
*/
// Le mot-clé virtual permet de supplanter une fonction membre d'une classe parent depuis une classe dérivée,
// à condition qu'elle ait la même signature

class Animal
{
    public:
        ///////constructor destructor/////////////////
        Animal(void);
        Animal(const Animal &copie);
        Animal  &operator=(const Animal &a);
        virtual ~Animal(void);
        /////////////////////////////////////////////
        //function///////
        virtual void    makeSound(void) const;
        std::string     getType(void) const;
        //////////////////
    protected:
        std::string _type;
};

#endif