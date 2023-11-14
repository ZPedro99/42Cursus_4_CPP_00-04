/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:15:35 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 14:50:13 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor called. Animal type set to " << type << "." << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	std::cout << "Overload operator called." << std::endl;
	if(this != &obj)
		type = obj.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called." << std::endl;
}

/* void	Animal::makeSound() const
{
	std::cout << "Unknown type of animal." << std::endl;
} */

std::string	Animal::getType() const
{
	return(type);
}