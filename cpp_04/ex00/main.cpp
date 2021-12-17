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
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete i;
        delete j;
        delete meta;
    }
    /*
    {
        Animal Lala;
        std::cout << Lala.getType() << std::endl;
    }
    */
    
        std::cout << "///////////////////////////////////////////////" << std::endl;
    {
        const   WrongAnimal* cat = new  WrongCat();
        std::cout << cat->getType() << " " << std::endl;
        cat->makeSound();
        delete cat;
    }
    /*
    {
        Animal *j = new Dog();
        Animal *i = new Cat();
        Animal *z = i;
        i = j;
        i->makeSound();
        delete j;
        delete z;
    }
    
    {
        Animal *j = new Dog();
        Animal *i = new Cat();
        *i = *j;
        i->makeSound();
        std::cout << i->getType() << std::endl;
        delete j;
        delete i;
    }
    return (0);
    */
   /*
   {
   	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "------------------------------------" << std::endl;
	const WrongAnimal *Wcat = new WrongAnimal();
	const WrongAnimal *Vcat = new WrongCat();
	const WrongCat *UVcat = new WrongCat();

	std::cout << Wcat->getType() << " " << std::endl;
	std::cout << Vcat->getType() << " " << std::endl;
	Wcat->makeSound(); //will output the cat sound!
	Vcat->makeSound();
	std::cout << UVcat->getType() << " " << std::endl;
	UVcat->makeSound();
	delete UVcat;
	delete Wcat;
	delete Vcat;
	delete meta;
	delete j;
	delete i;
    }
    */   
	return (0);
}