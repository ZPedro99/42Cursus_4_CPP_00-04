/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:27:10 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 15:41:04 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called. Animal type set to Dog." << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called. Animal type set to Dog." << std::endl;
}

Dog&	Dog::operator=(const Dog& obj)
{
	if(this != &obj)
		type = obj.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark bark bark!!!" << std::endl;
}