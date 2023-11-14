/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:22:31 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/14 12:41:47 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		//****Orthodox Canonical Form****//
		Dog();
		Dog(const Dog &obj);
		Dog&	operator=(const Dog& obj);
		~Dog();
		//*******************************//

		void	makeSound() const;
		Brain*	getBrainDog();
};


#endif