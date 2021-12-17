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
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
	std::cout << "////////////////////////////////////" << std::endl;
    {
        Animal* j = new Dog();
        Animal* i = new Cat();

        *i = *j;
        i->makeSound();
        std::cout << i->getType() << std::endl;
        j->makeSound();
        std::cout << j->getType() << std::endl;
        delete j;//should not create a leak
        delete i;
    }
	
	/*
    {
        const Animal *all[100];
	    int	i;

	    for(i = 0; i < 50; i++)
		    all[i] = new Dog();
	    for(i = 50; i < 100;i++)
		    all[i] = new Cat();
	    for(i = 0; i < 100; i++)
	    {
		    std::cout << "Animal number: " << i << std::endl;
		    all[i]->makeSound();
		    delete	all[i];
	    }
	    std::cout << "Second Test ---------------------------------------------------" << std::endl;
	    const	Dog *vDog = new Dog();
	    const	Cat *vCat = new Cat();
	    const	Dog cDog(*vDog);
	    const	Cat cCat(*vCat);
	    Dog fcDog;
	    Cat fcCat;
	
	    fcDog = cDog;
	    fcCat = cCat;
	    delete vCat;
	    delete vDog;
	    std::cout << "Troisieme Test --------------------------------------------------" << std::endl;
	    Dog test;
	    {
            std::cout << "///////////////////////////////////////" << std::endl;
		    Dog test2 = test;
            
	    }
        std::cout << "///////////////////////////////////////" << std::endl;
	    Dog pardon;
	    pardon = test;
    }*/
	/*
	{
		Animal	*i = new Animal();
		delete i;
		//impossible d'instancier une classe Animal.
	}
	*/
	return (0);
}