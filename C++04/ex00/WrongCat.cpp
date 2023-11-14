/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:04:01 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:57 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor called. Animal type set to Cat." << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called. Animal type set to Cat." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if(this != &obj)
		type = obj.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow meow meow..." << std::endl;
}