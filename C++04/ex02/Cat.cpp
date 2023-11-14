/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:32:00 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 14:50:39 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called. Animal type set to Cat." << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called. Animal type set to Cat." << std::endl;
	_brain = new Brain(*obj._brain);
}

Cat&	Cat::operator=(const Cat& obj)
{
	if(this != &obj)
	{
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}
	return(*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat default destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow meow..." << std::endl;
}

Brain*	Cat::getBrainCat()
{
	return(_brain);
}