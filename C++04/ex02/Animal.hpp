/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:52:59 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 14:45:02 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		//****Orthodox Canonical Form****//
		Animal();
		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);
		virtual ~Animal();
		//*******************************//
		Animal(std::string type);

		virtual void		makeSound() const = 0;
		std::string	getType() const;
};

#endif