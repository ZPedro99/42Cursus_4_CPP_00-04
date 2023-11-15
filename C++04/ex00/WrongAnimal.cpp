/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:02:16 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:51 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal type constructor called. WrongAnimal type set to " << type << "." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "Overload operator called." << std::endl;
	if(this != &obj)
		type = obj.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknown type of animal." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(type);
}