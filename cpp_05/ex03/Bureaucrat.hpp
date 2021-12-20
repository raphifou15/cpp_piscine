/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:28:42 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/18 19:28:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Please note that exception classes do not need to be in orthodox canonical form
// Every other class needs to be written in that way

// ranges from 1 (highest possible) to 150 (lowest possible).

//  which will be either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>
# include "Form.hpp"

//Les exceptions peuvent être de n'importe quel type (type de base du langage ou classe quelconque).
//Mais il est conseillé d'utiliser une classe dérivant de la classe standard std::exception définie dans le fichier d'en-tête standard <exception>.
//Cette classe dispose d'une fonction membre what() qui renvoie une description de l'exception.

/*
bien qu'on utilise un pointeur,
il n'y a pas de fuite de mémoire tout simplement parce qu'il n'y a pas d'allocation dynamique.
Ce serait même une grosse erreur de libérer ce pointeur avec delete [] car ce dernier pointe vers une zone de mémoire spéciale
(généralement en lecture seule) qui contient l'ensemble de chaînes de caractères littérales utilisées dans le programme.
Donc, à priori, utiliser des chaînes littérales est une bonne idée,
mais cela est néanmoins déconseillé car leur utilité est vite limitée du fait de l'impossibilité de formater les chaînes pour donner la valeur d'une variable par exemple.
Il y a fort à craindre que tôt ou tard un programmeur voudra effectuer cette opération et provoquera alors inconsciemment une fuite de mémoire
(car dans le bloc catch il n'y a aucun moyen de distinguer une chaîne littérale d'une chaîne allouée avec new []).
Si vous persistez à vouloir utiliser de simple chaînes de caractères au lieu d'une classe dérivant de std::exception,
utilisez au moins le type chaîne de caractères du C++ : std::string.
*/

/*
il est fortement recommandé de lever des exceptions par valeur.
En revanche, il vaut mieux les capturer par référence et non pas par valeur.
Tout d'abord cela permet d'éviter une recopie, mais aussi et surtout cela permet de conserver le polymorphisme.
*/

class   Form;

class Bureaucrat
{
    private:
       const std::string    _name;
       int                  _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat & copie);
        Bureaucrat  &operator=(const Bureaucrat & a);
        ~Bureaucrat(void);
        const std::string   getName(void) const;
        int                 getGrade(void) const;
        void                increment(void);
        void                decrement(void);
        void                signForm(Form &i);
        void                executeForm (Form const & form);
    class   GradeTooHighException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Too Hight");
        }
    };

    class   GradeTooLowException: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("Too Low");
        }
    };
};

std::ostream    &operator<<(std::ostream &ostream, const Bureaucrat &i);

#endif