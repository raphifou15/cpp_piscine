/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:07:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 10:07:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    {
        Animal  *Animals[10];

        for (int i = 0; i < 5; i++)
        {
            Animals[i] = new Dog();
            Animals[i]->makeSound();
            std::cout << i << std::endl;
        }
        for (int i = 5; i < 10; i++)
        {   
            Animals[i] = new Cat();
            Animals[i]->makeSound();
            std::cout << i << std::endl;
        }

        for (int i = 0 ; i < 10; i++)
        {
            delete Animals[i];
        }
    }
    std::cout << "/////////////////////////////////////////" << std::endl;
    {
        Dog* j = new Dog();
        Dog* j2 = new Dog();
        Cat* i = new Cat();
        Cat* i2 = new Cat();

        *i = *i2;
        *j = *j2;
        j->makeSound();
        i->makeSound();
        delete j;//should not create a leak
        delete j2;
        delete i;
        delete i2;
    }
    std::cout << "/////////////////////////////////////////" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    return (0);
}