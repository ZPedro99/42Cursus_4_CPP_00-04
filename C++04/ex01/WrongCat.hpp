/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:03:52 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/13 15:09:38 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//****Orthodox Canonical Form****//
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat&	operator=(const WrongCat& obj);
		~WrongCat();
		//******************************//

		void	makeSound() const;
};

#endif