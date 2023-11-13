/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:51:59 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 15:50:48 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[1;34mInitializing tests...\033[0m" << std::endl;
	std::cout << "\033[1;33mTest 1: main given on subject.\033[0m" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: Creating objects for the WrongAnimal and WrongCat classes.\033[0m" << std::endl;
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		animal->makeSound();
		cat->makeSound();

		delete animal;
		delete cat;
	}
	return (0);
}