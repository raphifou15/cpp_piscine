/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 06:58:02 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/22 06:58:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <exception>
#include <cstdlib>

class Base
{
    public:
       virtual ~Base(){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base    *generate(void)
{
    std::srand(std::time(NULL));
    int nbr = (rand() % 3);
    Base *Lala;
    switch (nbr)
    {
        case 0:
            return (Lala = new A);
        case 1:
            return (Lala = new B);
        case 2:
            return (Lala = new C);
        default:
            std::cout << "Something bad happended" << std::endl;
            break;
    }
    return (NULL);
}

void    identify(Base &p)
{
    try
    {
        A &AA = dynamic_cast<A &>(p);
        static_cast<void>(AA);
        std::cout << "A par reference" << std::endl;
        return ;
    }
    catch (const std::exception& e)
    {
       // std::cout << "ce n'est pas a" << std::endl;
    }
    try
    {
        B &BB = dynamic_cast<B &>(p);
        static_cast<void>(BB);
        std::cout << "B par reference" << std::endl;
        return ;
    }
    catch (const std::exception& e)
    {
        //std::cout << "ce n'est pas b" << std::endl;
    }
    try
    {
        C &CC = dynamic_cast<C &>(p);
        static_cast<void>(CC);
        std::cout << "C par reference" << std::endl;
        return ;
    }
    catch (const std::exception& e)
    {
        //std::cout << "ce n'est pas c" << std::endl;
    }
}

void    identify(Base *p)
{
    A *AA = dynamic_cast<A*>(p);
    if (AA != NULL)
    {
        std::cout << "A par pointeur" << std::endl;
        return;
    }
    //std::cout << "ce n'est pas a" << std::endl;
    B *BB = dynamic_cast<B*>(p);
    if (BB != NULL)
    {
        std::cout << "B par pointeur" << std::endl;
        return;
    }
    //std::cout << "ce n'est pas b" << std::endl;
    C *CC = dynamic_cast<C*>(p);
    if (CC != NULL)
        std::cout << "C par pointeur" << std::endl;
    return;
}

int main(void)
{
    Base *Lala;
    Lala = generate();
    identify(Lala);
    Base &Reflala = *Lala;
    identify(Reflala);

    delete Lala;
}