/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:30:30 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 17:09:26 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Dog.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		//****Orthodox Canonical Form****//
		Cat();
		Cat(const Cat &obj);
		Cat&	operator=(const Cat& obj);
		~Cat();
		//******************************//

		void	makeSound() const;
};

#endif