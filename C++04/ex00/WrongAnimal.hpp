/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:47:02 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 16:21:43 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		//****Orthodox Canonical Form****//
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal&	operator=(const WrongAnimal& obj);
		virtual ~WrongAnimal();
		//*******************************//

		void		makeSound() const;
		std::string	getType() const;
};

#endif