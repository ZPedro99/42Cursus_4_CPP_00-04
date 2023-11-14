/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:22:31 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 14:59:07 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		//****Orthodox Canonical Form****//
		Dog();
		Dog(const Dog &obj);
		Dog&	operator=(const Dog& obj);
		~Dog();
		//*******************************//

		void		makeSound() const;
};

#endif