/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:06:52 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/30 17:26:07 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	private:
		std::string weapon;
	public:
		Weapon();
		~Weapon();
		const std::string	getType();
		void				setType(std::string type);
};

#endif