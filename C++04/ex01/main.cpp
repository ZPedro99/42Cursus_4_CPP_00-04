/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:51:59 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 15:15:01 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	/* std::cout << "\033[1;34mInitializing tests...\033[0m" << std::endl;
	std::cout << "\033[1;33mTest 1: main given on subject.\033[0m" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: Creating and filling an array of \"Animal\" objects (subject).\033[0m" << std::endl; */
	{
		Animal *array[4];
		for(int i = 0; i < 2; i++)
			array[i] = new Dog();
		for(int i = 2; i < 4; i++)
			array[i] = new Cat();
		for(int i = 0; i < 2; i++)
		{
			std::cout << array[i]->getType();
			std::cout << " has its address set to " << array[i];
			Dog*	dogptr = (Dog *)array[i];
			std::cout << " and its brain address set to " << dogptr->getBrainDog() << std::endl;
		}
		for(int i = 2; i < 4; i++)
		{
			std::cout << array[i]->getType();
			std::cout << " has its address set to " << array[i];
			Cat*	catptr = (Cat *)array[i];
			std::cout << " and its brain address set to " << catptr->getBrainCat() << std::endl;
		}
		for(int i = 0; i < 4; i++)
			delete array[i];
	}
	return (0);
}