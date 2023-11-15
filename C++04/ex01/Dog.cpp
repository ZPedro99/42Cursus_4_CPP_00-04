/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:27:10 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 14:18:29 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called. Animal type set to Dog." << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called. Animal type set to Dog." << std::endl;
	_brain = new Brain(*obj._brain);
}

Dog&	Dog::operator=(const Dog& obj)
{
	if(this != &obj)
	{
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}
	return(*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog default destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark bark bark!!!" << std::endl;
}

Brain*	Dog::getBrainDog()
{
	return(_brain);
}