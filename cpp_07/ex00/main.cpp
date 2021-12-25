/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:41:55 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/23 15:41:57 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Les templates sont la base de la généricité en C++.
// Il s'agit en fait de modèles génériques de code qui permettent de créer automatiquement
// des fonctions (dans le cas de fonctions templates),
// ou des classes (classes templates) à partir d'un ou plusieurs paramètres.
 
// Le fait de fournir un paramètre à un modèle générique s'appelle la spécialisation.
// Elle aboutit en effet à la création d'un code spécialisé pour un type donné à partir d'un modèle générique.

// Pour cette raison on surnomme aussi les templates des types paramétrés (parameterized types en anglais).
// Ces modèles manipulent généralement un type abstrait qui est remplacé par un vrai type C++ au moment de la spécialisation.

// Ce type abstrait est fourni sous forme de paramètre template qui peut être un type C++,
// une valeur (entier, enum, pointeur…) ou même un autre template.

// La spécialisation d'un template est transparente et invisible.
// Elle est effectuée lors de la compilation, de manière interne au compilateur,
// en fonction des arguments donnés au template (il n'y a pas de code source généré quelque part).

// Par exemple, vous pouvez réaliser une fonction template renvoyant le plus grand de deux objets de même type
// pour peu que ce dernier possède un opérateur de comparaison operator >
// (la fonction standard std::max procède ainsi).
// Cette fonction template va accepter en argument le type des objets à comparer, appelé type T

#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}