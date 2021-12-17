/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:47:29 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/14 16:52:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H
class ICharacter;
# include "AMateria.hpp"

/*
Une interface, c’est comme un contrat.
Il est dit qu’une classe qui implémente l’interface accepte d’implémenter toutes les fonctions déclarées
(en tant que signatures seulement ; aucune définition de fonction) par cette interface.
La classe peut le faire de n’importe quelle manière qu’elle choisit,
et fournir n’importe quelle autre fonctionnalité, tant qu’elle implémente chacune des fonctions déclarées.
Une interface est utile lorsque vous voulez être capable d’utiliser certaines fonctionnalités
communes de classes autrement non liées- elles ne partagent aucun détail d’implémentation,
seulement les signatures de fonctions
*/

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif
